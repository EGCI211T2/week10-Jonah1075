#include <iostream>
#include <iomanip>

using namespace std;

#include "Time.h"

int main(){

    Time t1,t2,t3;
    t1.set_time(5,30,0);
    t2.set_time(6,45,0);
    t3 = t2.subtract(t1);

    t1.display();
    t2.display();
    t3.display();

    cout<<"What time was it?\n";
    t1.get_time();  

    cout<<"What time is it now?\n";
    t2.get_time(); 
    
    t3 = t2.subtract(t1);
    cout<<"Time diff is ";
    t3.display();

    return 0;
}