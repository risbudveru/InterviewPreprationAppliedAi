/*
John is trying to solve the arithmetic series. He wants to find two things in the series
1. He wants to find nth terms in the series 
2. He wants to find the sum up to the nth term.
*/

#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    int a1, a2;
    cout<<"Enter first, second term and total number of numbers in series"<<endl;
    cin>>a1>>a2>>n;
    int nth = a1 + (n - 1) * (a2 - a1);
    cout<<"Nth term of series : "<<nth<<endl;
    int sn = (n * (a1 + nth)) / 2;
    cout<<"Sum till nth term : "<<sn<<endl;
    return 0;
}
