#include<stdio.h>
int main() {
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    int count=0;

    for (int i=1; i<n; i++) 
    {
        if(n%i==0) {
            count++;
        }
    }
    if(count==2) {
        printf("prime");
    }
    else
    printf("composite");

    return 0;
}