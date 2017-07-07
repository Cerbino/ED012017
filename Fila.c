
struct Fila {
  int capacidade;
	float *dados;
	int primeiro;
	int ultimo;
	int nItens; 
};

void criarFila( struct Fila *f, int c ) {
	f->capacidade = c;
	f->dados = (float*) malloc (f->capacidade * sizeof(float));
	f->primeiro = 0;
	f->ultimo = -1;
	f->nItens = 0; 
}

void inserir(struct Fila *f, int v) {
	if(f->ultimo == f->capacidade-1){
		f->ultimo = -1;
  }
	f->ultimo++;
	f->dados[f->ultimo] = v; 
	f->nItens++;
}
int remover( struct Fila *f ) { 
	int temp = f->dados[f->primeiro++];
	if(f->primeiro == f->capacidade){
		f->primeiro = 0;
  }
	f->nItens--; 
	return temp;
}

int estaVazia( struct Fila *f ){ 
	return (f->nItens==0);
}
int estaCheia( struct Fila *f ){ 
	return (f->nItens == f->capacidade);
}
void mostrarFila(struct Fila *f){
	int cont, i;
	for ( cont=0, i= f->primeiro; cont < f->nItens; cont++){
		printf("%.2f\t",f->dados[i++]);
		if (i == f->capacidade){
			i=0;
    }
	}
	printf("\n\n");
}
