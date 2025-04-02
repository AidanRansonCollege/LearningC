#include <stdio.h>
#include <string.h>

typedef char user [25];

typedef struct {
    char name[25];
    int score;
    int health;
} Player;


int main(){

    char user1[25] = "Alice";
    user user2 = "Bob";

    Player player1 = {"Alice", 24, 10};
    Player player2 = {"Bob", 94, 1};
    
    return 0;
}