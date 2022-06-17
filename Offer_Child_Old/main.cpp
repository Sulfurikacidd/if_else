//
//  main.cpp
//  Offer_Child_Old
//
//  Program to determine if you're eligible for a discount -- only children and elders are eligible.
//
//  Created by Muhammad Talal on 2022-06-16.
//

#include <iostream>
using namespace std;

int main () {
    //write your program here ..
    
    //Step 2. Declare var to store the entered age.
    int age;
    
    //Step 1. Enter age.
    cout << "Enter Age: ";
    
    //Step 3. Store the entered age into the var.
    cin >> age;
    
    //Step 4. Validation.
    if (age <= 0) {
        cout << "Invalid age";
    } else { // most of the time in case of nested if else st. processing is done in else block as programmers are freakin lazy.
        if ((age >= 1 && age <= 17) || (age >= 65)) {
            cout << age << ", eligible for discount" << endl;
        } else {
            cout << age << ", Not eligible for discount" << endl;
        }
    }
    
    
    return 0;
}
