/*
Write a c++ program to check whether the given number is palindrome or not.
Output
Enter a positive number 12321
The reverse number is 12321
The number is a palindrome
Enter a positive number 12331
The reverse number is 13321
The number is not a palindrome 
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,N;
    scanf("%d",&n);
    N=n;

    int r=0;
    while(n>0)
    {
        int rem=n%10;
        r=r*10+rem;
        n/=10;
        

    }
    if(r==N) cout<<"The number is a palindrome";
        else cout<<"The number is not a palindrome";
}