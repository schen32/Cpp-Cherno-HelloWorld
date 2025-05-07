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
	Student s1;
	Student s2("Dave", "Churchill", 1, 3.14);
	Student s3("Jane", "Doe", 20220001, 99.9);

	Course comp4300("COMP 4300");
	comp4300.addStudent(s1);
	comp4300.addStudent(s2);
	comp4300.addStudent(s3);
	comp4300.addStudent(Student("Billy", "Bob", 3, 50));

	comp4300.print();

	return 0;
}