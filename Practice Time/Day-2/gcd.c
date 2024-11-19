#include<stdio.h>

int recursive(int a,int b)
{
    if(b==0)
    {
        return a;
        return recursive(b,a%b);
    }
}


int iterative(int a,int b)
{
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main()
{
    int x,y;
    printf("Enter the two integers numbers :");
    scanf("%d%d",&x,&y);

    int gcd1 =recursive(x,y);
    printf("GCD (using recursive) :%d\n",gcd1);

    int gcd2 =iterative(x,y);
    printf("GCD (using iterative) :%d",gcd2);

    return 0;
}