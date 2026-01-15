#include <stdio.h>

int main()
{
    int sch, dep;

    printf("choose a school:\n");
    printf("1 - computer science\n");
    printf("2 - engineering\n");
    printf("3 - business\n");
    printf("your option: ");
    scanf("%d", &sch);

    switch(sch)
    {
        case 1:
            printf("available departments:\n");
            printf("1 - informatics\n");
            printf("2 - machine learning\n");
            printf("select department: ");
            scanf("%d", &dep);

            switch(dep)
            {
                case 1:
                    printf("department chosen: informatics");
                    break;

                case 2:
                    printf("department chosen: machine learning");
                    break;

                default:
                    printf("wrong department choice");
            }
            break;

        case 2:
            printf("available departments:\n");
            printf("1 - electronics engineering\n");
            printf("2 - mechanical engineering\n");
            printf("select department: ");
            scanf("%d", &dep);

            switch(dep)
            {
                case 1:
                    printf("department chosen: electronics engineering");
                    break;

                case 2:
                    printf("department chosen: mechanical engineering");
                    break;

                default:
                    printf("wrong department choice");
            }
            break;

        case 3:
            printf("available departments:\n");
            printf("1 - commerce\n");
            printf("2 - purchasing\n");
            printf("select department: ");
            scanf("%d", &dep);

            switch(dep)
            {
                case 1:
                    printf("department chosen: commerce");
                    break;

                case 2:
                    printf("department chosen: purchasing");
                    break;

                default:
                    printf("wrong department choice");
            }
            break;

        default:
            printf("invalid school selection");
    }

    return 0;
}
