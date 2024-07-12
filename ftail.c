
FILE*  openr(FILE *f,char *str)
{
    f=fopen(str,"r");
    if(f==NULL)
    {
        printf("opening file ERROR \n");
        exit(1);
    }
    else
    {
        return f;
    }
}
//--------------------------------
void liat(FILE *fic,FILE *fic1,int m){
    if(m==0)m=10;
    int n=0;
    int nl;
    int i=0;
    int j;
    char *ligne;
    ligne=(char *)malloc(256*sizeof(char));
    char *ligne1;
    ligne1=(char *)malloc(256*sizeof(char));

    while(!feof(fic))
    {
        fgets(ligne,256,fic);  // jiste pour recuperer le ligne
        n=n+1;
    }
    nl=n-2-m;
    for (i=0;i<n-2;i++)   
    {    
        fgets(ligne1,256,fic1);
        if (i<nl-1) 
        {
            printf("");
        }
        if (i>=nl) 
        {
            printf("%s",ligne1);
        }
   }

   free(ligne);
   free(ligne1);
   }

