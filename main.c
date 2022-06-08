#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char op,enter; double sum=0.0,temp=0.0;
    printf("Welcome Ezcalc!\n");
    system("title EZcalc");
    printf("for manual, please input '?' \n");
        do{
        printf("We need an operater\n\7");
        scanf("%c%c",&op,&enter);
        if((op!='0'&&enter!='0')&&(op!='?'&&enter!='?'))
            {
            printf("need an number\n");
            scanf("%lf",&temp);
            }
            if(op=='+'||op=='-'||op=='/'||op=='*'||op=='\n'||op=='?'||op=='i'||op=='p'||op=='0'||op=='!')
                {

                    if(op=='\n')
                    {
                        op=enter;
                        enter='\n';
                    }
                    if(op=='0')
                    {
                        op='*';
                        temp=0;
                        sum=0;
                    }
                    if(op=='+')
                        {sum+=temp;
                        printf ("\033c");
                        printf("now was %lf\n",sum);}
                    if(op=='-')
                       {sum-=temp;
                       printf ("\033c");
                        printf("now was %lf\n",sum);}
                    if(op=='*')
                        {sum*=temp;
                        printf ("\033c");
                        printf("now was %lf\n",sum);}
                        if(op=='/')
                        {sum/=temp;
                         printf ("\033c");
                        printf("now was %lf\n",sum);}
                         if(op=='i')
                            {
                                sum=pow(sum,temp);
                                 printf ("\033c");
                                printf("now was %lf\n",sum);
                            }
                         if(op=='p')
                       {
                           sum=pow(sum,1/temp);
                           printf ("\033c");
                            printf("now was %lf\n",sum);
                        }
                       if(op=='!')
                       {
                          double inte,i=1,xsum=1;
                           inte=temp/1.00;
                           for(i=1;i<=inte;i++)
                           {
                               xsum*=i;
                           }
                        printf("how to use your answer %lf\n",xsum);
                         scanf("%c%c",&op,&enter);
                         temp=xsum;
                          if(op=='+'||op=='-'||op=='/'||op=='*'||op=='\n'||op=='?'||op=='i'||op=='p'||op=='0'||op=='!')
                {

                    if(op=='\n')
                    {
                        op=enter;
                        enter='\n';
                    }
                    if(op=='0')
                    {
                        op='*';
                        temp=0;
                        sum=0;
                    }
                    if(op=='+')
                        {sum+=temp;
                         printf ("\033c");
                        printf("now was %lf\n",sum);}
                    if(op=='-')
                       {sum-=temp;
                        printf ("\033c");
                        printf("now was %lf\n",sum);}
                    if(op=='*')
                        {sum*=temp;
                         printf ("\033c");
                        printf("now was %lf\n",sum);}
                        if(op=='/')
                        {sum/=temp;
                         printf ("\033c");
                        printf("now was %lf\n",sum);}
                }
                         if(op=='i')
                            {
                                sum=pow(sum,temp);
                                 printf ("\033c");
                                printf("now was %lf\n",sum);
                            }
                         if(op=='p')
                       {
                           sum=pow(sum,1/temp);
                             printf ("\033c");
                            printf("now was %lf\n",sum);
                        }
                       }
                        if(op=='?')
                        {
                            char at;
                             printf ("\033c");
                            printf("don't worry, your data was still keeping here\n");
                            printf("it's an caculatior programmed by c launage\n");
                            printf("now version you can use + - * and /\n");
                            printf("(plus,subtraction,mutiple and division\n");
                            printf("Just type the operator and enter\n");
                            printf("but don't type many rows of enter that may caused crash\n");
                            printf("it's cannary, bro!\n");
                            printf("also an i and p option\n");
                            printf("for involution and prescription\n");
                            printf("and 0 for zero sum, ! to calculate factorial\n");
                            printf("but it may  only provide non exact numbers\n");
                            printf("then type your number haha\n");
                            printf("the answer will say on the top\n");
                            printf("press any key to leave this manual\n");
                            printf("except @ that will show my info\n");
                            scanf("%c%c",&at,&enter);
                             printf ("\033c");
                            if(at=='@'||enter=='@')
                            {
                                 printf ("\033c");
                                printf("my email was Markpeng0315@qq.com\n");
                                printf("my tencent QQ was 894611735\n");
                                printf("twitter and facebook I trully have, but never see \n");
                                printf("these may be markpeng0315 or pzy2002\n");
                                printf("I also have an personal web at console.markpeng.top\n");
                                printf("http: port 5001 and https port was 18752\n");
                                printf("seems them, you could also send me issue on github\n");
                                printf("donate: https://paypal.me/MarkPeng0315");
                                printf("press anykey back to main calc\n");
                                scanf("%c",&enter);
                                printf ("\033c");
                            }

                        }
                }
            else
               {printf("error");
                break;}


        }while(1);

}
