#include<stdio.h>
int main() {
    int a[100];
    int t,n;
    int c = 0;
    printf("enter size of array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    printf("enter the target: ");
    scanf("%d",&t);
    for(int i=0;i<n-1;i++){
        if (a[i]==t){
            c=1;
            break;}
        
        if  c==1;{
            printf("element found");
        }
        else
           printf("not found");

    }
    return 0;
}