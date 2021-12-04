#ifndef EXERCICE1_H_INCLUDED
#define EXERCICE1_H_INCLUDED



#endif // EXERCICE1_H_INCLUDED
int exercice1()
{
    int SA,Rest,B200,B100,B50,B20,B10,B5,B1;
    printf("enter une somme dargent\n");
    scanf("%d",&SA);
    B200=SA/200;
    Rest=SA%200;
    B100=Rest/100;
    Rest=Rest%100;
    B50=Rest/50;
    Rest=Rest%50;
    B20=Rest/20;
    Rest=Rest%20;
    B10=Rest/10;
    Rest=Rest%10;
    B5=Rest/5;
    Rest=Rest%5;
    B1=Rest/1;
    Rest=Rest%1;
    printf("les reprtition est les suivantes :
            %d\n de B200 %d\n de B100 %d\n de B50 %d\n de B20 %d\n de B10 %d\n de B5 %d\n de B1",B200,B100,B50,B20,B10,B5,B1);
}

