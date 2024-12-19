#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *file;

typedef struct UserData
{
    char id[100];
    int lv;
    int money;
} userData;

void printUserData(const userData *data){
    printf("Id : %s, lv : %d, money : %d", data->id, data->lv, data->money);
}

int main()
{
    char select[10];
    printf("Mode 0 : Add user, Mode 1 Login user");
    fgets(select, sizeof(select), stdin);
    select[strlen(select)-1] = '\0';
    if (select[0] == '0')
    {
        userData user_data = {"", 1, 0};
        printf("Add user. enter user id >> ");
        fgets(user_data.id, sizeof(user_data.id), stdin);
        user_data.id[strlen(user_data.id)-1] = '\0';
        file = fopen("C:/Users Files/mjk/Coding/Projects/CProgramming-EunsaemYang/Final/Week14a/User.dat", "wb");
        if (file == NULL) {
            return 1;
        }
        fwrite(&user_data, sizeof(user_data), 1, file);
        fclose(file);
    }
    else if(select[0] == '1'){
        userData user_data;
        file = fopen("C:/Users Files/mjk/Coding/Projects/CProgramming-EunsaemYang/Final/Week14a/User.dat", "rb");
        if(file == NULL){
            return -1;
        }
        fread(&user_data, sizeof(user_data), 1, file);
        fclose(file);

        printUserData(&user_data);
    }
    return 0;
}