#include<stdio.h>
int main() {
  char a[100];
  int i;
  printf("enter the new string\n");
  scanf("%[^\n]s",a);
  for(i=0;a[i]!='\0';i++)
  {
      if(a[i-1]!=' '||a[i]!=' ')
      printf("%c",a[i]);
  }
  return 0;
}
