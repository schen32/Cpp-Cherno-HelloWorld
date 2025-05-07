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

	void print() const
	{
		std::cout << m_firstName << " " << m_lastName << " ";
		std::cout << m_studentId << " " << m_gradeAverage << std::endl;
	}
};


int main()
{
	Student s1;
	Student s2("Dave", "Churchill", 1, 3.14);
	const Student s3("Jane", "Doe", 20220001, 99.9);

	s3.print();

	return 0;
}