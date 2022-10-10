#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef struct NODE {
	char szData[64];

	struct NODE* prev;
	struct NODE* next;
}NODE;

NODE* g_pHead, *g_pTail;
int g_nSize;

void InitList(void) {
	g_pHead = (NODE*)malloc(sizeof(NODE));
	g_pTail = (NODE*)malloc(sizeof(NODE));

	g_nSize = 0;
	// ÃÊ±âÈ­
	memset(g_pHead, 0, sizeof(NODE));
	memset(g_pTail, 0, sizeof(NODE));

	strcpy_s(g_pHead->szData, sizeof(g_pHead->szData), "DUMMY HEAD");
	strcpy_s(g_pTail->szData, sizeof(g_pTail->szData), "DUMMY TAIL");

	g_pHead->next = g_pTail;
	g_pTail->prev = g_pHead;
}

void ReleaseList(void) {
	NODE* pTmp = g_pHead;
	while (pTmp != NULL) {
		NODE* pDelete = pTmp;
		pTmp = pTmp->next;

		printf("free(%p)\n", pDelete);
		free(pDelete);
	}

	g_pHead = NULL;
	g_pTail = NULL;
	g_nSize = 0;

	puts("ReleaseList()");
}

void PrintList(void) {
	printf("PrintList() : g_nSize : %d, g_pHead[%p], g_Tail[%p]\n", g_nSize, g_pHead, g_pTail);
	NODE* pTmp = g_pHead;
	while (pTmp != NULL) {
		printf("[%p] %s [%p]\n", pTmp->prev, pTmp->szData, pTmp->next);
		pTmp = pTmp->next;
	}
}

int InsertAtHead(const char *pszData) {
	NODE* pNewNode = malloc(sizeof(NODE));
	memset(pNewNode, 0, sizeof(NODE));

	strcpy_s(pNewNode->szData, sizeof(pNewNode->szData), pszData);

	pNewNode->next = g_pHead->next;
	pNewNode->prev = g_pHead;

	g_pHead->next = pNewNode;
	pNewNode->next->prev = pNewNode;

	g_nSize++;
	return g_nSize;
}

int InsertAtTail(const char* pszData) {
	NODE* pNewNode = malloc(sizeof(NODE));
	memset(pNewNode, 0, sizeof(NODE));

	strcpy_s(pNewNode->szData, sizeof(pNewNode->szData), pszData);

	pNewNode->next = g_pTail;
	pNewNode->prev = g_pTail->prev;

	g_pTail->prev = pNewNode;
	pNewNode->prev->next  = pNewNode;

	g_nSize++;
	return g_nSize;
}

NODE* FindNode(const char* pszData) {
	NODE* pTmp = g_pHead->next;
	while (pTmp != g_pTail) {
		if (strcmp(pTmp->szData, pszData) == 0)
			return pTmp;

		pTmp = pTmp->next;
	}
	return NULL;
}

int DeleteNode(const char* pszData) {
	NODE* pNode = FindNode(pszData);

	pNode->prev->next = pNode->next;
	pNode->next->prev = pNode->prev;

	free(pNode);
	printf("DeleteNode(): %p\n", pNode);

	g_nSize--;
	return 0;
}

int GetSize(void) {
	return g_nSize;
}

int GetLength(void) {
	return GetSize();
}

int IsEmpty(void) {
	return GetSize();
}

int InsertAt(int idx, const char* pszData) {
	NODE* pTmp = g_pHead->next;
	int count = 0;
	while (pTmp != NULL) {
		if (count == idx) {
			NODE* pNewNode = malloc(sizeof(NODE));
			memset(pNewNode, 0, sizeof(NODE));

			strcpy_s(pNewNode->szData, sizeof(pNewNode->szData), pszData);

			pNewNode->next = pTmp;
			pNewNode->prev = pTmp->prev;

			pTmp->prev = pNewNode;
			pNewNode->prev->next = pNewNode;

			g_nSize++;

			return 1;
		}

		count++;
		pTmp = pTmp->next;
	}

	return 0;
}

NODE* GetAt(int idx) {
	NODE* pTmp = g_pHead->next;
	int count = 0;
	while (pTmp != NULL) {
		if (count == idx)
			return pTmp;

		count++;
		pTmp = pTmp->next;
	}
	return NULL;
}

int main(void) {
	InitList();

	InsertAtHead("TEST01");
	InsertAtHead("TEST02");
	InsertAtHead("TEST03");

	DeleteNode("TEST01");
	DeleteNode("TEST02");
	DeleteNode("TEST03");

	InsertAtHead("TEST01");
	InsertAtHead("TEST02");
	InsertAtHead("TEST03");

	InsertAt(0, "INDEX[0]INSERT");
	
	PrintList();

	printf("GetAt(1)[p] : %p, GetAt(1)[szData] : %s\n", GetAt(1), GetAt(1)->szData);

	ReleaseList();
	return;
}