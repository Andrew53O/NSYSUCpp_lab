#include <iostream>
#include <cstdlib>
#define PI 3.14

using namespace std;

class Circle{
	protected:
		double radius;
	public:
		
		Circle();
		void setRadius(double);
		double getRadius();
		double area();
};


class Cylinder : public Circle{
	protected:
		double height;
	public:
		Cylinder(double);
		void setHeight(double h){
			height = h;
			return;
		}
		double getVolume();
};


int main(void){
	double r, h;
	cout<<"Type the radius:";
	cin>>r;
	Cylinder c(r);
	cout<<"r = "<<c.getRadius()<<endl;
	cout<<"area = "<<c.area()<<endl;
	cout<<"Type the height:";
	cin>>h;
	c.setHeight(h);
	cout<<"r = "<<c.getRadius()<<endl;
	cout<<"volume = "<<c.getVolume()<<endl;
	return 0;
}

Circle::Circle(){
	return;
}

void Circle::setRadius(double R){
	radius = R;
	return;
}


double Circle::getRadius(){
	return radius;
}

double Circle::area(){
	return (PI*radius*radius);
}


Cylinder::Cylinder(double R){
	setRadius(R);
	return;
}

double Cylinder::getVolume(){
	return area()*height;
}
