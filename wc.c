
void wcl(FILE *fic){
    char *ligne,*ligne1;
    ligne=(char *)malloc(256*sizeof(char));
    ligne1=(char *)malloc(256*sizeof(char));
    int n=0;// nombre de ligne
   while(!feof(fic))
    {
        fgets(ligne,256,fic);  // jiste pour recuperer le ligne
        n=n+1;
    }
    printf("LineNumbers:%d \n",n-1);


   free(ligne);
   free(ligne1);
}
void wcc(FILE *fic1){
    int m=0;// nombre de caractere
    char a;
    while((a=fgetc(fic1))!=EOF)
    {
       // a=fgetc(fic1) ;
        m=m+1;
    }
    printf("CharNumbers:%d \n",m);
} 
void wcw(FILE *fic2){
    int w=0;// nombre de word
    int c;
    char a,a1,b1;
    a1=' ';
    b1='\t';
    int d=(int)(a1);
    int d2=(int)(b1);
    while((a=fgetc(fic2))!=EOF)
    {
        c=(int)(a);
        if(c==d )
            w=w+1;
        else if (c==d2)
            w=w+1; 
    }
    printf("WordNumbers:%d \n",w);
    
}


//------------------------



void arg(FILE *fic,FILE *fic1,FILE *fic2,int argc,char *argv[]){
    int i;
    for (i=0;i<argc;i++){
        if ((strcmp(argv[i],"-c"))==0)
            wcc(fic);
        else if ((strcmp(argv[i],"-l"))==0)
            wcl(fic);
        else if ((strcmp(argv[i],"-w"))==0)
            wcw(fic);
        else if ((strcmp(argv[i],"-wl"))==0 || (strcmp(argv[i],"-lw"))==0)
        {
            wcw(fic1);
            wcl(fic2);
        }
         else if ((strcmp(argv[i],"-wc"))==0 || (strcmp(argv[i],"-cw"))==0)
        {
            wcw(fic1);
            wcc(fic2);
        }
         else if ((strcmp(argv[i],"-lc"))==0  || (strcmp(argv[i],"-cl"))==0)
        {
            wcl(fic1);
            wcc(fic2);
        }

         else if ((strcmp(argv[i],"-lcw"))==0 || (strcmp(argv[i],"-lwc"))==0 || (strcmp(argv[i],"-clw"))==0 || (strcmp(argv[i],"-cwl"))==0 || (strcmp(argv[i],"-wcl"))==0 || (strcmp(argv[i],"-wlc"))==0)
        {
            wcl(fic);
            wcc(fic2);
            wcw(fic1);
        }
    }
    int ok=0;
     for (i=0;i<argc;i++){
        
        if ((strcmp(argv[i],"-c"))!=0
            && (strcmp(argv[i],"-cl"))!=0
            && (strcmp(argv[i],"-lc"))!=0
            && (strcmp(argv[i],"-wc"))!=0
            && (strcmp(argv[i],"-cw"))!=0
            && (strcmp(argv[i],"-wl"))!=0
            && (strcmp(argv[i],"-lw"))!=0
            && (strcmp(argv[i],"-lwc"))!=0
            && (strcmp(argv[i],"-lcw"))!=0
            && (strcmp(argv[i],"-clw"))!=0
            && (strcmp(argv[i],"-wcl"))!=0
            && (strcmp(argv[i],"-lwc"))!=0
            )

            ok=1;
        }
        if (ok==1){
            printf("ONLY THE FOLLOWING  OPTION IS OK \n");
            printf(" -c CharNumbers \n -l LineNumbers \n -w WordNumbers \n");
            }
}