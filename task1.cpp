#include <iostream>
#include <cmath>
using namespace std;
float calculateHeight(float distance, float degrees);
main()

{
float distance,degrees,height;
cout<<"Enter distance:";
cin>>distance;
cout<<"Enter angle:";
cin>>degrees;
height =calculateHeight(distance,degrees);
cout<<"The height of tree is:"<<height;
}

float calculateHeight(float distance, float degrees)
{
float radian=57.2958;
float radians;
float height;
float angle;

radians = degrees/radian;

angle = tan(radians);

height = angle*distance;

return height;

}