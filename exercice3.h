#ifndef EXERCICE3_H_INCLUDED
#define EXERCICE3_H_INCLUDED



#endif // EXERCICE3_H_INCLUDED
int exercice3()
{
    int Ag
    char SEX,SF;
    printf("entre l'age")
    scanf("%d",&Ag);
    printf("entre le sex")
    scanf("%c",&SEX);
    printf("entre la situation familiale ");
    scanf("%c",&SF);
    if(SEX=='H')
    {
        if(Ag<20 && SF=='C')
        {
            printf("ne paient pas l'impot");
        }
        else if(Ag>70 && SF=='M')
        {
            printf("ne paient pas l'impot");
        }
    }
    else if(SEX=='F')
    {
         if(Ag<22 && SF=='C')
        {
            printf("ne paient pas l'impot");
        }
        else if(Ag>50 && SF=='M')
        {
            printf("ne paient pas l'impot");
        }
    }
    else
    {
        printf("paient l'impot");
    }

}
