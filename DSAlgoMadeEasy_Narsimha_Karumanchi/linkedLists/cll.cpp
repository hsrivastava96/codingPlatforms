#include<bits/stdc++.h>
using namespace std;

class CLL
{
public:
	
	struct node
	{
		int data;
		struct node *next;
	};
	typedef struct node node;

	node *head;

	CLL()
	{
		head = NULL;
	}

	void insertAtBegin(int data)
	{
		node *newNode, *temp;
		newNode = new node;
		newNode->data = data;
		newNode->next = NULL;

		if(this->head == NULL)
		{
			newNode->next = newNode;
			this->head = newNode;
		}
		else
		{
			temp = this->head;
			while(temp->next != this->head)
				temp = temp->next;
			newNode->next = this->head;
			this->head = newNode;
			temp->next = this->head;
		}
	}

	void insertAtPos(int data, int pos)
	{
		node *newNode, *temp;
		newNode = new node;
		newNode->data = data;
		newNode->next = NULL;

		temp = this->head;
		int cPos = 1;

		while(cPos != pos-1)
		{
			temp = temp->next;
			cPos++;
		}

		newNode->next = temp->next;
		temp->next = newNode;
	}

	void insertAtEnd(int data)
	{
		node *newNode, *temp;
		newNode = new node;
		newNode->data = data;
		newNode->next = this->head;

		temp = this->head;
		while(temp->next != this->head)
			temp = temp->next;

		temp->next = newNode;
	}
	
	void deleteAtBegin()
	{
		node *temp, *temp1;
		temp1 = this->head;
		temp = this->head;

		while(temp->next != this->head)
			temp = temp->next;

		this->head = this->head->next;
		temp->next = this->head;

		delete temp1;
	}

	void deleteAtPos(int pos)
	{
		node *temp, *temp1;
		temp = this->head;

		int cPos = 1;
		while(cPos != pos - 1)
		{
			temp = temp->next;
			cPos++;
		}

		temp1 = temp->next;
		temp->next = temp->next->next;

		delete temp1;
	}

	void deleteAtEnd()
	{
		node *temp, *temp1;

		temp = this->head;

		while(temp->next->next != this->head)
			temp = temp->next;

		temp1 = temp->next;
		temp->next = this->head;
		delete temp1;
	}

	void deleteComplete()
	{
		node *temp, *temp1;
		temp = this->head;

		while(temp->next != this->head)
		{
			temp1 = temp;
			temp = temp->next;
			delete temp1;
		}
		delete temp;		
		this->head = NULL;

	}

	void printForwards()
	{
		node *temp;
		temp = this->head;

		if(this->head == NULL)
			cout<<" "<<endl;
		else
		{
			while(temp->next != this->head)
			{
				cout<<temp->data<<" ";
				temp = temp->next;
			}
			cout<<temp->data<<endl;
		}
	}

	void printFromBack(node *temp)
	{
		if(temp->next != this->head)
		{
			printFromBack(temp->next);
			cout<<temp->data<<" ";
		}
		else
			cout<<temp->data<<" ";
	}

	void printBackwards()
	{
		node *temp;
		temp = this->head;

		if(this->head != NULL)
			printFromBack(temp);
		cout<<endl;
	}
};

int main()
{
	CLL obj;

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
	obj.printBackwards();

	obj.deleteAtPos(7);

	obj.printForwards();
	obj.printBackwards();

	obj.deleteAtEnd();

	obj.printForwards();
	obj.printBackwards();

	obj.deleteComplete();

	obj.printForwards();
	obj.printBackwards();

	return 0;
};