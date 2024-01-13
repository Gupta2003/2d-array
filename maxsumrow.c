#include <stdio.h>
int main() {
    int i,j,n,m,k;
    printf("enter the number of rows and colomns : ");
    scanf("%d%d",&n,&m);
    int arr[n][m];
    int sum[n];
    printf("enter first matrix elements: \n");
    for(i=0;i<=n-1;i++){
        sum[i]=0;
        for(j=0;j<=m-1;j++){
            printf("enter %d%d element",i,j);
            scanf("%d",&arr[i][j]);
            sum[i]=sum[i]+arr[i][j];
        }
    }
    int max=sum[0];
    for(i=1;i<=n-1;i++){
            if(max<sum[i]){
                max=sum[i];
                k=i;
            }
    }
    printf("the row %d have the maximum sum which is %d",max,k+1);
    return 0;
}