#include <iostream>
using namespace std;

class Time {
private:
    int hrs, mins, secs;

public:
    Time(int h = 0, int m = 0, int s = 0) {
        hrs = h;
        mins = m;
        secs = s;
    }

    Time operator+(const Time& t) {
        Time tmp;
        tmp.secs = secs + t.secs;
        tmp.mins = mins + t.mins + tmp.secs / 60;
        tmp.secs %= 60;
        tmp.hrs = hrs + t.hrs + tmp.mins / 60;
        tmp.mins %= 60;
        return tmp;
    }

    Time operator-(const Time& t) {
        Time tmp;
        int total1 = hrs * 3600 + mins * 60 + secs;
        int total2 = t.hrs * 3600 + t.mins * 60 + t.secs;
        int diff = total1 - total2;
        if (diff < 0)
            diff += 24 * 3600;
        tmp.hrs = diff / 3600;
        diff %= 3600;
        tmp.mins = diff / 60;
        tmp.secs = diff % 60;
        return tmp;
    }

    void operator++() {
        secs++;
        if (secs >= 60) {
            secs -= 60;
            mins++;
            if (mins >= 60) {
                mins -= 60;
                hrs++;
                if (hrs >= 24) {
                    hrs -= 24;
                }
            }
        }
    }

    void display() {
        cout << hrs << " hours, " << mins << " minutes, " << secs << " seconds";
    }
};

int main() {
    Time time1(12, 30, 45), time2(3, 15, 20), time3;

    cout << "Time 1: ";
    time1.display();
    cout << endl;

    cout << "Time 2: ";
    time2.display();
    cout << endl;

    time3 = time1 + time2;
    cout << "Time 1 + Time 2: ";
    time3.display();
    cout << endl;

    time3 = time1 - time2;
    cout << "Time 1 - Time 2: ";
    time3.display();
    cout << endl;

    cout << "Incrementing Time 1 by one second: ";
    ++time1;
    time1.display();
    cout << endl;

    return 0;
}
