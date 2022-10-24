#include "Course.h"

Course::Course (std::string name, std::string description) : mName (name), mDescription (description)
{
}

CourseSections::CourseSections (Course course, Teacher teacher,
	std::vector<Student> students):
	mCourse (course), mTeacher (teacher), mStudents (students)
{
}
