/*Alunos: Lucas Cerbino 160133149
          Rafael honorio 160142334
Estrutura de dados*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void createM1(char Mapa1[10][10]){
    int i, j, P1L, E1L, E2L, N1L, N2L, N3L, B1L, B2L, B3L, B4L, P1C, E1C, E2C, N1C, N2C, N3C, B1C, B2C, B3C, B4C;
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            Mapa1[i][j] = '~';
        }
    }
    P1L = rand()%9;
    P1C = rand()%9;
    while(P1C + 5 > 9){
        P1C = rand()%9;
    }
    for(i = P1C; i < P1C + 5; i++){
        Mapa1[P1L][i] = 'P';
    }
    E1L = rand()%9;
    E1C = rand()%9;
    while(Mapa1[E1L][E1C] != '~' || E1L - 3 < 0 || Mapa1[E1L - 2][E1C] != '~' || Mapa1[E1L - 1][E1C] != '~'){
        E1L = rand()%9;
        E1C = rand()%9;
    }
    for(i = E1L; i > E1L - 3; i--){
        Mapa1[i][E1C] = 'E';
    }
    E2L = rand()%9;
    E2C = rand()%9;
    while(Mapa1[E2L][E2C] != '~' || E2C - 3 < 0 || Mapa1[E2L][E2C - 2] != '~' || Mapa1[E2L][E2C - 1] != '~'){
        E2L = rand()%9;
        E2C = rand()%9;
    }
    for(i = E2C; i > E2C - 3; i--){
        Mapa1[E2L][i] = 'E';
    }
    N1L = rand()%9;
    N1C = rand()%9;
    while(Mapa1[N1L][N1C] != '~' || N1L + 2 > 9 || Mapa1[N1L + 1][N1C] != '~'){
        N1L = rand()%9;
        N1C = rand()%9;
    }
    for(i = N1L; i < N1L + 2; i++){
        Mapa1[i][N1C] = 'N';
    }
    N2L = rand()%9;
    N2C = rand()%9;
    while(Mapa1[N2L][N2C] != '~' || N2L - 2 < 0 || Mapa1[N2L - 1][N2C] != '~'){
        N2L = rand()%9;
        N2C = rand()%9;
    }
    for(i = N2L; i > N2L - 2; i--){
        Mapa1[i][N2C] = 'N';
    }
    N3L = rand()%9;
    N3C = rand()%9;
    while(Mapa1[N3L][N3C] != '~' || N3C + 2 > 9 || Mapa1[N3L][N3C + 1] != '~'){
        N3L = rand()%9;
        N3C = rand()%9;
    }
    for(i = N3C; i < N3C + 2; i++){
        Mapa1[N3L][i] = 'N';
    }
    B1L = rand()%9;
    B1C = rand()%9;
    while(Mapa1[B1L][B1C] != '~'){
        B1L = rand()%9;
        B1C = rand()%9;
    }
    Mapa1[B1L][B1C] = 'B';
    B2L = rand()%9;
    B2C = rand()%9;
    while(Mapa1[B2L][B2C] != '~'){
        B2L = rand()%9;
        B2C = rand()%9;
    }
    Mapa1[B2L][B2C] = 'B';
    B3L = rand()%9;
    B3C = rand()%9;
    while(Mapa1[B3L][B3C] != '~'){
        B3L = rand()%9;
        B3C = rand()%9;
    }
    Mapa1[B3L][B3C] = 'B';
    B4L = rand()%9;
    B4C = rand()%9;
    while(Mapa1[B4L][B4C] != '~'){
        B4L = rand()%9;
        B4C = rand()%9;
    }
    Mapa1[B4L][B4C] = 'B';
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("%c ", Mapa1[i][j]);
        }
        printf("\n");
    }
}
void CreateM2(char Mapa2[10][10]){
    int i, j, P1L, E1L, E2L, N1L, N2L, N3L, B1L, B2L, B3L, B4L, P1C, E1C, E2C, N1C, N2C, N3C, B1C, B2C, B3C, B4C;
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            Mapa2[i][j] = '~';
        }
    }
    P1L = rand()%9;
    P1C = rand()%9;
    while(P1C + 5 > 9){
        P1C = rand()%9;
    }
    for(i = P1C; i < P1C + 5; i++){
        Mapa2[P1L][i] = 'P';
    }
    E1L = rand()%9;
    E1C = rand()%9;
    while(Mapa2[E1L][E1C] != '~' || E1L - 3 < 0 || Mapa2[E1L - 2][E1C] != '~' || Mapa2[E1L - 1][E1C] != '~'){
        E1L = rand()%9;
        E1C = rand()%9;
    }
    for(i = E1L; i > E1L - 3; i--){
        Mapa2[i][E1C] = 'E';
    }
    E2L = rand()%9;
    E2C = rand()%9;
    while(Mapa2[E2L][E2C] != '~' || E2C - 3 < 0 || Mapa2[E2L][E2C - 2] != '~' || Mapa2[E2L][E2C - 1] != '~'){
        E2L = rand()%9;
        E2C = rand()%9;
    }
    for(i = E2C; i > E2C - 3; i--){
        Mapa2[E2L][i] = 'E';
    }
    N1L = rand()%9;
    N1C = rand()%9;
    while(Mapa2[N1L][N1C] != '~' || N1L + 2 > 9 || Mapa2[N1L + 1][N1C] != '~'){
        N1L = rand()%9;
        N1C = rand()%9;
    }
    for(i = N1L; i < N1L + 2; i++){
        Mapa2[i][N1C] = 'N';
    }
    N2L = rand()%9;
    N2C = rand()%9;
    while(Mapa2[N2L][N2C] != '~' || N2L - 2 < 0 || Mapa2[N2L - 1][N2C] != '~'){
        N2L = rand()%9;
        N2C = rand()%9;
    }
    for(i = N2L; i > N2L - 2; i--){
        Mapa2[i][N2C] = 'N';
    }
    N3L = rand()%9;
    N3C = rand()%9;
    while(Mapa2[N3L][N3C] != '~' || N3C + 2 > 9 || Mapa2[N3L][N3C + 1] != '~'){
        N3L = rand()%9;
        N3C = rand()%9;
    }
    for(i = N3C; i < N3C + 2; i++){
        Mapa2[N3L][i] = 'N';
    }
    B1L = rand()%9;
    B1C = rand()%9;
    while(Mapa2[B1L][B1C] != '~'){
        B1L = rand()%9;
        B1C = rand()%9;
    }
    Mapa2[B1L][B1C] = 'B';
    B2L = rand()%9;
    B2C = rand()%9;
    while(Mapa2[B2L][B2C] != '~'){
        B2L = rand()%9;
        B2C = rand()%9;
    }
    Mapa2[B2L][B2C] = 'B';
    B3L = rand()%9;
    B3C = rand()%9;
    while(Mapa2[B3L][B3C] != '~'){
        B3L = rand()%9;
        B3C = rand()%9;
    }
    Mapa2[B3L][B3C] = 'B';
    B4L = rand()%9;
    B4C = rand()%9;
    while(Mapa2[B4L][B4C] != '~'){
        B4L = rand()%9;
        B4C = rand()%9;
    }
    Mapa2[B4L][B4C] = 'B';
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("%c ", Mapa2[i][j]);
        }
        printf("\n");
    }
}
void teste1(char Mapa1[10][10], int *Ptotal1, int i1, int j1){
    if(Mapa1[i1][j1] == '~'){
        printf("Errou, infelizmente era agua.");
    }
    else if(Mapa1[i1][j1] == 'P'){
        printf("Parabens, acertou uma parte de um porta avioes e ganhou 5 pontos\n");
        *Ptotal1 = *Ptotal1 + 5;
    }
    else if(Mapa1[i1][j1] == 'N'){
        printf("Parabens, acertou uma parte de um navio e ganhou 2 pontos\n");
        *Ptotal1 = *Ptotal1 + 2;
    }
    else if(Mapa1[i1][j1] == 'B'){
        printf("Parabens, acertou um bote e ganhou 1 ponto\n");
        *Ptotal1 = *Ptotal1 + 1;
    }
    else if(Mapa1[i1][j1] == 'E'){
        printf("Parabens, acertou um encoraçado e ganhou 3 pontos\n");
        *Ptotal1 = *Ptotal1 + 3;
    }
    Mapa1[i1][j1] = 'X';
}
void teste2(char Mapa2[10][10], int *Ptotal2, int i2, int j2){
    if(Mapa2[i2][j2] == '~'){
        printf("Errou, infelizmente era agua.");
    }
    else if(Mapa2[i2][j2] == 'P'){
        printf("Parabens, acertou uma parte de um porta avioes e ganhou 5 pontos\n");
        *Ptotal2 = *Ptotal2 + 5;
    }
    else if(Mapa2[i2][j2] == 'N'){
        printf("Parabens, acertou uma parte de um navio e ganhou 2 pontos\n");
        *Ptotal2 = *Ptotal2 + 2;
    }
    else if(Mapa2[i2][j2] == 'B'){
        printf("Parabens, acertou um bote e ganhou 1 ponto\n");
        *Ptotal2 = *Ptotal2 + 1;
    }
    else if(Mapa2[i2][j2] == 'E'){
        printf("Parabens, acertou um encoraçado e ganhou 3 pontos\n");
        *Ptotal2 = *Ptotal2 + 3;
    }
    Mapa2[i2][j2] = 'X';
}
int main(){
    char Mapa1[10][10], Mapa2[10][10];
    int Ptotal1 = 0, Ptotal2 = 0, flag = 54, i1, i2, j1, j2, i, j;
    srand(time(NULL));
    createM1(&Mapa1);
    printf("////////////////////////////////////////\n");
    CreateM2(&Mapa2);
    printf("Bem vindo ao Batalha naval\n");
    while(Ptotal1 != flag && Ptotal2 != flag){
        printf("Player1, escolha a linha e a coluna de onde quer jogar: ");
        scanf("%d %d", &i1, &j1);
        while(i1 > 9 || j1 > 9 || i1 < 0 || j1 < 0){
            printf("Coordenada escolhida foi fora do mapa, tente novamente: ");
            scanf("%d %d", &i1, &j1);
        }
        while(Mapa1[i1][j1] == 'X'){
            printf("Voce ja jogou aki antes, uso outras coordenadas: ");
            scanf("%d %d", &i1, &j1);
        }
        teste1(&Mapa1, &Ptotal1, i1,j1);
        printf("\nPlayer2, escolha a linha e a coluna de onde quer jogar: ");
        scanf("%d %d", &i2, &j2);
        while(i2 > 9 || j2 > 9 || i2 < 0 || j2 < 0){
            printf("Coordenada escolhida foi fora do mapa, tente novamente: ");
            scanf("%d %d", &i2, &j2);
        }
        while(Mapa2[i2][j2] == 'X'){
            printf("Voce ja jogou aki antes, uso outras coordenadas: ");
            scanf("%d %d", &i2, &j2);
        }
        teste2(&Mapa2, &Ptotal2, i2,j2);
        printf("\nUltimo lugar jogado\n P1 = [%d][%d]\n P2 = [%d][%d]\n", i1, j1, i2, j2);
        printf("Pontuaçao total\n P1 = %d\n P2 = %d\n", Ptotal1, Ptotal2);
    }
    if(Ptotal1 == 54){
        printf("Parabens!!!!! Player 1 venceu");
    }
    else printf("Parabens!!!!! Player 2 venceu");

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("%c ", Mapa2[i][j]);
        }
        printf("\n");
    }
    printf("////////////////////////////////////////\n");
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("%c ", Mapa2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
