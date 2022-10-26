 #include<stdio.h>
 #include<string.h>

 void string_rev(char *str,int n);
 int main()
 {
    char a[1000];
    printf("enter the string ");
    gets(a);
    string_rev(a,1000);
 }
 void string_rev(char *str,int n)
 {
  
printf("%c",*str[0]);

 }