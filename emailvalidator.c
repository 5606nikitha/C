#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isValidEmail(const char *email) 
  {
    int at = -1, dot = -1;
    int len = strlen(email);
    int i;
   // Basic length check
    if (len < 5) return 0;
     for (i = 0; i < len; i++) 
	   {
        if (isspace(email[i])) return 0; 
        if (email[i] == '@')
	    {
            if (at != -1) return 0;  
            at = i;
        }
        if (email[i] == '.')
		 {
            dot = i;
         }
      }
    // Position checks
    if (at < 1) return 0;               
    if (dot < at + 2) return 0;         
    if (dot == len - 1) return 0;       
     return 1;
  }
   int main() 
  {
    char email[100];
    printf("Enter email: ");
    scanf("%s", email);
    if (isValidEmail(email))
        printf("Valid Email\n");
    else
        printf("Invalid Email\n");
    return 0;
  }
