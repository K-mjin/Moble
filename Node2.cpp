#include <stdio.h>

typedef struct Node {
	int data;
	Node* pNext;
	Node* pPrev;
	Node() : data(0), pNext(NULL), pPrev(NULL)
	{
	};
}Ndoe;

int main(void) {
	Node* first = new Node();
	if (first == NULL) {
		return 0;
	}

	first->data = 10;

	Node* second = new Node();
	if (second == NULL) {
		return 0;
	}

	second->data = 20;

	first->pNext = second;
	second->pPrev = first;

	printf("첫 번째 노드 : %d\n", first->data);
	printf("두 번째 노드 : %d\n", second->data);
	printf("첫 번째->next->data = %d\n", first->pNext->data);
	printf("두 번째->prev->data = %d\n", second->pPrev->data);

	delete first;
	delete second;

	return 0;
}