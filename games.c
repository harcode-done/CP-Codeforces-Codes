#include<stdio.h>
int main(){
    int n=0;
    scanf("%d",&n);
    int arr[n][2];
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&arr[i][j]);

        }

    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i][0]==arr[j][1]) count++;
            if(arr[i][1]==arr[j][0]) count++;
        }

    }
    printf("%d",count);

    return 0;
}