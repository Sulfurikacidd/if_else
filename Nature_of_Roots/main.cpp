//
//  main.cpp
//  Nature_of_Roots
//
//  Find if the roots are real and equal/unequal or unreal.
//
//  Created by Muhammad Talal on 2022-06-16.
//

#include <iostream>
#include <cmath>
using namespace std;

int main () {
    //write your code here ..
    
    //Step 2. Store the entered values.
    int b, c, a;
    int d;
    int r1, r2;
    
    //Step 1. Enter b, c and a.
    cout << "b, c and a: " ;
    
    //Step 3. Store the value of entered values in b, c, and a
    cin >> b >> c >> a;
    
    //Step 4. Calculate and store d
    d = sqrt(b*b - 4*a*c);
    
    //Step 5. Validation
    if (d == 0) {
        cout << "Value of d: " << d << endl;
        cout << "There's only one root" << endl;
        
        r1 = (-1*b)/(2*a);
        
        cout << "root value: " << r1 << endl;
    } else if (d > 0) {
        cout << "Value of d: " << d << endl;
        cout << "There are 2 unequal roots" << endl;

        r1 = ((-1*b)+d)/(2*a);
        r2 = ((-1*b)-d)/(2*a);
        
        cout << "Roots are: " << r1 << "," << r2 << endl;
    } else {
        cout << "Roots are imaginary" << endl;
    }
    
    return 0;
}
