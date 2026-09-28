/*Ordinal Date Printer (DD/MM/YYYY to Text)*/
#include<stdio.h>
int main()
{
	int d,m,y;
	printf("enter date in the format of DD/MM/YYYY\n");
	printf("enter date\n");
	scanf("%d",&d);
	printf("enter month \n");
	scanf("%d",&m);
	printf("enter year\n");
	scanf("%d",&y);
	int leap=0;
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
	{
		leap=1;
	}
	if(d>0 && d<=31)
	{
		if((m==1 || m==3||m==5||m==7||m==8||m==10|m==12)&& d>31)
		{
			printf("WRONG INPUT");
			return 0;
		}
		else if ((m==4||m==6||m==9||m==11)&& d>30)
		{
			printf("WRONG INPUT");
			return 0;
		}
		else if (m==2)
		{
			if(leap==1 && d>29)
			{
				printf("WRONG INPUT");
				return 0;
			}
			else if(leap==0 && d>28)
			{
				printf("WRONG INPUT");
				return 0;
			}
		}

	}
	else
	{
		printf("WRONG INPUT");
		return 0;
	}
	switch (d)
	{
	case 1:
	case 21:
	case 31:
		printf("%dst ",d);
		break;
	case 2:
	case 22:
		printf("%dnd ",d);
		break;
	case 3:
	case 23:
		printf("%drd ",d);
		break;
	default:
		printf("%dth ",d);
	}
	if (m>0 && m<=12)
	{
		switch (m)
		{
		case 1:
			printf("January ");
			break;
		case 2:
			printf("February ");
			break;
		case 3:
			printf("March ");
			break;
		case 4:
			printf("April ");
			break;
		case 5:
			printf("May ");
			break;
		case 6:
			printf("June ");
			break;
		case 7:
			printf("July ");
			break;
		case 8:
			printf("August ");
			break;
		case 9:
			printf("September ");
			break;
		case 10:
			printf("October ");
			break;
		case 11:
			printf("November ");
			break;
		case 12:
			printf("December ");
		}
	}
	printf("%d",y);
	return 0;
}