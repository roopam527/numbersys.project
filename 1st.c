#include<stdio.h>
void main()
{
int a[10][100],n,k,i,l=0,j,f[10],v;
printf("Enter the number of test");
scanf("%d",&k);
for(i=0;i<k;i++)
{
    l=0;
    printf("Enter the Elements");
    scanf("%d",&n);
    printf("Enter the numbers");
    for(v=0;v<n;v++)
    {
    scanf("%d",&a[i][v]);
    }
    for(j=n-1;j>=n/2+1;j--)
    {
        if(a[i][l]!=a[i][j])
        {
        f[i]=1;
        break;
        }
        else
            l++;
    }

}
for(i=0;i<k;i++)
{
    if(f[i]==1)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }

}
}
