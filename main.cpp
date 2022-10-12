#include <iostream>

class Time {

    int m_sec = 0;

public:

    Time(int time) : m_sec(time) {}


    friend int operator==(Time &o1, int sec);
    friend int operator>(Time& o1, int sec);
    friend int operator<(Time& o1, int sec);
    friend int operator!=(Time& o1, int sec);
    friend std::istream& operator >>(std::istream &in, Time &o);

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

std::istream& operator >>(std::istream &in, Time &o){
    in >> o.m_sec;

    return in;
}




int main() {




int sec = 1;
Time time(5);


Time h(sec);

std::cin >> h;



    return 0;
}
