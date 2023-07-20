#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main()
{
    //PF Lab Assignment 01
    //Defining the variables required
int choice;
int w,x,y,z;
double a,b;
double result;
//Displaying first on console
cout<<"\t""\t""\t""\t""\t" "PF Lab Assignment 01"<<endl;
cout<<"\t""\t""\t""\t""\t" "Scientific Calculator"<<endl;
cout<<endl<<endl;
//defining jump so whenever the operation starts fresh or ceases, the user goes to the first statements.
jump:
cout<<endl<<endl;
cout<<"\t""\t""\t""\t""1.Arithmetic Operations : "<<endl;
cout<<"\t""\t""\t""\t""2.Logarithmic Operations : "<<endl;
cout<<"\t""\t""\t""\t""3.Trigonometric Operations : "<<endl;
cout<<"\t""\t""\t""\t""4.Power Operations : "<<endl;
cout<<"\t""\t""\t""\t""5.Exit the Calculator... "<<endl;
cout<<endl<<endl;cout<<"\t""\t""\t""\t""Select Your Choice"<<endl;
//Using do-while loop
do
{cin>>choice; //Taking choice from user.
if(choice==1) //When user selects Arithmetic Operation.
{cout<<"\t""\t""1.Addition :"<<endl;
 cout<<"\t""\t""2.Subtraction :"<<endl;
 cout<<"\t""\t""3.Multiplication :"<<endl;
 cout<<"\t""\t""4.Division :"<<endl;
 cin>>w;
 //Creating Switch for multiple choices.
switch (w)
{
case 1: //Addition
cout<<"Enter the First number :"<<endl;
cin>>a;
 cout<<"Enter the Second number :"<<endl;
cin>>b;
cout<<"The Sum of "<<a<<" and "<<b<<" is Result: "<<a+b<<endl;
system("pause");
goto jump;
case 2: //Subtraction
cout<<"Enter the first number :"<<endl;
cin>>a;
cout<<"Enter the second number :"<<endl;
cin>>b;
cout<<"The Difference of "<<a<<" and "<<b<<" is Result:  "<<a-b<<endl;
system("pause");
goto jump;
case 3: //Multipication
cout<<"Enter the First number :"<<endl;
cin>>a; cout<<"Enter the Second number :"<<endl;
cin>>b;
cout<<"The Product of "<<a<<" and "<<b<<" is Result:  "<<a*b<<endl;
system("pause");
goto jump;
case 4: //Division
cout<<"Enter the First number :"<<endl;
cin>>a;
 cout<<"Enter the Second number :"<<endl;
cin>>b;
if(b==0)
{cout<<"Error,Enter Second number again... "<<endl; //To avoid undefined answers.
cin>>b;
}
cout<<"The Division of "<<a<<" and "<<b<<" gives Result:  "<<a/b<<endl;
system("pause");
 goto jump;}
//End of Switch
}
if(choice==2) //When user selects Logarithmic Operation.
 {cout<<"\t""\t""1. Log of a Number:"<<endl;
 cout<<"\t""\t""2. Log of a Number with base 10 :"<<endl;
 cin>>x;
  //Creating Switch for multiple choices.
switch (x)
{
case 1: //Natural log
cout<<"Enter the number :"<<endl;
cin>>a;
 cout<<"The Log of "<<a<<" is "<<log (a)<<endl;
 system("pause");
goto jump;
case 2: // Common log
cout<<"Enter a number :"<<endl;
cin>>a;
cout<<"The Log of "<<a<<" with base 10 is "<<log10(a)<<endl;
system("pause");
goto jump;}
//End of Switch
}
if (choice==3) //When user selects Trigonometric Operation.
 {
 cout<<"\t""\t""1.Sine of a number :"<<endl;
 cout<<"\t""\t""2.Cosine of a number :"<<endl;
 cout<<"\t""\t""3.Tangent of a number :"<<endl;
 cout<<"\t""\t""4.Arc Tangent of a number :"<<endl;
 cout<<"\t""\t""5.Arc Cosine of a number :"<<endl;
 cout<<"\t""\t""6.Arc Sine of a number :"<<endl;
 cin>>y;
  //Creating Switch for multiple choices.
 switch(y)
 {case 1: //Sine
cout<<"Enter a number :"<<endl;
cin>>a;
 result=sin(a);
cout <<"sin(a) = " << result << " radians" << endl;
cout<<"sin(a) = "<< result*180/3.1415 << " degrees" << endl;
 system("pause");
goto jump;
case 2: //Cosine
cout<<"Enter a number :"<<endl;
cin>>a;
result=cos(a);
cout <<"cos(a) = " << result << " radians" << endl; cout<<"cos(a) = "<< result*180/3.1415 << " degrees" << endl;
 system("pause");
goto jump;
case 3: //Tangent
cout<<"Enter a number :"<<endl;
cin>>a;
result=tan(a);
 cout <<"tan(a) = " << result << " radians" << endl;
 cout<<"tan(a) = "<< result*180/3.1415 << " degrees" << endl;
system("pause");
goto jump;
case 4: //Inverse of Tangent
cout<<"Enter a number :"<<endl;
cin>>a;
 result = atan(a);
 cout << "atan(a) = " << result << " radians" << endl;
 cout << "atan(a) = " << result*180/3.1415 << " degrees" << endl;
 return 0;
case 5: //Inverse of Cosine
cout<<"Enter a number :"<<endl;
cin>>a;
 result = acos(a);
 cout << "acos(a) = " << result << " radians" << endl;
 cout << "acos(a) = " << result*180/3.1415 << " degrees" << endl;
 return 0;
 goto jump;
case 6: //Inverse of Sine
cout<<"Enter the number :"<<endl;
cin>>a;
 result = asin(a); cout << "asin(a) = " << result << " radians" << endl;
 cout << "asin(a) = " << result*180/3.1415 << " degrees" << endl;
 return 0;
system("pause");
goto jump;}
//End of Switch
 }
 if (choice==4) //When user selects Power Operation.
 {
 cout<<"\t""\t""1.Square of a number :"<<endl;
 cout<<"\t""\t""2.Cube of a number :"<<endl;
 cout<<"\t""\t""3.Square root of a number :"<<endl;
 cout<<"\t""\t""4.Cube Root of a number :"<<endl;
 cout<<"\t""\t""5.Other Powers :"<<endl;
 cin>>z;
  //Creating Switch for multiple choices.
 switch(z)
 {
 case 1: //Square
cout<<"\t""Enter the base :"<<endl;
cin>>a;
cout<<"\t""Square of " <<a<< " is:  "<<pow(a,2)<<endl;
system("pause");
goto jump;
case 2: //Cube
cout<<"\t""Enter the base :"<<endl;
cin>>a;
cout<<"\t""Cube of " <<a<< " is:  "<<pow(a,3)<<endl;
system("pause");
goto jump;
case 3: //Square root
cout<<"Enter a number :"<<endl;
cin>>a;
cout<<"\t""Square Root of " <<a<< " is:  "<<pow(a,0.5)<<endl;
system("pause");
goto jump;
case 4: //Cube root
cout<<"Enter a number :"<<endl;
cin>>a;
cout<<"\t""Cube Root of " <<a<< " is:  "<<pow(a,0.34)<<endl;
system("pause");
goto jump;
case 5: //Other powers
cout<<"\t""To find Powers other than these,Enter Your Base Number: "<<endl;
cin>>a;
cout<<"\t""Enter the Exponent: "<<endl;
cin>>b;
cout<<"The Base "<<a<<" raised to "<<b<<" is:  "<<pow(a,b)<<endl;
system("pause");
goto jump;
//End of Switch
}}
}
while (choice<=4);{
//If user wants to exit the Calculator.
if(choice==5){
cout<<"\t""\t""\t""You Exited The Calculator. "<<endl;}
//If user enters any other number.
if (choice>=6){
cout<<"\t""\t""\t""You Entered Wrong Choice."<<endl;
}
}
} //End of Program.

