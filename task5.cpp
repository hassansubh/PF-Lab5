#include <iostream>
using namespace std;
bool isSymmetrical(int num);

main()
{
int num;
cout<<"Enter any 3 digit number:";
cin>>num;

isSymmetrical(num);


}

bool isSymmetrical(int num)
{
int num1,num2,num3;

num1=num % 10;
num=num / 10 ;
num2=num % 10;
num=num /10;
num3=num % 10;
num=num /10;


if ( num1 == num3)
  {
cout<<" The value is symmetric.";
  }

if ( num1 != num3)
 {
cout<<" The value is unsymmetric.";
 }

return num;
}