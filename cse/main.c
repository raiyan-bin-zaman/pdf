#include <stdio.h>

/* Lab 08 solutions. Each task is a function; main() runs the one you pick.
   Build: gcc -Wall main.c -o main */

//G8.1
void g8_1(void)
{
    int term;
    printf("Enter the term number (1-3): ");
    scanf("%d", &term);

    switch (term) {
    case 1:
        printf("Spring\n");
        break;
    case 2:
        printf("Summer\n");
        break;
    case 3:
        printf("Fall\n");
        break;
    default:
        printf("%d is not a term number.\n", term);
    }
}

//E8.1 (Worked Example 8.1 with every break removed)
void e8_1(void)
{
    char letter;

    printf("Enter the letter grade: ");
    scanf(" %c", &letter);

    switch (letter) {
    case 'A':
    case 'B':
        printf("Strong work. Keep the same study pattern.\n");
    case 'C':
        printf("A pass. Review the topics you lost marks on.\n");
    case 'D':
        printf("At risk. See the course faculty this week.\n");
    case 'F':
        printf("Not passed. The course must be repeated.\n");
    default:
        printf("%c is not a grade on the NSU scale.\n", letter);
    }
}

//E8.2
void e8_2(void)
{
    int choice;

    printf("1. Add a book\n");
    printf("2. Search for a book\n");
    printf("3. Issue a book\n");
    printf("4. Return a book\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
        printf("Would add a new book to the catalogue.\n");
        break;
    case 2:
        printf("Would search the catalogue.\n");
        break;
    case 3:
        printf("Would issue a book to a member.\n");
        break;
    case 4:
        printf("Would record a returned book.\n");
        break;
    default:
        printf("%d is not a valid choice.\n", choice);
    }
}

//M8.1
void m8_1(void)
{
    char ch;

    printf("Enter a letter: ");
    scanf(" %c", &ch);

    switch (ch) {
    case 'a': case 'e': case 'i': case 'o': case 'u':
    case 'A': case 'E': case 'I': case 'O': case 'U':
        printf("%c is a vowel.\n", ch);
        break;
    case 'b': case 'c': case 'd': case 'f': case 'g': case 'h': case 'j':
    case 'k': case 'l': case 'm': case 'n': case 'p': case 'q': case 'r':
    case 's': case 't': case 'v': case 'w': case 'x': case 'y': case 'z':
    case 'B': case 'C': case 'D': case 'F': case 'G': case 'H': case 'J':
    case 'K': case 'L': case 'M': case 'N': case 'P': case 'Q': case 'R':
    case 'S': case 'T': case 'V': case 'W': case 'X': case 'Y': case 'Z':
        printf("%c is a consonant.\n", ch);
        break;
    default:
        printf("%c is not a letter.\n", ch);
    }
}

//M8.2
void m8_2(void)
{
    double a, b;
    char op;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Enter the operator (+ - * /): ");
    scanf(" %c", &op);

    switch (op) {
    case '+':
        printf("%.2f + %.2f = %.2f\n", a, b, a + b);
        break;
    case '-':
        printf("%.2f - %.2f = %.2f\n", a, b, a - b);
        break;
    case '*':
        printf("%.2f * %.2f = %.2f\n", a, b, a * b);
        break;
    case '/':
        if (b == 0)
            printf("Cannot divide by zero.\n");
        else
            printf("%.2f / %.2f = %.2f\n", a, b, a / b);
        break;
    default:
        printf("Unknown operator '%c'.\n", op);
    }
}

//M8.3 (M8.2 with every break removed; restore them by using m8_2 above)
void m8_3(void)
{
    double a, b;
    char op;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Enter the operator (+ - * /): ");
    scanf(" %c", &op);

    switch (op) {
    case '+':
        printf("%.2f + %.2f = %.2f\n", a, b, a + b);
    case '-':
        printf("%.2f - %.2f = %.2f\n", a, b, a - b);
    case '*':
        printf("%.2f * %.2f = %.2f\n", a, b, a * b);
    case '/':
        if (b == 0)
            printf("Cannot divide by zero.\n");
        else
            printf("%.2f / %.2f = %.2f\n", a, b, a / b);
    default:
        printf("Unknown operator '%c'.\n", op);
    }
}

//C8.1
void c8_1(void)
{
    int month;

    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("%d is not a month number.\n", month);
        return;
    }

    switch (month) {
    case 12: case 1: case 2:
        printf("Winter\n");
        break;
    case 3: case 4: case 5:
        printf("Spring\n");
        break;
    case 6: case 7: case 8:
        printf("Summer\n");
        break;
    case 9: case 10: case 11:
        printf("Fall\n");
        break;
    default:
        printf("Unexpected month.\n");
    }
}

//C8.2 (all four defects fixed)
void c8_2(void)
{
    double gpa;
    int credits;

    printf("Enter the grade point and the credits: ");
    scanf("%lf%d", &gpa, &credits);

    switch ((int)gpa) {
    case 4:
        printf("Highest grade.\n");
        break;
    case 3:
        printf("Good standing.\n");
        break;
    case 2:
        printf("Duplicate.\n");
        break;
    default:
        printf("Other.\n");
    }

    if (credits >= 3)
        printf("A full course.\n");
}

int main(void)
{
    int task;

    printf("Run which task?\n");
    printf("1 G8.1  2 E8.1  3 E8.2  4 M8.1  5 M8.2  6 M8.3  7 C8.1  8 C8.2\n");
    printf("Task number: ");
    scanf("%d", &task);

    switch (task) {
    case 1: g8_1(); break;
    case 2: e8_1(); break;
    case 3: e8_2(); break;
    case 4: m8_1(); break;
    case 5: m8_2(); break;
    case 6: m8_3(); break;
    case 7: c8_1(); break;
    case 8: c8_2(); break;
    default: printf("%d is not a task number.\n", task);
    }

    return 0;
}
