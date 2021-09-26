#include <stdio.h>
#include <string.h>

int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
char letters[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q",
                  "r", "s", "t", "u", "v", "x", "y", "z"};

int computeScore(char word[]);

int main(void) {
    char word1[] = "jones";
    char word2[] = "zetareticulum";

    int score1 = computeScore(word1);
    int score2 = computeScore(word2);

    if (score1 > score2) {
        printf("Player 1 wins!\n");
    }
    else if (score1 > score2) {
        printf("Player 2 wins!\n");
    } else {
        printf("Tie!");
    }
}

int computeScore(char arr[])
{
    int score = 0;
    int count = 0;

    for (int i = 0; i < strlen(arr); i++) {
        char x = arr[i];
        int j = 0;
        while (letters[j] != x) {
            count++;
            j++;
        }
        score += points[j];
    }
    return score;
}

