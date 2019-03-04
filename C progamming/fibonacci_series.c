   # include <stdio.h>
main()
{
	int i,a=1,b=1,temp;
	printf("%d\n%d\n", a, b);
	for(i=0;i<=50;i++)
	{
	temp=a+b;
	a=b;
	b=temp;
	printf("%d\n",temp);
	
}}



