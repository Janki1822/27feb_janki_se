/*Assum the test results of a batch of students are stored in three diffrent classes. Class Student are stoirng the roll number 
  Class Test stores the markobtained in the test. The class result can inherit the details of the marks obtained in the test and
  roll number of student.(Multilevel inheritance)*/

#include<iostream>
using namespace std;
class Student 
{
	public:
		int rollno; 
		Student() 
		{
			
			cout<<endl<<"The student roll no is:";
			cin>>rollno;
			
		}
};
class Test : public Student
{
	public:
		int mark1,mark2,totalmarks;
		Test()
		{
			
			cout<<endl<<"Maths mark is:";
			cin>>mark1;
			cout<<endl<<"Hindi subject mark is:";
			cin>>mark2;
			
			totalmarks=mark1+mark2;  // Sum of Two subject marks.
			cout<<endl<<"Total marks of two subject is:"<<totalmarks;
			
		}
};
class Result : public Test // Class result is derived from class student and class test.
{
	public:
		Result()
		{   
			cout<<endl<<"______________________________________";
	 		cout<<endl<<"The stundent rollno is:" <<rollno ;
	 		cout<<endl<<"The result is:"<<totalmarks;
	 		
		}
};
int main()
{
	Result r1; //Object of derived class result.
	return 0;
}
