#include <cstdlib>
#include <iostream>
#include "Linked.h"

using namespace std;

Linked::Linked() {
	size = 0;
	top = NULL;
}

Linked::~Linked() {
	while (size > 0) {
		pop();
	}
	display();
}

void Linked::display() {
	node *ptr;
	ptr = top;
	int num = 1;
	if (top == NULL) {
		cout << "EMPTY LIST" << endl;
	}
	while (ptr != NULL) {
		cout << num << ". " << ptr->data << endl;
		ptr = ptr->next;
		num++;
	}
	cout << endl;
}

int Linked::getSize() {
	return size;
}

void Linked::push(int dat) {
	node *nNode;
	nNode = new node;
	nNode->data = dat;
	nNode->next = NULL;
	if (top == NULL) {
		top = nNode;
	}
	else {
		nNode->next = top;
		top = nNode;
	}
	size++;
}

void Linked::pop() {
	if (top != NULL) {
		node *ptr;
		ptr = top;
		
		if (ptr->next == NULL) {
			top = NULL;
			free(ptr);
		}
		else {
			top = top->next;
			free(ptr);
		}
		size--;
	}
}