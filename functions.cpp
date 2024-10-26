#include<bits/stdc++.h>

using namespace std;

void function1(){
    printf("Hi,Im Function 1\n");
}

int function1(int num){
    return num+1;
}

char* function3(char *arr){
    return arr;
}




int main(){

    function1();
    int num=5;
    num=function1(num);
    printf("Value of function 2 is %d\n",num);
    char arr[]="hello"; 
    char *brr;   
    brr=function3(arr);
    printf("Value of Char brr is %s\n",brr);
    


    return 0;
}