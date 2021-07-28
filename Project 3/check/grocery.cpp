#include <iostream>
#include <cstdlib>
#include "grocery.h"
using namespace std;

Grocery::Grocery(){
    size = 0;
    top = NULL;
    total = 0;

}

Grocery::~Grocery(){
	while(size > 0)
    {
		pop();
	}
}

int Grocery::getSize(){
    return size;
}

double Grocery::getTotal(){
    return total;
}

string Grocery::getName(){
    return name;
}
string Grocery::getTop(){
    return top->itemName;
}
double Grocery::getPrice(){
    return top->price;
}

void Grocery::setName(string list){
    name = list;
}

void Grocery::pop()
{
    if(top!=NULL)
    {
        node* ptr = top;
        if(ptr->next==NULL)
        {
            top = NULL;
            free(ptr);
        }
        else
        {
            top = top->next;
            free(ptr);
        }
        total = total - ptr->price;
        size--;
    }
}

void Grocery::push(string nam, double pric)
{
    node* nNode = new node;
    nNode->itemName = nam;
    nNode->price = pric;
    nNode->next = NULL;
    node *ptr;
    int temp;
    ptr = top;
    if(top==NULL)
    {
        top = nNode;
    }
    else if(nNode->price < top->price)
    {
        nNode->next = top;
        top = nNode;
    }
    else
    {
        while(ptr->next != NULL &&ptr->next-> price < nNode->price){
            ptr = ptr->next;
        }
        nNode->next = ptr->next;
        ptr->next = nNode;
    }
    //sort();
    total = total + pric;
    size++;
}

void Grocery::operator()(string itemName,double price){
    push(itemName,price);
}


ostream& operator << (ostream& os, Grocery& list)
{
    
    Grocery::node* ptr = list.top;
    int i = 1;
    int test = 0;
    if(ptr == NULL)
    {
        os << "EMPTY LIST" << endl;
        test = 1;
    }
    else{
        cout << "List: " << list.name << endl;
        while(ptr!=NULL)
        {
            if(test == 1) break;
            os << i << ". " << ptr->itemName << " - $" << ptr->price << endl;
            ptr = ptr->next;
            i++;
            
        }
    }
    cout << "Total = $" << list.total << endl;
    return os;
}

