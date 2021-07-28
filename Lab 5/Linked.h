#ifndef LINKED_H
#define LINKED_H
#include <cstdlib>

class Linked {
	private:
		struct node {
			int data;
			node *next;
		};
		
		node *top;
		int size;
		
	public:
		Linked();
		~Linked();
		void display();
		int getSize();
		void push(int);
		void pop();
};


#endif