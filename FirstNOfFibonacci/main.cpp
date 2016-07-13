//
//  main.cpp
//  FirstNOfFibonacci
//
//  Created by Brent Perry on 7/13/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include "../../../std_lib_facilities.h"

int main()
{
    vector<int> fibonacci;
    int n;
    
    cout << "Please enter how many numbers of the Fibonacci series you want to see.\n";
    cout << "Must be at least 3 (and more than 46 won't print): ";
    cin >> n;
    cout << '\n';
    
    if (n > 2) {
        fibonacci.push_back(1);
        fibonacci.push_back(1);
        for (int i = 2; i < n; ++i) {
            fibonacci.push_back(fibonacci[i - 2] + fibonacci[i - 1]);
        }
        
        cout << "Here are the first " << n << " numbers of the Fibonacci series: \n";
        for (int i = 0; i < fibonacci.size(); ++i) {
            cout << fibonacci[i] << " ";
        }
        cout << '\n';
    } else {
        cout << "No, really, it's pretty pointless if you don't enter at least '3'.\n";
    }
    
}
