/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: tmiller
 *
 * Created on September 22, 2017, 1:59 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void increment(int *ptr)    //creates pointer
{
    *ptr = *ptr + 1;    //adds one to the value
}
void increment(int *ptr, int i)
{
    *ptr = *ptr + i;    //adds i to the value
}


int main(void) {
    
int var = 0;
int *var2 = &var;

for(int i = 0; i < 10; i++)
    if(i % 2) 
        increment(var2);
    else
        increment(var2,i);
    cout << var << endl;
    return 0;
}

