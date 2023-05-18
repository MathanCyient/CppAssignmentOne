#include "memfun.hpp"
 
 int main()
 { 
    Car first;
	first.initdata();
	first.display();
	
	first.accelerate();
	first.brake();
	
    return 0;
 }
