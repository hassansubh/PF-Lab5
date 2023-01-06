#include <iostream>
using namespace std;
main()

{
int hours,minutes,mm,hh,increase,add;
cout<<"Enter hours :";
cin>>hours;

cout<<"Enter minutes :";
cin>>minutes;

increase=minutes+15;
mm=increase%60;
add=increase/60;
hours=hours+add;

if ( hours > 23 )

{ hh= hours % 24;
cout<<hh<<":"<<mm<<endl;
}

if ( hours < 23 )

{
cout<<hours<<":"<<mm<<endl;

}


}