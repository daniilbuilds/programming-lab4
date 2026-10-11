#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define N 61

int main()
{
    char title[N], author[N]; /* char[]: назва, автор      */
    char cover;               /* char:   обкладинка (H/S)  */
    int year, pages;          /* int:    рік, сторінки     */
    float price;              /* float:  ціна, грн         */
    double weight;            /* double: вага, кг          */

    puts("\n  ===== Entering information about the book =====");

    /* Неформатоване введення рядків (з пробілами) */
    printf("  Enter title -> ");
    fgets(title, N, stdin);
    title[strcspn(title, "\n")] = '\0';

    printf("  Enter author -> ");
    fgets(author, N, stdin);
    author[strcspn(author, "\n")] = '\0';

    /* Форматоване введення чисел */
    printf("  Enter year and number of pages -> ");
    scanf("%d%d", &year, &pages);
    printf("  Enter price (UAH) -> ");
    scanf("%f", &price);
    printf("  Enter weight (kg) -> ");
    scanf("%lf", &weight);

    /* Очищення буфера від '\n' після scanf */
    while (getchar() != '\n');

    /* Неформатоване введення одного символу */
    printf("  Enter cover type (H - hard, S - soft) -> ");
    cover = getchar();

    /* Виведення інформації про книгу */
    puts("\n  ======== Information about the book ========");
    printf("  %-12s: %s\n", "Title", title);
    printf("  %-12s: %s\n", "Author", author);
    printf("  %-12s: %d\n", "Year", year);
    printf("  %-12s: %d\n", "Pages", pages);
    printf("  %-12s: %.2f UAH\n", "Price", price);
    printf("  %-12s: %.3lf kg\n", "Weight", weight);
    printf("  %-12s: ", "Cover type");
    putchar(cover);
    putchar('\n');
    puts("  =============================================");

    return 0;
}
