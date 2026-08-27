#include <iostream>
#include "starter.h"

using namespace std;

int main()
{
	//create a few starter objects
	//add some values to test out your values methods
	//print out all the values for each object to validate your code
	Starter_Object object1;

	object1.val1(67);
	object1.val2(41);

	cout<<"Object 1: " <<endl
	cout<<"Value 1: " << object1.val1() <<endl
	cout<<"Value 2: " << object1.val2() <<endl

	return 0;
}
