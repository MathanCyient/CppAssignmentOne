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
  
   void display()
   {  
      cout<<endl<<"Displaying the details of car"<<endl;
      cout<<endl<<" Customer is "<<customer<<endl;
	  cout<<endl<<" Release year is "<<releaseyear<<endl;
  
      if (speed > 0)
	   cout<<endl<<"speed is "<<speed<<"kmph"<<endl;
      else
	   cout<<endl<<"speed is "<<"0kmph"<<endl;
   }
  
  void accelerate()
   {
	  speed = speed+speedConstant;
	  cout<<endl<<"speed accelerated"<<endl;
	  display();
   }
  
  void brake()
   {
	  speed = speed-brakeConstant;
	  cout<<endl<<"Brake applied"<<endl;
	  display();
   }
};
