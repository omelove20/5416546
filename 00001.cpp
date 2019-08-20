#include<stdio.h>
#define PI 22.0/7

float fac(float n){
   float fact = 1, i;
   for(i=1; i<=n; i++)
      fact = fact * i;
   return fact ;
}

float pow(float base,float exponent){
	float i,pow=1;
    for(i=1;i<=exponent;i++){
       pow = pow * base;    }
//       printf("*****%f****\n",pow);
   return pow;	
}

float mysin(float x){
	float n,sum=0;
	printf("Enter number ");
	scanf("%f",&n);
	for(int i=1;i<=n;i++){
		if(i%2==0){
			sum=sum-(pow(x,i)/fac(i));
			printf("%f\t%f\t%f\n",sum,pow(x,i),fac(i));
		}else{
			sum=sum+(pow(x,i)/fac(i));
			printf("%f\t%f\t%f\n",sum,pow(x,i),fac(i));
		}
	}
	
	return sum;	
}

 main(){
	float ans;
//	printf("%f",PI);
	ans=mysin(PI/2);
	printf("%8.2f\n",ans);
	
}
