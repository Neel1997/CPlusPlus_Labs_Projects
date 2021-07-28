#ifndef LIST_H
#define LIST_H
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;

template <typename items> 
class List {
	private:
		struct Bernie {
			items data;
			Bernie *next;
		};
		
		Bernie *top;
	
	public:
		List();
		~List();
		void push(items);
		void pop();
		void display();
};

template <typename items> 
List<items>::List() {
	top = NULL;
}

template <typename items> 
List<items>::~List() {
	pop();
}

template <typename items>
void List<items>::push(items bringIn) {
	Bernie *nItem;
	nItem = new Bernie;
	nItem->data = bringIn;
	nItem->next = NULL;
	if (top == NULL) {
		top = nItem;
	}
	else {
		nItem->next = top;
		top = nItem;
	}
}

template <typename items>
void List<items>::pop() {
	Bernie *ptr;
	if (top != NULL) {
		ptr = top;
		top = top->next;
		free(ptr);
	}
}

template <typename items>
void List<items>::display() {
	Bernie *ptr;
	int i = 1;
	ptr = top;
	while (ptr != NULL) {
		cout << i << ". " << ptr->data << endl;
		ptr = ptr->next;
		i++;
	}
}

#endif