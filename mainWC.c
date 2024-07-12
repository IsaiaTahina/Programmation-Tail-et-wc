#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "wc.c"
#include "wc.h"

int main(int argc,char *argv[]){

    FILE *fic,*fic1,*fic2;
      fic=fopen("ok","r");
      fic1=fopen("ok","r");
      fic2=fopen("ok","r");
        arg(fic,fic1,fic2, argc,argv);
      fclose(fic);
     fclose(fic1);
      fclose(fic2);


}
 //---------------------------------------     
    /*
    wcl(fic);
    fclose(fic); 

    fic1=fopen("ok","r");
    wcw(fic);
    fclose(fic);

    fic2=fopen("ok","r");
    wcc(fic);
    fclose(fic);
 */
   



