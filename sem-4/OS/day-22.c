#include <stdio.h>
#include <unistd.h>
#include <signal.h>
void process()
{
printf("\n Process1 Running.......");
}
void process2()
{
printf("\n Process2 Running");
}
void alarm_handler(int sig)
{
process2();
}
int main()
{
signal (SIGALRM,alarm_handler);
while(1)
{
process();
alarm (5);
sleep(5);
}
return 0;
}
