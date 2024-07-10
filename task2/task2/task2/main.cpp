#include"Header.h"
#include<iostream>
using namespace std;

int main() {
	cout << endl << "-----Question 2-----" << endl;
	Time t1;
	t1.display();
	Time t2(3, 45);
	t2.display();
	Time sum = t1 + t2;
	cout << "Sum of Times: ";
	sum.display();
	cout << "--------------------" << endl;
	system("pause");
	return 0;
}