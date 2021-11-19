#ifndef EXERCICE6_H_INCLUDED
#define EXERCICE6_H_INCLUDED



#endif // EXERCICE6_H_INCLUDED
int exercice6()
{
    int Q,FT=25;
    float P, M;
    printf("Quantité:");
    scanf("%d",&Q);
    printf("Prix:");
    scanf("%d",&P);
    M=Q*P;
    printf("Le montant de la facturation est :%2.f DH",M);
    if (M<=200)
    {
        M=M+FT;
        printf("Le montant de la facturation est :%2.f DH",M);
    }
}
