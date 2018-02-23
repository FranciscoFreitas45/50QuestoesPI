#include <stdio.h>







/*int main(){//1
	int lido;
	int maior=0;
	printf("INSERE A SEQUENCIA\n\n");
	while(lido!=0){
		scanf("%d",&lido);
			if (lido>maior)
				maior=lido;
}
			printf("%d\n",maior);
	
	return maior;
}
*/
/*int main(){//2
	int i=-1;
	float lido=-1;
	float soma=0;
	printf("INSERE A SEQUENCIA\n\n");
	while(lido!=0){
		scanf("%f",&lido);
			soma+=lido;
				i++;
}
			printf("%f\n",soma/i);
		}

*/

int main(){//3
	int lido=-1;
	int maior=0;
	int second=0;
	printf("INSERE A SEQUENCIA\n\n");
	while(lido!=0){
		scanf("%d",&lido);
			if (lido>maior){
				second=maior; 
				maior=lido;
			}
}
			printf("%d\n",second);
	
	return 0;
}






int bitsUm (int x){//4 calcula o numero de bits iguais a 1 usados na representação binaria de um dado numero
n
    int r=0;  // 
    while(x!=0){//faz o ciclo ate x=0
        if(x%2!=0)// se o resto da divisao por 2 for 1 incrementa o r
        r++;
        x=x/2;// dividi o x por 2;
    }
    return r;
}




int trailingZ (unsigned int n) { //5  calcula o n ́umero de bits a 0 no final da representacao binaria de um numero
    int r=0;
    while(n%2==0){
            r++;
            n=n/2;
    }
    
    return r;
}



int qDig (int n) { // 6 alcula o número de dígitos necessários para escrever o inteiro n em base decimal. Por exemplo, qDig (440) deve retornar 3.
    int r = 0;
    while(n>0){
    r++;
    n=n/10;
    }
    return r;
}




char *mystrcat(char s1[], char s2[]) { //7 concatena a string s2 a s1 (retornando o endereço da primeira).
    int i,j;
    for(i=0;s1[i]!='\0';i++); // corre a string s1 ate ao fim
    
    for(j=0;s2[j]!='\0';j++,i++) //coloca a string s2 em s1 
            s1[i]=s2[j]; 

            s1[i]='\0'; // uma string acaba sempre com '\0'
    
    return s1;
}


char *mystrcpy(char s1[], const char s2[]) { // 8  copia a string source para dest retornando o valor desta última.
    int i;
    for(i=0;s2[i]!='\0';i++)
        s1[i]=s2[i];
        s1[i]='\0';
    return s1;
}


//compara (lexicograficamente) duas strings. O resultado deverá ser: • 0, se as strings forem iguais;
                                                                   //• <0, se s1<s2;
                                                                   //• >0, se s1>s2.
	int mystrcmp(char s1[], char s2[]){
    int i,j;
    
    for(i=0;s1[i]==s2[i]&& s1[i]!='\0';i++);
    return s1[i]-s2[i];
}

char *mystrstr (char s1[], char s2[]) { //10
	int i, j;
	for (j = 0; s1[j] != '\0'; j++)  // pega em um a um nos caracteres de s1
		for (i=0; s1[i + j] == s2[i];i++)// faz um ciclo que ve se s2 esta contido s1
			if (s2[i + 1] == '\0' )// se s2 chegou ao fim 
        			return s1 + j;// devolve a posiçao onde ocorre a string em s1
	if (*s2 == '\0') // se s2 nao tem nada devolve s1
		return s1;
	return NULL; // outro caso  retorna Null
}




#include <string.h>
void strrev (char s[]) { //11
    int i,j;
    char tmp;
    int n =strlen(s)-1;//corre a string ate a fim e retira 1
         i=n;
    for(j=0;j<=i/2;j++,n--){
        tmp=s[j];//swap
        s[j]=s[n];
        s[n]=tmp;
    }
    
}



void strnoV (char t[]){//12
 int i, j = 0;
	for (i = 0; t[i] != '\0'; i++)  
		if (t[i] != 'a' && t[i] != 'e' && // guarda no array t tudo que nao é vogal 
		    t[i] != 'i' && t[i] != 'o' &&
		    t[i] != 'u' && t[i] != 'A' &&
		    t[i] != 'E' && t[i] != 'I' &&
		    t[i] != 'O' && t[i] != 'U')
		    	t[j++] = t[i];
	t[j] = '\0';
}


void truncW (char t[], int n){//13
    
    int j=0;
    int i;
    
    int count=0;// contador começa a zero
    for(i=0;t[i]!='\0';i++){
        if(t[i]==' '){// se for espaço vazio coloca-o
            count =0;
            t[j++]=t[i];    
        }
        else{
        if(count<n){ // ate N caracteres guarda no array
            t[j++]=t[i];
            count++;
        }
        }
    }
}


char charMaisfreq (char s[]) { //14
    int i,j;
       int r=0;
       char a=s[0];
    for(i=0;s[i]!='\0';i++){
           int count =0;
        for(j=0;s[j+i]!='\0';j++)
                if(s[i]==s[i+j])
                    count++;
                    
                    if(count>r){
                        r=count;
                    a=s[i];
                    }
    }
    return a;
}

int iguaisConsecutivos (char s[]) {//15
    int i,j;
    int r=0;
    for(i=0;s[i]!='\0';i++){
        for(j=0;s[i+j]!='\0'&& s[i]==s[i+j];j++)
            ;
            if (j>r)
                r=j;
    }
    return r;
}




int difConsecutivos(char s[]) //16
{
     int i,j;
    int r=0;
    for(i=0;s[i]!='\0';i++){
        for(j=0;s[i+j]!='\0'&& diff(s+i,j);j++)
            ;
            if (j>r)
                r=j;
    }
    return r;
}
 
 



int diff(char s[],int j){
        int i;
        for(i=0;i<j;i++)
            if(s[i]==s[j])
                return 0;
                
return 1; 
    
}     

int maiorPrefixo (char s1 [], char s2 []) {//17
    int i ;
        for(i=0;s1[i]!='\0' && s2[i]!='\0' && s1[i]==s2[i];i++)
                ;
    return i;
}




int maiorSufixo (char s1 [], char s2 []) {//18
    int s=strlen (s1)-1;
    int x=strlen (s2)-1;
   int count =0;
    for(;s1[s]==s2[x];s--,x--)
        count ++;
    
    return count;
}

int sufPref (char s1[], char s2[]) {//19
    int i,j;
    int r=0;
    for(i=0;s1[i]!='\0';i++){
        if(s1[i]==s2[0]){
                for(j=0;s1[i+j]!='\0' && s1[i+j]==s2[j];j++)
                ;
                if (j>r && s1[i+j]=='\0')
                r=j;
        }
    }
    return r;
}




int contaPal (char s[]) {//20
    int i;
  int  count =0;
    for(i=0;s[i]!='\0';i++)
        if(s[i]!=' ' && s[i]!='\n' && (s[i+1]== ' ' || s[i+1]=='\0'))
            count++;
    return count;
}





nt contaVogais (char s[]) { //21
	int i, j = 0;
	for (i = 0; s[i] != '\0'; i++)
		if ( s[i] == 'a' || s[i] == 'A' ||
		     s[i] == 'e' || s[i] == 'E' ||
		     s[i] == 'i' || s[i] == 'I' ||
		     s[i] == 'o' || s[i] == 'O' ||
		     s[i] == 'u' || s[i] == 'U' )
		     	j++;
	return j;
}




int contida (char a[], char b[]) { //22
    
        int i,j;
        for(i=0;a[i]!='\0';i++){
            for(j=0; b[j]!='\0' && b[j]!=a[i] ;j++)
                ;
                if(b[j]=='\0')
                return 0;
        }
        
    return 1;
}




int palindroma (char s[]) {//23
    int i;
    int ss=strlen(s);
    int st=j-1;
    for(i=0;i<=j/2;i++,st--)
            if(s[i]!=s[st])
                return 0;
    return 1;
}


int remRep (char texto []) {//24
int i, r = 0;
	for (i = 0; texto[i] != '\0'; i++)
		if (texto[i] != texto[i + 1])
			texto[r++] = texto[i];
	texto[r] = '\0';
	return r;
}

int limpaEspacos (char texto[]) {//25
    int r=0;
    int i;
    for(i=0;texto[i]!='\0';i++)
        if(texto[i]!=' ' || (texto[i]==' ' && texto [i+1]!=' ') )
            texto[r++]=texto[i];
            texto[r]='\0';
    return r;
}


   void insere (int s[], int N, int x){//26
    int i;
    
    for(i=0; i<N &&s[i]<x;i++)
            ;
            for(;i<N;N--)
                s[N]=s[N-1];
                s[i]=x;
        
    }

     void merge (int r [], int a[], int b[], int na, int nb){//27
       int i=0;
       int j=0;
       int ii=0;
       while(i<na || j<nb){
           if(i==na){
               r[ii++]=b[j++];
               
           }
           else if(j==nb){
               r[ii++]=a[i++];
           }
           else if(a[i]<b[j]){
               r[ii++]=a[i++];
           }
           else r[ii++]=b[j++];
       }
   }



    int crescente (int a[], int i, int j){//28
      
       for(;i<j;i++)
        if(a[i]>a[i+1])
        return 0;
       return 1;
   }




      int retiraNeg (int v[], int N){//29
       int i;
        int r=0;
        for(i=0;i<N;i++)
            if(v[i]>=0)
                v[r++]=v[i];
       return r;
   }





    int menosFreq (int v[], int N){// 30 caralho sao 30
          int r=N;
          int ret=v[0];
         int count; 
       int i,j;
            for(i=0;i<N;i++){
                count=0;
                for(j=0;j<N ;j++)
                    if (v[i]==v[j])
                    count++;
                        if(count<r){
                               ret=v[i];
                               r=count;
                        }
                        
                
            }
       return ret;
   }







      int maisFreq (int v[], int N){ //31 
          int r=0;
          int ret=v[0];
         int count; 
       int i,j;
            for(i=0;i<N;i++){
                count=0;
                for(j=0;j<N ;j++)
                    if (v[i]==v[j])
                    count++;
                        if(count>r){
                               ret=v[i];
                               r=count;
                        }
                        
                
            }
       return ret;
   }




   int maxCresc (int v[], int N) {//32
       int r = 0;
       int i,j;
       int count;
       for(i=0;i<N;i++){
            for(j=i,count=1;j+1<N && v[j+1]>=v[j];j++,count++) // tem que começar em 1 o count para contar o elemento que esta a ser comparado
                ;
                if(r<count)
                r=count;
   }
       return r;
   }






*/
   int elimRep (int v[], int N) {//33 && 34 
       int r = 0;
       v[r++]=v[0];
       
       int i,j;
       for(i=1;i<N;i++){
            if(elem(v,i))
              v[r++]=v[i];
           }
       return r;
   }
   
   
   int elem ( int a[],int x){ // compare os primeiros x elementos do array com o elemento na posiçao x
       int i;
       for(i=0;i<x;i++)
        if(a[i]==a[x])
            return 0;
            
            return 1;
   }




   int elimRepOrd (int v[], int N) { //34  
int r = 0;
       int i,j;
       for(i=0;i<N;i++){
            if(v[i]!=v[i+1] || i+1==N) // i+1=N para quando a lista for toda igual colocar o ultimo elemento da lista 
                v[r++]=v[i];  
              
           }
       return r;
   }

   int comunsOrd (int a[], int na, int b[], int nb){ // 35 mt merda 
       int r = 0;
       int j,i;
       
       for(i=0,j=0 ;i<na && j<nb;){
       
         if (a[i]>b[j])
            j++;
            else if (a[i]<b[j])
            i++;
       
            else{
                r++;
                i++;
                j++;
            }
       }
       
       return r;
   }

   
   


   int comuns (int a[], int na, int b[], int nb){//36 
      int i ,j;
      int r=0;
      for(i=0;i<na;i++)
        for(j=0;j<nb;j++)
            if(a[i]==b[j]){
                r++;
                break;// usa-se o break porque so querem os comuns. se num array tiver varios 1 e no outro tiver so um 1 conta como so 1 , logo encontrado pode ser ignorado a resto do array
            }
                return r;
   }



int minInd (int v[], int n) { // 37 mt facil
   int r = v[0];
  
  int indice=0;
  int i ;
  for(i=1;i<n;i++)
    if(v[i]<r){
        r=v[i];
        indice=i;
    }
   return indice;
}




void somasAc (int v[], int Ac [], int N){ // 38 ainda mais facil que anterior
   int i;
   int r=0;
   for(i=0;i<N;i++){
    r+=v[i];
    Ac[i]=r;
   }
   
}

   int triSup (int N, float m [N][N]) { //39
    int i,j;
    for(i=0;i<N;i++)
        for(j=0;j<i;j++)
            if(m[i][j]!=0)
                return 0;
    return 1;
}




void transposta (int N, float m [N][N]) { // 40 corre metade da matriz  e como faz  swap altera a matriz toda
    int i,j;
    int tmp;
    for(i=0;i<N;i++)
        for(j=0;j<i;j++){
           tmp= m[j][i];//swap
            m[j][i]=m[i][j];
            m[i][j]=tmp;
        }
    return;
}




void addTo(int N, int M, int a [N][M], int b[N][M]) { //41
    int i,j;
    for(i=0;i<N;i++)
        for(j=0;j<M;j++)
                a[i][j]+=b[i][j];
    return;
}



   int unionSet (int N, int v1[N], int v2[N], int r[N]){ //42
       int i;
       for(i=0;i<N;i++)
            r[i]=(v1[i] || v2[i]);
       return 0;
   }





   int intersectSet (int N, int v1[N], int v2[N], int r[N]){ //43
        
       int i;
       for(i=0;i<N;i++)
            r[i]=(v1[i] && v2[i]);
       return 0;
   }


   int intersectMSet (int N, int v1[N], int v2[N], int r[N]){ //44 (0,2,0,3) (1,0,2,4)=(0,0,2,3)
       
       int i; 
      for(i=0;i<N;i++){
        if(v1[i]==v2[i])
            r[i]=v1[i];
            else if (v1[i]<v2[i])
             r[i]=v1[i];
             else r[i]=v2[i];
   }
}





   int unionMSet (int N, int v1[N], int v2[N], int r[N]){//45 (0,2,0,3) (1,0,2,4)=(1,2,2,4)    
     int i;
     
     for(i=0;i<N;i++)
        if(v1[i]==v2[i])
            r[i]=v1[i];
            else if(v1[i]>v2[i])
                r[i]=v1[i];
                else r[i]=v2[i];
     
   }
   
   
   int cardinalMSet (int N, int v[N]){ // 46
   	  int r=0;
   	    
   	    int i;
   	    for(i=0;i<N;i++)
   	        r+=v[i];
   	  
   	  return r;
   }




Posicao posFinal (Posicao inicial, Movimento mov[], int N){ //47
    int i;
    
    for(i=0;i<N;i++){
        if(mov[i]==Norte)
            inicial.y+=1;
            else if (mov[i]==Sul)
                inicial.y-=1;
                else if(mov[i]==Este)
                    inicial.x+=1;
                    else inicial.x-=1;
    }
    
    return inicial;
}



int caminho (Posicao inicial, Posicao final, Movimento mov[], int N){ // 48 ta bem so que a codeBoard é um lixo e so passa 1 teste.

    int px=inicial.x;
    int py=inicial.y;
    int i;
    for(i=0;i<N;i++){
        if(px<final.x){
            mov[i]=Este;
            px++;
        }
            else if(px>final.x){
                mov[i]=Oeste;
                px--;
        }
            else if(py<final.y){
                mov[i]=Norte;
                py++;
        }
            else if(py>final.y){
            mov[i]=Sul;
            py--;
        }
        else break;
}
if ((px-final.x) || (py-final.y))  return -1 ;
else return i;

}








int maiscentral (Posicao pos[], int N) { //49
    
    int i;
    int x=pos[0].x;
    int y=pos[0].y;
    float distancia;
    int indice=0;
    float count;
        if(x==0)// guarda a distancia do primeiro ponto do array á origem
             distancia =abs (y); // pode-se usar abs em vez de fabs neste caso pois a distancia sera y
            else if (y==0)
            distancia =abs(x);
        else distancia =fabs(sqrt(x*x+y*y)); // fabs guarda o valor absoluto de um foat
    
        for(i=1;i<N;i++){
            x=pos[i].x;// o mesmo que se faz anteriormente
            y=pos[i].y;
             if(x==0)
             count = abs(y);
            else if (y==0)
            count =abs(x);
        else count =fabs(sqrt(x*x+y*y));
        
        if(count<distancia){// comparar distancias e atualiza caso seja menor 
            distancia=count;
            indice=i;
            
        }
            
        }
            
    return indice;
}


int vizinhos (Posicao p, Posicao pos[], int N) { //50 (0,0) adjacentes  (0,1) (0,-1) (1,0) (-1,0)
    int c=0;
    
    int i;
    for(i=0;i<N;i++)
        if(((pos[i].x==p.x+1 || pos[i].x==p.x-1) && pos[i].y==p.y)||((pos[i].y==p.y+1 || pos[i].y==p.y-1)&&pos[i].x==p.x))
            c++;
    
    return c;
}
#50QuestoesPI
