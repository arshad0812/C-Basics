#include<stdio.h>
#include<conio.h>



int main(){
    
    int var1;
    var1=1;
    printf("%d\n",var1);

    char var2=65;
    printf("%c\n",var2);;


    float var3=1.2;
    printf("%f\n",var3);

    bool var4=true;
    printf("%d\n",var4);

    double var5=1.1111111;
    printf("%lf\n",var5);

    const int var6=1;
    // This will give an error
    // var4=2;
    printf("%d\n",var6);


    return 0;
}