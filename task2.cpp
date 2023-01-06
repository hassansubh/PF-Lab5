#include <iostream>
#include <cmath>
using namespace std;
float quadraticPlus(float a, float b, float c);
float quadraticMinus(float a, float b, float c);

main()
{
float a,b,c;
float result1,result2;
cout<<"Enter number 1:";
cin>>a;
cout<<"Enter number 2:";
cin>>b;
cout<<"Enter number 3:";
cin>>c;
result1=quadraticPlus(a, b, c);
result2=quadraticMinus(a, b, c);
cout<<"Ans1. is:"<<result1<<endl;
cout<<"Ans2. is:"<<result2<<endl;

}
float quadraticPlus(float a, float b, float c)
{
float bSquare,acProduct,negb,squareRoot,upper,final;

bSquare = pow(b,2);
acProduct = a*c;
negb = -b;
squareRoot =sqrt( bSquare-(4*a*c));
upper = -b + squareRoot;
final = upper/ (2*a);

return final;
}

float quadraticMinus(float a, float b, float c)
{
float bSquare,acProduct,negb,squareRoot,upper,final;

bSquare = pow(b,2);
acProduct = a*c;
negb = -b;
squareRoot =sqrt( bSquare-(4*a*c));
upper = -b-squareRoot;
final = upper/ (2*a);

return final;

}



