#include<stdio.h>

void sumDown(int[][]);

void moveDown(int a[][4])
{
    int i,j,k;
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
        {
            if(a[j][i]!=0)
                for(k=j+1;k<4;k++)
            {
                if(a[k][i]==0)
                {
                    int temp=a[k][i];
                    a[k][i]=a[j][i];
                    a[j][i]=temp;
                }
            }

        }
    sumDown(a);
}

void sumDown(int a[4][4])
{
    int i,j;
    for(i=0;i<4;i++)
       {
        for(j=3;j>0;j--)
           {
               if(a[i][j]==a[i-1][j])
               {
                   a[i][j]+=a[i-1][j];
                   a[i-1][j]=0;
                   moveDown(a);
               }
           }
       }
}
