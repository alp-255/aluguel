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