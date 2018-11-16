#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "russian");
	int i,q[5],w[5],e[5];
	FILE *a,*b,*c,*d;
if(!(a = fopen("a.txt","r")))
 { printf("Невозможно открыть файл\n");
  return 0; }
  for (i=0; i<5; i++) {
 fscanf(a,"%d",&q[i]);}
 fclose(a);
 if(!(b = fopen("b.txt","r")))
 { printf("Невозможно открыть файл\n");
 return 0; }
  for (i=0; i<5; i++) {
 fscanf(b,"%d",&w[i]);}
 fclose(b);
 if(!(c = fopen("c.txt","r")))
 { printf("Невозможно открыть файл\n");
  return 0;}
  for (i=0; i<5; i++) {
 fscanf(c,"%d",&e[i]);}
 fclose(c);
 if(!(d = fopen("d.txt", "w+t")))  {
             printf("Невозможно создать файл\n");
             return 0;}
 for (i=0; i<5; i++) {
  fprintf(d,"%d ",q[i]);
  fprintf(d,"%d ",w[i]);
  fprintf(d,"%d ",e[i]);
}
fclose (d);
puts ("Числа записаны в файл");
}

