#include<bits/stdc++.h>
using namespace std;


struct str{ 
    int num=10;
    char ch;
    int arr[10];
    char brr[10];
};


int main(){ 

    struct str str1;
    str1.num=10;
    str1.ch='A';
    str1.arr[0]=1;
    str1.arr[1]=2;
    str1.arr[2]=3;
    strcpy(str1.brr,"String arr");


    printf("%d\n",str1.num);
    printf("%c\n",str1.ch);
    for(int i=0;i<3;i++)
    {
        printf("%d ",str1.arr[i]);
    }
    printf("\nMy string: %s", str1.brr);


    // Assigning values to attribute in one line
    struct str str2={2,'a'};
    printf("'\n%d\n",str2.num);
    printf("%c\n",str2.ch);


    // Attribute with value
    struct str str3;
    printf("'\n%d\n",str3.num);


    return 0;
}