#include <iostream>
using namespace std;
string Tens(int num);
string Ones(int num);

main()
{
int num;
string tens,ones;
 
while(true)
   {
cout<<"Enter number :";
cin>>num;

ones = Ones( num);
tens = Tens( num);

cout<< tens+ones << endl;
   }

return 0;
}

string Tens(int num)

{
string tens;

num =num / 10;

if ( num == 0)  { tens = " "; } 
if ( num == 2)  { tens = "Twenty";}
if ( num == 3)  { tens = "Thirty";}
if ( num == 4)  { tens = "Forty";}
if ( num == 5)  { tens = "Fifty";}
if ( num == 6)  { tens = "Sixty";}
if ( num == 7)  { tens = "Seventy";}
if ( num == 8)  { tens = "Eighty";}
if ( num == 9)  { tens = "Ninty";}

return tens;

}

string Ones(int num)

{
string ones;

num = num % 10;

if ( num == 1) {ones = "One";}
if ( num == 2) {ones = "Two";}
if ( num == 3) {ones = "Three";}
if ( num == 4) {ones = "Four";}
if ( num == 5) {ones = "Five";}
if ( num == 6) {ones = "Six";}
if ( num == 7) {ones = "Seven";}
if ( num == 8) {ones = "Eight";}
if ( num == 9) {ones = "Nine";}

return ones;

}











