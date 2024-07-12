#include"tail.h"
#include"ftail.c"
int main(int argc,char *argv[])
{
    FILE *fic,*fic1,*f;
    fic=openr(fic, argv[argc-1]);  // pour compter le nombre de ligne
    fic1=openr(fic, argv[argc-1]); // pour afficher le m dernier ligne selon l argument
    f=openr(fic, argv[argc-1]);
    int m=atoi(argv[1]);
    liat(fic,fic1,m);
    fclose(fic);
    fclose(fic1);
    
}

