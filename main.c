#include <stdio.h>
int main(void){double km,rate;int age;printf("Distance km, fare per km, passenger age: ");if(scanf("%lf %lf %d",&km,&rate,&age)!=3||km<0||rate<0||age<0)return 1;double fare=km*rate;if(age<12||age>=60)fare*=.5;printf("Fare: %.2f\n",fare);return 0;}
