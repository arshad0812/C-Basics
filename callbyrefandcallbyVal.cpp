#include<bits/stdc++.h>
using namespace std;


void callbyval(int num){
    num=num+1;
}


void callbyref(int *numref){
    *numref=*numref+1;
}



int main(){
    int num=5;
    printf("Call by value\n");
    callbyval(num);
    printf("%d\n",num);
    
    printf("Call by reference\n");
    callbyref(&num);
    printf("%d\n",num);
    return 0;
}