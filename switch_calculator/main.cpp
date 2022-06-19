//
//  main.cpp
//  switch_calculator
//
//  Created by Muhammad Talal on 2022-06-19.
//

#include <iostream>
using namespace std;

int main() {
    
    //write your code here..
    
    //Step 2. Declare 2 vars to store 2 integers.
    int int_1, int_2;
    int operation;
    
    //Step 1. Enter 2 integers
    cout << "Enter 2 integers: ";
    
    //Step 3. Store the 2 integers.
    cin >> int_1 >> int_2;
    
    
    //Step 4. Enter operation.
    cout << "1. Add 2. Subtract 3. Multiply 4. Divide 5. Mod" << endl;
    
    //Step 5. Store operation
    cout << "operation: ";
    cin >> operation;
    
    //Step 6. Switch st to perform func.
    switch (operation) {
        case 1:
            cout << "result: " << int_1 + int_2 << endl;
            break;
        case 2:
            cout << "result: " << int_1 - int_2 << endl;
            break;
        case 3:
            cout << "result: " << int_1 * int_2 << endl;
            break;
        case 4:
            cout << "result: " << int_1 / int_2 << endl;
            break;
        case 5:
            cout << "result: " << int_1 % int_2 << endl;
            
        default:
            break;
    }
}
