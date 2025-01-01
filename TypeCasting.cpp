#include<bits/stdc++.h>

using namespace std;



int main(){

    //  Implicit Type Casting (Automatic)
     int a = 5;
    float b = 10.5;
    
    // Implicit casting: 'a' is promoted to float
    float result = a + b;

    printf("Result: %f\n", result); // Output: 15.500000

    // Explicit Type Casting

    double num = 9.8;
    int truncated = (int)num; // Explicitly casting double to int
    printf("Truncated value: %d\n", truncated); // Output: 9
    
    return 0;
}