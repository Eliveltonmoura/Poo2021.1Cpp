#include <iostream>
#include <string> 
 using namespace std;
class Usuario{
private:
     string nome;
     string ocupacao;
     string email;
     string palavraChave;
     int idade;
     char sexo;  
public:    
    Usuario( string nome, string ocupacao, string email, string palavraChave, int idade, char sx );
        
    // sets
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
    //gets
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
 Usuario::Usuario( string nome, string ocupacao, string email, string palavraChave, int idade, char sx ){
        this->nome = nome;
        this->ocupacao = ocupacao;
        this->email = email;
        this->palavraChave=palavraChave;
        this ->idade = idade;
               sexo = sx;            
       
    }

 void Usuario::imprimir( int num){
    int op=num;
    if (op==1){
    cout << getNome()<<endl;    
    cout << getOcupacao()<<endl;
    cout << getEmail()<<endl;
    cout << getIdade()<<endl;
    cout << getSexo()<<endl;
    }
   else if (op==2){
    cout << getNome() <<endl;    
    cout << getOcupacao()<<endl;
    cout << getEmail() <<endl;
    cout << getIdade() << endl;
    cout << getSexo()  << endl;
    }
   else if (op=3){
    cout << getNome() <<endl;    
    cout << getOcupacao()<<endl;
    cout << getEmail() <<endl;
    cout << getIdade() <<endl;
    cout << getSexo()  <<endl;
    }

    
 }

int main (){ 
     
    Usuario professor = Usuario("bruna","professor","bruna@gmail.com","prof",18,'M');
    //Usuario *tecnico = new Usuario("maria","tec","maria@gmail.com","tec",18,'M');
    //Usuario *aluno = new Usuario("Alicia","estutante","alicia@gmail.com","alu",18,'M');
    // cout >> professor->getNome;
    
   // Usuario p();       
     
    professor.imprimir(1);
    

    
    return 0;
}