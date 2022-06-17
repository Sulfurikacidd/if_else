//
//  main.cpp
//  Lesiure_Hours
//
//  Created by Muhammad Talal on 2022-06-16.
//

#include <iostream>
using namespace std;

int main() {
    //write your code here..
    
    //Step 2. Declare the var to store the hour
    int hour;
    
    //Step 1. Ask user for the hour
    cout << "Enter hour between 0 - 23" << endl;
    
    //Step 3. Store the hour in the var
    cin >> hour;
    
    //Step 4. Validation
    if (hour >= 9 && hour <= 23) {
        cout << "working hour" << endl;
    } else {
        cout << "leisure hour" << endl;
    }
    
    return 0;
}
