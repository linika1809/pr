#include<stdio.h>
#include<conio.h>

void main()
{
	int i,l,t,a,w[5],s=0;
	clrscr();

	printf("Number of Walls- ");
	scanf("%d",&l);

	printf("Height of Walls");

	for(i=0;i<l;i++)
	{
		scanf("%d",&w[i]);

		if(w[i]==0 && i!=l-1)
		{
		       s++;
		}
	}

	for(i=0;i<l;i++)
	{
		if(w[i]!=0)
		{
			if(i==0)
			{
				t=w[i];
			}
			else if(t>w[i])
			{
				t=w[i];
			}
		}
	}

	a=s*t;

	printf("%d",a);

	getch();
}