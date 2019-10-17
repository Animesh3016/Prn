#include<stdio.h>
long long int prn;
void getprn()
{printf("enter the prn ");
scanf("%lld",&prn);
}
void display()
{printf("the prn is %lld",prn);
}

int main()
{getprn();
display();
return 0;
}
