#include <iostream>
using namespace std;
char UpperAlphabet(char alphabet1);
char LowerAlphabet(char alphabet2); 

main()
 
{
char alphabet, A1,A2;

cout<<"Enter Alphabet :";
cin>>alphabet;

 A1=UpperAlphabet(alphabet1);
cout<<"You have entered Capital"A1;
 A2=LowerAlphabet(char alphabet2); 
cout<<A2;

char UpperAlphabet(char alphabet1)
{

if( A1 >='A' && A1 <='Z')

{return A1;}
return0;

}
char LowerAlphabet(char alphabet2)
{
if ( A2 >='a' && A2 <='z' )
{return A2;}
return0;
}

