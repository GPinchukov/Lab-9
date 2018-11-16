#include<stdio.h> 
#include<conio.h> 
#include<locale.h>
#include<string.h>
#include <windows.h>
char vivod();
char add();
char poisk(char *n);
struct chel
{ char fam[30]; 
  char name[20];  
  char ot[30];
  char number[20];
  char adres[30];
  char voz[3];
} ;
struct chel inf[30];
int records;
int i,k,k1;
char n[20];
int main(){
	setlocale(LC_ALL,"Russian");
	SetConsoleCP (1251);
SetConsoleOutputCP(1251);
FILE *f;
        if(!(f = fopen("chel.dat", "w+b"))) {
             printf("fail nevozmojno otkrit\n");
             return 0;
       }
 records=0;
do
{
add();
puts("dobavit echo? (1/0)");
scanf("%d", &i);
} 
while(i);
do {
printf("1-Vivod\n2-Dobavit\n3-Poisk\n4-Vihod\n");
scanf("%d",&k);
switch(k){
	case 1:
		vivod();
		break;
	case 2:
		add();
		break;
	case 3:
		printf("Vvedite familiu\n");
		scanf("%s",&n);
		poisk(n);
	case 4:
		break;
}
printf("Prodolshit ili viiti? (1/0)\n");
scanf("%d",&k1);}
while(k1);
}

char vivod(){
	FILE *f;
	int i;
    printf("\Spisok:\n");
if(!(f=fopen("chel.dat","r")))
{ printf("Oshibka otkritia faila\n"); return 0;}
for(i=0;i<records;i++)
{ puts(inf[i].fam);
  puts(inf[i].name);
  puts(inf[i].ot);
  puts(inf[i].number);
  puts(inf[i].adres);
  puts(inf[i].voz);
printf("\n\n");
}
fclose(f);
}

char add(){
    FILE *f;
	int i;
	if(!(f = fopen("chel.dat", "a+"))) {
             printf("Nevozmojno sozdat fail\n");
             return 0;
       }
{   printf("Chelovek nomer %d\n",records+1);
	puts("Vvedite familiu");
	fflush(stdin);
	gets(inf[records].fam);
	fputs(inf[records].fam,f);
	fputs ("\n", f);
	puts("Vvedite imia");
	fflush(stdin);
	gets(inf[records].name);
	fputs(inf[records].name,f);
	fputs ("\n", f);
	puts("Vvedite otchestvo");
	fflush(stdin);
	gets(inf[records].ot);
	fputs(inf[records].ot,f);
	fputs ("\n", f);
	puts("Vvedite nomer");
	fflush(stdin);
	gets(inf[records].number);
	fputs(inf[records].number,f);
	fputs ("\n", f);
    puts("Vvedite adres");
	fflush(stdin);
	gets(inf[records].adres);
	fputs(inf[records].adres,f);
	fputs ("\n", f);
	puts("Vvedite vozrast");
	fflush(stdin);
	gets(inf[records].voz);
	fputs(inf[records].voz,f);
	fputs ("\n\n", f);
	records++;
}
fclose(f);
}
char poisk(char *n){
	FILE *f;
	if(!(f = fopen("chel.dat", "r"))) {
    printf("Nevozmojno sozdat fail\n");
    return 0;
}

for(i=0; i<records;i++)
{
    if (!strcmp(inf[i].fam,n))
		{
        printf("\n\nFamilia: %s \n",inf[i].fam);
        printf("Imia: %s \n",inf[i].name);
        printf ("Otchestvo: %s \n",inf[i].ot);
        printf("Nomer: %s \n",inf[i].number);
        printf("Adres: %s \n",inf[i].adres);
        printf ("Vozrast: %s \n",inf[i].voz);
                }
}
fclose(f);
fflush(stdin);
return 0;
}

