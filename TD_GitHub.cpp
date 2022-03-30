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
bool estImpair(int nb)
{
	bool b;
	if(nb % 2 ==0)
	{
		b=false;
	}
	else
	{
		b=true;
	}
	return b;
}

float moyenne(int nb1, int nb2, int nb3)
{
	float res;
	res=(nb1+nb2+nb3)/2;
	return res;
}

float reduction(int prix, int reduc)
{
	float res;
	res = prix * reduc/100;
	return res;
}

float nombreMedian(int a, int b, int c)
{
	if ((a>=b && a<=c) || (a<=b && a>=c))
	{
		return a;
	}
	else if ((b>=a && b<=c) || (b<=a && b>=c))
	{
		return b;
	}
	else
	{
		return c;
	}
}