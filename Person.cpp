#include "Person.h"

Person::Person (string name, string email):
	mName(name), mEmail(email)
{}

Student::Student(string name, string email, float gpa) : Person(name, email), mGpa(gpa)
{

}

Teacher::Teacher (string name, string email, float salary):Person(name, email), mSalary(salary)
{

}
