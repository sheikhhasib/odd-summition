#include<stdio.h>
int main()
{
    int h,a,sum,i,k,high,low,j;
    scanf("%d",&h);
    for(a=1;a<=h;a++)
    {
        sum = 0;
        scanf("%d %d",&i,&k);
        if(i<k)
        {
            low = i;
            high = k;
        }
        else
        {
            low = k;
            high = i;
        }
        for(j = low;j<=high;j++)
        {
            if(j %2 !=0)
            {
                sum = sum + j;
            }
        }
        printf("Case %d: %d\n",a,sum);
    }
    return  0;
}
