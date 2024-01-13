#include<stdio.h>
int main(){
    int n,m,i,j,temp;
    printf("enter the size of the matrix : \n");
    scanf("%d%d",&n,&m);
    int arr[n][m];
    printf("enter the elements of the matrix : \n");
    for(i=0;i<=n-1;i++)
{
    for(j=0;j<=m-1;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}  
printf("the elements of the matrix is : \n");
    for(i=0;i<=m-1;i++)
{
    for(j=i;j<=n-1;j++)
    {  
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
    }
}
   for(i=0;i<=m-1;i++)
{
    for(j=0;j<=n-1;j++)
    {  
 printf("%d\t",arr[i][j]);
    }    
    printf("\n");
}  
return 0;
}