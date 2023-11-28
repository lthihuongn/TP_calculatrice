#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    printf("Bienvenue dans la calculatrice\n");
    while (1){
        printf("Que voulez vous faire ?\n");
        printf("appuyez sur + : addition, - : soustraction, * multiplication, / : division, p : puissance, r : racine carree, % : pourcentage, o : operation en chaine, q : quitter\n");
        char choix;
        scanf(" %c", &choix);
        if (choix == '+'){
            double nombre1, nombre2;
            printf("entrez deux nombres\n");
            scanf(" %lf", &nombre1);
            scanf(" %lf", &nombre2);
            printf("%.2f + %.2f = %.2f\n", nombre1, nombre2, nombre1 + nombre2);
        }
        else if (choix == '-'){
            double nombre1, nombre2;
            printf("entrez deux nombres\n");
            scanf(" %lf", &nombre1);
            scanf(" %lf", &nombre2);
            printf("%.2f - %.2f = %.2f\n", nombre1, nombre2, nombre1 - nombre2);
        }
        else if (choix == '*'){
            double nombre1, nombre2;
            printf("entrez deux nombres\n");
            scanf(" %lf", &nombre1);
            scanf(" %lf", &nombre2);
            printf("%.2f * %.2f = %.2f\n", nombre1, nombre2, nombre1 * nombre2);
        }
        else if (choix == '/'){
            double numerateur, denominateur;
            printf("entrez deux nombres\n");
            scanf(" %lf", &numerateur);
            scanf(" %lf", &denominateur);
            if (denominateur != 0){
                printf("%.2f / %.2f = %.2f\n", numerateur, denominateur, numerateur/denominateur);
            }
            else{
                printf("il est impossible de diviser par 0\n");
            }
        }
        else if (choix == 'p'){
            double nombre1, puissance;
            printf("entrez un nombre puis un exposant\n");
            scanf(" %lf", &nombre1);
            scanf(" %lf", &puissance);
            printf("%.2f ^ %.2f = %.2f\n", nombre1, puissance, pow(nombre1, puissance));
        }
        else if (choix == 'r'){
            double nombre;
            printf("entrez un nombre\n");
            scanf(" %lf", &nombre);
            if (nombre > 0){
                printf("racine carree de %.2f = %.2f\n", nombre, sqrt(nombre));
            }
            else{
                printf("la racine carree d'un nombre negatif est un non reel\n");
            }

        }
        else if (choix == '%'){
            double nombre, pourcent;
            printf("entrez un nombre et son pourcentage a obtenir\n");
            scanf(" %lf", &nombre);
            scanf(" %lf", &pourcent);
            printf("%.2f pourcent de %.2f = %.2f\n", pourcent, nombre, nombre * (pourcent/100));
        }

        else if (choix == 'o'){
            double operation;
            printf("entrez une operation\n");
            scanf(" %lf", &operation);
            printf("%.2f\n", operation);
        }

        else if (choix == 'q'){
            printf("au revoir\n");
            break;
        }
        else{
            printf("veuillez saisir une commande valide\n");
        }
    }

    return 0;
}