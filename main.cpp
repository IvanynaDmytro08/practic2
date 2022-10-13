#include <iostream>

class Time {

    int m_sec = 0;

public:

    Time(int time) : m_sec(time) {}


    friend bool operator==(Time &o1, int sec);
    friend bool operator>(Time& o1, int sec);
    friend bool operator<(Time& o1, int sec);
    friend bool operator!=(Time& o1, int sec);
    friend std::istream& operator >>(std::istream &in, Time &o);
    friend std::ostream& operator << (std::ostream &out, Time &o);
};



bool operator==(Time& o1, int sec){
    return (o1.m_sec == sec);
}

bool operator>(Time& o1, int sec){
    return (o1.m_sec > sec);
}

bool operator<(Time& o1, int sec){
    return (o1.m_sec < sec);

}

bool operator!=(Time& o1, int sec){
    return (o1.m_sec != sec);
}

std::istream& operator >>(std::istream &in, Time &o){
    in >> o.m_sec;

    return in;
}

std::ostream& operator << (std::ostream &out, Time &o){
    out << o.m_sec  << std::endl;
    return out;
}


int main() {



    int sec = 1;
Time time(5);


    if (time > sec)
        std::cout << "time > sec" << std::endl;
    else if (time < sec)
        std::cout << "time < sec" << std::endl;
    else if (time != sec)
        std::cout << "time != sec" << std::endl;
    else
        std::cout << "time == sec" << std::endl;


Time h(sec);

std::cout << "Input number" << std::endl;

std::cin >> h;

std::cout << "Show your number - " <<  h << std::endl;


    return 0;
}
