#include <stdio.h>

typedef struct Node {
	int data;
	Node* pNext;
	Node* pPrev;
	Node() : data(0), pNext(NULL), pPrev(NULL) 
	{
	};
}Node;

Node* CreateNode(int _data);	// ��带 �����ϴ� �Լ�

int Push_Back(Node*& pHead, int _data);		// ���������� ** ��� *& ���

int PrintList(Node* pHead);

Node* CreateNode(int _data) {
	Node* newNode = NULL;	// ���� ���� ����� �����Ͱ� ���� �ƹ��͵� ���� ��
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
	if (pHead == NULL) {	// ��忡 �ƹ��͵� ���� ���¶��
		pHead = newNode;
		return -1;
	}
	else {	// ��忡 ���� �ִٸ�
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
		printf("����� ���� [%d]\n", Current->data);
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
