#include<iostream>
using namespace std;
 
int power(int c, int d);
 
int main()
{
     int num;
     int f,result,sum=0,temp,a=0;
 
     cout<<"Enter any number :: ";
     cin>>num;
 
     temp=num;
 
     while(temp != 0)
     {
         temp=temp/10;
         a=a+1;
     }
 
     f=num;
 
     while(f!=0)
     {
         result=f%10;
         sum = sum + power(result,a);
         f=f/10;
     }
 
     if( sum == num )
     {
         cout<<"\n The Entered Number "<<num<<"is an Armstrong number.\n";
     }
     else
     {
         cout<<"\n The Entered Number "<<num<<"  is Not an Armstrong number.\n";
     }
 
     return 0;
}