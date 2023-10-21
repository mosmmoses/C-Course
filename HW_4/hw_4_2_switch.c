#include <stdio.h>

int
main ()
{
  int month;

  printf ("Enter the month number: ");
  scanf ("%d", &month);

  switch (month)
    {
    case 1:
      printf ("Winter\n");
      break;
    case 2:
      printf ("Winter\n");
      break;
    case 3:
      printf ("Spring\n");
      break;
    case 4:
      printf ("Spring\n");
      break;
    case 5:
      printf ("Spring\n");
      break;
    case 6:
      printf ("Summer\n");
      break;
    case 7:
      printf ("Summer\n");
      break;
    case 8:
      printf ("Summer\n");
      break;
    case 9:
      printf ("Autumn\n");
      break;
    case 10:
      printf ("Autumn\n");
      break;
    case 11:
      printf ("Autumn\n");
      break;
    case 12:
      printf ("Winter\n");
      break;
    default:
      printf ("Invalid month number\n");
      break;
    }

  return 0;
}
