#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct String
{
    char *str;
    int capacity;
    int length;
} string;

void set_str(string *mensagem, char inicial[]) {

    int length = strlen(inicial);
    mensagem->length = length;

    if(length % 16 == 0) {
        mensagem->str = calloc(length, sizeof(char));
    } else {
        length = length/16 + 1;
        length *= 16;
        mensagem->str = calloc(length, sizeof(char));
    }


    for(int a = 0; a < length; a++) {
        mensagem->str[a] = inicial[a];
    }

    mensagem->capacity = (int) sizeof mensagem->str;

}

void read_str(string *name) {
    name->str = calloc(301, sizeof(char));
    fgets(name->str, 300, stdin);
    for(int a = 0; a < 300; a++){
        if(name->str[a] == '\n') {
            name->str[a] = '\0';
            break;
        }
    }
    name->length = strlen(name->str);
    name->capacity = (int) sizeof name->str;
}

void concat_str(string *primeira, string *segunda) {
    int tamanhofinal, contador = 0;

    printf("primeira: %i\n", primeira->length);
    printf("segunda: %i\n", segunda->length);

    // if (primeira->capacity < primeira->length + segunda->length) {
        if((primeira->length + segunda->length) % 16 == 0) {
            int valor = (primeira->length + segunda->length);
            primeira->capacity = (primeira->length /16) + 1;
            primeira->capacity *= 16;
            primeira->str = realloc(primeira->str, sizeof(char) * primeira->capacity);
            primeira->length = primeira->length + segunda->length;
            primeira->capacity = primeira->length + segunda->length;
        } else {
            primeira->length = primeira->length + segunda->length;
            primeira->capacity = (primeira->length /16) + 1;
            primeira->capacity *= 16;
            primeira->str = realloc(primeira->str, sizeof(char) * primeira->capacity);
        }
    // } 

    for(int a = primeira->length - segunda->length; a <= primeira->length; a++) {
        primeira->str[a] = segunda->str[contador];
        contador++;
    }

    primeira->length = strlen(primeira->str);
}

void clear_str(string *referencia) {
    free(referencia->str);
    referencia->capacity = 0;
    referencia->length = 0;
    referencia->str = NULL;
}

int main() {
    string greeting;
    string name;
    set_str(&greeting, "Oi ");
    read_str(&name);
    concat_str(&greeting, &name);
    printf("%s\n", greeting.str);
    printf("%i %i\n", greeting.capacity, greeting.length);
    clear_str(&greeting);
    clear_str(&name);
    return 0;
}