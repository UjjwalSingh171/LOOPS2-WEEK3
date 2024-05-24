// Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of
// each digit of the number is equal to the number itself, then the number is called an Armstrong
// number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )
// Output :
// 1
// 153
// 370
// 371
// 407

#include<iostream>
#include<cmath>
using namespace std;

bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int digits = to_string(num).length();

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    return sum == originalNum;
}

int main() {
    for (int i = 1; i <= 500; ++i) {
        if (isArmstrong(i)) {
            cout << i << endl;
        }
    }

    return 0;
}