/*consider an example of declaring examionation result.design three classes
student,exam and result . the student class has data members such as roll_no,
name,etc.Create a class exam by inheriting the student class the exam class
should have data membes representing the marks scored in six subjects. derive
a class result from the exakm class and it should have its own data memebers
such total mnarks.write an interactive to model ythis relationship what type
of relationship this model belongs to */
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#define MAX 20
class Student
{
	int Roll_no;
	char name[MAX];
	char branch[10];

	public :
		Student()
		{
		cout<<"-----STUDENT DETAILS------"<<endl;
		cout<<"PLEASE ENTER YOUR ROLL NUMBER : ";
		cin>>Roll_no;
		cout<<"PLEASE ENTER YOUR NAME : ";
		gets(name);
		cout<<"PLEASE ENTER YOUR BRANCH : ";
		cin>>branch;
		}
};
class Exam : public Student
{
	public :
		int eee,ds,dsa,dgs,oopm;

		Exam()
		{

		cout<<"-----MARKS SCORED IN DIFFERENT SUBJECTS----"<<endl;
		cout<<"MARKS SCORED IN EEE : ";
		cin>>eee;
		cout<<"MARKS SCORED IN DISCRETE : ";
		cin>>ds;
		cout<<"MARKS SCORED IN DATA STRUCTURE : ";
		cin>>dsa;
		cout<<"MARKS SCORED IN DIGITAL SYSTEM : ";
		cin>>dgs;
		cout<<"MARKS SCORED IN OOPM : ";
		cin>>oopm;
		}
};
class Result : public Exam
{

	public :
		int total_marks;
		Result()
		{
		total_marks = eee+ds+dsa+dgs+oopm;
		cout<<"\n  TOTAL MARKS OBTAINED : "<<total_marks<<endl;
		}
};
void main()
{
	clrscr();
	Result std;
	cout<<"THE ABOVE METHOD IS AN EXAMPLE OF MULTILEVEL INHERITANCE";
	getch();

}