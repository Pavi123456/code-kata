include<stdio.h>
void main()
{
    int a[100],a,i,j,k;
    printf("Enter the number N:");
    scanf("%d",&a);
    printf("\n Enter the array:");
    for(i=0;i<a;i++)
    {
     scanf("%d",&a[i]);
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            for(k=0;k<a;k++)
            {
    if(a[i]+a[j]==a[k]&&(i<j)&&(j<k)&&(i<k))
                {
      printf("%d %d %d\n",a[i],a[j],a[k]);
      }
            }
        }
    }
}
