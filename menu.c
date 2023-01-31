#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
char get_choice(void);
char get_first(void);
int get_int(void);
void count(void);
int main()
{
	int choice;
	while ((choice = get_choice()) != 'q')
	{
		switch (choice)
		{
		case'a':
			printf("buy low, sell high.\n");
			break;
		case'b':
			putchar('\a');
			break;
		case'c':
			count();
			break;
		default:
			printf("program error!\n");
			break;
		}
	}
	printf("Bye.\n");
	return 0;
}
char get_choice(void)
{
	int ch;
	printf("Enter the letter of your choice : \n");
	printf("a. advice               b. bell\n");
	printf("c. count                q. quit\n");
	ch = get_first();
	while ((ch < 'a' || ch>'c') && ch != 'q')
	{
		printf("please respond with a, b, c or q.\n");
		ch = get_first();
	}
	return ch;
}
void count(void)
{
	int i, n;
	printf("How far do you want to count?Please enter an integer:");
	n = get_int();
	for (i = 1;i <= n;i++)
	  printf("%d\n", i);
	while (getchar() != '\n')
		continue;
}
char get_first(void)
{
	int ch;
	ch = getchar();
	while ((getchar()) != '\n')
		continue;  
	return ch;
}
int get_int(void)
{
	int t,ch;
	while (scanf("%d/n",&t) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is not an integer.\n");
		printf("Please enter an integer value,such as 25,3,or 125:");
	}
	
	return t;

}