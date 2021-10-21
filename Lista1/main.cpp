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
     char sexo ;  
public:
    
    Usuario( string nome, string ocupacao, string email, string palavraChave, int idade,char sx){
        this->nome = nome;
        this->ocupacao = ocupacao;
        this->email = email;
        this->palavraChave=palavraChave;
        this ->idade = idade;
               sexo = sx;
    }
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
    char getSexo(){
        return sexo;
    }

};

int main (){

    Usuario *p = new Usuario("Alicia","estutante","alicia@gmail.com","Amor",18,'f');
    //p.setNome("elivelton");
    //cout << "Ok";
     
    cout<<  p->getNome()+"\n";
    cout<<  p->getOcupacao()+"\n";
    cout<<  p->getEmail()+"\n";
    cout<<  p->getPalavaChave()+"\n";
    cout<<  p->getIdade()+"\n";
    cout<<  p->getSexo() +"\n";

    
    return 0;
}