#include <iostream>
#include <filesystem>
#include <queue>

using namespace std;
using namespace std::filesystem;
int main()
{
    path chemin_disque("C:/"); // Chemin du disque dur à parcourir

    int nb_fichiers = compterFichiersReguliers(chemin_disque);
    cout << "Nombre de fichiers réguliers sur le disque dur : " << nb_fichiers << endl;

    return 0;
}
