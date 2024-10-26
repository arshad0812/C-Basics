#include<bits/stdc++.h>


using namespace std;



int main(){

    printf("\nArray\n");
    
    // Fixed Array
    printf("\nFixed Array\n");
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    //Late Array Declaration
    int arr2[5];
    arr2[0]=1;
    arr2[1]=2;
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    for(int i=0;i<n2;i++)
    {
        printf("%d ",arr2[i]);
    }

    // Dynamic Array
    printf("\nDynamic Array\n");

    n=5;
    int *arr3=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        arr3[i]=i+1;
    }


    for(int i=0;i<n;i++){
        printf("%d ",arr3[i]);
    }

    //2D Array
    printf("\n2D Array\n");
    int arr4[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int nrows=sizeof(arr4)/sizeof(arr4[0]);
    int ncols=sizeof(arr4[0])/sizeof(arr4[0][0]);


    for(int i=0;i<nrows;i++){
        for(int j=0;j<ncols;j++){
            printf("%d ",arr4[i][j]);
        }
        printf("\n");
    }

    //2D Dynamic Array
    printf("2D Dynamic Array\n");

    int **arr5=(int**)malloc(n*sizeof(int*));

    for(int i=0;i<nrows;i++){
        arr5[i]=(int*)malloc(ncols*sizeof(int));
    }

    int val=1;
    for(int i=0;i<nrows;i++){
        for(int j=0;j<ncols;j++){
            arr5[i][j]=val++;
        }
    }

    for(int i=0;i<nrows;i++){
        for(int j=0;j<ncols;j++){
            printf("%d ",arr5[i][j]);
        }
        printf("\n");
    }




    return 0;
}