 
#include<stdio.h>

int main(int argc, char *argv[] ) //int main ( int argc, char *argv[] )
{
    //printf("args %s \n", argv[1]);
    FILE *f1, *f2;
    f1 = fopen(argv[1],"r"); 
    f2 = fopen(argv[2],"r");
    int i=0;
    if (f1==NULL && f2==NULL)
    {
      char  x[1], y[1];
      while (true)//end of file!?!
      {
	fread(x, size_t x, 1,f1);

	//COMPARE THE BYTE !!
	//if  (x[1]!=y[1])
	//    {
	//      printf("byte %d -%d +%d",i x[1], y[1]);
	//byte 33 -174 +230
	//      
	//    }
      }
      
    fclose(f1) ;
    fclose(f2) ;  
    }
    else {
      printf("error loading files via args"); // %s , %s argv[1], argv[2] 
    }
    return 0;
}