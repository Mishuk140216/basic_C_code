#include <stdio.h>
#include <conio.h>
int main()
{
    int total_square_feet, acre;
    printf("Enter the total square feet in a track of the land:\n");
    scanf("%d", &total_square_feet);
    acre= total_square_feet/43560;
    printf(" the track has %d acres", acre);
    getch();
    return 0;
}
