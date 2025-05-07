#include <iostream>
#include <vector>
#include <fstream>

class Student
{
	std::string m_firstName = "First";
	std::string m_lastName = "Last";
	int m_studentId = 0;
	float m_gradeAverage = 0;

public:
	Student() {}
	Student(const std::string& firstName, const std::string& lastName, int studentId, float gradeAverage)
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
	const std::string& getFirst() const
	{
		return m_firstName;
	}
	const std::string& getLast() const
	{
		return m_lastName;
	}

	void print() const
	{
		std::cout << m_firstName << " " << m_lastName << " ";
		std::cout << m_studentId << " " << m_gradeAverage << std::endl;
	}
};

class Course
{
	std::string m_name = "Course";
	std::vector<Student> m_students;

public:
	Course() {}
	Course(const std::string& name)
		: m_name(name)
	{}

	void addStudent(const Student& s)
	{
		m_students.push_back(s);
	}

	const std::vector<Student>& getStudents() const
	{
		return m_students;
	}

	void loadFromFile(const std::string& filename)
	{
		std::ifstream fin(filename);
		std::string first, last;
		int id;
		float avg;

		while (fin >> first)
		{
			fin >> last >> id >> avg;
			addStudent(Student(first, last, id, avg));
		}
	}

	void print() const
	{
		for (const auto& s : m_students)
		{
			s.print();
		}
	}
};


int main()
{

	Course c("COMP 4300");
	c.loadFromFile("students.txt");
	c.print();

	return 0;
}