#include<stdio.h>
#include<math.h>
int amstrong(int num)
{
    int original=num,sum=0,n=0;
    while(original!=0)
    {
        original/=10;
        n++;
    }
    original=num;
    while(original!=0)
    {
        int remainder=original%10;
        sum+=pow(remainder,n);
        original/=10;
    }
    return(sum==num);
}
int main()
{
    int start,end;
    printf("start and end:");
    scanf("%d %d",&start,&end);
    printf("amrs from %d to %d are:",start,end);
    for(int i=start;i<=end;i++)
    {
        if(amstrong(i))
        {
            printf("%d\n",i);
        }
    }
    return 0;
}