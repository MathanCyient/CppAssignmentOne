#include "memfun.hpp"
#define acctime 5;
#define brktime 5;
 
 int main()
 { 
 string select;
 int counta=acctime;
 int countb=brktime;
 do{
	 Car car1;
	 car1.initdata();
	 car1.display();
	 while(counta!=0)
	 {
		 car1.accelerate();
		 counta = counta-1;
	 }
	 while(countb!=0)
	 {
		 car1.brake();
		 countb =countb-1;
	 }
	 cout<<"Do you want to continue y/n?"<<endl;
	 cin>>select;
 }while(select!="n");
	 return 0;
 }
