#include <stdio.h>
#include <ctype.h>
int isVowel(char ch) 
{
  char lowerChar = tolower(ch);
  return (lowerChar == 'a' || lowerChar == 'e' || lowerChar == 'i' || lowerChar == 'o' || lowerChar == 'u');
}

void findIndices(char str[], char ch) 
{
  int count = 0;
  for (int i = 0; str[i] != '\0'; i++) 
  {
    if (str[i] == ch) 
    {
      printf("%d ", i);
      count++;
    }
  }
  if (count == 0) 
  {
    printf("Character not found.\n");
  }
}

int countVowels(char str[]) 
{
  int count = 0;
  for (int i = 0; str[i] != '\0'; i++) 
  {
    if (isVowel(str[i])) 
    {
      count++;
    }
  }
  return count;
}
int main() 
{
  char str[100];
  char ch;
  int option;

  printf("Enter the string: ");
  fgets(str, sizeof(str), stdin);

  printf("\nSelect the operation you want to perform:\n");
  printf("1. Find the indices of a particular character\n");
  printf("2. Count the number of vowels\n");

  scanf("%d", &option);

  switch (option) 
  {
    case 1:
      printf("Enter the character to search for: ");
      scanf(" %c", &ch);
      findIndices(str, ch);
      break;
    case 2:
      printf("The number of vowels in the string is: %d\n", countVowels(str));
      break;
    default:
      printf("Invalid option.\n");
  }

  return 0;
}