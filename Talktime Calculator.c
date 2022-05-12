#include<stdio.h>
int main()
{
    float time,bill5,temp1,bill30,temp2,bill60,temp3,bill_rest,total;
    char percentage=37,ch=176,Operator[10];

    printf("%c %c %c %c %c Welcome to Talk Time Calculator %c %c %c %c %c\n\n",ch,ch,ch,ch,ch,ch,ch,ch,ch,ch);
    printf("Hello Stranger, Which operator you are using?");
    printf("\nI am a user of: ");
    scanf("%s",&Operator);

    printf("\nWelcome to the fastest 4G network in the country!\nLet us remind you the current call rate of %s Postpaid-\n",Operator);
    printf("\nTK 0.30/min for first 5 minutes.\nTK 0.50/min for next 30 minutes.");
    printf("\nTK 0.75/min for next 60 minutes/1 hour.\nTK 1.00/min thereafter.\n");

    printf("\nHow long have you talked over voice call today?\n(Kindly Provide the duration in Minutes)");
    printf("\n\nI talked for: ");
    scanf("%f",&time);

    if(time<=5)
    {
        bill5=(time*0.30)*1.15;
        printf("\nYour total bill is %.2f BDT(Including 15%c VAT)\n\n",bill5,percentage);
    }

    else if((time>5)&&(time<=30))
    {
        bill5=(5*0.30);
        temp1=(time-5);
        bill30=(temp1*0.50);
        total=1.15*(bill5+bill30);
        printf("\nYour total bill is %.2f BDT(Including 15%c VAT)\n\n",total,percentage);
    }

    else if((time>30)&&(time<=60))
    {
        temp1=(time-5);
        if(temp1<=30)
        {
            bill5=(5*0.30);
            bill30=(temp1*0.50);
            total=1.15*(bill5+bill30);
            printf("\nYour total bill is %.2f BDT(Including 15%c VAT)\n\n",total,percentage);
        }
        else if(temp1>30)
        {
            bill5=(5*0.30);
            bill30=(30*0.50);
            temp2=time-5-30;
            bill60=(temp2*0.75);
            total=1.15*(bill5+bill30+bill60);
            printf("\nYour total bill is %.2f BDT(Including 15%c VAT)\n\n",total,percentage);

        }

    }

    else if(time>60)
    {
        temp1=(time-5);
        temp2=time-5-30;
        if(temp2<=60)
        {
            bill5=(5*0.30);
            bill30=(30*0.50);
            bill60=(temp2*0.75);
            total=1.15*(bill5+bill30+bill60);
            printf("\nYour total bill is %.2f BDT(Including 15%c VAT)\n\n",total,percentage);
        }
        else if(temp2>60)
        {
            bill5=(5*0.30);
            bill30=(30*0.50);
            bill60=(60*0.75);
            temp3=time-5-30-60;
            bill_rest=(temp3*1.00);
            total=1.15*(bill5+bill30+bill60+bill_rest);
            printf("\nYour total bill is %.2f BDT(Including 15%c VAT)\n\n",total,percentage);

        }

    }

    return 0;

}
