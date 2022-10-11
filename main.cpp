#include <iostream>

class Time {

    int m_sec = 0;

public:

    Time(int time) : m_sec(time) {}


    friend int operator==(Time &o1, int sec);
    friend int operator>(Time& o1, int sec);
    friend int operator<(Time& o1, int sec);
    friend int operator!=(Time& o1, int sec);
};



int operator==(Time& o1, int sec){

    return (o1.m_sec == sec);
}

int operator>(Time& o1, int sec){

    return (o1.m_sec > sec);
}

int operator<(Time& o1, int sec){

    return (o1.m_sec < sec);

}

int operator!=(Time& o1, int sec){
    return (o1.m_sec != sec);
}


int main() {

int sec = 1;
Time time(5);




    return 0;
}
