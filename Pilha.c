int head, tail, i, x, aux;
int pilha[10];

void push(int x){
	if(!pc()){
       pilha[tail++]=x;
    }
    else{
    	printf("\nPILHA CHEIA");
    }
}

int pop(){
	if(!pv()){
	   aux=pilha[tail-1];
	   tail--;
	   return aux;
	}
	else{
		printf("\nPILHA VAZIA");
	}
}
int pv(){
	return (head==tail);
}
int pc(){
	return(tail==MAX);
}
int main (){ 
   head=0;
   tail=0;
   for(i=0;i<10;i++){
      printf("\nInsira o valor: ");
      scanf("%d", &x);
      push(x);
   } 
   for(i=0;i<MAX;i++){
   	  printf("\n%d valor desempilhado: %d",i+1,pop());
   }
   return 0;
}
