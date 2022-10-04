#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef struct NODE {
	char* pszData;

	struct NODE* prev;
	struct NODE* next;
}NODE;

NODE* g_pHead, *g_pTail;
int g_nSize;

void InitList(void) {
	g_pHead = malloc(sizeof(NODE));
	g_pTail = malloc(sizeof(NODE));
	g_nSize = 0;
}

void ReleaseList(void) {

}

void PrintList(void) {

}

int InsertAtHead(const char *pszData) {
	return 0;
}

int InsertAtTail(const char* pszData) {
	return 0;
}

NODE* FindNode(const char* pszData) {
	return NULL;
}

int DeleteNode(const char* pszData) {
	NODE* pNode = FindNode(pszData);

	return 0;
}

int GetSize(void) {
	return g_nSize;
}

int GetLength(void) {
	return GetSize();
}

int main(void) {

	return;
}