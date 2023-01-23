//
//  main.cpp
//  C++L2P3
//
//  Created by Tadeusz Potoniec on 23/01/2023.
//  Based on https://www.youtube.com/watch?v=ErOzmh3BiXU&list=PLOYHgt8dIdoxx0Y5wzs7CFpmBzb40PaDo

#include <iostream>
using namespace std;
int age;
int main() {
    cout<<"How old are you?";
    cin>>age;
    
    if(age<18)
    {
        cout<<"You are not of legal age and cannot become president.";
    }
    else if ((age>=18)&&(age<35))
    {
        cout<<"You are of age but not old enough to become president.";
    }
   else
   {
       cout<<"You are of legal age and can become president.";
   }
    return 0;
}
