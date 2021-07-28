#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>

using namespace std;

template <typename T>
void display(T*, int);
template <typename T>
T Min(T*,int);



template <typename T>
void display(T *arr, int size)
{
	cout << "Array: min = "<< Min(arr,size) <<endl;
	//cout << "Type: "<< typeid(arr).name()<<endl;
	for(int i =0; i < size; i++)
	{
		cout << i << ". " << arr[i]<<endl;
	}
	cout <<endl;
}

template <typename T>
T Min(T* arr,int size)
{
	T minimum = arr[0];
	
	for(int i = 1; i < size; i++)
	{
		if(arr[i] < minimum)
			minimum = arr[i];
	}
	
	return minimum;
}



int main()
{
	srand(time(0)); // The answer to everything
	
	
	int arr_int[5];
	char arr_char[6];
	for(int i =0; i < 5; i++)
	{
		arr_int[i] = rand()%10;
	}
	for(int i =0; i < 6; i++)
	{
		arr_char[i] = rand()%26 + 'A';
	}
	
	display(arr_int, 5);
	display(arr_char,6);
	
	return 0;
}