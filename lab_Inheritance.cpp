#include<iostream>
#include"person.h"
#include"student.h"
#include"faculty.h"
#include"graduate_student.h"
#include"under_graduate_student.h"
using namespace std;
int main()
{
	{
	person p("usman","amjad",18);
	p.print_information();
	cout<<endl;
	student s("Ted","Thompson",18,3.6);
	s.print_student();
	cout<<endl;
	faculty f("Dilawar","Shabbir",14,2,"0023");
	f.print_faculty();
	cout<<endl;
	under_graduate ug("Ted","Thompson",22,3.91,"The Event Locator");
	graduate g("Arnold","Gates",25,3.01,"Distributed Algorithms");

	ug.print_undergraduate_student();
	g.print_graduate_student();
	}
	system("PAUSE");

}