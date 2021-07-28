#include <cstdlib>
#include <iostream>
#include <ctime>
#include <typeinfo>
#include <stdbool.h>

using namespace std;

template<typename data>
data Median(data* argv[], data argc) {
		data mid1;	
	
		if ((argc - 2) % 2 == 0) {
			mid1 = argv[(argc-2)/2] + argv[((argc-2) / 2) + 1];
		}
		else {
			mid1 = argv[argv(argc/2) + 1];
		}

	return mid1;
}



int main(int argc, char* argv[]) {
	
	if (argc < 3) {
		cout << "Too few arguments" << endl;
	}
	
	Median(argv[argc], argc);
	
	cout << mid1;
	return 1;
}