#include <cstdlib>
#include <iostream>
#include <ctime>
#include <typeinfo>

using namespace std;

template <class TheType>
bool isSorted(TheType*, int);
template <class TheType>
TheType Median(TheType*, int);

int main(int argc, char* argv[]) {

	if (argc < 3) {
		cout << "Too few arguments" << endl;
	}

	isSorted(argv[argc], argc);
	Median(argv[argc], argc);


	return 0;

}

template <class TheType> bool isSorted(TheType* argv, int argc) 
{
	int i = 0;
		for (i = 2; i < argc; i++) {
			if (argv[i] > argv[i+1]) {
				cout << "Items entered not sorted" << endl;
				return 0;
			}
		}	
	return true;
}

template <class TheType> TheType Median(TheType* argv, int argc) 
{
	
	double mid1;	
	
		if ((argc - 2) % 2 == 0) {
			mid1 = argv[(argc-2)/2] + argv[((argc-2) / 2) + 1];
		}
		else {
			mid1 = argv[argv(argc/2) + 1];
		}

	return mid1;	
}