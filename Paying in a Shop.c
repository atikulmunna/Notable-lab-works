#include<stdio.h>
int main()
{
    int bill,note500,note100,note50,note20,note10,note5,note2,note1,sum,temp;

    printf("Total Bill:");
    scanf("%d",&bill);
    printf("Enter the amount of notes you have:\n\n");
    printf("500=");
    scanf("%d",&note500);
    printf("100=");
    scanf("%d",&note100);
    printf("50=");
    scanf("%d",&note50);
    printf("20=");
    scanf("%d",&note20);
    printf("10=");
    scanf("%d",&note10);
    printf("5=");
    scanf("%d",&note5);
    printf("2=");
    scanf("%d",&note2);
    printf("1=");
    scanf("%d",&note1);

    sum=500*note500 + 100*note100 + 50*note50 + 20*note20 + 10*note10 + 5*note5 + 2*note2 + 1*note1;

    if(sum>=bill)
    {
        printf("Farhan have enough money to pay the bill. He can do so by providing following number of notes:\n");
        temp=bill/500;

        if(temp>=note500)
        {
            printf("500 = %d\n",note500);
            bill=bill-(note500*500);
        }
        else if(temp<=note500)
        {
            printf("500 = %d\n",temp);
            bill = bill-(temp*500);
        }

        temp=bill/100;

        if(temp>=note100)
        {
            printf("100 = %d\n",note100);
            bill = bill-(note100*100);
        }
        else if(temp<=note100)
        {
            printf("100 = %d\n",temp);
            bill = bill - (temp*100);
        }

        temp=bill/50;

        if(temp>=note50)
        {
            printf("50 = %d\n",note50);
            bill = bill - (note50*50);
        }
        else if (temp<=note50)
        {
            printf("50 = %d\n",temp);
            bill = bill - (temp*50);
        }

        temp=bill/20;

        if(temp>=note20)
        {
            printf("20 = %d\n",note20);
            bill = bill - (note20*20);
        }
        else if(temp<=note20)
        {
            printf("20 = %d\n",temp);
            bill = bill -(temp*20);
        }

        temp=bill/10;

        if(temp>=note10)
        {
            printf("10 = %d\n",note10);
            bill = bill -(note10*10);
        }
        else if (temp<=note10)
        {
            printf("10 = %d\n",temp);
            bill = bill -(temp*10);
        }

        temp=bill/5;

        if(temp>=note5)
        {
            printf("5 = %d\n",note5);
            bill = bill - (note5*5);
        }
        else if(temp<=note5)
        {
            printf("5 = %d\n",temp);
            bill = bill - (temp*5);
        }

        temp=bill/2;

        if(temp>=note2)
        {
            printf("2 = %d\n",note2);
            bill = bill -(note2*2);
        }
        else if (temp<=note2)
        {
            printf("2 = %d\n",temp);
            bill = bill-(temp*2);
        }

        temp=bill/1;

        if(temp>=note1)
        {
            printf("1 = %d\n",note1);
            bill = bill - (note1*1);
        }
        else if(temp<=note1)
        {
            printf("1 = %d\n",temp);
            bill =bill - (temp*1);
        }

    }

    else
    {
        printf("Farhan does not carry enough money to pay the bill\n");
    }

    return 0;
}

