/*
 * Cursus CentraleSupélec - Dominante Informatique et numérique
 * 3IF1020 - Programmation système - TP n°1
 *
 * server_1.c
 */

// for printf()
#include <stdio.h>
// For rand(), srand(), sleep(), EXIT_SUCCESS
#include <stdlib.h>
// For time()
#include <time.h>
// For getpid(), getppid()
#include <unistd.h>

int main()
{
    printf("Je commence la boucle : ");

    while (1)
    {
        printf("L'ID du processus : ", getpid());
        printf("L'ID du père du processus : ", getppid());
        printf(rand());
        sleep(1);
    }

    printf("Je viens de terminer la boucle");

    return EXIT_SUCCESS;
}
