/* 

Q.1. Create a time class that includes integer numbers values for hours, minutes and seconds. Make a member function get_time() that gets a time value from the user and a function put_time() that displays time in 12:59:59 format. Add error checking  to the get_time() function to minimize user mistakes. The function should request hours, minutes and seconds separately. And check the range should be between 0 and 23, and minutes and seconds between 0 and 59. 

*/

#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    void get_time() {
        
        do {
            cout << "Enter hours (0-23): ";
            cin >> hours;
            if (hours<0 || hours>24)
            {
                cout<<"Invalid Hour! Give Between 0-23 : "<<endl;
            }
            
        } while (hours < 0 || hours > 23);

        do {
            cout << "Enter minutes (0-59): ";
            cin >> minutes;
            if (minutes<0 || minutes>59)
            {
                cout<<"Invalid Minutes! Give Between 0-59 : "<<endl;
            }
        } while (minutes < 0 || minutes > 59);

       
        do {
            cout << "Enter seconds (0-59): ";
            cin >> seconds;
            if (seconds<0 || seconds>59)
            {
                cout<<"Invalid seconds! Give Between 0-59 : "<<endl;
            }
        } while (seconds < 0 || seconds > 59);
    }

    void put_time() {
        cout << "Time: ";
        cout << (hours < 10 ? "0" : "") << hours << ":";
        cout << (minutes < 10 ? "0" : "") << minutes << ":";
        cout << (seconds < 10 ? "0" : "") << seconds << endl;
    }
};

int main() {
    Time t;
    t.get_time();
    t.put_time();
    return 0;
}
