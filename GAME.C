#include<stdio.h>
#include<conio.h>
void board(char t[]);
int check(char T[]);
void main()
	{
	int i=0,n,r=100,p=1;
	char TOT[9]={'1','2','3','4','5','6','7','8','9'};
	char a='X';
	for(;i<9;i++)
		{
		clrscr();
		board(TOT);
		printf("\n\n\n Player1=X\nPlayer2=O");
		printf(" \n player %d turn.",p);
		printf("\nEnter number:");
		scanf("%d",&n);
		TOT[n-1]=a;
		if(a=='X')
			{
			a='O';
			}
		else
			{
			a='X';
			}
		r=cheak(TOT);
		if(r==1||r==2)
			{
			clrscr();
			board(TOT);
			printf("\nPlayer %d win",r);
			break;
			}
		if(p==1)
			{
			p=2;
			}
		else
			{
			p=1;
			}
		if(i==8)
			{
			clrscr();
			board(TOT);
			printf("\n\nMatch Draw");
			break;
			}
		}
	getch();
	}
void board(char t[])
	{
	printf("_________________");
	printf("\n|| %c || %c || %c ||",t[0],t[1],t[2]);
	printf("\n|---------------|");
	printf("\n|| %c || %c || %c ||",t[3],t[4],t[5]);
	printf("\n|---------------|");
	printf("\n|| %c || %c || %c ||",t[6],t[7],t[8]);
	printf("\n|---------------|");
	}

int cheak(char T[])
	{
	int i=0,n=0;
	for(;n<3;n++)
		{
		if(T[i]=='X'&&T[i+1]=='X'&&T[i+2]=='X')
			{
			return 1;
			}
		i=i+3;
		}

	i=0;
	for(n=0;n<3;n++)
		{
		if(T[i]=='X'&&T[i+3]=='X'&&T[i+6]=='X')
			{
			return 1;
			}
		i++;
		}
	if(T[0]=='X'&&T[4]=='X'&&T[8]=='X')
		{
		return 1;
		}
	if(T[2]=='X'&&T[4]=='X'&&T[6]=='X')
		{
		return 1;
		}

	i=0;
	for(n=0;n<3;n++)
		{
		if(T[i]=='O'&&T[i+1]=='O'&&T[i+2]=='O')
			{
			return 2;
			}
		i=i+3;
		}

	i=0;
	n=0;
	for(;n<3;n++)
		{
		if(T[i]=='O'&&T[i+3]=='O'&&T[i+6]=='O')
			{
			return 2;
			}
		i++;
		}
	if(T[0]=='O'&&T[4]=='0'&&T[8]=='O')
		{
		return 2;
		}
	if(T[2]=='O'&&T[4]=='O'&&T[6]=='O')
		{
		return 2;
		}
	return 0;
	}