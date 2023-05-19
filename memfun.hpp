#include <string>
#include <iostream>
#define speedConstant 10;
#define brakeConstant 10;


using namespace std;

class Car
{
private:
	int releaseyear;
	string customer;
	int speed;
  
 public:
	void initdata()
	{
		int rlseyear;
		string customername;
		int spd;
		cout<<"Enter the customer name"<<endl;
		cin>>customername;
		cout<<"Enter the Release year"<<endl;
		cin>>rlseyear;
		cout<<"Enter the speed"<<endl;
		cin>>spd;
		releaseyear=rlseyear;
		customer=customername;
		speed=spd;
	   }
	void displayspeed()
	{
		if (speed > 0)
			cout<<endl<<"speed is "<<speed<<"kmph"<<endl;
		else
			cout<<endl<<"speed is "<<"0kmph"<<endl;
	}
	void displaycar()
	{
		cout<<endl<<"Displaying the details of car"<<endl;
		cout<<endl<<" Customer is "<<customer<<endl;
		cout<<endl<<" Release year is "<<releaseyear<<endl;
	}
	void accelerate()
	{
		speed = speed+speedConstant;
		cout<<endl<<"speed accelerated"<<endl;
		displayspeed();
	}
	void brake()
	{
		speed = speed-brakeConstant;
		cout<<endl<<"Brake applied"<<endl;
		displayspeed();
	}
};
