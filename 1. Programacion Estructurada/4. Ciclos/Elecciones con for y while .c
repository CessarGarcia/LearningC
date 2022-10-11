#include <stdio.h>
int
main ()
{

  int num, maxc = 0, total = 0, posc, poscGanador = -1;
  char cand[] = { 'A', 'B', 'C', 'D' };

  do
    {
      printf ("Digite cantidad de N distritos: ");
      scanf ("%d", &num);
    }
  while (num <= 0);

  int candidato[num][4];
  int totalVotos[num];
  double porc[4];
  int i;
  int j;

  for (i = 0; i < num; i++)
    {
      printf ("Distrito N. %d \n\n", i + 1);
      for (j = 0; j < 4; j++)
	{
	  printf ("Digite Votos del candidato %d", j + 1);
	  scanf ("%d", &candidato[i][j]);
	  totalVotos[j] = 0;
	}
      printf ("\n\n");
    }

  int cont;
  for (i = 0; i < num; i++)
    {
      for (j = 0; j < 4; j++)
	{
	  totalVotos[cont] += +candidato[i][j];
	  cont++;
	}
    }

  printf ("Distrito\tCandidato\tCandidato\tCandidato\tCandidato\n");
  printf ("\t\tA\t\tB\t\tC\t\tD\n");
  for (i = 0; i < num; i++)
    {
      printf ("%d \n\n", i + 1);
      for (j = 0; j < 4; j++)
	{
	  printf ("%d \n\n", candidato[i][j]);
	}
    }

  printf ("\nVotos\t\t");
  for (i = 0; i < 4; i++)
    {
      printf ("%d \n\n", totalVotos[i]);
      total += totalVotos[i];
    }

  for (i = 0; i < 4; i++)
    {
      if (totalVotos[i] > maxc)
	{
	  maxc = totalVotos[i];
	  posc = i;
	}
    }

  printf ("\nEl candidato %d Fuel el mas votado con %d votos", cand[posc],
	  maxc);
  for (i = 0; i < 4; i++)
    {
      porc[i] = (totalVotos[i] * 100 / total);
      printf ("candidato %d %f \n\n", cand[i], porc[i]);
    }
  for (i = 0; i < 4 && poscGanador == -1; i++)
    {
      if (porc[i] > 50)
	{
	  poscGanador = 1;

	}
    }


  if (poscGanador == -1)
    {
      printf ("\nAun no hay candidato ganador..");
    }
  else
    {
      printf ("\nGanador : Candidato %d", cand[poscGanador]);

    }
  printf ("\n\n");


  return 0;
}
