#ifndef EXERCICE1_H_INCLUDED
#define EXERCICE1_H_INCLUDED



#endif // EXERCICE1_H_INCLUDED
int exercice1(){
int Q;
    float prix unitaire;
    printf("ENTRER LE PRIX UNITAIRE\n");
    scanf("%f",&prix unitaire);
    printf("ENTRER LA QUANTITE COMMANDER\n");
    scanf("%d",&Q);
    float prix final=(Q*prix unitaire)+(Q*prix unitaire)*0.2;
    printf("prix final :\n%.2f\n",prix final);
}
