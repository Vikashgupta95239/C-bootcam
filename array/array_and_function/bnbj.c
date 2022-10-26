#include <stdio.h>
#include <conio.h>
int main(){
textcolor(BLUE);
cprintf("Hello World!\n"); // cprintf specially use for console(screen)
textcolor(RED+128); // 128 is value of BLINK
cprintf("Blinking Text");
getch();
return 0;
}