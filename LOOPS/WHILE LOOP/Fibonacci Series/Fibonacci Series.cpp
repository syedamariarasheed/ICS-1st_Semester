//Fibonacci Series using while loop.
#include <stdio.h>
#include <conio.h>
int main()
{
	int num,i=0,t1 = 0,t2 = 1, nextTerm;
	printf ("\nEnter the number of terms:");
	scanf ("%d",&num);
	printf ("\nFirst %d terms of Fibonacci series are:-",num);
	while (i<num)
	 {
	 	if (i<=1)
	 	 {
	 	 	nextTerm = i;
		 }
		else
		 {
		 	nextTerm = t1 + t2;
			t1 = t2;
		 	t2 = nextTerm;
		 }
		printf ("\n%d",nextTerm); 
		i++;
	 }
	getch();
	return 0; 
}
