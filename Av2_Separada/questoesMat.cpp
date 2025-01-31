#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int questao, sair;
    // Solicita o numero da questao de Matemática e chama o switch de acordo
    cout<<"Digite o numero da questao (1 - 5) de Matematica: ";
    cin>>questao;
    switch(questao){
        case 1: {
            cout<<"\nQUESTAO 1 DE MATEMATICA:\n";

            // Declaração de variáveis
            double H,S,Snovo,P,Pnovo,X;

            // Entrada de dados e atribuição às variáveis
            cout<<"Digite a altura da pessoa em cm: ";
            cin>>H; // Não será usado porque a sombra depende do ângulo de iluminação, que não está presente
            cout<<"Digite o tamanho da sombra da pessoa em cm: ";
            cin>>S;
            cout<<"Digite o tamanho da sombra do poste em cm: ";
            cin>>P;
            cout<<"Digite o quanto a sombra do poste vai diminuir em cm: ";
            cin>>X;

            // Encontrando a nova sombra do poste e do novo tamanho da sombra da pessoa
            Pnovo = P-X;
            Snovo = S*Pnovo/P;

            // Imprimindo o novo tamanho da sombra da pessoa
            cout<<"\nO novo tamanho da sombra da pessoa eh de: "<<Snovo<<"\n";
            break;
        }case 2: {
            cout<<"\nQUESTAO 2 DE MATEMATICA:\n";

            // Declaração de variáveis
            double cateto1,cateto2,hip;

            // Entrada de dados e atribuição às variáveis
            cout<<"Digite o valor do cateto A: ";
            cin>>cateto1;
            cout<<"Digite o valor do cateto B: ";
            cin>>cateto2;

            // Encontrando e imprimindo a hipotenusa (soma dos quadrados dos catetos)
            hip = sqrt(pow(cateto1,2)+pow(cateto2,2));
            cout<<"\nO valor da hipotenusa eh de: "<<hip<<"\n";

            break;
        }case 3: {
            cout<<"\nQUESTAO 3 DE MATEMATICA:\n";

            // Declaração de variáveis
            double projecao1,projecao2,Hhip;

            // Definição dos valores dos catetos
            projecao1 = 6.0;
            projecao2 = 8.0;

            // Imprimindo os valores dos catetos
            cout<<"Projecao do cateto 1: "<<projecao1<<"\n";
            cout<<"Projecao do cateto 2: "<<projecao1<<"\n";

            // Encontrando e imprimindo a hipotenusa
            Hhip = sqrt(projecao1*projecao2);
            cout<<"O valor da hipotenusa eh de: "<<Hhip<<"\n";

            break;
        }case 4: {
            cout<<"\nQUESTAO 4 DE MATEMATICA:\n";

            // Declaração de variáveis
            double distancia, angulo, anguloRadiano, alturaSerra, alturaAviao;
            const double pi = 3.14;

            // Entrada de dados e atribuição às variáveis
            cout<<"Digite a distancia entre o ponto de decolagem do aviao e a serra em metros: ";
            cin>>distancia;
            cout<<"Digite o angulo de inclinacao constante do aviao em graus: ";
            cin>>angulo;
            anguloRadiano = angulo*pi/180; // A função tan() do <cmath> usa ângulos em radianos, então convertemos.
            cout<<"Digite a altura da serra em metros: ";
            cin>>alturaSerra;

            // Encontrando a altura do aviao na projeção vertical do ponto C
            alturaAviao = distancia*tan(anguloRadiano);

            // Vendo e dizendo se haverá colisão com a serra ou não
            if(alturaAviao <= alturaSerra){
                cout<<"\nO aviao vai colidir com a serra na altura de "<<alturaAviao<<" metros.\n";
            }else{
                cout<<"\nO aviao nao vai colidir com a serra e vai passar direto na altura de "<<alturaAviao<<" metros.\n";
            }

            break;
        }case 5: {
            cout<<"\nQUESTAO 5 DE MATEMATICA:\n";

            // Declaração de variáveis
            double alturaTorre,angulo,tg60,sombraTorre;

            // Definição dos valores da altura da torre, angulo e tangente do angulo
            alturaTorre = 40*sqrt(3);
            angulo = 60;
            tg60 = sqrt(3);

            // Imprimindo os valores da altura da torre, angulo e tangente do angulo
            cout<<"Altura da torre: "<<alturaTorre<<"\n";
            cout<<"Angulo de elevacao do sol: "<<angulo<<"\n";
            cout<<"Tangente desse angulo = "<<tg60<<"\n";

            // Encontrando e imprimindo o comprimento da sombra projetada pela torre
            sombraTorre = alturaTorre/tg60;
            cout<<"O tamanho da sombra da torre eh de: "<<sombraTorre<<"\n";

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