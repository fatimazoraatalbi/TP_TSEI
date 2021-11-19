#ifndef EXERCICE7_H_INCLUDED
#define EXERCICE7_H_INCLUDED



#endif // EXERCICE7_H_INCLUDED
int exexrcice7()
{
    int x,y,z,max;
    printf(" Entrer deux entiers:\n");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y)
        {
        max=x;
        if(z>max)
            max=z;
        }else
        {
            max=y;
        if(z>max)
            max=z;
        }
    printf("la valeur la plus grande est %d\n",max);
}
