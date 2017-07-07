int main(){
    int matriz[3][4];
    int i,j;
    int var;
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            printf("INSIRA UM ELEMENTO NA MATRIZ: ");
            scanf("%d",&var);
            matriz[i][j] = var;
        }
    }
    for(i=0; i<3; i++){
      for(j=0; j<4; j++){
          printf("%d\n",matriz[i][j]);
      }
    }
    return 0;
}
