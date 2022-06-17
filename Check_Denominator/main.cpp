//
//  main.cpp
//  Check_Denominator
//
//  Created by Muhammad Talal on 2022-06-16.
//

#include <iostream>
using namespace std;

int main() {
    //write code here..
    
    //Step 2. Declare 2 vars to store those 2 ints
    int num, den;
    int result;
    
    //Step 1. Ask user for 2 int
    cout<< "Enter 2 integers" << endl;
    
    //Step 3. Store those 2 ints
    cin >> num >> den;
    
    //Step 4. validation
    if(den == 0) {
        cout << "Division is not possible" << endl;
    } else {
        cout << "Division is possible" << endl;
        
        result = num/den;
        
        cout << "Result: " << result << endl;
    }
    
    return 0;
}
