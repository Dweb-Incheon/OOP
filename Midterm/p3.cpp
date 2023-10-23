#include <iostream>
void abc ( char& a ){
   printf("%s \n", &a);
}
int main() { 
    char str[] = "Incheon";
    abc(*str);
    return 0;
}
