#include <stdio.h>

typedef struct Node {
	int data;
	Node* pNext;
	Node* pPrev;
	Node() : data(0), pNext(NULL), pPrev(NULL) 
	{
	};
}Node;

Node* CreateNode(int _data);	// 노드를 생성하는 함수

int Push_Back(Node*& pHead, int _data);		// 이중포인터 ** 대신 *& 사용

int PrintList(Node* pHead);

Node* CreateNode(int _data) {
	Node* newNode = NULL;	// 새로 만들 노드의 포인터가 아직 아무것도 없을 때
	newNode = new Node();

	if (newNode == NULL) {
		return NULL;
	}
	newNode->data = _data;

	return newNode;
}

int Push_Back(Node*& pHead, int _data) {
	Node* newNode = CreateNode(_data);

	if (newNode == NULL) {
		return -1;
	}
	if (pHead == NULL) {	// 노드에 아무것도 없는 상태라면
		pHead = newNode;
		return -1;
	}
	else {	// 노드에 무언가 있다면
		Node* Current = pHead;
		while (Current != NULL) {
			if (Current->pNext == NULL) {
				Current->pNext = newNode;
				newNode->pPrev = Current;
				return 0;
			}
			Current = Current->pNext;
		}
	}
	return 1;
}

int PrintList(Node* pHead) {
	if (pHead == NULL) {
		return -1;
	}

	Node* Current = pHead;

	while (Current != NULL) {
		printf("노드의 값은 [%d]\n", Current->data);
		Current = Current->pNext;
	}
	return 0;
}

int main(void) {
	Node* pHead = NULL;

	Push_Back(pHead, 10);
	Push_Back(pHead, 20);
	Push_Back(pHead, 30);

	PrintList(pHead);

	return 0;
}
