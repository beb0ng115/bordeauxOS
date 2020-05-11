#include "syscall.h"
void print ( char c , int n ) {
int i ;
#if 0
for ( i = 0; i < n ; i ++)
{
PutChar ( c + i ) ;
}
PutChar ( â'\n') ;
# endif
}
int main ()
{
print ( â'a' ,4) ;
Halt () ;
}

â
