
#include <iostream>
using namespace std;

class Array
{
private:
	int size; // Size of array
	int length; // Store data
	int* items; // Set pointer

public:

	// First function is make constructor
	Array(int arrsize)
	{
		size = arrsize;
		length = 0;
		items = new int[arrsize];
	}

	// Then fill array
	void Fill()
	{
		int num_items;
		cout << "How many items you want to add? \n";
		cin >> num_items;

		if (num_items > size) {
			cout << "Sorry you cannot exceed the array size";
			return;
		}
		else {
			for (int i = 0; i < num_items; i++) {
				cout << "Num of Items" << i << endl;
				cin >> items[i];
				length++;
			}
		}
	}
};

int main()
{
	cout << "Hello this is first data strucutre by Array \n";
}