#ifndef EXERCICE2_H_INCLUDED
#define EXERCICE2_H_INCLUDED



#endif // EXERCICE2_H_INCLUDED
int exercice2()
{

    int PA;
    float CA,FR,FV,HT,TTC,TVA;
    char TP;
    printf("entre le type de produit :");
    scanf("%c",&TP);
    printf("entre le prix d'achat:");
    scanf("%f",&PA);
    if(PA>9000)
        {
          CA=PA+4/100*PA;
        }
    else if(5000<PA && PA<9000)
        {
          CA=PA+6/100*PA;
        }
    else if(2000<PA && PA<5000)
        {
          CA=PA+8/100*PA;
        }
        else
        {
          CA=PA+1/100*PA;
        }
      FV=10/100*CA;
      if(TP=='X'|| TP=='x')
      {
          TVA=30/100;
      }
      if(TP=='Y'|| TP=='y')
      {
          TVA=38/100;
      }
      if(TP=='Z'|| TP=='z')
      {
          TVA=43/100;
      }
      if(TP=='T'|| TP=='t')
      {
          TVA=47/100;
      }
      if(TP=='U'|| TP=='u')
      {
          TVA=49/100;
      }
       HT=CA+FV;
      TTC=HT+HT*TVA;
    printf("le prix dachat est : %d\n",PA);
    printf("le TVA est : %f\n",TVA);
    printf("les frais est : %f\n",FR);
    printf("le frais de vente  est : %f\n",FV);
    printf("le prix de vente est : %f\n",TTC);
    printf("le cout dachat est : %f\n",CA);
}
