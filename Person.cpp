#include "Person.h"

Person::Person (string name, string email):
	mName(name), mEmail(email)
{}

Student::Student(string name, string email, int gpa) : Person(name, email), mGpa(gpa)
{

}

Teacher::Teacher (string name, string email, int salary):Person(name, email), mSalary(salary)
{

}
