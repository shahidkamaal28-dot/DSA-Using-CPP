#include<iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;
	Node* prev;

	Node(int x) {
		data = x;
		next = NULL;
		prev = NULL;
	}
};

class DoublyLinkedList {
	Node* head;

public:
	DoublyLinkedList() {
		head = NULL;
	}
	bool isEmpty() {
		return head == NULL;
	}
	void addElementFront(int x) {
		Node* newNode = new Node(x);

		
	newNode->prev = NULL;

		newNode->next = head;

		if (isEmpty()) {

			head = newNode;
		}
		else {
			head->prev = newNode;
			head = newNode;
		}
	}
	void addElementBack(int y) {
		Node* newNode = new Node(y);

		if (isEmpty()) {
			head = newNode;
		}
		else {
			Node* temp = head;
			while (temp->next != NULL) {
				temp = temp->next;
			}
			temp->next = newNode;
			newNode->prev = temp;
		}
	}
	
	void deleteElementFront() {
		if (isEmpty()) {
			cout << "DLL is Empty!";
			return;
		}
		Node* temp = head;
		head = head->next;
		if (head != NULL) {
			head->prev = NULL;
		}
		delete temp;
	}
	void deleteElementBack() {
		if (isEmpty()) {
			cout << "DLL is Empty!";
			return;
		}

		Node* temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->prev->next = NULL;
		delete temp;
	}

	void addElementnthpos(int x, int pos) {
		Node* newnode = new Node(x);
		if (pos < 1) {
			cout << "invalide position";
			delete newnode;
			return;
		}
		else if (pos == 1) {
			if (head == NULL)
			{
				head = newnode;
			}
			else
			{
				head->prev = newnode;
				newnode->next = head;
				head = newnode;
			}
		}
		Node* temp = head;
		for(int i=1;)
	}
	void display() {
		if (isEmpty()) {
			cout << "List is Empty!";
			return;
		}
		Node* temp = head;
		while (temp != NULL) {
			cout << temp->data << " <-> ";
			temp = temp->next;
		}
	}
};

