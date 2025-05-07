#include <iostream>
#include <vector>

class Student
{
	std::string m_firstName = "First";
	std::string m_lastName = "Last";
	int m_studentId = 0;
	float m_gradeAverage = 0;
public:

	Student() {}
	Student(std::string firstName, std::string lastName, int studentId, float gradeAverage)
		: m_firstName(firstName), m_lastName(lastName)
		, m_studentId(studentId), m_gradeAverage(gradeAverage)
	{}

	float getAverage() const
	{
		return m_gradeAverage;
	}
	int getID() const
	{
		return m_studentId;
	}
	std::string getFirst() const
	{
		return m_firstName;
	}
	std::string getLast() const
	{
		return m_lastName;
	}
};


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
	for (auto& v : vec)
	{
		std::cout << v << std::endl;
	}

	return 0;
}