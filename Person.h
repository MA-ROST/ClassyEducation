#pragma once
#include "main.h"

class Person {
	std::string mName;
	string mEmail;
public:
	Person(string name, string email);
};

class Student : public Person {
	int mGpa;
public:
	Student(string name, string email, int gpa);
};

class Teacher : public Person{
	int mSalary;
public:
	Teacher(string name, string email, int salary);
};
