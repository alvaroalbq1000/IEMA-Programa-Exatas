#include <iostream>
using namespace std;

int main(){
    int questao,sair;
    // Solicita o numero da questao de Química e chama o switch de acordo
    cout<<"Digite o numero da questao (1 - 5) de Quimica: ";
    cin>>questao;
    switch(questao){
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
    cout<<"Digite qualquer coisa quando quiser sair: ";
    cin>>sair;
    return 0;
}