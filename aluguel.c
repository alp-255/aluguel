#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CARS 5
#define MAX_USERS 10

typedef struct {
    char model[30];
    float price_per_day;
    int available;
} Car;

typedef struct {
    char username[30];
    char senha[30];
} User;

Car cars[MAX_CARS];
User  users[MAX_USERS];
int car_count = 0;
int user_count = 0;

void initializeCars() {
    strcpy(cars[0].model, "Carro1");
    cars[0].price_per_day = 50.0;
    cars[0].available = 1;

    strcpy(cars[1].model, "Carro2");
    cars[1].price_per_day = 100.0;
    cars[1].available = 1;

    strcpy(cars[2].model, "Carro3");
    cars[1].price_per_day = 100.0;
    cars[1].available = 1;

    strcpy(cars[3].model, "Carro4");
    cars[1].price_per_day = 100.0;
    cars[1].available = 1;

    strcpy(cars[4].model, "Carro5");
    cars[1].price_per_day = 100.0;
    cars[1].available = 1;

    car_count = 5;
}

void initializeUsers() {
    strcpy(users[0].username, "user1");
    strcpy(users[0].password, "pass1");

    strcpy(users[1].username, "user2");
    strcpy(users[1].password, "pass2");

    strcpy(users[2].username, "user3");
    strcpy(users[2].password, "pass3");

    strcpy(users[3].username, "user4");
    strcpy(users[3].password, "pass4");

    strcpy(users[4].username, "user5");
    strcpy(users[4].password, "pass5");

    strcpy(users[5].username, "user6");
    strcpy(users[5].password, "pass6");

    strcpy(users[6].username, "user7");
    strcpy(users[6].password, "pass7");

    strcpy(users[7].username, "user8");
    strcpy(users[7].password, "pass8");

    strcpy(users[8].username, "user9");
    strcpy(users[8].password, "pass9");

    strcpy(users[9].username, "user10");
    strcpy(users[9].password, "pass10");

    user_count = 10;
}

int authenticateUser (char *username, char *password) {
    for (int i = 0; i < user_count; i++) {
        if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0) {
            return 1;
        }
    }
    return 0;
}

void rentCar() {
    int days, car_index;
    printf("Escolha um carro (0 a %d): ", car_count - 1);
    for (int i = 0; i < car_count; i++) {
        if (cars[i].available) {
            printf("%d: %s - R$%.2f por dia\n", i, cars[i].model, cars[i].price_per_day);
        }
    }

    scanf("%d", &car_index);
    if (car_index < 0 || car_index >= car_count || !cars[car_index].available) {
        printf("Carro não disponível.\n");
        return;
    }

    printf("Por quantos dias você deseja alugar? ");
    scanf("%d", &days);

    float total_price = days * cars[car_index].price_per_day;
    printf("Você alugou o carro %s por %d dias. Total a pagar: R$%.2f\n", cars[car_index].model, days, total_price);
    cars[car_index].available = 0;
}

int main() {
    initializeCars();
    initializeUsers();

    char username[30], password[30];

    printf("Login\n");
    printf("Usuário: ");
    scanf("%s", username);
    printf("Senha: ");
    scanf("%s", password);

    if (authenticateUser (username, password)) {
        printf("Login bem-sucedido!\n");
        rentCar();
    } else {
        printf("Falha na autenticação. Tente novamente.\n");
    }

    return 0;
}