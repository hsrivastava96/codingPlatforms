#include<bits/stdc++.h>
using namespace std;

class DLL
{
public:
	struct node
	{
		int data;
		struct node *next, *prev;
	};
	typedef struct node node;

	node *head;

	DLL()
	{
		head = NULL;
	}

	void insertAtBegin(int data)
	{
		node *newNode;
		newNode = new node;
		newNode->data = data;
		newNode->next = NULL;
		newNode->prev = NULL;

		if(this->head == NULL)
			this->head = newNode;
		else
		{
			this->head->prev = newNode;
			newNode->next = this->head;
			this->head = newNode;
		}
	}

	void insertAtPos(int data, int pos)
	{
		node *newNode, *temp;
		newNode = new node;
		newNode->data = data;
		newNode->next = NULL;
		newNode->prev = NULL;

		temp = this->head;
		int cPos = 1;

		while(cPos != pos-1)
		{
			temp = temp->next;
			cPos++;
		}

		newNode->next = temp->next;
		newNode->prev = temp;
		temp->next->prev = newNode;
		temp->next = newNode;
	}

	void insertAtEnd(int data)
	{
		node *newNode, *temp;
		newNode = new node;
		newNode->data = data;
		newNode->next = NULL;
		newNode->prev = NULL;

		temp = this->head;
		while(temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
		newNode->prev = temp;
	}

	void deleteAtBegin()
	{
		node *temp;

		temp = this->head;

		this->head = this->head->next;
		this->head->prev = NULL;

		delete temp;
	}

	void deleteAtPos(int pos)
	{
		node *temp, *temp1;
		temp = this->head;

		int cPos = 1;

		while(cPos != pos)
		{
			temp = temp->next;
			cPos++;
		}

		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;

		delete temp;
	}

	void deleteAtEnd()
	{
		node *temp;

		temp = this->head;

		while(temp->next != NULL)
			temp = temp->next;

		temp->prev->next = NULL;

		delete temp;
	}

	void deleteComplete()
	{
		node *temp, *temp1;

		temp = this->head;

		while(temp != NULL)
		{
			temp1 = temp;
			temp = temp->next;
			delete temp1;
		}
		this->head = NULL;
	}

	void printForwards()
	{
		node *temp;
		temp = this->head;

		while(temp != NULL)
		{
			cout<<temp->data<<" ";
			temp = temp->next;
		}
		cout<<endl;
	}

	void printBackwards()
	{
		node *temp;
		temp = this->head;

		while(temp->next != NULL)
			temp = temp->next;

		while(temp != NULL)
		{
			cout<<temp->data<<" ";
			temp = temp->prev;
		}
		cout<<endl;
	}
};

int main()
{
	DLL obj;

	for(int i = 1; i <= 5; i++)
		obj.insertAtBegin(i);

	obj.printForwards();
	obj.printBackwards();

	for(int i = 5; i >= 1; i--)
		obj.insertAtEnd(i);

	obj.printForwards();
	obj.printBackwards();

	obj.insertAtPos(10, 6);

	obj.printForwards();
	obj.printBackwards();

	obj.deleteAtBegin();

	obj.printForwards();

	obj.deleteAtPos(7);

	obj.printForwards();

	obj.deleteAtEnd();

	obj.printForwards();

	obj.deleteComplete();

	obj.printForwards();
}