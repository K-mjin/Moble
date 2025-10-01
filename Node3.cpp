#include <stdio.h>

typedef struct Node {
	int data;
	Node* Next;
	Node* Prev;
	Node() : data(0), Next(NULL), Prev(NULL)
	{
	};
};

int main(void) {
	Node* n1 = new Node();
	if (n1 == NULL) {
		return 0;
	}
	
	n1->data = 10;

	Node* n2 = new Node();
	if (n2 == NULL) {
		return 0;
	}

	n2->data = 20;

	Node* n3 = new Node();
	if (n3 == NULL) {
		return 0;
	}

	n3->data = 30;

	n1->Next = n2;
	n2->Next = n3;
	n3->Prev = n2;
	n2->Prev = n1;

	Node* current = n1;
	while (current != NULL) {
		printf("%d ", current->data);
		current = current->Next;
	}

	delete n1;
	delete n2;
	delete n3;

	return 0;
}