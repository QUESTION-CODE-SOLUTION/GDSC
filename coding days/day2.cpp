#include<iostream>
#include<string>
using namespace std;

int main()
{
    
  cout<<"hello and welcome"<<endl;
  string name;
  int class_name;
  int marks;
  cout<<"Enter your name :";
  cin>>name;
  cout<<"Enter your standard: ";
  cin>>class_name;
  cout<<"enter your marks: ";
  cin>>marks;
  
  //&& ||
  if(marks<=100 && marks>80)
  {
      cout<<name<<" is in "<<class_name<<" standard and got A grade"<<endl;
  }
  else if(marks<=80 && marks>60)
  {
       cout<<name<<" is in "<<class_name<<" standard and got B grade"<<endl;
  }
  else if(marks<=60 && marks>50)
  {
       cout<<name<<" is in "<<class_name<<" standard and got C grade"<<endl;
  }
    else
    {
          cout<<name<<" is in "<<class_name<<" standard is fail"<<endl;
    }
    
//   A 80-100
//   B 60-80
//   C 50-60
//   D 50-40
//   E fail
   
   
   
   
    
    // ()-- parenthis
    // {}-- curvely 
    // []-- square
    
   // if else elseif
    // + - / * % < > != == 
    // int num;
    // cout<<"Hello! \n";
    // cout<<"enter a number";
    // cin>>num;
    // if(num%2!=0)
    // {
    //     cout<<"Its odd";
        
    // }
    // else
    // {
    //     cout<<"even";
    // }
    
    
    
    // program to take name as input
    // string name;
    // cout<<"Enter your name :";
    // cin>>name;
    // cout<<"Hello and welcome "<<name<<endl;
    
    
    
    
    
    
  // program for addition
//   int a,b;
//   cout<<"a+b"<<endl;
//   cout<<"enter two integers : ";
//   cin>>a;
//   cin>>b;
//   cout<<"sum is "<<a+b;
  

}

// 'a'
// 'b'
// 'c'
// 'd'
// 'y'
// "roshni"
// "345@fdg"
// "7890837589"
// "ADRFG"
// What is the definition of a string in C++?
// This is called a sequence of letters. Similarly, in C++, we have character
// that are a collection set of all the symbols such as. [A-Z],[a-z],[0-9],[@,#,….]. Definition: Any random sequence of characters defined in C++ library set is called a String in C++.

// Data types:
// A data type is the type of data a variable can hold. For example, a Boolean variable can have boolean data, and an integer variable can hold integer data. While coding, we need to use different variables to store different information. Variables are just storage locations reserved for storing values.

// integer
// string
// char
// bool
// float
// double
// long
// long long
