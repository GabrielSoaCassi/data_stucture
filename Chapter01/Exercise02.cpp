#include <cstring>
#include <iostream>

//2- Identitfy the errors;

/*
a-   char* f(char *s) {
        char  ch ='A';
        return &ch;
    }
b-   char *s1;
    strcpy(s1,s2);

c- char *s1;
    s1 = new char[strlen(s2)];
    strcopy(s1,s2);
*/

char* f(char *s){
    *s = 'A';
    return s;
}

 void b(){
     char *s1 = new char;
     char *s2 = strdup("Gabriel");
     strcpy(s1,s2);
     std::cout << s1 << std::endl;
 }

 void c(){
     char *s1;
     char *s2 = strdup("Gabriel");
     s1 = new char[strlen(s2)];
     strcpy(s1,s2);
     std::cout << s1 << std::endl;
 }

int main(){
     b();
     c();
    return 0;
}