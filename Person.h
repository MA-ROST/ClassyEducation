#pragma once

#include <string>

class Person {
	std::string mName;
	std::string mEmail;
public:
	Person(std::string name, std::string email);
};

class Student : public Person {
	float mGpa;
public:
	Student(std::string name, std::string email, float gpa);
};

class Teacher : public Person{
	float mSalary;
public:
	Teacher(std::string name, std::string email, float salary);
};
