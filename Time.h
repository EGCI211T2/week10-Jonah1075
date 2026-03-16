struct Time{
	int h,m,s;
};


//create 3 functions

//1.  getTime function
//2. subtract fuctions
//3. display functions

void getTime(struct Time &t){
	cout<<"Input Time(h m s)";
	cin>>t.h>>t.m>>t.s;

}

struct Time subtract (struct Time t2, struct Time t1){
		struct Time t3;

	int sec1 = t1.h*3600 + t1.m*60 + t1.s;
	int sec2 = t2.h*3600 + t2.m*60 + t2.s;

	int diff = sec2 - sec1;

	if(diff < 0)
		diff += 24*3600;

	t3.h = diff / 3600;
	diff %= 3600;

	t3.m = diff / 60;
	t3.s = diff % 60;

		return t3;
}

void display(struct Time t3){
cout<<setfill('0')<<setw(2)<<t3.h<<":";
cout<<setfill('0')<<setw(2)<<t3.m<<":";
cout<<setfill('0')<<setw(2)<<t3.s<<":";

}