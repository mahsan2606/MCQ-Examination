#include<stdio.h>
#include<stdlib.h>
main()
{
    int score=0;
    char answer;
    char name[30];
    int enroll;
    puts("********************************************************");
    puts("     ********************************************");
    puts("         Multiple Choice Question Examination");
    puts("                Total Marks = 25*2=50");
    puts("                 No. of Question = 25");
    puts("     ********************************************");
    puts("********************************************************\n");
    puts("Note: If You give any wrong answer then Score will not be calculated.\n");

    printf("Candidate Name: ");
    gets(name);
    puts("\nQ.1: A Chemical Used for surface cleaning is.......");
    puts(" A. Detergent \n B. Shirt \n C. Powder \n D. Powerfoam");
    printf("Ans. : ");
    scanf(" %c", &answer);
    if((answer == 'A')|| (answer == 'a'))
    {
        score = score+2;
    }
    puts("\nQ.2: The masculine word of 'Maid' is.......");
    puts(" A. Bachelor \n B. Spinster \n C. Milkman \n D. Maidman");
    printf("Ans.: ");
    scanf(" %c", &answer);
    if((answer == 'A')|| (answer == 'a'))
    {
        score = score+2;
    }
    puts("\nQ.3: He said that he.....going to Jajuar.");
    puts(" A. is \n B. were \n C. was \n D. has been");
    printf("Ans.: ");
    scanf(" %c", &answer);
    if((answer == 'C')|| (answer == 'c'))
    {
        score = score+2;
    }
    puts("\nQ.4: The young ones of eagles are called.......");
    puts(" A. eaglets \n B. kids \n C. lambs \n D. kittens");
    printf("Ans.: ");
    scanf(" %c", &answer);
    if((answer == 'A')|| (answer == 'a'))
    {
        score = score+2;
    }
    puts("\nQ.5: A naval officer died....... a car accident.");
    puts(" A. in \n B. of \n C. by \n D. through");
    printf("Ans.: ");
    scanf(" %c", &answer);
    if((answer == 'A')|| (answer == 'a'))
    {
        score = score+2;
    }
    puts("\nQ.6: I have....... more books for you to read.");
    puts(" A. some \n B. any \n C. many \n D. few");
    printf("Ans.: ");
    scanf(" %c", &answer);
    if((answer == 'A')|| (answer == 'a'))
    {
        score = score+2;
    }
    puts("\nQ.7: The past form of 'stick' is.......");
    puts(" A. struck \n B. stuck \n C. sticked \n D. stock");
    printf("Ans.: ");
    scanf(" %c", &answer);
    if((answer == 'B')|| (answer == 'b'))
    {
        score = score+2;
    }
    puts("\nDirection : Choose the word nearest in meaning to the given word--");
    puts("\nQ.8: Corruption ");
    puts(" A. honesty \n B. virtue \n C. dishonesty \n D. honest");
    printf("Ans. : ");
    scanf(" %c", &answer);
    if((answer == 'C')|| (answer == 'c'))
    {
        score = score+2;
    }
    puts("\nQ.9: Chaos ");
    puts(" A. Lawlessness \n B. inexperienced \n C. disturb \n D. mould");
    printf("Ans. : ");
    scanf(" %c", &answer);
    if((answer == 'A')|| (answer == 'a'))
    {
        score = score+2;
    }
    puts("\nQ.10: Scene ");
    puts(" A. view \n B. site \n C. stage \n D. occasion");
    printf("Ans. : ");
    scanf(" %c", &answer);
    if((answer == 'B')|| (answer == 'b'))
    {
        score = score+2;
    }
    puts("\nDirection : Choose the word opposite in meaning to the given word--");
    puts("\nQ.11: Scattered ");
    puts(" A. separated \n B. mixed \n C. gathered \n D. attached");
    printf("Ans. : ");
    scanf(" %c", &answer);
    if((answer == 'C')|| (answer == 'c'))
    {
        score = score+2;
    }
    puts("\nQ.12: Vigilant ");
    puts(" A. careless \n B. irresponsible \n C. ignorant \n D. innocent");
    printf("Ans. : ");
    scanf(" %c", &answer);
    if((answer == 'A')|| (answer == 'a'))
    {
        score = score+2;
    }
    puts("\nQ.13: Obtuse ");
    puts(" A. bright \n B. dull \n C. blunt \n D. dumb");
    printf("Ans. : ");
    scanf(" %c", &answer);
    if((answer == 'A')|| (answer == 'a'))
    {
        score = score+2;
    }
    puts("\n Direction : Fill in the blanks with suitable word given in the alternatives:");
    puts("\nQ.14: Either Rahul or Vicky forgot to take....... Pen. ");
    puts(" A. their \n B. his \n C. theirs \n D. one's");
    printf("Ans. : ");
    scanf(" %c", &answer);
    if((answer == 'B')|| (answer == 'b'))
    {
        score = score+2;
    }
    puts("\nQ.15: Six kilometers....... a long distance. ");
    puts(" A. is \n B. are \n C. had \n D. has");
    printf("Ans. : ");
    scanf(" %c", &answer);
    if((answer == 'A')|| (answer == 'a'))
    {
        score = score+2;
    }
    puts("\nQ.16: An assembly of listeners is ....... ");
    puts(" A. spectators \n B. audience \n C. mob \n D. crowd");
    printf("Ans. : ");
    scanf(" %c", &answer);
    if((answer == 'B')|| (answer == 'b'))
    {
        score = score+2;
    }
    puts("\nQ.17: Copy in the examination is an ....... act. ");
    puts(" A. mortal \n B. immortal \n C. amoral \n D. immoral");
    printf("Ans. : ");
    scanf(" %c", &answer);
    if((answer == 'D')|| (answer == 'd'))
    {
        score = score+2;
    }
    puts("\nQ.18: We are justified in accusing him.......theft. ");
    puts(" A. for \n B. with \n C. due to \n D. of");
    printf("Ans. : ");
    scanf(" %c", &answer);
    if((answer == 'D')|| (answer == 'd'))
    {
        score = score+2;
    }
    puts("\nQ.19: An honest man is....... noble work of God. ");
    puts(" A. a \n B. an \n C. the \n D. no article");
    printf("Ans. : ");
    scanf(" %c", &answer);
    if((answer == 'C')|| (answer == 'c'))
    {
        score = score+2;
    }
    puts("\nQ.20: Books were lying.......the curtain ");
    puts(" A. after \n B. under \n C. beyond \n D. behind");
    printf("Ans. : ");
    scanf(" %c", &answer);
    if((answer == 'D')|| (answer == 'd'))
    {
        score = score+2;
    }
    puts("\nQ.21: To turn over a new leaf means....... ");
    puts(" A. To change completely one's course of action \n B. to shift attention to new problems");
    puts(" C. to cover up one's faults \n D. to change the old habits and adopt new ones");
    printf("Ans. : ");
    scanf(" %c", &answer);
    if((answer == 'A')|| (answer == 'a'))
    {
        score = score+2;
    }
    puts("\nQ.22: He is the Friend....... I trust most. ");
    puts(" A. who \n B. whom \n C. which \n D. him");
    printf("Ans. : ");
    scanf(" %c", &answer);
    if((answer == 'B')|| (answer == 'b'))
    {
        score = score+2;
    }
    puts("\nQ.23: The statue was....... heavy that a crane was brought to lift it. ");
    puts(" A. too \n B. much \n C. so \n D. very");
    printf("Ans. : ");
    scanf(" %c", &answer);
    if((answer == 'C')|| (answer == 'c'))
    {
        score = score+2;
    }
    puts("\nQ.24: Veena could not prevent her child....... going out with the other children. ");
    puts(" A. from \n B. over \n C. for \n D. about");
    printf("Ans. : ");
    scanf(" %c", &answer);
    if((answer == 'A')|| (answer == 'a'))
    {
        score = score+2;
    }
    puts("\nQ.25: On....... trip to the Himalayas we visited several temples there. ");
    puts(" A. his \n B. their \n C. its \n D. our");
    printf("Ans. : ");
    scanf(" %c", &answer);
    if((answer == 'D')|| (answer == 'd'))
    {
        score = score+2;
    }
    puts("\n**************************************************************************");
    puts("       ****************************************************************");
    printf("                   %s Scored %d Out of 50\n", name, score);
    puts("       ****************************************************************");
    puts("****************************************************************************\n \n");
    puts("                  Press Enter for Answer Sheet\n");
    getch();
    puts("1. A, 2. A, 3. C, 4. A, 5. A, 6.A, 7. B, 8. C, 9. A, 10. B, 11. C, 12. A, 13. A,\n14. B, 15. A, 16. B, 17. D, 18. D, 19. C, 20. D, 21. A, 22. B, 23. C, 24. A, 25. D");
    puts("\n\n*************************      Thank You !    **************************\n \n");

}
