#include "main.h"

int main()
{
	const std::vector<Student> students{ {"Maya", "maya@gmail.com", 4.2}, {"Neph", "neph@gmail.com", 3.5} };

	CourseSections sec1{
		{
			"COMP-3015 (228966) Programming 1",
			R"(This is the first course in a two-part introduction to object-oriented programming in the context of graphics and sound programming.
				Students will learn to design, write, compile, and debug procedural and object-oriented programs that make use of 3rd-party graphic and sound libraries.
				Assignments will pull from real-world game development problems with an emphasis on modern tooling and coding best practices.)"
		},
		{"Mina Mina", "mill@gmail.com", 2000.2}, students
	};
}