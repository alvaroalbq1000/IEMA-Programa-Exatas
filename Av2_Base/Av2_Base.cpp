// Autor: Álvaro Gabriel Alves Albuquerque
// Criado em: 2023
// Apenas para exibição e estudo

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;

// Função sem retorno (void) que não recebe nada (void) que exibe o cabeçalho do IEMA e o menu de opcoes ao usuario
void menu(void){
    cout<<"\n=======================================================\n";
    cout<<"Instituto de Educacao, ciencia e tecnologia do Maranhao\n";
    cout<<"Alunos: Alvaro, Ananda, Anderson, Danilo, Hugo e Marcos\n";
    cout<<"Professores: Flavio, Andre, Ionara, Germano e Jeferson\n";
    cout<<"Curso: Tecnico em Informatica - Turma: 203\n";
    cout<<"=======================================================\n";
    cout<<"\n=======================================================\n";
    cout<<"BEM VINDO AO PROGRAMA DA AV2 INTERDISCIPLINAR!\n";
    cout<<"opcaoPLINAS DE EXATAS + PROGRAMACAO ESTRUTURADA.\n";
    cout<<"MENU DE OPCOES:\n";
    cout<<"[ 1 ] MATEMATICA\n";
    cout<<"[ 2 ] FISICA\n";
    cout<<"[ 3 ] QUIMICA\n";
    cout<<"[ 4 ] BIOLOGIA\n";
    cout<<"[ 0 ] SAIR DO PROGRAMA\n";
    cout<<"=======================================================\n";
}

// Função sem retorno (void) que recebe uma variavel inteira e responde as questoes de Matematica de acordo com a mesma
void questMatematica(int mat){
    switch(mat){
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        default:
            cout<<"Questao invalida!\n";
            break;
    }
}

// Função sem retorno (void) que recebe uma variavel inteira e responde as questoes de Física de acordo com a mesma
void questFisica(int fis){
    switch(fis){
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        default:
            cout<<"Questao invalida!\n";
            break;
    }
}

// Função sem retorno (void) que recebe uma variavel inteira e responde as questoes de Química de acordo com a mesma
void questQuimica(int qui){
    switch(qui){
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        default:
            cout<<"Questao invalida!\n";
            break;
    }
}

// Função sem retorno (void) que recebe uma variavel inteira e responde as questoes de Biologia de acordo com a mesma
void questBiologia(int bio){
    switch(bio){
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        default:
            cout<<"Questao invalida!\n";
            break;
    }
}

// Função sem retorno (void) que recebe uma variavel inteira e executa acoes de acordo com a opcao do menu escolhida
void respondedor(int opt){
    int questao;
    switch(opt){
        case 0:
            // Cria um delay de 5 segundos e encerra o programa
            int tempo;
            cout<<"Saindo...";
            tempo = clock();
            while(clock()-tempo < 5000){}
            exit(0);
            break;
        case 1:
            // Solicita o numero da questao de Matemática e chama a função que a resolve
            cout<<"Digite o numero da questao (1 - 5) de Matematica: ";
            cin>>questao;
            questMatematica(questao);
            break;
        case 2:
            // Solicita o numero da questao de Física e chama a função que a resolve
            cout<<"Digite o numero da questao (1 - 5) de Fisica: ";
            cin>>questao;
            questFisica(questao);
            break;
        case 3:
            // Solicita o numero da questao de Química e chama a função que a resolve
            cout<<"Digite o numero da questao (1 - 5) de Quimica: ";
            cin>>questao;
            questQuimica(questao);
            break;
        case 4:
            // Solicita o numero da questao de Biologia e chama a função que a resolve
            cout<<"Digite o numero da questao (1 - 5) de Biologia: ";
            cin>>questao;
            questBiologia(questao);
            break;
        default:
            cout<<"Opçao invalida!\n";
            break;
    }
}

// Função principal do programa q retorna um numero inteiro de acordo com o encerramento do programa.
int main(){
    int opcao,novamente;
    menu();
    cout<<"Digite o numero (0 - 4) da opcao que deseja escolher: ";
    cin>>opcao;
    respondedor(opcao);
    cout<<"\nDigite 1 se quiser escolher outra opcao ou qualquer coisa se quiser sair: \n";
    cin>>novamente;
    if(novamente == 1){
        cout<<"\nReiniciando...\n";
        main();
    }
    return 0;
}