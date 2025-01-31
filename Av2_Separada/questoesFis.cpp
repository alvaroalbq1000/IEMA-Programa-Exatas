#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int questao,sair;
    // Solicita o numero da questao de Física e chama o switch de acordo
    cout<<"Digite o numero da questao (1 - 5) de Fisica: ";
    cin>>questao;
    switch(questao){
        case 1: {
            cout<<"\nQUESTAO 1 DE FISICA:\n";

            // Declaração de variáveis
            double cMin,cMax,fMin,fMax;
            
            // Definindo a faixa de temperaturas Celsius
            cMin = 20.0;
            cMax = 30.0;

            // Convertendo e definindo a faixa de temperaturas Fahrenheit
            fMin = (cMin * 9/5) + 32;
            fMax = (cMax * 9/5) + 32;

            // Imprimindo o intervalo de temperatura em Celsius e em Fahrenheit
            cout<<"Intervalo de temperatura em Celsius:\t"<<cMin<<" - "<<cMax<<" graus Celsius.\n";
            cout<<"Intervalo de temperatura em Fahrenheit:\t"<<fMin<<" - "<<fMax<< " graus Fahrenheit.\n";

            break;
        }case 2: {
            cout<<"\nQUESTAO 2 DE FISICA:\n";

            // Declaração de variáveis
            double f,f2,c,k;

            // Pedindo para digitar uma temperatura em Fahrenheit e atribuindo o valor digitado à variável
            cout<<"Insira uma temperatura em Fahrenheit: ";
            cin>>f;

            // Encontrando as temperaturas em Celsius e Kelvin e atribuindo-as às variáveis
            c = (f-32)*5/9;
            k = c + 273;

            // Exibindo as temperaturas com uma precisão de duas casas à direita do decimal
            cout<<fixed<<setprecision(2); // configurando a precisão das casas decimais
            cout<<"Temperatura em Fahrenheit: "<<f<<" graus Fahrenheit.\n";
            cout<<"Temperatura em Celsius: "<<c<<" graus Celsius.\n";
            cout<<"Temperatura em Kelvin: "<<k<<" Kelvin.\n";

            // Programa que converte de Fahrenheit para Celsius
            cout<<"\nDigite uma temperatura na escala Fahrenheit: ";
            cin>>f;
            c = (f-32)*5/9;
            cout<<f<<" graus Fahrenheit = "<<c<<" graus Celsius.\n";

            // Programa que converte de Celsius para Fahrenheit
            cout<<"\nDigite uma temperatura na escala Celsius: ";
            cin>>c;
            f = (c*9/5)+32;
            cout<<c<<" graus Celsius = "<<f<<" graus Fahrenheit.\n";

            break;
        }case 3: {
            cout<<"\nQUESTAO 3 DE FISICA:\n";

            // Declaração de variáveis
            int numTemp;
            cout<<"Digite quantas temperaturas voce deseja digitar: ";
            cin>>numTemp;
            double numerosF[numTemp],numerosC[numTemp]; // Vetores de numTemp valores

            // Pedindo para digitar uma quantidade numTemp de temperaturas em Fahrenheit ("arquivo de texto")
            cout<<"Digite "<<numTemp<<" temperaturas em Fahrenheit:\n";
            for(int i = 0; i < numTemp; i++){
                cout<<"Digite o numero: "<<i+1<<": ";
                cin>>numerosF[i];
                numerosC[i] = (numerosF[i]-32)*5/9;
            }

            // Mostrando a tabela com duas colunas (Fahrenheit e Celsius) e numTemp linhas
            cout<<"Tabela Fahrenheit para Celsius:\n";
            cout<<"|Fahrenheit|\t|Celsius|\n";
            for(int i = 0; i < numTemp; i++){
                cout<<numerosF[i]<<"\t\t"<<numerosC[i]<<"\n";
            }

            break;
        }case 4: {
            cout<<"\nQUESTAO 4 DE FISICA:\n";

            // Declaração de variáveis
            double ebulicao_C,congelamento_C,ebulicao_F,congelamento_F;

            // Definindo os pontos de ebulição e congelamento em Celsius
            ebulicao_C = 100.0;
            congelamento_C = 0.0;

            // Encontrando os pontos de ebulição e congelamento para Fahrenheit
            ebulicao_F = (ebulicao_C*9/5)+32;
            congelamento_F = (congelamento_C*9/5)+32;

            // Imprimindo os pontos de ebulição e congelamento em Celsius e em Fahrenheit
            cout<<"Ponto de ebulicao da agua em Celsius: "<<ebulicao_C<<" graus Celsius.\n";
            cout<<"Ponto de congelamento da agua em Celsius: "<<congelamento_C<<" graus Celsius.\n";
            cout<<"Ponto de ebulicao da agua em Fahrenheit: "<<ebulicao_F<<" graus Fahrenheit.\n";
            cout<<"Ponto de congelamento da agua em Fahrenheit: "<<congelamento_F<<" graus Fahrenheit.\n";

            break;
        }case 5: {
            cout<<"\nQUESTAO 5 DE FISICA:\n";

            // Declaração de variáveis
            double fahrenheit,celsius;
            int escolha;
            double start_temp,end_temp,temp_incr,temp_convertida;

            // Programa que converte de Fahrenheit para Celsius por conta própria
            cout<<"Digite uma temperatura na escala Fahrenheit: ";
            cin>>fahrenheit;
            celsius = (fahrenheit-32)/1.8;
            cout<<fahrenheit<<" graus Fahrenheit = "<<celsius<<" graus Celsius.\n";

            // Programa que dá uma opção de conversão e gera uma tabela de acordo com os dados
            // Entrada de dados e atribuição às variáveis
            cout<<"\nMenu de opcoes de conversoes: \n";
            cout<<"1. Converter F em C\n";
            cout<<"2. Converter C em F\n";
            cout<<"Digite o numero de sua escolha: ";
            cin>>escolha;
            cout<<"\nDigite a temperatura inicial: ";
            cin>>start_temp;
            cout<<"Digite a temperatura final: ";
            cin>>end_temp;
            cout<<"Digite o incremento de temperatura: ";
            cin>>temp_incr;

            // Configuração da precisão (1 casa decimal) e do alinhamento (justificado à esquerda)
            cout << fixed << setprecision(1) << left;

            // Tabela de Fahrenheit para Celsius ou vice-versa
            switch(escolha){
                case 1:
                    cout << "\t\tFahrenheit\t\tCelsius\n";
                    for(double temp = start_temp; temp <= end_temp; temp += temp_incr){
                        temp_convertida = (temp-32)/1.8;
                        cout << "\t\t" << temp << "\t\t" << temp_convertida << endl;
                    }
                    break;
                case 2:
                    cout << "\t\tCelsius\t\tFahrenheit\n";
                    for(double temp = start_temp; temp <= end_temp; temp += temp_incr){
                        temp_convertida = (temp*1.8)+32;
                        cout << "\t\t" << temp << "\t\t" << temp_convertida << endl;
                    }
                    break;
                default:
                    cout<<"Escolha errada!\n";
                    break;
            }

            break;
        }default: {
            cout<<"Questao invalida!\n";
            break;
        }
    }
    cout<<"Digite qualquer coisa quando quiser sair: ";
    cin>>sair;
    return 0;
}