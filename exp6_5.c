#include <stdio.h>
#include <string.h>

void countOccurrences(char str[], char word[]) 
{
  int count = 0;
  int len = strlen(word);

  for (int i = 0; str[i] != '\0'; i++) 
  {
    if (strncmp(&str[i], word, len) == 0) 
    {
      count++;
      i += len - 1;
    }
  }

  printf("The word '%s' appears %d times in the sentence.\n", word, count);
}

void capitalizeWords(char str[]) 
{
  int i = 0;

  while (str[i] != '\0') 
  {
    if (str[i] == ' ' || i == 0) 
    {
      str[i] = toupper(str[i]);
    }
    i++;
  }

  printf("The capitalized sentence is: %s\n", str);
}

int main() 
{
  char str[100];
  char word[50];
  int option;

  printf("Enter the sentence: ");
  fgets(str, sizeof(str), stdin);

  printf("\nSelect the operation you want to perform:\n");
  printf("1. Count the occurrences of a specific word\n");
  printf("2. Capitalize the first letter of first word\n");

  scanf("%d", &option);

  switch (option) 
  {
    case 1:
      printf("Enter the word to search for: ");
      scanf("%s", word);
      countOccurrences(str, word);
      break;
    case 2:
      capitalizeWords(str);
      break;
    default:
      printf("Invalid option.\n");
  }

  return 0;
}