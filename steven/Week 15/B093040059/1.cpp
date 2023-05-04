#include <iostream>
#include <vector>

using namespace std;

class Transportation{
	protected:
		int weight;
		int wheels;
	public:
		Transportation(){
			weight = 0;
			wheels = 0;
		}
		
		void setWeight(int w){
			weight = w;
		}
		void setWheels(int whe){
			wheels = whe;
		}
};

class Car:public Transportation{
	private:
		string plate;	
	public:
		Car():Transportation(){
			plate = "";

		}
		Car(int wei, int whe, string plat){
			weight = wei;
			wheels = whe;
			plate = plat;
		}
		void setPlate(string p){
			plate = p;
		}
		void show(){
			cout<<"License Plate Number : "<<plate<<" Weight : "<<weight<<" Wheels : "<<wheels<<endl;
		}
};

class Scooter:public Transportation{
	private:
		string plate;	
	public:
		Scooter():Transportation(){
			plate = "";

		}
		Scooter(int wei, int whe, string plat){
			weight = wei;
			wheels = whe;
			plate = plat;
		}
		void setPlate(string p){
			plate = p;
		}
		void show(){
			cout<<"License Plate Number : "<<plate<<" Weight : "<<weight<<" Wheels : "<<wheels<<endl;
		}
};

class Bike:public Transportation{
	private:
		string owner;
	public:
		Bike():Transportation(){
			owner = "";

		}
		Bike(int wei, int whe, string own){
			weight = wei;
			wheels = whe;
			owner = own;
		}
		void setOwner(string o){
			owner = o;
		}
		void show(){
			cout<<"Owner ID : "<<owner<<" Weight : "<<weight<<" Wheels : "<<wheels<<endl;
		}
};

int main(void){
	vector <Car> cars;
	vector <Scooter> scooters;
	vector <Bike> bikes;
	
	int choose;
	int weight;
	int wheels;
	string plate;
	bool run = true;
	while(run){
		cout<<"Enter type of Transportations(0: car, 1:scooter, 2:bike, 3:exit)"<<endl;
		cin>>choose;
		if(choose == 0){
			cout<<"Enter weight, wheels, and License Plate Number"<<endl;
			cin>> weight>>wheels>>plate;
			Car car(weight, wheels, plate);
			car.show();
			cars.push_back(car);

		}else if(choose == 1){
			cout<<"Enter weight, wheels, and License Plate Number"<<endl;
			cin>> weight>>wheels>>plate;
			Scooter scooter(weight, wheels, plate);
			scooter.show();
			scooters.push_back(scooter);

		}else if(choose ==2){
			cout<<"Enter weight, wheels, and Owner ID"<<endl;
			cin>> weight>>wheels>>plate;
			Bike bike(weight, wheels, plate);
			bike.show();
			bikes.push_back(bike);

		}else if(choose == 3){
			run = false;
		}else{
			cout<<"Input Error!"<<endl;
		}
			

	}
	cout<<"======CAR====="<<endl;
	for(int i=0; i<cars.size(); i++){
		cars[i].show();
	}

	cout<<"======SCOOTER====="<<endl;
	for(int i=0; i<scooters.size(); i++){
		scooters[i].show();
	}

	cout<<"======BIKE====="<<endl;
	for(int i=0; i<bikes.size(); i++){
		bikes[i].show();
	}
	return 0;
}
