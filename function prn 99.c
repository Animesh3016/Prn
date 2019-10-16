#include <stdio.h>
#include <stdlib.h>
long long int p;
long long int getprn();
int displayprn();
int main()
{long long int p;
p=getprn();
displayprn();
return p;
 
}
long long int getprn()
{long long int prn;
printf("enter the prn ");
scanf("%lld",&prn);
return prn;
}
int displayprn()
{pritnf("the prn is %lld",p);
}
