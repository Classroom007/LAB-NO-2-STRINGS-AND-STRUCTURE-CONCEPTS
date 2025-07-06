#include <stdio.h>
#include "string_ops.h"
#include "struct_defs.h"

int main() {
    char s1[100], s2[100];
    // Read two strings
    if (!fgets(s1, sizeof s1, stdin)) return 1;
    if (!fgets(s2, sizeof s2, stdin)) return 1;
    // Remove newline
    s1[strcspn(s1, "")] = 'NUL'
    s2[strcspn(s2, "")] = 'NUL'
    // Test string functions
    printf("%d", my_strlen(s1));
    printf("%d", my_strcmp(s1, s2));
    char buf[100];
    my_strcpy(buf, s1);
    printf("%s", buf);

    // Read struct data: name, roll, marks
    char name[50]; int roll; float marks;
    scanf("%49s %d %f", name, &roll, &marks);
    struct Student st;
    init_student(&st, name, roll, marks);
    print_student(&st);

    return 0;
}
