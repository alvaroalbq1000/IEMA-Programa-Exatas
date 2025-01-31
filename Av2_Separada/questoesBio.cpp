#include <iostream>
using namespace std;

int main(){
    int questao,sair;
    // Solicita o numero da questao de Biologia e chama o switch de acordo
    cout<<"Digite o numero da questao (1 - 5) de Biologia: ";
    cin>>questao;
    switch(questao){
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
    cout<<"Digite qualquer coisa quando quiser sair: ";
    cin>>sair;
    return 0;
}