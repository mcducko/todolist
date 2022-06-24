#include <stdio.h>
#include <stdlib.h>

#define Contents_Size 1000
int main () {
char contents [Contents_Size];
FILE * file;
(file = fopen("to-do-list.txt", "w"));
fprintf(file,"To Do List:\n");
fclose (file);
return 0;
}
//This is coupled with the to do list program to wipe the file and write a header to it. It uses writing  (w) mode instead of append (a) because ive found that (w) erases the file and then writes to it, while append (a) just writes to the file from the end of the current text.

