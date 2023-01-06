#include <iostream>
using namespace std;
int multiply(int num);

main()

{
int num,result;
cout<<"Enter number:";
cin>>num;
result = multiply(num);
cout<<"Answer is : "<<result;

}

int multiply(int num)
{
int answer = 5*num;

return answer;


}
