#include <stdio.h>
#include<ctype.h>
int main(void)
{
    char light, button;

    printf("Enter traffic light color (R, Y, G): ");
    scanf(" %c", &light);

    light=toupper(light);


    switch (light) {
        case 'R':
            printf("Has the pedestrian button been pressed? (Y/N): ");
            scanf(" %c", &button);

            switch (button) {
                case 'Y':
                case 'y':
                    printf("Stop and cross.\n");
                    break;
                case 'N':
                case 'n':
                    printf("Stop and wait.\n");
                    break;
                default:
                    printf("Invalid pedestrian button input.\n");
            }
            break;

        case 'G':
        case 'g':
            printf("Has the pedestrian button been pressed? (Y/N): ");
            scanf(" %c", &button);

            switch (button) {
                case 'Y':
                case 'y':
                    printf("Go, but watch for pedestrians.\n");
                    break;
                case 'N':
                case 'n':
                    printf("Go.\n");
                    break;
                default:
                    printf("Invalid pedestrian button input.\n");
            }
            break;

        case 'Y':
        case 'y':
            printf("Slow down and prepare to stop.\n");
            break;

        default:
            printf("Invalid traffic light color.\n");
    }

    return 0;
}