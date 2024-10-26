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