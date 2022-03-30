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










//Fonctions réalisées par l'étudiant 3 :
