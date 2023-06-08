#include <stdio.h>
#include <locale.h>

struct jogo {
	char resp1,resp2,resp3,resp4,resp5, resp6, resp7, resp8, resp9, resp10;

int i, replayjogo;
float acerto;
};

int main(){
struct jogo jg;
setlocale(LC_ALL,"");

do{
	//INTRODU��O
printf("**************************************************  QUIZ DOS VERBOS  **************************************************\n");
printf("                         BEM-VINDO(A) AO QUIZ DOS VERBOS, UM JOGO SOBRE A L�NGUA PORTUGUESA!\n\n");
system("PAUSE");
system("cls");

//OBJETIVO DO JOGO
printf("-Bem-vindo ao Quiz de Verbos!\n");
printf("-Nosso objetivo � tornar o aprendizado da l�ngua portuguesa divertido e envolvente, desafiando voc� a aprimorar suas habilidades verbais.\n");
printf("-Teste seus conhecimentos, expanda seu vocabul�rio e conquiste novos n�veis de dom�nio lingu�stico enquanto se diverte.\n");
printf("-Embarque nessa jornada educativa e mostre seu talento com os verbos!\n\n");
system("PAUSE");
system("cls");


//EXPLICANDO REGRAS
printf("Regras do jogo:\n");
printf("1. Objetivo: Ven�a obtendo o m�ximo de acertos.\n");
printf("2. Formato: 10 perguntas de m�ltipla escolha com apenas uma resposta certa.\n");
printf("3. Respostas: Escolha a op��o correta.\n");
printf("4. Pontua��o: Cada acerto vale um ponto.\n");
printf("5. Feedback: Voc� receber� o feedback da quest�o ap�s cada resposta.\n");
printf("6. Pr�xima pergunta: Avance automaticamente.\n");
printf("7. Fim do jogo: Ser� exibida a pontua��o final.\n");
printf("8. Replay: Jogue novamente.\n\n");

system("pause");
system("cls");


//QUEST�ES


printf("QUEST�O 01:\n");
printf("Qual � a forma correta do verbo no presente do indicativo para a terceira pessoa do singular do verbo \"correr\" na norma culta da l�ngua portuguesa?\n");
printf("A) Corro\nB) Corres\nC) Corre\nD) Correm\n\nRESPOSTA: ");
scanf(" %c", &jg.resp1);

if(jg.resp1 ==  'C'|| jg.resp1 == 'c'){
    printf("Correto, parab�ns! :D\n\n");
    printf("EXPLICA��O\n");
    printf("A forma correta do verbo \"correr\" no presente do indicativo para a terceira pessoa do singular � \"Corre\".\n");
    jg.acerto++;
    
} else {
    printf("INCORRETO!\nMAS N�O DESANIME, VOC� � CAPAZ!\n\n");
    printf("EXPLICA��O\n");
    printf("A forma correta do verbo \"correr\" no presente do indicativo para a terceira pessoa do singular � \"Corre\".\n");
}

system("PAUSE");
system("cls");



printf("QUEST�O 02:\nQual alternativa completa corretamente a frase com o verbo no tempo e modo adequados?\n\"Ontem eu ____ ao parque com meus amigos.\"\nA) fui\nB) iria\nC) foi\nD) vai\n\nRESPOSTA: ");
scanf(" %c", &jg.resp2);

if(jg.resp2 == 'a' || jg.resp2 == 'A'){
    printf("Parab�ns, voc� acertou! XD\n\n");
    printf("EXPLICA��O\n");
    printf("Para completar corretamente a frase, devemos usar o verbo \"fui\" no pret�rito perfeito do indicativo.\n");
    jg.acerto++;
} 
else {
    printf("INCORRETO!\nMas n�o se preocupe, erros fazem parte do aprendizado, voc� vai conseguir! \n\n");
    printf("EXPLICA��O\n");
    printf("Para completar corretamente a frase, devemos usar o verbo \"fui\" no pret�rito perfeito do indicativo.\n");
}

system("PAUSE");
system("cls");


printf("QUEST�O 03:\nQual � o tempo verbal da frase \"Eles estavam assistindo ao filme quando voc� chegou\"?\nA) Pret�rito perfeito\nB) Futuro do presente\nC) Pret�rito imperfeito\nD) Presente do indicativo\nRESPOSTA: ");
scanf(" %c", &jg.resp3);

if(jg.resp3 == 'c' || jg.resp3 == 'C'){
    printf("Incr�vel! Continue assim, sempre dando o seu melhor.\n\n");
    printf("EXPLICA��O\n");
    printf("O tempo verbal da frase � o pret�rito imperfeito, indicando uma a��o que estava ocorrendo no passado.\n");
    jg.acerto++;
} 
else {
    printf("INCORRETO!\nMas tudo bem, cada erro � um passo em dire��o ao sucesso. Continue persistindo! \n\n");
    printf("EXPLICA��O\n");
    printf("O tempo verbal da frase � o pret�rito imperfeito, indicando uma a��o que estava ocorrendo no passado.\n");
}

system("PAUSE");
system("cls");


printf("QUEST�O 04: Qual � o verbo que est� na forma infinitiva na frase \"N�s queremos viajar nas f�rias\"?\n");
printf("a) queremos\n");
printf("b) viajar\n");
printf("c) nas\n");
printf("d) f�rias\n");
printf("Resposta: ");
scanf(" %c", &jg.resp4);

if(jg.resp4 == 'b' || jg.resp4 == 'B'){
    printf("Parab�ns! Seu esfor�o e dedica��o est�o dando resultado.\n\n");
    printf("EXPLICA��O\n");
    printf("O verbo \"viajar\" est� na forma infinitiva na frase \"N�s queremos viajar nas f�rias\".\n");
    jg.acerto++;
} 
else {
    printf("INCORRETO!\nMas lembre-se de que o erro � uma oportunidade para aprender algo novo. Continue tentando! \n\n");
    printf("EXPLICA��O\n");
    printf("O verbo \"viajar\" est� na forma infinitiva na frase \"N�s queremos viajar nas f�rias\".\n");
}

system("PAUSE");
system("cls");

printf("QUEST�O 05: Qual � a forma correta do verbo no imperativo afirmativo para a segunda pessoa do singular do verbo \"fazer\"?\n");
printf("a) Fa�a\n");
printf("b) Faze\n");
printf("c) Fazer\n");
printf("d) Faz\n");
printf("Resposta: ");
scanf(" %c", &jg.resp5);

if (jg.resp5 == 'a' || jg.resp5 == 'A') {
    printf("Parab�ns! Voc� est� arrasando nas respostas!\n\n");
    printf("EXPLICA��O\n");
    printf("A forma correta do verbo \"fazer\" no imperativo afirmativo para a segunda pessoa do singular � \"Fa�a\".\n");
    jg.acerto++;
} else {
    printf("Incorreto!\nMas n�o se preocupe, continue se esfor�ando e voc� vai melhorar!\n\n");
    printf("EXPLICA��O\n");
    printf("A forma correta do verbo \"fazer\" no imperativo afirmativo para a segunda pessoa do singular � \"Fa�a\".\n");
}

system("PAUSE");
system("cls");

printf("QUEST�O 06: Qual � o tempo verbal da frase \"Eu estudei para a prova\"?\n");
printf("a) Presente do indicativo\n");
printf("b) Futuro do presente\n");
printf("c) Pret�rito perfeito\n");
printf("d) Pret�rito mais-que-perfeito\n");
printf("Resposta: ");
scanf(" %c", &jg.resp6);

if (jg.resp6 == 'c' || jg.resp6 == 'C') {
    printf("Parab�ns! Voc� est� mandando muito bem!\n\n");
    printf("EXPLICA��O\n");
    printf("O tempo verbal da frase � o pret�rito perfeito, indicando uma a��o conclu�da no passado.\n");
    jg.acerto++;
} else {
    printf("Incorreto!\nN�o se preocupe, continue praticando e voc� vai melhorar cada vez mais!\n\n");
    printf("EXPLICA��O\n");
    printf("O tempo verbal da frase � o pret�rito perfeito, indicando uma a��o conclu�da no passado.\n");
}

system("PAUSE");
system("cls");

printf("QUEST�O 07: Qual � o verbo que est� na forma infinitiva na frase \"Ela precisa estudar para a prova\"?\n");
printf("a) precisa\n");
printf("b) estudar\n");
printf("c) para\n");
printf("d) prova\n");
printf("Resposta: ");
scanf(" %c", &jg.resp7);

if (jg.resp7 == 'b' || jg.resp7 == 'B') {
    printf("Parab�ns! Voc� est� arrasando nas respostas!\n\n");
    printf("EXPLICA��O\n");
    printf("O verbo \"estudar\" est� na forma infinitiva na frase \"Ela precisa estudar para a prova\".\n");
    jg.acerto++;
} else {
    printf("Incorreto!\nMas n�o desanime, continue estudando e voc� vai melhorar!\n\n");
    printf("EXPLICA��O\n");
    printf("O verbo \"estudar\" est� na forma infinitiva na frase \"Ela precisa estudar para a prova\".\n");
}

system("PAUSE");
system("cls");

printf("QUEST�O 08: Qual � a forma correta do verbo no presente do indicativo para a terceira pessoa do plural do verbo \"beber\"?\n");
printf("a) bebes\n");
printf("b) bebem\n");
printf("c) bebe\n");
printf("d) bebem\n");
printf("Resposta: ");
scanf(" %c", &jg.resp8);

if (jg.resp8 == 'd' || jg.resp8 == 'D') {
    printf("Parab�ns! Voc� est� arrasando nas respostas!\n\n");
    printf("EXPLICA��O\n");
    printf("A forma correta do verbo \"beber\" no presente do indicativo para a terceira pessoa do plural � \"bebem\".\n");
    jg.acerto++;
} else {
    printf("Incorreto!\nN�o se preocupe, continue se esfor�ando e voc� vai melhorar!\n\n");
    printf("EXPLICA��O\n");
    printf("A forma correta do verbo \"beber\" no presente do indicativo para a terceira pessoa do plural � \"bebem\".\n");
}

system("PAUSE");
system("cls");

printf("QUEST�O 09: Escolha a op��o que apresenta um verbo no ger�ndio:\n");
    printf("a) correu\n");
    printf("b) dan�ar\n");
    printf("c) dan�ando\n");
    printf("d) cantou\n");
    printf("Resposta: ");
    scanf(" %c", &jg.resp9);

    if (jg.resp9 == 'c' || jg.resp9 == 'C') {
        printf("Parab�ns! Voc� acertou!\n\n");
        printf("EXPLICA��O\n");
        printf("\"Dan�ando\" � um verbo no ger�ndio, indicando a a��o de dan�ar em progresso ou simult�nea a outra a��o.\n");
    } else {
        printf("Incorreto!\nN�o se preocupe, continue se esfor�ando e voc� vai melhorar!\n\n");
        printf("EXPLICA��O\n");
        printf("\"Dan�ando\" � um verbo no ger�ndio, indicando a a��o de dan�ar em progresso ou simult�nea a outra a��o.\n");
    }

system("PAUSE");
system("cls");

printf("QUEST�O 10: Identifique o verbo na frase abaixo:\n");
    printf("\"A menina corria alegremente no parque.\"\n");
    printf("a) menina\n");
    printf("b) corria\n");
    printf("c) alegremente\n");
    printf("d) parque\n\n");
    printf("Resposta: ");
    scanf(" %c", &jg.resp10);
    
    if (jg.resp10 == 'b' || jg.resp10 == 'B') {
        printf("Correto! O verbo na frase � \"corria\".\n");
    } else {
        printf("Incorreto! O verbo na frase � \"corria\".\n");
    }
    
system("PAUSE");
system("cls");

//RESULTADO FINAL
printf("************************************************** RESULTADO *************************************************************\n\n");
printf("Sua pontua��o final �: %.2f\n\n", jg.acerto);
printf("Voc� acertou %.0f de 10 quest�es.\n\n", jg.acerto);

if (jg.acerto >= 6) {
    printf("Parab�ns! Voc� mandou muito bem no jogo dos verbos!\n\n");
} else {
    printf("N�o desanime! Continue praticando e voc� vai melhorar cada vez mais!\n\n");
}

system("PAUSE");
system("cls");


//REPLAY
printf("Deseja jogar novamente?\n");
printf("1 - SIM\n");
printf("2 - N�O\n");
printf("Escolha uma op��o: ");
scanf("%d", &jg.replayjogo);


printf("\n");
system("cls");


} while (jg.replayjogo == 1);
system("cls");
printf("Obrigado por jogar! :)\n");
printf("Jogo criado por: �rick Mello, Davi Guimar�es, Jo�o Cunha, Wrick Naz�rio, Jo�o Paulo.");
return 0;
}









