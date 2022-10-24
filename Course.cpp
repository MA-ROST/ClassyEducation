#include "Course.h"

Course::Course (string name, string description) : mName (name), mDescription (description)
{
}

CourseSections::CourseSections (Course course, Teacher teacher,
                                vector<Student> students): mCourse (course), mTeacher (teacher), mStudents (students)
{
}
