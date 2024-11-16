#include <iostream>
#include <cmath>

using namespace std;

int main () {

    int option;
do
{
   
  cout <<"=== Calculatrice ===" << endl;
  cout << "1. Addition" <<endl;
  cout << "2. Soustraction" <<endl;
  cout << "3. Multipliacation" <<endl;
  cout << "4. Division" <<endl;
  cout << "5. Puissance" <<endl;
  cout << "6. Racine carrée" <<endl;
  cout << "7. Calcul de pourcentage" <<endl;
  cout << "8. Fonction trigonométrique" <<endl;
  cout << "9. Quitter" <<endl;
  cout << "Choisissez une option : ";
  
  cin >> option;
    double a,b;
    double result;

  if (option == 1)
  
  {
    cout <<"Entrez le premier nombre ";
    cin >> a;
    cout <<"Entrez le deuxieme nombre ";
    cin >> b;

    result = a+b;

    cout << "Le resultat de " << a << " + " << b << " = " << result << endl;
  }

        else if (option == 2)
  
  {
    cout <<"Entrez le premier nombre ";
    cin >> a;
    cout <<"Entrez le deuxieme nombre ";
    cin >> b;

    result = a-b;

    cout << "Le resultat de " << a << " - " << b << " = " << result << endl;
  }

    else if (option == 3)
  
  {
    cout <<"Entrez le premier nombre ";
    cin >> a;
    cout <<"Entrez le deuxieme nombre ";
    cin >> b;

    result = a*b;

    cout << "Le resultat de " << a << " * " << b << " = " << result <<endl;
  }
  

   else if (option == 4)
  
  {
    cout <<"Entrez le premier nombre ";
    cin >> a;
    cout <<"Entrez le deuxieme nombre ";
    cin >> b;

    result = a/b;

    cout << "Le resultat de " << a << " / " << b << " = " << result <<endl;
  }



else if (option == 5)
  
  {
    cout <<"Entrez la base ";
    cin >> a;
    cout <<"Entrez l'exposant ";
    cin >> b;
      for (int i = 0; i < b; i++)
      {
        result *= a;
      }
      
    

    cout << a << " à la puissance " << b << " = " << result << endl;
  }



  else if (option == 6)
  
  {
    cout <<"Entrez un nombre ";
    cin >> a;
    

    result = sqrt(a);

      cout << "La racine carrée de " << a << " est " << result << endl;

  }


  else if (option == 7)
  
  {
    cout <<"Entrez le nombre total :";
    cin >> a;
    cout <<"Entrez le pourcentage à calculer ";
    cin >> b;

    result = (b / 100) * a;

    cout << b << "% de " << a << " est " << result << endl;
  }



  else if (option == 8)
  
  {
 double angleDegres;

    
    cout << "Entrez un angle en degrés : ";
    cin >> angleDegres;

    
    double angleRadians = angleDegres * (M_PI / 180.0);

    
    double sinus = sin(angleRadians);
    double cosinus = cos(angleRadians);
    double tangente = tan(angleRadians);

    
    cout << "Sinus de " << angleDegres << "° est " << sinus << endl;
    cout << "Cosinus de " << angleDegres << "° est " << cosinus << endl;
    cout << "Tangente de " << angleDegres << "° est " << tangente << endl;
  }


   else if (option == 9);

   else

   cout <<"Donner un chiffre entre 1 et 9" << endl;

   } while (option!=9);

    return 0;
    
}