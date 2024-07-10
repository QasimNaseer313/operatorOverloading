#include"Header.h"
#include<iostream>
using namespace std;

Time::Time(){
	hour = 2;
	minutes = 2;
}
Time::Time(int h, int m){
	hour = h;
	minutes = m;
}
void Time::display(){
	cout << "Time : " << hour << " hours , " << minutes << " minutes" << endl;
}
Time Time::operator+ (const Time& obj){
	Time n;
	n.hour = hour + obj.hour;
	n.minutes = minutes + obj.minutes;
	return Time(n.hour, n.minutes);
}