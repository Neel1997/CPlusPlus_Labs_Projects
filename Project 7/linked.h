#ifndef LINKED_H
#define LINKED_H
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
		void bubbleSort();
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

template <typename items>
void List<items>::bubbleSort() {
	bool swap_flag;
	items temp;
	int z = 0;
	Bernie *ptr;
	Bernie *ptr2;
	
	ptr2 = top;
	
	while (ptr2 != NULL) {
		z++;
		ptr2 = ptr2->next;
	}
	
	ptr = top;
	
	do {
		swap_flag = false;
		for (int i = 0; i < z; i++) {
			if (ptr->next != NULL) {
				if (ptr->data > ptr->next->data) {
					temp = ptr->data;
					ptr->data = ptr->next->data;
					ptr->next->data = temp;
					swap_flag = true;
				}			
			ptr = ptr->next;
			}
		}
		ptr = top;
	} while (swap_flag);
}

#endif