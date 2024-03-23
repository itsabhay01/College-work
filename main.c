#include <stdio.h>
#include <stdlib.h>

int main() {
    int ans;
    system("COLOR B4");

    printf("Welcome to Adam vs Riddler\n\n");
    printf("You are Adam Norton, captured by the psycho killer, The Riddler.\n");
    printf("He has set up 3 gates, and at each gate, he will ask you a question.\n");
    printf("If you answer all the questions correctly, you will be freed; otherwise, you will be killed.\n");

    printf("Hello, Norton.\n");
    printf("\nAdam: Who are you, and where am I?\n");
    printf("\nRiddler: You are in the rooms of Riddler. If you want to free yourself, answer my questions.\n");
    printf("\nRiddler: I've also captured your mother, wife, and child.\n");
    printf("\nRiddler: Your answers can save or kill them. So, are you ready?\n");
    printf("\nAdam: Yes, I will answer all questions and save everybody. Afterward, I'll find you and take you down.\n");
    printf("\nRiddler: First, save yourself and your family. Ha haa... haaa...\n");
    printf("\nWelcome to the Gate of Mathematics.\n");

    printf("R-1 A father is currently three times as old as his son. Fifteen years ago, the father was four times as old as his son. If the father is now 45 years old, how old is the son?\n");

    scanf("%d", &ans);

    if (ans == 15) {
        printf("Your answer is correct\n");
        printf("R-2 I'm thinking of a number. When I add 7 to it and then multiply the result by 3, I get 33. What is the number I'm thinking of? ");
        scanf("%d", &ans);
        if (ans == 4) {
            printf("Your answer is correct\n");
            printf("R-3 Rajesh purchased a second-hand smartphone for ₹10,000 from an online marketplace. He spent ₹2,000 on getting the smartphone repaired and updated. After the repairs, he decided to sell the smartphone and managed to sell it for ₹13,500. Calculate his profit or loss on this transaction in the context of Indian rupees.\n");
            scanf("%d", &ans);
            if (ans == 1500) {
                printf("Correct answer.\n\nDoor 1 crossed,\nyou saved Michelle.\nNow it's time to save Max.\n");
                printf("But I made sure it wasn't easy for you.\n");
                printf("\nWelcome to the Gate of Destiny.\n");
                printf("R-4 Mr. and Mrs. Mustard have six daughters, and each daughter has one brother. How many people are in the Mustard family?\n");
                int num;
                scanf("%d", &num);
                if (num == 9) {
                    printf("Correct answer\n");
                    printf("R-5 Father was getting the mail, the mother was in the kitchen cooking breakfast, the little brother was playing Nintendo, the big brother was playing the guitar, the little sister was playing with dolls, and Riya was listening to music.\n");
                    printf("Suddenly they heard a sound from Riya's room, and everyone rushed to her room and found that she had been murdered!\n");
                    printf("a) Little Brother\nb) The Mother\nc) The Father\nd) Big Brother\n");
                    char choice;
                    scanf("Answer is %c", &choice);
                    if (choice == 'c') {
                        printf("You are correct\n");
                        printf("R-6 पगरी में भी, गगरी में भी,\n\nऔर तुम्हारी नगरी में भी\n\nकच्चा खाओ, पक्का खाओ\n\nशीश में मेरा तेल लगाओ\n ");
                        int coconut;
                        scanf("answer %d",&num);
                        if (num == coconut) {
                            printf("\nyou are correct\n");
                            printf("\nDoor 3 open\n");
                            printf("you successfully save max\n now its time to save or lose Martha\nhaa haaa haaaa");
                            printf("\nwelcome to the gate of riddler\n");
                            printf("\nR-7 find value of =12÷3×(8−4)+2*2\n");
                            scanf("answer is %d",&num);
                            if (num == 20) {
                                printf("\nyou are correct\n");
                                printf("\nR-8 if 6=30\n3=15\n7=35\nfind\n2=?\n");
                                scanf("answer is %d",&num);
                                if (num == 10) {
                                    printf("\nyou are correct\n");
                                    printf("Riddler: You answered my 8 riddles\n earlier no one reached here");
                                    printf("but this last riddle defines your destiny, and it's not that easy\n ha haa haa");
                                    printf("\nR-9 Riddle: It can’t be touched and can’t be felt. It can’t be seen, or heard, or smelt. It lies behind stars and under hills, and any empty holes it fills. It comes early and follows after, ends life, and kills laughter. What is it?");
                                    int darkness;
                                    scanf("answer is %d",&num);
                                    if (num == darkness) {
                                        printf("\n\nyou won the game\n\n");
                                        printf("\nRiddler: You are really intelligent Adam\n");
                                        printf("\nAs promised, I'll leave you and your family\n\n..");
                                        printf("\nAdam: I also promise you I will find you and kick your ass\n");
                                    } else {
                                        printf("You lose, Adam. Are you ready to go on a trip to heaven with Michelle, Max, and Martha? Haa haaa haaaa");
                                        printf("\nRiddler won\n");
                                    }
                                } else {
                                    printf("Game over... Get ready for a shower in acid rain with your family. Haa haa haaa\n");
                                }
                            } else {
                                printf("Game over... Get ready for a shower in acid rain with your family. Haa haa haaa\n");
                            }
                        } else {
                            printf("Game over... Get ready for a shower in acid rain with your family. Haa haa haaa\n");
                        }
                    } else {
                        printf("Game over... Get ready for a shower in acid rain with your family. Haa haa haaa\n");
                    }
                } else {
                    printf("Game over... Get ready for a shower in acid rain with your family. Haa haa haaa\n");
                }
            } else
            {
                printf("Game over...");
            }
}
}    }
