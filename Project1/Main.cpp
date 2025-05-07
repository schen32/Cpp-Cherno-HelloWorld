#include <iostream>

void pp(const int& i)
{
	std::cout << &i << " " << i << " " << sizeof(i) << std::endl;
}

template <typename T>
class DynamicArray
{
	T* m_arr;
	size_t m_size;

public:
	DynamicArray(size_t size)
		: m_arr(new T[size]), m_size(size)
	{
		std::cout << "Array constructor" << std::endl;
	}

	~DynamicArray()
	{
		delete[] m_arr;
		std::cout << "Array deconstructor" << std::endl;
	}

	T get(size_t index) const
	{
		return m_arr[index];
	}

	void set(size_t index, T val)
	{
		m_arr[index] = val;
	}

	const T& operator [] (size_t index) const
	{
		return m_arr[index];
	}

	T& operator [] (size_t index)
	{
		return m_arr[index];
	}

	void print() const
	{
		for (size_t i = 0; i < m_size; i++)
		{
			std::cout << i << " " << m_arr[i] << std::endl;
		}
	}
};


int main()
{
	DynamicArray<float> myArray(10);

	myArray[3] = 3.14;
	myArray[2] = 2.78;

	myArray.print();

	return 0;
}