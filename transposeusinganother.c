#include<stdio.h>
int main(){
    int n,m,i,j;
    printf("enter the size of the matrix : ");
    scanf("%d%d",&n,&m);
    int arr[n][m],brr[m][n];
    printf("enter the elements of the matrix : ");
    for(i=0;i<=n-1;i++)
{
    for(j=0;j<=m-1;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}    
printf("the elements of the matrix is : ");
    for(i=0;i<=m-1;i++)
{
    for(j=0;j<=n-1;j++)
    {
        brr[i][j]=arr[j][i];
        printf("%d",brr[i][j]);
    }
    printf("\n");
}  return 0;
}