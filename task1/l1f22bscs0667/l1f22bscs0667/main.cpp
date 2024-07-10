#include "class.h"
#include<iostream>
using namespace std;

int main() {
	cout << endl << "-----Question 1-----" << endl;
	Rectangle r1;
	r1.area();
	r1.display();
 	Rectangle r2(7.0, 4.0);
	r2.area();
	r2.display();
	cout << "--------------------" << endl;
	system("pause");
	return 0;
}