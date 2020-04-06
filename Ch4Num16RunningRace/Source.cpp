/************************************************
** Author: Andrea Hayes
** Date: March 7, 2020
** Purpose: Show order of who won a race
** Input: Runners and time
** Processing: Determine first, second and third place
** Output: Display who came in First, Second and Third
*************************************************/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {

    string run1, run2, run3;
    double time1, time2, time3;

    cout << "Enter Runner's Name: "; // Enter runner name and times
    cin >> run1;
    cout << "Enter Runner's Time in Minutes: ";
    cin >> time1;
    cout << "Enter Runner's Name: ";
    cin >> run2;
    cout << "Enter Runner's Time in Minutes: ";
    cin >> time2;
    cout << "Enter Runner's Name: ";
    cin >> run3;
    cout << "Enter Runner's Time in Minutes: ";
    cin >> time3;

    if (time1 < 0 || time2 < 0 || time3 < 0) { // Run times must be greater than 0
        cout << "Running times must be greater than 0. Please enter a valid time." << endl;
        return 1;
    }
    if (time1 == time2 && time1 == time3){ // Determine if all runners tie
        cout << "All runners have tied with a time of " << time1 << endl;
    }
    else if (time1 == time2) { // Determine if 1 and 2 tie for first
        if (time1 < time3) {
            cout << "Tie for First Place: " << run1 << " & " << run2 << " @ " << time1 << endl;
            cout << "Second Place: " << run3 << " @ " << time3 << endl;
        }
        else { // Determine if 1 and 2 tie for second
            cout << "First Place: " << run3 << " @ " << time3 << endl;
            cout << "Tie for Second Place: " << run1 << " & " << run2 << " @ " << time1 << endl;
        }
    }
    else if (time2 == time3) { // Determine if 2 and 3 tie for first
        if (time2 < time1) {
            cout << "Tie for First Place: " << run2 << " & " << run3 << " @ " << time2 << endl;
            cout << "Second Place: " << run1 << " @ " << time1 << endl;
        }
        else { // Determine if 2 and 3 tie for second 
            cout << "First Place: " << run1 << " @ " << time1 << endl;
            cout << "Tie for Second Place: " << run2 << " & " << run3 << " @ " << time2 << endl;
        }
    }
    else if (time1 == time3) { // Determine if 1 and 3 tie first 
        if (time1 < time2) {
            cout << "Tie for First Place: " << run1 << " & " << run3 << " @ " << time1 << endl;
            cout << "Second Place: " << run2 << " @ " << time2 << endl;
        }
        else { // Determine if 1 and 3 tie for second
            cout << "First Place: " << run2 << " @ " << time2 << endl;
            cout << "Tie for Second Place: " << run1 << " & " << run3 << " @ " << time1 << endl;
        }
    }
    else if (time1 < time2 && time1 < time3) { // Deterime if time 1 is first
            cout << "First Place: " << run1 << " @ " << time1 << endl;
            if (time2 < time3) { // Deterime if time 2 is second
                cout << "Second Place: " << run2 << " @ " << time2 << endl;
                cout << "Third Place: " << run3 << " @ " << time3 << endl;
            }
            else { // then if time 3 is second
                cout << "Second Place: " << run3 << " @ " << time3 << endl;
                cout << "Third Place: " << run2 << " @ " << time2 << endl;
            }
    }
    else if (time2 < time1 && time2 < time3) { // Deterime if time 2 is first
        cout << "First Place: " << run2 << " @ " << time2 << endl;
        if (time1 < time3) { // Deterime if time 1 is second
            cout << "Second Place: " << run1 << " @ " << time1 << endl;
            cout << "Thrid Place: " << run3 << " @ " << time3 << endl;
        }
        else { // Then if time 3 is second
            cout << "Second Place: " << run3 << " @ " << time3 << endl;
            cout << "Third Place: " << run1 << " @ " << time1 << endl;
        }
    }
    else if (time3 < time2 && time3 < time1) { // Determine if time 3 is first
        cout << "First Place: " << run3 << " @ " << time3 << endl;
        if (time2 < time1) { // Determine if time 2 is second
            cout << "Second Place: " << run2 << " @ " << time2 << endl;
            cout << "Thrid Place: " << run1 << " @ " << time1 << endl;
        }
        else { // Then if time 1 is second
            cout << "Second Place: " << run1 << " @ " << time1 << endl;
            cout << "Third Place: " << run2 << " @ " << time2 << endl;
        }
    }
    else {
        cout << "Unknown condition";
        return 1;
    }
    return 0;
}