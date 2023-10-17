#include "shell_sh.h"

/**
 * constructeur_signal - elle indique si le mode interactif est actif
 * @mn : le numéro du signal
 * Retour : rien
 */
void constructeur_signal(int mn)
{
    (void)mn;
    write(STDERR_FILENO, "\n", 1);
    write(STDERR_FILENO, "$ ", 2);
}
