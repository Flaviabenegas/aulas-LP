///Comparação de Login (case-insensitive):
///Implemente um sistema simples de login onde o usuário deve informar login e senha. O login deve ser
//*comparado com strcasecmp() e a senha com strcmp(), para validar os dados.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    char login_correto[20] = "login";
    char senha_correta[20] = "cachorro";
    char entrada[20];
    char password[20];

    printf("Digite o login: ");
    scanf("%s", entrada);

    printf("Digite a senha: ");
    scanf("%s", password);

    if (strcasecmp(login_correto, entrada) == 0 && strcmp(senha_correta, password) == 0) {
        printf("Login successfully\n");
    } else {
        printf("Login incorrect\n");
    }

    return 0;
}


