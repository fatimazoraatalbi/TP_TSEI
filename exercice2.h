#ifndef EXERCICE2_H_INCLUDED
#define EXERCICE2_H_INCLUDED



#endif // EXERCICE2_H_INCLUDED
int exercice2()
{
    int n1,n2,A;
    printf(" Entrer n1 et n2\n");
    scanf("%d%d",&n1,&n2);
    A = n1;
    n1 = n2 ;
    n2= A;
    printf("les valeurs devient :\n n1:%d\n n2 :%d\n",n1,n2);
}
