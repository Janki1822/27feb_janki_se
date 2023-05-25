/*Creat a class person having member name and age . Derived a class student having member percentage. Derive another class
  teacher having member salary. Write necessary member function to initialize, read and write data. Write also Main function.
  (multiple inheritance) */  

#include<iostream>
using namespace std;
class Person
{
	public:
		Person() 
			{
				cout<<endl<<"Janki"; //Print data of having person name.
				cout<<endl<<"23"; // Having person age.
			}
};
class Student // Define class student percentage.
{
	public:
	Student() // output of class student
	{
		cout<<endl<<"82.46%"; // Print the Student percentage.
	}
};
class Teacher : public Person, public Student // Deriver class and dispaly all data.
{
	public:
		Teacher()
		{
			cout<<endl<<"Teacher's salary is: 25000"; // Print data of teacher's salary.
		}
};

int main()
{
	Teacher ter1; // Make last class object and derived all class data.
	return 0;

}
