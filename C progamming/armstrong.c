#include <stdio.h>
#include <math.h>

main() {
	int a,b,c=0,i,f,e=0;
	scanf("%d",&a);
	//d=a;
	//f=a;
	/*while(f!=0){
		f/=10;
		e++;
	}
	while(a!=0){
		b=a%10;
		a=a/10;
		c+=pow(b,e);
	}*/
	for (i = a; i>0; i/=10) {
		e++;
	}
	for (i = a; i>0; i=i/10) {
		b=i%10;
		c +=pow(b,e);
	}
	if(c==a) {
		printf("%d is an armstrong number",a, c);
	}else {
		printf("%d is not an armstrong number of %d", a, c);
	}
}