#include <iostream>

void pp(const int& i)
{
	std::cout << &i << " " << i << " " << sizeof(i) << std::endl;
}

int main()
{
	int arr[10] = {};
	int* harr = new int[10];

	for (size_t i = 0; i < 10; i++)
	{
		pp(arr[i]);
	}
	for (size_t i = 0; i < 10; i++)
	{
		pp(harr[i]);
	}

	delete[] harr;
	return 0;
}