#include<stdio.h>

struct Date
{

int day;
int month;
int year;

}D;
void initDate(struct Date* ptrDate)
{
ptrDate->day=0;
ptrDate->month=0;
ptrDate->year=0;
}
void printDateOnConsole(struct Date* ptrDate)
{
printf("%d : %d : %d",ptrDate->day,ptrDate->month,ptrDate->year);
}
void acceptDateFromConsole(struct Date* ptrDate)
{
printf("Enter day, date and month\n");
scanf("%d%d%d",&ptrDate->day,&ptrDate->month,&ptrDate->year);
}

int menu()
{
int ch;
printf("Enter choices\n");
printf("1.Default date\n");
printf("2.print date\n");
printf("3.Enter values\n");
scanf("%d",&ch);
return ch;
}

int main()
{
int ch;

// using while loop

// while((ch=menu())!=0)
// {
// switch (ch)
// {
// case 1:
// initDate(&D);
// printf("\n");
// break;
// case 2:
// printDateOnConsole(&D);
// printf("\n");
// break;

// case 3:
// acceptDateFromConsole(&D);
// printf("\n");
// break;
// default:printf("Enter correct choice");
// printf("\n");
// break;
// }

// }

// using do while loop

do{
    switch (ch)
{
case 1:
initDate(&D);
printf("\n");
break;
case 2:
printDateOnConsole(&D);
printf("\n");
break;

case 3:
acceptDateFromConsole(&D);
printf("\n");
break;
default:printf("Enter correct choice"); break;
printf("\n");
break;
}
}while((ch=menu())!=0);

return 0;
}