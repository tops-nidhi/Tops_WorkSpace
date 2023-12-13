// WAP to reverse a string and check that the string is palindrome or not
#include <stdio.h>
#include <string.h>
  
int main() {
   char str[100], reverse[100];
   //to get the string from the user
   printf("Enter the string:");
   scanf("%s", str);
    
   strcpy(reverse, str);
    
   strrev(reverse);
   printf("Reversed string is %s\n", reverse);

   if(strcmp(str,reverse)==0)
      printf("%s is a palindrome.\n", str);
   else
      printf("%s is not a palindrome.\n", str);
       
   return 0;
}
