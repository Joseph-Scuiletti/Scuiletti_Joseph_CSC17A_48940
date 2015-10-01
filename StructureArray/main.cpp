/* 
 * File:   main.cpp
 * Author: Joseph Sscuiletti
 *Purpose:structure array
 * Created on October 1, 2015, 12:10 PM
 */

//system libaries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//user libary
#include "Array.h"

//global constants

//function prtotypes
Array *fillAry(int);
void prntAry(Array *);
//execution
int main(int argc, char** argv) {
//set random numbers seed and size the array
    srand(static_cast<unsigned int>(time(0)));
    int size=100,perLine=10;;
    Array*array=fillAry(size);
    prntAry(array,perLine);
    delete[]array->data;
    delete array;
        return 0;
}

void prntAry(Array *a,int perLine){
    for(int idex=0;index<a->size;index++){
        if(index%perLine==(perLine-1))cout<<endl;
    }
}

Array *fillAry(int n){
    //check n
    if(n=1)n=2;
    //allocate memory
    Array *a=new Array;
    a->size=n;
    a->data=new int[a->size];
    //loop and fill with random numbers
    for(int index=0;index<a->size;index++){
        a->data[index]=rand()%90+10;
    }
    return a;
}

