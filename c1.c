#include <stdio.h>
 #include <malloc.h>     
 #include <unistd.h>
  extern void arc(void);    
  int ab;            
  int ba = 20;     
int main(int argcs, char argvs) 
  { 
      printf("Address of main: %p\nAddress of stack: %p\n", main, arc);
      arc();
      printf("Address of ba: %p\nAddress of ab: %p\n", & ba, & ab);
      while (1) {}
  }
  void arc(void)
  {
      static int level_l = 0;       
      auto int stackvar;        
if (++level_l == 5)          
          return;
printf("\tStack level %d: address of stack_var: %arc\n", level_l, & stackvar);
      arc();                    
  }

