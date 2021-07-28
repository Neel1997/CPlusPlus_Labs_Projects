#include <cstdlib>
#include <iostream>
#include "grocery.h"
#include <iomanip>

using namespace std;

Grocery::Grocery() {
	size = 0;
	total = 0;
	newItem.price = 0;
	newItem.name = ' ';
	top = NULL;
}

Grocery::~Grocery() {
	while (size > 0) {
		pop();
	}
}

int Grocery::getSize() {
	return size;
}

string Grocery::nameofList() {
	return list;
}

string Grocery::nameofItem() {
	return top->name;
}

double Grocery::priceofItem() {
	return top->price;
}

void Grocery::push(string itemName, double itemPrice) {
	item *nItem;
	item *ptr;
	nItem = new item;
	nItem->name = itemName;
	nItem->price = itemPrice;
	nItem->next = NULL;
	if (top == NULL) {
		top = nItem;
	}
	else if (nItem->price < top->price) {
		nItem->next = top;
		top = nItem;
	}
	else {
		item *ptr;
		ptr = top;
		while (ptr->next != NULL && ptr->next->price < nItem->price) {
			ptr = ptr->next;
		}
		nItem->next = ptr->next;
		ptr->next = nItem;
	}
	total = total + itemPrice;
	size++;
}

void Grocery::pop() {
	item *ptr;
	if (top != NULL) {
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
	total = total - ptr->price;
}

void Grocery::operator()(string itemName, double itemPrice) {
	push(itemName, itemPrice);
}

ostream& operator<< (ostream& os, Grocery& item) {
	item.display(os);
	return os;
}

void Grocery::display(ostream& os) {
	item *ptr;
	ptr = top;
	int i = 1;
	
	while (ptr != NULL) {
		os << fixed << setprecision(2);
		os << i << ". " << ptr->name << " - $" << ptr->price << endl;
		ptr = ptr->next;
		i++;
	}
	os << "Total: $" << total << endl;
}
