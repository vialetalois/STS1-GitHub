//Fonctions réalisées par l'étudiant 1 :

 bool estMajeur(int age)
 {
   if (age >= 18)
   {	   
    return true;
   }
   else
   {
    return false;
   }
}

int exposant (int nbre, int exp)
{
  int resultat;
  resultat = pow(nbre, exp);
  return resultat;
    
}


float TVA(int prix)
{
  float resultat ;
  resultat =prix + (prix * (19.6 / 100));
  return resultat;
}


int plusGrand(int a, int b, int c)
{
  if (a>b && a>c)
  {
    return a ;
  }
  if (b>a && b>c)
  {
    return b ;
  }
  else
  {
    return c ;
  }
}


//Fonctions réalisées par l'étudiant 2 :

bool estpaire(int y)
{
    bool z;
    if (y %2 == 0)
    {
        z = true;
    }
    else
    {
        z = false;
    }
    return z;
}

int sommeNombre(int y)
{
    int resultat = 0;
    int i = 0 ;
    for (i = y; i >= 0 ; i--)
    {
        resultat = resultat + i;
    }
    return resultat;
}








//Fonctions réalisées par l'étudiant 3 :
