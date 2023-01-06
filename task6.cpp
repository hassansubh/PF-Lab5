#include <iostream>
using namespace std;
bool isEvenORodd(int num);


main()
{
int num;
cout<<"Enter any five digit number:";
cin>>num;

isEvenORodd(num);
}

bool isEvenORodd(int num)
 {

int num1,num2,num3,num4,num5,sum;
num1 = num % 10;
num = num / 10 ;
num2 = num % 10;
num = num / 10 ;
num3 = num % 10;
num = num / 10 ;
num4 = num % 10;
num = num / 10 ;
num5 = num % 10;
num = num / 10 ;

sum = num1+num2+num3+num4+num5;


if ( sum%2 == 0 )
 {
cout<<"The value is Evenish.";
 } 

if ( sum%2 != 0 )
{
cout<<"The value is Oddish.";
}

return sum;

 }