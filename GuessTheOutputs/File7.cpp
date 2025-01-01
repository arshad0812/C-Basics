#include<bits/stdc++.h>

using namespace std;

int main(){
    static int i=5;
    
    if(--i){
        main();
        printf("\n%d ",i);
    }

    return 0;
}

// output
// 0
// 0
// 0
// 0