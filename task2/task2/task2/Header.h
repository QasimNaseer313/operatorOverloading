class Time{
private:
	int hour;
	int minutes;
public:
	Time();
	Time(int p1, int p2);
	void display();
	Time operator+ (const Time& obj);
};