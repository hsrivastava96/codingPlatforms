#include<bits/stdc++.h>
using namespace std;

class SLL
{
	public:

		struct Node
		{
			int data;
			struct Node *next;
		};
		typedef struct Node node;

		node *head;

		SLL()
		{
			head = NULL;
		}

		void insertAtBegin(int data)
		{
			node *newNode;
			newNode = new node;
			newNode->data = data;
			newNode->next = NULL;

			if(this->head == NULL)
				this->head = newNode;
			else
			{
				newNode->next = this->head;
				this->head = newNode;
			}
		}

		void insertAtEnd(int data)
		{
			node *newNode, *temp;
			newNode = new node;
			newNode->data = data;
			newNode->next = NULL;

			temp = this->head;
			while(temp->next != NULL)
				temp = temp->next;
			temp->next = newNode;
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

		void deleteBegin()
		{
			node *temp;
			temp = this->head;
			this->head = this->head->next;
			delete temp;
		}

		void deletePos(int pos)
		{
			node *temp, *temp1;
			temp = this->head;
			int cPos = 1;
			while(cPos != pos-2)
			{
				temp = temp->next;
				cPos++;
			}
			temp1 = temp->next;
			temp->next = temp->next->next;
			delete temp1;
		}

		void deleteEnd()
		{
			node *temp, *temp1;
			temp = this->head;
			while(temp->next->next != NULL)
				temp = temp->next;
			temp1 = temp->next;
			temp->next = NULL;
			delete temp1;
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

		void printFromBack(node *temp)
		{
			if(temp->next == NULL)
				cout<<temp->data<<" ";
			else
			{
				printFromBack(temp->next);
				cout<<temp->data<<" ";
			}
		}

		void printBackwards()
		{
			node *temp;
			temp = this->head;

			printFromBack(temp);
			cout<<endl;
		}
};

int main()
{
	SLL obj;
	for(int i = 1; i <= 5; i++)
		obj.insertAtBegin(i);

	for(int i = 5; i >= 1; i--)
		obj.insertAtEnd(i);

	// obj.printForwards();
	// obj.printBackwards();

	// obj.insertAtPos(10, 6);

	obj.printForwards();
	// obj.printBackwards();

	obj.deleteBegin();
	obj.printForwards();

	obj.deletePos(3);
	obj.printForwards();

	obj.deleteEnd();
	obj.printForwards();

	obj.deleteComplete();
	obj.printForwards();
	return 0;
}