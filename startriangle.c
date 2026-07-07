#include<stdio.h>
int main(){
    int n;
    printf("enter no. of rows:");
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++){        // पंक्ति (row)
        for(int j=1; j<=i; j++){    // कॉलम (column) – i के बराबर स्टार
            printf("*");
        }
        printf("\n");
    }
    return 0;
}