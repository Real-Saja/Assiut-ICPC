#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <iomanip>

typedef long long ll;
using namespace std;

// Think before act 
/*
Mas and Min
- max num could be done by loops or built-in function (time limit)
- same with min num 
==========
Prime Num => 2, 3, 5, 7, ....
- 1 and 0 not prime (if condition)
- solved by loop 
*** REMEMBER => The smallest factor of a number greater than one cannot be greater than the square root of that number :) *** rather than brute force methode
==========
Palindrome (error I faced > couldn't do it in one function ToT)
- any num < 10 => is palindrome
the rest :
reverse num, how ??
151
LOOP1
1) 15[1] % 10 = 1
2) 0 + 1 = 1
3) 151 / 10 = 15.1 (0.1 is ignored - because of int)
LOOP2
1) 1[5] % 10 = 5
2) (1) * 10 + 5 = 15
3) 15 / 10 = 1.5 (0.5 is ignored)
and so on..
==========
Divisors
make a loop that get % of every num over array elements
if arr[n] % arr[another num except n] == 0 
counter for divisor += 1
a function to count divisors
a function to print the maximum num with max divisors
*/
int maxNum(int arr[], int n) {
    int maxNum = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxNum) {
            maxNum = arr[i];
        }
    }
    // or use max_element(arr, arr + n)
    return maxNum;
}


int minNum(int arr[], int n) {
    int minNum = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < minNum) {
            minNum = arr[i];
        }
    }
    //or use min_element(arr, arr + n)
    return minNum;
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}


int numOfPrime(int arr[], int n) {
    int primeCntr = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) primeCntr++;
    }
    return primeCntr;
}


bool isPalindrome(int num) {
    int reverse = 0;
    int original = num;
    
    while (num > 0){
    reverse = (reverse * 10) + (num % 10);
    num = num / 10;
    }    
    return reverse == original;
}


int numOfPalindrome(int arr[], int n){
    int palindromeCntr = 0;
    for (int i = 0; i < n; i++) {
        if (isPalindrome(arr[i])) palindromeCntr++;
    }
    return palindromeCntr;
}

int getDivisorsNum(int num){
    int cntr = 0;
    for (int i = 1; i * i <= num; i++) { //same concept as 
        if (num % i == 0) {
            cntr += 1;
            if (i != num / i) cntr += 1; //why this ?? num = 7 means that it is divisable with 1 and when it comes to 7 in can't be counted because max i it'll reach is 2 * 2 = 4 same with every num which is not perfect square 
        }
    }
    
    return cntr;
}

int maxNumOfDivisors(int arr[], int n) {
    int maxDivisors = 0;
    int maxNumber = 0;
    for (int i = 0; i < n; i++) {
        int divs = getDivisorsNum(arr[i]);
        if (divs > maxDivisors || (divs == maxDivisors && arr[i] > maxNumber)) {
            maxDivisors = divs;
            maxNumber = arr[i];
        }
    }
    return maxNumber;
}


int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "The maximum number : " << maxNum(arr, n) <<endl;
    cout << "The minimum number : " << minNum(arr, n) <<endl;
    cout << "The number of prime numbers : " << numOfPrime(arr, n) <<endl;
    cout << "The number of palindrome numbers : " << numOfPalindrome(arr, n) <<endl;
    cout << "The number that has the maximum number of divisors : " << maxNumOfDivisors(arr, n) <<endl;
    
    return 0;
}