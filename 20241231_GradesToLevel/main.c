#include <stdio.h>
char Transform(int x) {
    switch (x/10) {
        case 10 | 9: return 'A';
        case 8: return 'B';
        case 7: return 'C';
        case 6: return 'D';
        default: return 'E';
    }
}
void main() {
    int grade=0;
    scanf("%d",&grade);
    printf("%c\n",Transform(grade));
}