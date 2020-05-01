#include<stdio.h>
struct cricketer
{
char name[20],country[20];
float avg;
}c[20];
void main()
{
int i;
char n[20];
for(i=0;i<20;i++)
{
printf("\n Enter player name, country name, batting average for player %d-",i+1);
scanf("%s%s%f",c[i].name,c[i].country,&c[i].avg);
}
printf("\n Enter players name to be searched-");
gets(n);
for(i=0;i<20;i++)
{
if(strcmp(n,c[i].name)==0)
{
printf("\nPlayer name-%s\nCountry name-%s\nBatting average-%f",c[i].name,c[i].country,c[i].avg);

}
}
}
