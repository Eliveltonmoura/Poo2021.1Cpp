//Biblioteca
#include <iostream>
#include <string> 
 using namespace std;
 //classe usuario
class Usuario{
private:
     string nome;
     string ocupacao;
     string email;
     string palavraChave;
     int idade;
     char sexo;  
public: 
    //construtor   
    Usuario( string nome, string ocupacao, string email, string palavraChave, int idade, char sx );
        
    // setes
    void setNome (string nome){
         this->nome = nome;
    }
     void setOcupacao (string ocupacao){
         this->ocupacao= ocupacao;
    }
     void setEmail (string email){
         this->email = email;
    }
     void setPalavraChave (string palavraChave){
         this->palavraChave = palavraChave;
    }
     int setIdade (int idade){
         this-> idade = idade;
    }
     char setSexo (char sexo ){
            sexo = sexo;
    }
    //getes
    string getNome (){
        return nome;
    }
    string getOcupacao (){
        return ocupacao;
    }
    string getEmail (){
        return email;
    }
    string getPalavaChave (){
        return palavraChave;
    }
    int getIdade (){
        return idade;
    }
    char getSexo (){
        return sexo;
    }
    // fução de imprimir
    void imprimir(int num);
};
 //construtor
 Usuario::Usuario( string nome, string ocupacao, string email, string palavraChave, int idade, char sx ){
        this->nome = nome;
        this->ocupacao = ocupacao;
        this->email = email;
        this->palavraChave=palavraChave;
        this ->idade = idade;
               sexo = sx;            
       
    }
 // fução de imprimer os resutado consutados
 void Usuario::imprimir( int num){
    int op=num;
    if (op==1){
    cout <<"-----------------------------"<<endl;
    cout << getNome()<<endl;    
    cout << getOcupacao()<<endl;
    cout << getEmail()<<endl;
    cout << getPalavaChave()<<endl;
    cout << getIdade()<<endl;
    cout << getSexo()<<endl;
    cout <<"-----------------------------"<<endl;
    }
   else if (op==2){
   
    cout << getNome() <<endl;    
    cout << getOcupacao()<<endl;
    cout << getEmail() <<endl;
    cout << getPalavaChave()<<endl;
    cout << getIdade() << endl;
    cout << getSexo()  << endl;
    cout <<"-----------------------------"<<endl;
    }
   else if (op=3){
   
    cout << getNome() <<endl;    
    cout << getOcupacao()<<endl;
    cout << getEmail() <<endl;
    cout << getPalavaChave()<<endl;
    cout << getIdade() <<endl;
    cout << getSexo()  <<endl;
    cout <<"-----------------------------"<<endl;
    }

    
 }
 // função principal
int main (){ 
      /*      
      1.Professor 
      2.técnico
      3.Aluno      
      */



     // inicialização do objeto 
    Usuario *professor = new Usuario("bruna","professor","bruna@gmail.com","prof",18,'F');
    Usuario *tecnico = new Usuario("Elivelton","tecnico","velton@alu.ufc.br","tec",25,'M');
    Usuario *aluno = new Usuario("Alicia","estutante","alicia@gmail.com","alu",18,'F');
         
    professor->imprimir(1);

    tecnico->imprimir(2);
    
    aluno->imprimir(3);

    
    return 0;
}