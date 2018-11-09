// Aubrey Jenkins
// CSCI 371
// This program is a FSM representation of roman numerals where
// a user enters in a roman numeral number 1-100 and the program will veryify
//whether it is a valid roman Numeral or not
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
int roman[17][5] = {{1,6,10,14,16}, {2,4,5,-1,-1}, {3,-1,-1,-1,-1},{-1,-1,-1,-1,-1}
,{-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1},{7,-1,-1,-1,-1},{8,-1,-1,-1,-1},{9,-1,-1,-1,-1}
,{-1,-1,-1,-1,-1},{1,6,11,13,15},{1,6,12,-1,-1},{1,6,-1,-1,-1}
,{1,6,-1,-1,-1},{1,6,10,-1,-1},{1,6,-1,-1,-1},{-1,-1,-1,-1,-1}};// Accept and reject state array
char input[8];// the Cstring the user enters
int state=0;//the cureent state that the user is in (row)
int column;//the current Numeral you are looking at (column)
int i;
cout<<"Enter A roman Numeral from 1-100 (Inclusive)"<<endl;
cin>>input;// Takes in the user's input
if(strlen(input)==0)// if the length of the string is zero
{
  cout<<"Rejected"<<endl;
  return 0;
}
for(i=0;i<strlen(input);i++)//for the length of the string the user inputs
{
if(input[i] == 'I')//go to column 0 when the program sees an I
{
column=0;

}
else if(input[i] == 'V')//go to column 1 when the program sees an V
{
column=1;

}
else if(input[i] == 'X')//go to column 2 when the program sees an X
{
column=2;


}
else if(input[i] == 'L')//go to column 3 when the program sees an L
{
column=3;

}
else if(input[i] == 'C')//go to column 4 when the program sees an C
{
column=4;

}
else//if the user has inputted something that is not recgonized as a roman NUmeral Character Automatically reject
{
  cout<<"Rejected"<<endl;
  return 0;
}
state=roman[state][column];
}
if(state!=-1)
{
  cout<<"This is Accecpted"<<endl;
}
else
{
cout<<"This has been rejected"<<endl;
}
return 0;
}
