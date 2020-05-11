 #include "syscall.h" 
 #define THIS "aaa" 
 #define THAT "bbb" â
¨const int N = 10;¨
void puts(const char *s) 
{ â
¨const char *p;
 for (p = s; *p != â'\0'; p++)
 PutChar(*p);
 } â
¨void f(void *arg) 
{ â
¨const char *s = arg; 
int i;â
¨for (i = 0; i < N; i++)
 puts(s); â
¨ThreadExit();
 } â
¨
int main ()
 { 
ThreadCreate(f, THIS);
 f(THAT); 
ThreadExit(); 
} 
