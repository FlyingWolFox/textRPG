#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( )
{
    system("chcp 65001  > nul");        // Important code line executed before any printf call, put everything in UTF-8
    srand((unsigned)time(0));   // Initialization, should only be called once.
    char start;
    printf("Bem vindo ao Monster Slayer! Aperte enter para começar!");
    start = getchar();
    int classe = 0;
    printf("Em monster slayer há quatro classes, cada uma com seus ");
    printf("pontos fortes e fracos. Aqui temos:\n");
    printf("1- O Bárbaro! Forte no ataque e defesa físicos, fraco nas magias\n");
    printf("2- O Mago! O cara que manja em lidar com o arcano, mas com físico fraco (às vezes)\n");
    printf("3- O Paladino! O que é bom de religião e é o equilibrio entre o mago e o bárbaro, porém com grande defesa!\n");
    printf("4- O Druida! O representante da natureza! Se ele é forte ou não depende da sorte\n");
    printf("Escolha sua clase, digitando o número dela: ");
    classe = getchar();
    if(classe == 1)
    {
        printf("Se está vivo eu posso matar!");
        double attack;
        double defense;
        double hp;
        double magicAttack;
        double magicDefense;
        attack = rand( ) % 150 + 1;
        defense = rand( ) % 125 +1;
        hp = rand( ) % 100 + 51;
        magicAttack = 0;
        magicDefense = 0;

    }
    int bossHP=50;
    int playerDMG=10;
    char a;
    bossHP = rand( ) % 1500 +50;
    char type[15] = "Monstertype";
    if(bossHP >= 1000)
        type[15] = "boss";
    else
        type[15] = "monster";
    printf("Um %s apareceu! Pressione enter para atacar!", type);
    while(bossHP > 0)
    {
        playerDMG = rand( ) % 150 + 50;
        a = getchar();
        if(a == '\n')
        {
            bossHP = bossHP - playerDMG;
            printf("%i de dano!", playerDMG);
            if(playerDMG >180)
            {
                printf(" Crítico!");
            }
            if(bossHP < bossHP * 0.35)
                printf("\nO %s está ficando fraco!\n", type);
        }
        if (a != 'a' && a != '\n')
            printf("É para apertar enter, não '%c'!", a);
    }
    if(bossHP >= 1000)
        printf("Boss derrotado!");
    else
        printf("Monstro derrotado!");
}
