#include <stdio.h>
#include <string.h>

typedef struct {
	char szData[64];
	struct NODE* next;

}NODE;

NODE g_head = { 0 };

int IsEmpty() {
	if (g_head.next == NULL)
		return 1;

	return 0;
}

int InsertAtHead(char* pszData) {
	NODE* pNode = (NODE*)malloc(sizeof(NODE));
	memset(pNode, 0, sizeof(NODE));
	strcpy_s(pNode->szData, sizeof(pNode->szData), pszData);

	if (IsEmpty())
		g_head.next = pNode;
	else {
		pNode->next = g_head.next;
		g_head.next = pNode;
	}
	
	return 1;
}

int InsertAtTail(char* pszData) {
	NODE* pTmp = &g_head;
	while (pTmp->next != 0)
		pTmp = pTmp->next;

	NODE* pNode = (NODE*)malloc(sizeof(NODE));
	memset(pNode, 0, sizeof(NODE));
	strcpy_s(pNode->szData, sizeof(pNode->szData), pszData);

	pTmp->next = pNode;
}

void DeleteData() {
	
}

int main(void) {
	//테스트 코드
	InsertAtHead("TEST01");
	InsertAtHead("TEST02");
	InsertAtHead("TEST03");

	return 0;
}