#include<stdio.h>
#include<string.h>
struct book
{
int bookid;
char title[30];
 float price;
};
void display(struct book b)
{
   printf("%d\n%s\n%f\n",b.bookid,b.title,b.price);
}
struct book input()
{
  struct book b;
  printf("enter book id,title,and price of a book");
  scanf("%d",&b.bookid);
  fflush(stdin);
  fgets(b.title,20,stdin);
  b.title[strlen(b.title)-1]='\0';
  scanf("%f",&b.price);
  return b;
}
void sortbyprice(struct book b[],int size)
{
  int r,i;
  struct book temp;
  for(r=1;r<=size-1;r++)
  {
    for(i=0;i<=size-1-r;i++)
    {
      if(b[i].price>b[i+1].price)
      {
        temp=b[i];
       b[i]=b[i+1];
       b[i+1]=temp;

      }
    }
  }
}
// int main()
// {
//   struct book b1={1,"cpp",340.0f};
//   printf("\n ");
//   display(b1);
//   struct book b2;
//   b2=input(); 
//   display(b2);
//   return 0; 
// }
int main()
{
  struct book b[5];
  int i;
  for(i=0;i<=4;i++)
  {
    b[i]=input();
  }
  sortbyprice(b,5); 
   for(i=0;i<=4;i++)
  {
   display(b[i]);
  }
  printf("\n ");
  return 0; 
}

// void display(struct employee b )
// {
//   printf("%d \n %s \n%f \n",b.employee id)
// }
// int main()
// {
//      struct employee b1={1,"cpp",9785.8};

//     printf("%.01f \n",b1.salary);
//     printf("%d \n",b1.id);
//       printf("%s \n",b1.name);
//       printf("enter the id ,name ,salary of employee");
//       scanf("%d",b2.id);
//     //   fflush(stdin);
//       gets(b2.name);
//       scanf("%f",&b2.salary);
//        printf("%.01f \n",b2.salary);
//     printf("%d \n",b2.id);
//       printf("%s \n",b2.name);
