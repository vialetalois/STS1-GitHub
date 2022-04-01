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

bool estpaire(int nb)
{
    bool z;
    if (nb %2 == 0)
    {
        z = true;
    }
    else
    {
        z = false;
    }
    return z;
}

int sommeNombre(int nb)
{
    int resultat = 0;
    int i = 0 ;
    for (i = nb; i >= 0 ; i--)
    {
        resultat = resultat + i;
    }
    return resultat;
}

float salairNet(int salaire);
{
	float y;
	y = y *(0.77);
	return y
}

int plusPetit(int a, int b, int c)
{
    int petit = 0;
    if (a < b && a < c)
    {
        return a;
    }
    else if (b < c && b < a)
    {
        return b;
    }
    else
    {
       return c ;
    }
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

//Fonctions réalisées par Olivier CARLIER

bool estMajeur(int age);
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

float salaireNet(float salaireBrut);
{
	float x;
	x = SalaireBrut * 0,77;
	return x;
}

float moyenne(int nb1, int nb2, int nb3);
{
	float resultMoy;
	resultMoy=(nb1+nb2+nb3)/3;
	return resultMoy;
}

float reduction(int prix, int reduc); // avec reduc, un nombre entier comprix entre 0 et 100
{
	float resultReduc;
	resultReduc = prix - (prix * (reduc/100));
	return resultReduc;
}