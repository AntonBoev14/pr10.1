#include <iostream>
using namespace std;

double secondsToMinutes(int seconds) {
    
    double minutes = seconds / 60.0; 
    return minutes; 
}

int main() {
    setlocale(0, "ru");
    int seconds;
    cout << "введите секунды: ";
    cin >> seconds;

    double result1 = secondsToMinutes(seconds);
    cout << seconds << " секунд(ы) = " << result1 << " минут(ы)" << endl;
    cout << "введите секунды: ";
    cin >> seconds;
    double result2 = secondsToMinutes(seconds);
   

    cout << seconds << " секунд(ы) = " << result2 << " минут(ы)" << endl;

    return 0;
}
