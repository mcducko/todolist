// a program to make a to-do list and store it in a file in a common file location
// coupling it with a clearing and header writing program
#include <stdio.h>
#include <stdlib.h>

#define Contents_Size 1000

int main ()
{
char contents [Contents_Size];
FILE * file;

(file = fopen("to-do-list.txt", "a"));
printf("Add an item to your to-do list:\n");
fgets(contents, Contents_Size, stdin);
fputs(contents, file);
printf("Item successfully added to your To Do List.\nCheck the file \"to-do-list.txt\' to view your To Do List.\n");
printf("Type ./todolisthelp for more instructions on the To Do List program.\n");
fclose (file);
return 0;
}
