#include"class.h"
#include<iostream>
using namespace std;

Rectangle::Rectangle(){
	length = 0;
	width = 0; 
}
Rectangle::Rectangle(float l, float w){
	length = l;
	width = w;
}
void Rectangle::area(){
	Area = length*width;
}

void Rectangle::display(){
	cout << "Rectangle width length : " << length;
	cout << ", width :" << width << endl;
	cout << "Area :" << Area<<endl<<endl;
}
