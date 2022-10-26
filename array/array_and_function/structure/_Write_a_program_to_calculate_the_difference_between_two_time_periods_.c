#include<stdio.h>
struct time
{
    int sec;
    int hour;
    int minute;
};
void difference(struct time s,struct time e,struct time diff)
{
while(s.sec<e.sec)
{
    s.sec=s.sec+60;
    s.minute--;
    
}
diff.sec=s.sec-e.sec;
while(s.minute<e.minute)
{
    s.minute=s.minute+60;
    s.hour--;
}
diff.minute=s.minute-e.minute;
diff.hour=s.hour-e.hour;
printf("start different -->%d:%d:%d\n",diff.hour,diff.minute,diff.sec);

}
int main()
{
       struct time s,e,diff;
    
    printf("enter the start time in sequence hour minute second\n");
    scanf("%d%d%d",&s.hour,&s.minute,&s.sec);
    printf("enter the end time in sequence hour minute second\n");
    scanf("%d%d%d",&e.hour,&e.minute,&e.sec); 
    printf("start time -->%d:%d:%d\n",s.hour,s.minute,s.sec);
    printf("start end -->%d:%d:%d\n",e.hour,e.minute,e.sec);
    difference( s,e,diff);
  
    
}