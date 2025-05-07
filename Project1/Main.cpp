#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vec;
	vec.push_back(42);
	vec.push_back(10);
	vec.push_back(28);
	
	for (size_t i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i] << std::endl;
	}
	for (auto v : vec)
	{
		std::cout << v << std::endl;
	}

	return 0;
}