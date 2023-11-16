#include <iostream>
using namespace std;

class Time {
private:
    int hour, minute, second;

public:
    Time(int h, int m, int s) {
        if (h >= 0 && h < 24 && m >= 0 && m < 60 && s >= 0 && s < 60) {
            hour = h;
            minute = m;
            second = s;
        } else {
            cout << "Invalid values for time" << endl;
        }
    }

    void setHour(int h) {
        if (h >= 0 && h < 24) {
            hour = h;
        } else {
            cout << "Invalid hour value" << endl;
        }
    }

    void setMinute(int m) {
        if (m >= 0 && m < 60) {
            minute = m;
        } else {
            cout << "Invalid minute value" << endl;
        }
    }

    void setSecond(int s) {
        if (s >= 0 && s < 60) {
            second = s;
        } else {
            cout << "Invalid second value" << endl;
        }
    }

    void addHours(int h) {
        hour = (hour + h) % 24;
    }

    void addMinutes(int m) {
        int additionalHours = (minute + m) / 60;
        minute = (minute + m) % 60;
        addHours(additionalHours);
    }

    void addSeconds(int s) {
        int additionalMinutes = (second + s) / 60;
        second = (second + s) % 60;
        addMinutes(additionalMinutes);
    }

    void displayTime() {
        cout << "Time: " << hour << ":" << minute << ":" << second << endl;
    }
};

int main() {
    Time t(12, 30, 45);
    t.displayTime();
    t.setHour(15);
    t.setMinute(70);
    t.setSecond(80);
    t.addHours(5);
    t.displayTime();
    t.addMinutes(75);
    t.displayTime();
    t.addSeconds(135);
    t.displayTime();

    return 0;
}