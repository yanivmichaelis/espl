 //TODO asmread asmwrite asmopen asmclose
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
//to make an outputfile called c.txt from the output stream
//	./bcmp a.txt b.txt>c.txt
int main(int argc, char *argv[] ) //int main ( int argc, char *argv[] )
{
    //printf("args %s \n", argv[1]);
    int f1, f2;
    //f1 = fopen(argv[1],"r"); //TODO asmopen
    //f2 = fopen(argv[2],"r"); //TODO asmopen
    f1 = asmopen(argv[1],444);
    f2 = asmopen(argv[2],444);
    int i=0;
    if ((f1!=-1 || f2!=-1)  && argc==3)
    {
      char  x[2], y[2]; //mini buffers
      //int i=0, j=0;
      //while (f1 !=EOF)
      x[1]=0;
      y[1]=0;
      asmread(f2,y,1);
      asmread(f1,x,1);
      while (x[0]!=EOF | y[0]!=EOF ) //end of file!?! 
      {
	
	printf( " %s %s  " ,x,y);
	if (x[0]!=y[0])
	{      
/*	  char msg[80];
	  strcpy (msg,"byte ");	  
	  char * num = malloc(8*sizeof(i));
	  itoa(i,num,10);
	  strcat (msg, num);
	  strcat (msg," -\n");
	  asmwrite(1,msg,length(msg));
*/

	//  printf("byte %d -%s +%s\n",i, x, y); // TODO asmwrite
	  //break;
	}
	i++;
	asmread(f2,y,1);
	asmread(f1,x,1);
      }
      
  //  fclose(&f1) ; //TODO asmopen
  //  fclose(&f2) ; //TODO asmopen
    }
    else {
      char* errmsg="error loading files via args\n";
      asmwrite(1,errmsg, length(errmsg)); // %s , %s argv[1], argv[2]  // TODO asmwrite
  }
    return 0;
}

int length(char *s) 
{
char *t = s;
while(*t) ++t;
return t-s;
}