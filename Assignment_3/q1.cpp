#include<iostream>
using namespace std;

class Time{
    private:
    int h;
    int m;
    int s;

    public:
    Time(){};

    Time(int h, int m, int s){
        this->h = h;
        this->m = m;
        this->s = s;
    }

    int getHour(){
        return h;
    }

    int getMinute(){
        return m;
    }

    int getSeconds(){
        return s;
    }

    void printTime(){
        cout << "Time is " << h << " hrs : " << m << " min : " << s << " sec" << endl;
    }

    void setHour(int h){}

    void setMinute(int m){}

    void setSeconds(int s){}

};

int main(){

    Time *Tptr[5];

    Tptr[0] = new Time;
    Tptr[1] = new Time(8, 0, 0);
    Tptr[2] = new Time(9, 50 ,00);
    Tptr[3] = new Time(12, 10, 6);
    Tptr[4] = new Time(2, 15, 0);

    // cout << Tptr[1]->getHour() << "\t";
    // cout << Tptr[1]->getMinute() << "\t";
    // cout << Tptr[1]->getSeconds() << endl;

    //Tptr[2]->printTime();

    int i;
    for (i = 0; i < 5; i++)
    {
        Tptr[i]->printTime();
    }
    

    return 0;
}