#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef struct USERDATA {
	char szName[64];
	char szPhone[64];
} USERDATA;

typedef struct NODE {
	USERDATA* pData;

	struct NODE* prev;
	struct NODE* next;
}NODE;

NODE* g_pHead, * g_pTail;
int g_nSize;

void InsertBefore(NODE* pDstNode, USERDATA* pParam);

void InitList(void) {
	g_pHead = (NODE*)malloc(sizeof(NODE));
	g_pTail = (NODE*)malloc(sizeof(NODE));

	g_nSize = 0;
	// 초기화
	memset(g_pHead, 0, sizeof(NODE));
	memset(g_pTail, 0, sizeof(NODE));

	g_pHead->next = g_pTail;
	g_pTail->prev = g_pHead;
}

void ReleaseList(void) {
	NODE* pTmp = g_pHead;
	while (pTmp != NULL) {
		NODE* pDelete = pTmp;
		pTmp = pTmp->next;

		printf("free(%p)\n", pDelete);

		free(pDelete->pData);
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
		printf("[%p] %p, %s, %s [%p]\n", pTmp->prev,pTmp, pTmp->pData->szName,
			pTmp->pData->szPhone, pTmp->next);
		pTmp = pTmp->next;
	}
}

// pParam : 호출자가 메모리를 동적 할당 + 값 설정까지 해서 전달
int InsertAtHead(USERDATA* pParam) {
	NODE* pNewNode = malloc(sizeof(NODE));
	memset(pNewNode, 0, sizeof(NODE));

	pNewNode->pData = pParam;

	pNewNode->next = g_pHead->next;
	pNewNode->prev = g_pHead;

	g_pHead->next = pNewNode;
	pNewNode->next->prev = pNewNode;

	g_nSize++;
	return g_nSize;
}

int InsertAtTail(USERDATA* pParam) {
	InsertBefore(g_pTail, pParam);

	return g_nSize;
}

NODE* FindNode(const char* pszName) {
	NODE* pTmp = g_pHead->next;
	while (pTmp != g_pTail) {
		if (strcmp(pTmp->pData->szName, pszName) == 0)
			return pTmp;

		pTmp = pTmp->next;
	}
	return NULL;
}

int DeleteNode(const char* pszName) {
	NODE* pNode = FindNode(pszName);

	pNode->prev->next = pNode->next;
	pNode->next->prev = pNode->prev;

	free(pNode->pData);
	free(pNode);
	printf("DeleteNode(): %p\n", pNode);

	g_nSize--;
	return 0;
}

void InsertBefore(NODE* pDstNode, USERDATA* pParam) {
	NODE* pPrev = pDstNode->prev;

	NODE* pNewNode = malloc(sizeof(NODE));
	memset(pNewNode, 0, sizeof(NODE));

	pNewNode->pData = pParam;

	pNewNode->next = pDstNode->prev;
	pNewNode->prev = pDstNode;

	pDstNode->prev = pNewNode;
	pPrev->next = pNewNode;

	g_nSize++;
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

int InsertAt(int idx, USERDATA* pParam) {
	int i = 0;
	NODE* pTmp = g_pHead->next;
	while (pTmp != g_pTail) {
		if (i == idx) {
			InsertBefore(pTmp, pParam);
			return i;
		}

		i++;
		pTmp = pTmp->next;
	}

	InsertAtTail(pParam);
	return i;
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
	
	USERDATA* pNewData = (USERDATA*)malloc(sizeof(USERDATA));
	memset(pNewData, 0, sizeof(USERDATA));
	strcpy_s(pNewData->szName, sizeof(pNewData->szName), "Hello");
	strcpy_s(pNewData->szPhone, sizeof(pNewData->szPhone), "010-1234-1234");
	InsertAtTail(pNewData);

	pNewData = (USERDATA*)malloc(sizeof(USERDATA));
	memset(pNewData, 0, sizeof(USERDATA));
	strcpy_s(pNewData->szName, sizeof(pNewData->szName), "World");
	strcpy_s(pNewData->szPhone, sizeof(pNewData->szPhone), "010-4567-8901");
	InsertAtTail(pNewData);

	PrintList();
	ReleaseList();
	return;
}