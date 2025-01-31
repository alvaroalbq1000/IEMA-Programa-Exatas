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
    cout<<"BEM VINDO AO PROGRAMA DA AV2 INTERopcaoPLINAR!\n";
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
}

// Função sem retorno (void) que recebe uma variavel inteira e responde as questoes de Física de acordo com a mesma
void questFisica(int fis){
    switch(fis){
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
            double f,c,k;

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
}

// Função sem retorno (void) que recebe uma variavel inteira e responde as questoes de Química de acordo com a mesma
void questQuimica(int qui){
    switch(qui){
        case 1: {
            cout<<"\nQUESTAO 1 DE QUIMICA:\n";

            // Declaração de variáveis
            int resposta,soma;

            // Entrada de dados e atribuição à variáveis
            soma = 0;
            // Perguntas sobre alojamento
            cout<<"Quantas pessoas moram em tua casa?\n";
            cout<<"Digite 30 - 1 pessoa\n";
            cout<<"Digite 25 - 2 pessoas\n";
            cout<<"Digite 20 - 3 pessoas\n";
            cout<<"Digite 15 - 4 pessoas\n";
            cout<<"Digite 10 - 5 ou mais pessoas\n";
            cout<<"Digite o numero: ";
            cin>>resposta;
            soma = soma + resposta;
            cout<<"Qual o sistema de aquecimento da casa?\n";
            cout<<"Digite 30 - Gas natural\n";
            cout<<"Digite 40 - Eletricidade\n";
            cout<<"Digite 50 - Gasoleo\n";
            cout<<"Digite 0  - Fontes renovaveis\n";
            cout<<"Digite o numero: ";
            cin>>resposta;
            soma = soma + resposta;
            cout<<"Quantas torneiras tem em tua casa?\n";
            cout<<"Digite 5  - Menos de 3\n";
            cout<<"Digite 10 - 3 a 5\n";
            cout<<"Digite 15 - 6 a 8\n";
            cout<<"Digite 20 - 8 a 10\n";
            cout<<"Digite 25 - mais de 10\n";
            cout<<"Digite o numero: ";
            cin>>resposta;
            soma = soma + resposta;
            cout<<"Em que tipo de casa vives?\n";
            cout<<"Digite 20 - Apartamento\n";
            cout<<"Digite 40 - Moradia\n";
            cout<<"Digite o numero: ";
            cin>>resposta;
            soma = soma + resposta;

            // Perguntas sobre alimentação
            cout<<"Quantas refeicoes de carne ou peixe comes por semana?\n";
            cout<<"Digite 0  - Nenhuma\n";
            cout<<"Digite 10 - 1 a 3\n";
            cout<<"Digite 20 - 4 a 6\n";
            cout<<"Digite 35 - 7 a 10\n";
            cout<<"Digite 50 - Mais de 10\n";
            cout<<"Digite o numero: ";
            cin>>resposta;
            soma = soma + resposta;
            cout<<"Quantas refeicoes feitas em casa eh que comes por semana?\n";
            cout<<"Digite 25 - Menos de 10\n";
            cout<<"Digite 20 - 10 a 14\n";
            cout<<"Digite 15 - 15 a 18\n";
            cout<<"Digite 10 - Mais de 18\n";
            cout<<"Digite o numero: ";
            cin>>resposta;
            soma = soma + resposta;
            cout<<"Procuras comprar alimentos produzidos localmente?\n";
            cout<<"Digite 25  - Sim\n";
            cout<<"Digite 125 - Nao\n";
            cout<<"Digite 50  - As vezes\n";
            cout<<"Digite 100 - Raramente\n";
            cout<<"Digite o numero: ";
            cin>>resposta;
            soma = soma + resposta;

            // Perguntas sobre transportes
            cout<<"Que tipo de automovel tens (se nao tiveres responde 0)?\n";
            cout<<"Digite 35  - Motociclo\n";
            cout<<"Digite 60  - Baixa cilindrada (ate 1200 c.c.)\n";
            cout<<"Digite 75  - Media e alta cilindrada (alem de 1200 c.c.)\n";
            cout<<"Digite 100 - Carrinha\n";
            cout<<"Digite 130 - Todo o terreno\n";
            cout<<"Digite o numero: ";
            cin>>resposta;
            soma = soma + resposta;
            cout<<"Como vais para o emprego?\n";
            cout<<"Digite 60 - Carro\n";
            cout<<"Digite 30 - A boleia\n";
            cout<<"Digite 15 - Transportes publicos\n";
            cout<<"Digite 0  - Bicicleta ou a pe\n";
            cout<<"Digite o numero: ";
            cin>>resposta;
            soma = soma + resposta;
            cout<<"Quantos km tens de percorrer de carro para chegar ao emprego?\n";
            cout<<"Digite 10 - Menos de 10\n";
            cout<<"Digite 20 - Entre 10 e 30\n";
            cout<<"Digite 30 - Entre 30 e 50\n";
            cout<<"Digite 60 - Entre 50 e 100\n";
            cout<<"Digite 80 - Mais de 100\n";
            cout<<"Digite o numero: ";
            cin>>resposta;
            soma = soma + resposta;
            cout<<"Aonde foste nas ultimas ferias?\n";
            cout<<"Digite 0  - A lugar nenhum\n";
            cout<<"Digite 10 - Fiquei em Brasil\n";
            cout<<"Digite 20 - Fui a Espanha\n";
            cout<<"Digite 30 - Fiquei pela America do Sul, paises latinos\n";
            cout<<"Digite 50 - Sai da America do Sul, fui para longe\n";
            cout<<"Digite o numero: ";
            cin>>resposta;
            soma = soma + resposta;
            cout<<"Em quantos fins-de-semana eh que viajas de carro?\n";
            cout<<"Digite 0  - 0\n";
            cout<<"Digite 10 - 1 a 3\n";
            cout<<"Digite 20 - 4 a 6\n";
            cout<<"Digite 30 - 7 a 9\n";
            cout<<"Digite 40 - Mais de 9\n";
            cout<<"Digite o numero: ";
            cin>>resposta;
            soma = soma + resposta;

            // Perguntas sobre consumo
            cout<<"Quantas compras significativas fizeste?\n";
            cout<<"Digite 0  - 0\n";
            cout<<"Digite 15 - 1 a 3\n";
            cout<<"Digite 30 - 4 a 6\n";
            cout<<"Digite 45 - mais de 6\n";
            cout<<"Digite o numero: ";
            cin>>resposta;
            soma = soma + resposta;
            cout<<"Costumas comprar produtos de baixo consumo de energia?\n";
            cout<<"Digite 0 - sim\n";
            cout<<"Digite 25 - nao\n";
            cout<<"Digite o numero: ";
            cin>>resposta;
            soma = soma + resposta;

            // Perguntas sobre resíduos
            cout<<"Procuras reduzir a producao de residuos?\n";
            cout<<"Digite 0  - Sempre\n";
            cout<<"Digite 10 - As vezes\n";
            cout<<"Digite 20 - Raramente\n";
            cout<<"Digite 30 - Nunca\n";
            cout<<"Digite o numero: ";
            cin>>resposta;
            soma = soma + resposta;
            cout<<"Praticas compostagem dos residuos organicos?\n";
            cout<<"Digite 0  - Sempre\n";
            cout<<"Digite 10 - As vezes\n";
            cout<<"Digite 20 - Nunca\n";
            cout<<"Digite o numero: ";
            cin>>resposta;
            soma = soma + resposta;
            cout<<"Costumas tirar o lixo e coloca-lo no eco-ponto para ser reciclado?\n";
            cout<<"Digite 0  - Sempre\n";
            cout<<"Digite 10 - As vezes\n";
            cout<<"Digite 20 - Raramente\n";
            cout<<"Digite 25 - Nunca\n";
            cout<<"Digite o numero: ";
            cin>>resposta;
            soma = soma + resposta;
            cout<<"Quantos sacos de lixo eh que produzes por semana?\n";
            cout<<"Digite 10 - 1 sacos\n";
            cout<<"Digite 20 - 2 sacos\n";
            cout<<"Digite 30 - 3 ou mais sacos\n";
            cout<<"Digite o numero: ";
            cin>>resposta;
            soma = soma + resposta;

            // Interpretando o resultado total obtido
            if(soma < 150){
                cout<<"\nA pegada ecologica eh menor que 4 ha.\n";
            }else if(soma >= 150 && soma <=400){
                cout<<"\nA pegada ecologica eh entre 4 e 6 ha.\n";
            }else if(soma > 400 && soma <=600){
                cout<<"\nA pegada ecologica eh entre 6 e 8 ha.\n";
            }else if(soma > 600 && soma <=800){
                cout<<"\nA pegada ecologica eh entre 8 e 10 ha.\n";
            }else{
                cout<<"\nA pegada ecologica eh maior que 10 ha.\n";
            }

            break;
        }case 2: {
            cout<<"\nQUESTAO 2 DE QUIMICA:\n";

            // Declaração de variável
            string produto;

            // Menu e entrada de dados e atribuição à variável
            cout<<"Opcoes de produtos quimicos perigosos:\n";
            cout<<"Formol\n";
            cout<<"DEHP\n";
            cout<<"PBDE\n";
            cout<<"DIDP\n";
            cout<<"DINP\n";
            cout<<"Digite a opcao que deseja: ";
            cin>>produto;

            // Impressão de informações sobre o produto quimico perigoso
            if(produto == "Formol"){
                cout<<"\nFormaldeido, conhecido popularmente como Formol.\n";
                cout<<"Gas a temperatura ambiente, incolor, estavel, inflamavel e de odor sufocante.\n";
                cout<<"Pode receber diferentes denominacoes de acordo com forma ou diluicao.\n";
                cout<<"Presente em desinfetantes, embalagens, cola, fertilizantes, materiais de construcao, resina, vernizes, tintas, revestimentos, etc.\n";
                cout<<"Pode causar irritacoes nos olhos e nas vias respiratorias e eh um possivel cancerigeno de nasofaringe e leucemia.\n";
            }else if(produto == "DEHP"){
                cout<<"Di(2-etilhexil ftalato) ou DEHP (sigla em ingles).\n";
                cout<<"Produto quimico sintetico usado para tornar os plasticos mais flexiveis.\n";
                cout<<"Presente, por exemplo, nos canos PVC.\n";
                cout<<"Pode causar danos ao figado, rins e sistema reprodutivo.\n";
            }else if(produto == "PBDE"){
                cout<<"Eteres difenilicos polibromados ou PBDE (sigla em ingles).\n";
                cout<<"Compostos organicos sinteticos com varios atomos de bromo em sua estrutura.\n";
                cout<<"Presente em espumas quaisquer, equipamentos eletroeletronicos e em polimeros termoelasticos.\n";
                cout<<"Pode causar danos ao sistema nervoso e prejudicar o desenvolvimento fetal e infantil.\n";
            }else if(produto == "DIDP"){
                cout<<"Diisodecil ftalato ou DIDP (sigla em ingles).\n";
                cout<<"Plastificante usado na producao e revestimento de plastico para aumentar flexibilidade.\n";
                cout<<"Mistura de compostos derivados da esterificacao do acido ftalico e alcoois decilicos isomericos.\n";
                cout<<"Presente em plasticos, fios e cabos, filmes para estofamento e etc.\n";
                cout<<"Pode causar danos ao sistema reprodutivo e endocrino.\n";
            }else if(produto == "DINP"){
                cout<<"Diisononil Ftalato ou DINP (sigla em ingles).\n";
                cout<<"Plastificante de Uso Geral com Alto Peso Molecular para PVC flexivel.\n";
                cout<<"Usado para bens duraveis, aplicacoes em construcao e industria.\n";
                cout<<"Apesar de restricoes, pode estar presente em brinquedos e artigos infantis, aditivos alimentares e racoes de animais.\n";
                cout<<"Pode causar danos ao figado, rins e sistema reprodutivo.\n";
            }else{
                cout<<"Opcao invalida ou digitada errado!\n";
            }
            
            break;
        }case 3: {
            cout<<"\nQUESTAO 3 DE QUIMICA:\n";

            // Declaração de variáveis
            double IQAr,indiceInicial,indiceFinal,concMedida,concInicial,concFinal;

            // Entrada de dados e atribuição às variáveis
            cout<<"Calculadora de Indice de Qualidade do Ar (IQA)\n";
            cout<<"\nDigite o IQAr do comeco do periodo: ";
            cin>>indiceInicial;
            cout<<"Digite o IQAr do fim do periodo: ";
            cin>>indiceFinal;
            cout<<"\nDigite a concentracao de poluentes atmosfericos no momento: ";
            cin>>concMedida;
            cout<<"Digite a concentracao de poluentes atmosfericos no comeco do periodo: ";
            cin>>concInicial;
            cout<<"Digite a concentracao de poluentes atmosfericos no final do periodo: ";
            cin>>concFinal;

            // Encontrando e imprimindo o Indice de qualidade do ar
            IQAr = indiceInicial + ((indiceFinal-indiceInicial)/(concFinal-concInicial))*(concMedida-concInicial);
            cout<<"O Indice de Qualidade do Ar dessa area e desse momento eh de: "<<IQAr<<".\n";

            // Identificando e imprimindo a classificacao do IQAr
            if(IQAr < 0){
                cout<<"Nao existe IQAr negativo!\n";
            }else if(IQAr >= 0 && IQAr <= 50){
                cout<<"Qualidade do ar eh BOA!\n";
            }else if(IQAr >= 51 && IQAr <= 100){
                cout<<"Qualidade do ar eh moderada.\n";
            }else if(IQAr >= 101 && IQAr <= 150){
                cout<<"Qualidade do ar eh inadequada.\n";
            }else if(IQAr >= 151 && IQAr <= 200){
                cout<<"Qualidade do ar eh ruim.\n";
            }else{
                cout<<"Qualidade do ar eh PESSIMA!\n";
            }

            break;
        }case 4: {
            cout<<"\nQUESTAO 4 DE QUIMICA:\n";
            // Impressão de informações sobre poluentes atmosféricos
            cout<<"Informacoes sobre poluentes atmosfericos:\n";
            cout<<"\nPoluentes atmosfericos sao gases e particulas solidas resultantes das\natividades humanas ou de fenomenos naturais dispersos no ar atmosferico.\n";
            cout<<"Classificados em primarios (diretamente emitidos pelas fontes para o ambiente) ou\nsecundarios (resultantes de reacoes de poluentes primarios com substancias\npresentes na camada baixa da atmosfera e fracoes de radiacao solar).\n";
            cout<<"Poluentes atmosfericos:\n";
            cout<<"\nAldeidos (RCHO): compostos quimicos resultantes da oxidacao parcial dos alcoois ou\nde reacoes fotoquimicas na atmosfera, envolvendo hidrocarbonetos.\n";
            cout<<"\nDioxido de Enxofre (SO2): gas toxico e incolor, por fontes naturais ou artificiais,\nreage com compostos atmosfericos e forma material particulado de diametro reduzido\n";
            cout<<"\nDioxido de Nitrogenio (NO2): gas poluente altamente oxidante, fator chave na formacao do ozonio troposferico.\nApresenta efeitos sobre a saude humana e sobre mudancas climaticas.\n";
            cout<<"\nHidrocarbonetos (HC): compostos formados de carbono e hidrogenio e\nque podem se apresentar na forma de gases, particulas finas ou gotas.\n";
            cout<<"\nMaterial particulado (MP): mistura complexa de solidos com diametro reduzido,\ncujos componentes apresentam caracteristicas finas e quimicas diversas.\nExiste uma relacao entre diametro e possibilidade de penetracao no trato respiratorio.\n";
            cout<<"\nMonoxido de carbono (CO): gas inodoro e incolor, formado no processo de queima de combustiveis.\n";
            cout<<"\nOzonio (O3): poluente secundario altamente oxidante na troposfera,\nonde eh encontrado naturalmente e tem a funcao positiva de absorver radiacao solar,\nimpedindo que grande parte dos raios ultravioletas chegem a superficie terrestre.\n";
            cout<<"\nPoluentes de vida curta (PCVC ou SLCP em ingles): tem vida curta na atmosfera,\nsao nocivos a saude, ao ambiente e agravam o efeito estufa.\nExemplos sao o carbono negro, o metano, o ozonio troposferico e os hidrofluorocarbonetos (HFC).\n";
            break;
        }case 5: {
            cout<<"\nQUESTAO 5 DE QUIMICA:\n";

            // Declaração de variável
            double IQAr;

            // Entrada de dados e atribuição à variável
            cout<<"Digite o indice de qualidade do ar (IQAr) da sua area: ";
            cin>>IQAr;

            // Vendo e dizendo a classificação da qualidade do ar e dando informacoes
            if(IQAr < 0){
                cout<<"Nao existe IQAr negativo!\n";
            }else if(IQAr >= 0 && IQAr <= 50){
                cout<<"Qualidade do ar eh BOA, satisfatoria, nao tem riscos devido a poluicao do ar ou tem risco minimo!\n";
            }else if(IQAr >= 51 && IQAr <= 100){
                cout<<"Qualidade do ar eh moderada, aceitavel.\nMas para alguns poluentes pode ocorrer problemas de saude moderado para\num numero muito pequeno de pessoas que sao mais sensiveis a poluicao do ar.\n";
            }else if(IQAr >= 101 && IQAr <= 150){
                cout<<"Qualidade do ar eh inadequada, porque os membros de grupos sensiveis podem apresentar alguns efeitos de saude.\nMas o publico em geral nao eh susceptivel de ser afetado.\n";
            }else if(IQAr >= 151 && IQAr <= 200){
                cout<<"Qualidade do ar eh ruim, causa decrescimo da resistencia fisica e significativo agramento dos sintomas em pessoas com enfermidades cardiorrespiratorias.\n";
            }else{
                cout<<"Qualidade do ar eh PESSIMA, causa o aparecimento prematuro de doencas,\nalem de signficativo agravamento dos sintomas.\nDecrescimo da resistencia fisica em pessoas saudaveis.\n";
            }

            break;
        }default: {
            cout<<"Questao invalida!\n";
            break;
        }
    }
}


// Função sem retorno (void) que recebe uma variavel inteira e responde as questoes de Biologia de acordo com a mesma
void questBiologia(int bio){
    switch(bio){
        case 1: {
            // Impressão do enunciado da questão e da resposta
            cout<<"\nQUESTAO 1 DE BIOLOGIA:\n";
            cout<<"\tUm aluno falou para seu Professor de Biologia que gostaria de construir um aquario,\no professor recomendou que ele fizesse uma observacao cuidadosa em outros aquarios.\n";
            cout<<"\tNessa recomendacao, o professor fez mencoes a componentes vitais abioticos e bioticos do ecossistema aquario.\n";
            cout<<"\tSabendo que esses componentes sao essenciais, descreva-os citando o seu papel para a manutencao do ecossistema aquatico.\n";
            cout<<"\nRESPOSTA DA QUESTAO:\n";
            cout<<"\tFatores bioticos: sao os seres vivos, como as plantas aquaticas (algas), peixes, larvas e alguns animais marinhos.\nEles sao essenciais para a manutencao da cadeia alimentar, a producao de compostos quimicos.\n";
            cout<<"\tFatores abioticos: sao os nao vivos, como a agua, o ar, a temperatura e a luminosidade.\nEles sao essenciais porque sao a moradia e as condicoes de sobrevivencia das especies do ecossistema\n";
            break;
        }case 2: {
            // Impressão do enunciado da questão e da resposta
            cout<<"\nQUESTAO 2 DE BIOLOGIA:\n";
            cout<<"\tEcossistema eh um conjunto de organismos que vivem em determinado local e interagem entre si e com o meio,\nformando um sistema estavel.\n";
            cout<<"\tCada ecossistema eh formado por varias populacoes de espécies diferentes, constituindo, assim, uma comunidade.\n";
            cout<<"\tUma floresta tropical e uma monocultura de soja sao dois ecossistemas bastante distintos.\n";
            cout<<"\n(a) Em qual deles as redes alimentares sao mais complexas? Justifique.\n";
            cout<<"\n(b) Qual deles eh mais suscetivel a pragas? Justifique.\n";
            cout<<"\nRESPOSTAS DAS QUESTOES:\n";
            cout<<"\n(a) A floresta tropical, pois ela apresenta uma vasta quantidade de alimento e\nplantas que podem ser consumidas por diferentes especies de animais.\n";
            cout<<"\n(b) A monocultura de soja, ja que por cultivar apenas uma única especie vegetal\nacaba apresentando ambientes favoraveis para o ciclo de pragas.\n";
            break;
        }case 3: {
            // Impressão do enunciado da questão e da resposta
            cout<<"\nQUESTAO 3 DE BIOLOGIA:\n";
            cout<<"\tNa maioria dos ecossistemas naturais, encontramos varios tipos de produtores e de consumidores.\n";
            cout<<"\tA existencia de varias opcoes alimentares interliga as cadeias em uma teia alimentar, como exemplificado abaixo.\n";
            cout<<"\t\t\tImagem\n";
            cout<<"\tCom base no esquema alimentar acima escolha uma especie de animal dentro da cadeia alimentar apresentada e\ndescreva um desequilibrio ecologico baseado no contexto da biodiversidade:\n";
            cout<<"\nRESPOSTA DA QUESTAO:\n";
            cout<<"\tOs sapos sao predadores naturais de muitas especies de insetos e, portanto, podem ajudar a controlar o fluxo desses insetos em seu habitat natural.\n";
            cout<<"\tPorem, se eles sao introduzidos em um ambiente onde nao sao nativos, eles podem causar um desequilibrio ecologico.\n";
            cout<<"\tPor exemplo, se um sapo de uma regiao eh introduzido em outra onde nao existem predadores naturais para ele,\nesse sapo pode se multiplicar rapidamente e comecar a consumir grandes quantidades de insetos e pequenos animais que\nnao estao acostumados com sua presenca, levando a diminuicao das populacoes de outras especies de animais e plantas que\ndependem desses insetos como fonte de alimento.\n";
            cout<<"\tAlem disso, os sapos podem ser portadores de doencas que prejudicam a vida natural desse novo habitat.\n";
            break;
        }case 4: {
            // Impressão do enunciado da questão e da resposta
            cout<<"\nQUESTAO 4 DE BIOLOGIA:\n";
            cout<<"\tAnalise a seguinte citacao:\n";
            cout<<"\tA morte nao esta na natureza das coisas, eh a natureza das coisas. Mas o que morre eh a forma. A materia eh imortal.\n";
            cout<<"\t - John Fowles\n";
            cout<<"\tPela analise ds citacao, pode-se concluir que a materia eh imortal e essencial a biodiversidade por que?\n";
            cout<<"\nRESPOSTA DA QUESTAO:\n";
            cout<<"\tA materia eh considerada imortal porque na natureza nada se cria ou se destroi, tudo se transforma.\n";
            cout<<"\tOu seja, a materia pode ser reciclada e transformada em novas formas, como gases, liquidos e solidos,\nque serao absorvidas pelos organismos vivos por meio de processos como a fotossintese e a alimentacao.\n";
            cout<<"\tEssas formas sustentam os ecossistemas e os seres vivos.\n";
            break;
        }case 5: {
            // Impressão do enunciado da questão e da resposta
            cout<<"\nQUESTAO 5 DE BIOLOGIA:\n";
            cout<<"\tA vegetacao da Floresta Amazonica capta energia solar e a converte em energia quimica,\narmazenando-a em substancias que integram a sua biomassa.\n";
            cout<<"\tDurante esse processo de conversao de energia, ocorre liberacao de O2, o qual, por sua vez,\neh utilizado pelas proprias plantas no processo de respiracao, para obtencao da energia necessaria\npara a manutencao de seus processos vitais.\n";
            cout<<"\tDiversas industrias que requerem grandes quantidades de energia fazem uso da biomassa da Floresta Amazonica,\na partir da combustao de carvao vegetal.\n";
            cout<<"\tAssim, um intenso desmatamento tem ocorrido na regiao para abastecer as carvoarias que,\nem fornos artesanais, tranformam lenha extraida da floresta em carvao vegetal.\n";
            cout<<"\tA pratica de queimadas que visam ao preparo de terrenos para plantio eh outro fator que\nagrava o desmatamento da Floresta Amazonica e eh responsavel pela maior parte do CO2 emitido pelo Brasil.\n";
            cout<<"\tSabendo disso responda: Como a ocorrencia de queimadas e o desmatamento de grandes areas da floresta\ncontribuem para as altas concentracoes de CO2 na atmosfera?\n";
            cout<<"\nRESPOSTA DA QUESTAO:\n";
            cout<<"\tQuando ocorre mudancas no uso do solo, quando as arvores param de produzir oxigenio, sem a presenca das arvores\nnao ocorre o aumento na umidade do ar e tambem nao ocorre a diminuicao na temperatura.\n";
            break;
        }default: {
            cout<<"Questao invalida!\n";
            break;
        }
    }
}

// Função sem retorno (void) que recebe uma variavel inteira e executa acoes de acordo com a opcao do menu escolhida
void respondedor(int opt){
    int questao;
    switch(opt){
        case 0: {
            // Cria um delay de 5 segundos e encerra o programa
            int tempo;
            cout<<"Saindo...";
            tempo = clock();
            while(clock()-tempo < 5000){}
            exit(0);
            break;
        }case 1: {
            // Solicita o numero da questao de Matemática e chama a função que a resolve
            cout<<"Digite o numero da questao (1 - 5) de Matematica: ";
            cin>>questao;
            questMatematica(questao);
            break;
        }case 2: {
            // Solicita o numero da questao de Física e chama a função que a resolve
            cout<<"Digite o numero da questao (1 - 5) de Fisica: ";
            cin>>questao;
            questFisica(questao);
            break;
        }case 3: {
            // Solicita o numero da questao de Química e chama a função que a resolve
            cout<<"Digite o numero da questao (1 - 5) de Quimica: ";
            cin>>questao;
            questQuimica(questao);
            break;
        }case 4: {
            // Solicita o numero da questao de Biologia e chama a função que a resolve
            cout<<"Digite o numero da questao (1 - 5) de Biologia: ";
            cin>>questao;
            questBiologia(questao);
            break;
        }default: {
            cout<<"Opçao invalida!\n";
            break;
        }
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
        main();}
    return 0;
}