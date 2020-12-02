#include <stdio.h>

enum mes { Janeiro = 1, Fevereiro, Marco, Abril, Maio, Junho, 
        Julho, Agosto, Setembro, Outubro, Novembro, Dezembro };

const char *meses_str[] = {
    "Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho",
    "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro", NULL
};

const char *nomeMes(enum mes m) {
    if(m < Janeiro || m > Dezembro)
        return "Mês Inválido";

    return meses_str[m-1];
}

int main(void)
{
    enum mes aMes = 1;
    printf("%s\n", nomeMes(aMes));

    aMes = 2;
    printf("%s\n", nomeMes(aMes));

    aMes = 3;
    printf("%s\n", nomeMes(aMes));
    
    aMes = 4;
    printf("%s\n", nomeMes(aMes));
    
    aMes = 5;
    printf("%s\n", nomeMes(aMes));
    
    aMes = 6;
    printf("%s\n", nomeMes(aMes));
    
    aMes = 7;
    printf("%s\n", nomeMes(aMes));
    
    aMes = 8;
    printf("%s\n", nomeMes(aMes));
    
    aMes = 9;
    printf("%s\n", nomeMes(aMes));
    
    aMes = 10;
    printf("%s\n", nomeMes(aMes));
    
    aMes = 11;
    printf("%s\n", nomeMes(aMes));
    
    aMes = 12;
    printf("%s\n", nomeMes(aMes));

    return 0;
}