#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

char Operator()
{
    char op;
    int i;
    i=rand()%4+1;
    switch(i)
    {
        case 1: return '+';
        case 2: return '-';
        case 3: return 'x';
        case 4: return '/';
    }
}

void integer()
{
    int x,y;
    char op;
    x=rand()%100+1;
    y=rand()%100+1;
    op=Operator();
    if(op=='-')
        while(x<y)
        {
            x=rand()%100+1;
            y=rand()%100+1;
        }
    cout<<x<<op<<y<<"="<<endl;
}

void fraction()
{
    int a,b,c,d;
    a=rand()%100+1;
    b=rand()%100+1;
    c=rand()%100+1;
    d=rand()%100+1;
    char op;
    while(a<=b||c<=d)
    {
        a=rand()%100+1;
        b=rand()%100+1;
         c=rand()%100+1;
        d=rand()%100+1;
    }
    op=Operator();
    if(op=='-')
        while((b*c-a*d)<0)
        {
            a=rand()%100+1;
            b=rand()%100+1;
            c=rand()%100+1;
            d=rand()%100+1;
        }
    cout<<b<<"/"<<a<<op<<d<<"/"<<c<<"="<<endl;
}

void main()
{
 A:srand(time(0));
    int c,i,n,m;
    cout<< "请输入出题类型"<<endl;
    cout<< "1.整数四则运算"<<endl;
    cout<< "2.分数四则运算"<<endl;
    cin>>i;
    cout<< "请输入出题数目"<<endl;
    cin>>n;
    for(m=1;m<=n;m++)
    {
        if(i==1)
            integer();
        else
            fraction();
    }
    goto A;

}