class Time{
private:
	int h,m,s;
public:
	void set_time(int, int, int);
	void get_time();
	void display();
	Time subtract(Time);
};

void Time::set_time(int a, int b, int c){
	h=a;
	m=b;
	s=c;
}


//create 3 functions

//1.  getTime function
//2. subtract fuctions
//3. display functions

void Time::get_time(){
	cout<<"Input Time(h m s)";
	cin>>h>>m>>s;
}

Time Time::subtract(Time t1) {
    Time t3;

    int sec1 = t1.h * 3600 + t1.m * 60 + t1.s;
    int sec2 = h * 3600 + m * 60 + s;  

    int diff = sec2 - sec1;

    if (diff < 0)
        diff += 24 * 3600;

    t3.h = diff / 3600;
    diff %= 3600;

    t3.m = diff / 60;
    t3.s = diff % 60;

    return t3;
}

void Time::display() {
    cout << setfill('0') << setw(2) << h << ":"
         << setfill('0') << setw(2) << m << ":"
         << setfill('0') << setw(2) << s << endl;
}