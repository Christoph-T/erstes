#include <stdio.h>

int main ()
{
  int zahl;
  printf ("Bitte geben Sie eine Zahl ein: ");
  scanf ("%d", &zahl);

  if (zahl == 5)
    {
      printf ("Juhu es ist eine 5!\n");

    }
  else
    {
      printf ("Die Zahl ist nicht 5! Es wurde %d eingeben.", zahl);
    }
  return 0;
}
