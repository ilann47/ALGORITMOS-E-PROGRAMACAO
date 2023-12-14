/*
Agregados Heterogêneos: Registros
Como já vimos, podemos usar estruturas como Vetores ou Matrizes para compor agregados
(grupos de dados) que sejam todos do mesmo tipo. Por exemplo: um Vetor de inteiros ou uma
Matriz de caracteres. Dizemos então que Vetores e Matrizes são agregados homogêneos
porque os seus elementos são todos do mesmo tipo. Mas há outras formas de agregar dados.
Podemos ter um agregado heterogêneo. Neste tipo de agregado, podemos agrupar dados que
são de tipos diferentes. Em C, compomos agregados heterogêneos usando estruturas (structs).
Uma estrutura permite dados heterogêneos, isto é, composta de elementos de tipos
diferentes. Cada elemento do registro é denominado campo.
Para ilustrar, suponha um programa que manipula dados de alunos:
struct aluno {
 char nome [41]; // campo nome de 40 posições
 float nota1; // campo nota1 do tipo real
 float nota2; // campo nota2 do tipo real
};
Neste caso usamos struct aluno {...} para criar a estrutura (ou registro) aluno contendo 3
campos: nome, nota1 e nota2.
Podemos então criar variáveis do tipo struct aluno:
struct aluno a1, a2; // a1 e a2 são variáveis do tipo registro aluno

*/
//----------------------------------------------------------------------------------------------------------

/*
Exemplo 1. Faça um programa que use um registro (struct) para armazenar o nome e duas
notas bimestrais de um aluno.
*/
/*
struct aluno
{
  char nome[41];
  float nota1;
  float nota2;
};
main()
{
  struct aluno a1, a2;
  strcpy(a1.nome, "Joao da Silva");
  a1.nota1 = 7;
  a1.nota2 = 9;
  a2 = a1;
  printf("Nome: %s ", a2.nome);
  printf("Notas: %f %f\n", a2.nota1, a2.nota2);
}
*/
struct aluno
{
    char nome[40];
    float nota1;
    float nota2;
};
main()
{
    struct aluno a1, a2;
    strcpy(a1.nome, "Ilannzeria gameplays da area urbana alvanca de xoxoto");
    a1.nota1 = 7;
    a1.nota2 = 10;
    a2 = a1;
    printf("Nome: %s ", a2.nome);
    printf("Notas : %f %f", a2.nota1, a2.nota2);
}
/*
Observe que preenchemos os dados do aluno 1(a1) e depois atribuímos estes dados ao aluno 2
(a2). Neste exemplo não precisávamos usar a variável a2 mas a usamos para demonstrar que
podemos fazer atribuições entre variáveis de mesmo tipo struct.
*/