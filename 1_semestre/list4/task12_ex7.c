#include <stdio.h>
#include <locale.h>
#define Students 30

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	float NotaT, NotaL, NotaF, MediaT, MediaL, MediaF, MediaLF, MediaTF;

	for (i = 0;i < Students;i++)
	{
		do
		{
			printf ("\nDigite a m�dia te�rica do %i aluno: ", i+1);
			scanf ("%f", &NotaT);
			printf ("Digite a m�dia laborat�rio do %i aluno: ", i+1);
			scanf ("%f", &NotaL);
			
			if (NotaL > 10 || NotaL < 0 || NotaT > 10 || NotaT < 0)
			{
				printf ("\nNota digitada inv�lida!!!\n");
			}
		}while (NotaL > 10 || NotaL < 0 || NotaT > 10 || NotaT < 0);
		
		MediaT = NotaT * 0.6;
		MediaL = NotaL * 0.4;
		MediaF = (NotaL + NotaT) / 2;
		
		MediaTF += NotaT;
		MediaLF += NotaL;
		
		printf ("\n\nMedia te�rica do %i aluno �: %.2f\n", i+1, MediaT);
		printf ("Media laborat�rio do %i aluno �: %.2f\n", i+1, MediaL);
		printf ("Media final do %i aluno �: %.2f\n", i+1, MediaF);
	}

	MediaF = (((MediaTF / Students) * 0.6) + ((MediaLF / Students) * 0.4));

	printf ("\nA m�dia final da turma � %.2f",MediaF);

	return 0;
}
