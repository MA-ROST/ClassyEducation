#include "Person.h"

Person::Person (std::string name, std::string email):
	mName(name), mEmail(email)
{}

Student::Student(std::string name, std::string email, float gpa) :
	Person(std::move (name), std::move (email)), mGpa(gpa)
{

}

Teacher::Teacher (std::string name, std::string email, float salary):
	Person(std::move (name), std::move (email)), mSalary(salary)
{

}
