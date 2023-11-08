#include <stdio.h>
#include <stdlib.h>

#define NW (void)!
#define MAX_NAME_LENGTH 50
#define MAX_PHONE_LENGTH 15
#define MAX_ENTRIES 100

struct Entry
{
  char name[MAX_NAME_LENGTH];
  char phone[MAX_PHONE_LENGTH];
};

struct Directory
{
  struct Entry entries[MAX_ENTRIES];
  int count;
};

void addEntry (struct Directory *directory, const char *name,
               const char *phone);
void searchEntry (const struct Directory *directory, const char *name,
                  const char *filename);
void saveEntriesToFile (const struct Directory *directory,
                        const char *filename);
void loadEntriesFromFile (struct Directory *directory, const char *filename);

int
main ()
{
  struct Directory directory;
  directory.count = 0;

  int choice;
  char name[MAX_NAME_LENGTH];
  char phone[MAX_PHONE_LENGTH];

  while (1)
    {
      printf ("\n\nTelephone Directory:\n\n");
      printf ("1. Add new entry\n");
      printf ("2. Show all entries\n");
      printf ("3. Search for an entry\n");
      printf ("4. Exit\n\n");
      printf ("Choose an option below: ");
      NW scanf ("%d", &choice);

      switch (choice)
        {
        case 1:
          printf ("Enter name: ");
          NW scanf ("%s", name);
          printf ("Enter phone number: ");
          NW scanf ("%s", phone);
          addEntry (&directory, name, phone);
          saveEntriesToFile (&directory, "data.bin");
          break;
        case 2:
          loadEntriesFromFile (&directory, "data.bin");
          break;
        case 3:
          printf ("Enter name to search: ");
          NW scanf ("%s", name);
          searchEntry (&directory, name, "data.bin");
          break;
        case 4:
          printf ("Goodbye!\n");
          exit (0);
          break;
        default:
          printf ("Invalid choice. Try again..\n");
          break;
        }
    }

  return 0;
}

void
addEntry (struct Directory *directory, const char *name, const char *phone)
{
  if (directory->count >= MAX_ENTRIES)
    {
      printf ("Directory is full\n");
      return;
    }

  struct Entry *entry = &directory->entries[directory->count];
  strncpy (entry->name, name, MAX_NAME_LENGTH);
  strncpy (entry->phone, phone, MAX_PHONE_LENGTH);
  (directory->count)++;
}

void
searchEntry (const struct Directory *directory, const char *name,
             const char *filename)
{
  FILE *file = fopen (filename, "r");
  if (!file)
    {
      printf ("Failed to open file for reading\n");
      return;
    }

  char line[MAX_NAME_LENGTH + MAX_PHONE_LENGTH + 2];

  int found = 0;

  if (!found)
    {
      while (fgets (line, sizeof (line), file))
        {
          char fname[MAX_NAME_LENGTH];
          char fphone[MAX_PHONE_LENGTH];
          sscanf (line, "%[^,],%s", fname, fphone);
          if (strcmp (fname, name) == 0)
            {
              printf ("Entry found:\n");
              printf ("Name: %s, Phone: %s\n", fname, fphone);
              found = 1;
              break;
            }
        }
    }
  else
    {
      printf ("Entry not found\n");
    }

  fclose (file);
}

void
saveEntriesToFile (const struct Directory *directory, const char *filename)
{
  FILE *file = fopen (filename, "a");
  if (!file)
    {
      printf ("Failed to open file for writing\n");
      return;
    }

  for (int i = 0; i < directory->count; i++)
    {
      fprintf (file, "%s,%s\n", directory->entries[i].name,
               directory->entries[i].phone);
    }

  fclose (file);
  printf ("Entries saved to file successfully\n");
}

void
loadEntriesFromFile (struct Directory *directory, const char *filename)
{
  FILE *file = fopen (filename, "r");
  if (!file)
    {
      printf ("Failed to open file for reading\n");
      return;
    }

  char line[MAX_NAME_LENGTH + MAX_PHONE_LENGTH + 2];

  while (fgets (line, sizeof (line), file))
    {
      char name[MAX_NAME_LENGTH];
      char phone[MAX_PHONE_LENGTH];
      sscanf (line, "%[^,],%s", name, phone);
      printf ("%s", line);
    }

  fclose (file);
}