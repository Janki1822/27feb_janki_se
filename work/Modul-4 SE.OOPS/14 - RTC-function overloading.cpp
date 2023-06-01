#include<iostream>
using namespace std;
class overloading
{
	public:
		int Rectangle(int w, int l)
		{
			return w*l;
		}
		int Triangle(int b, int h)
		{
			return (b*h)/2;
		}
		int Circle(int r, float pie = 3.14)
		{
			return (float) (pie*r*r);
		}
};
int main()
{
	overloading over;
	cout<<endl<<"Rectangle area is:"<<over.Rectangle(30,12);
	cout<<endl<<"Triangle area is:"<<over.Triangle(30,12);
	cout<<endl<<"Circle area is:"<<over.Circle(3);
}
