#include "LinkedList.h"

LinkedList::LinkedList(){
	head = NULL;
}

void LinkedList::Insert(int data, int x){
	Node *temp1 = new Node();
	temp1->data = data;
	temp1->next = NULL;
	if (x == 1)
	{
		temp1->next = head;
		head = temp1;
		return;
	}
	Node *temp2 = head;
	for (int i = 0; i < x - 2; i++){
		temp2 = temp2->next;
	}
	temp1->next = temp2->next;
	temp2->next = temp1;
}
void LinkedList::Print()
{
	Node* temp = head;
	while (temp != NULL)
	{
		printf(" %d", temp->data);
		temp = temp->next;
	}
	printf("\n");
}