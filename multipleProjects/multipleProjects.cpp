// multipleProjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "2\n";
}

// Git commands
/*
	--CREATE GITHUB REPO--
	* git init									-> vytvoreni .git
	* git branch -M <branch>					-> tvorba nove branch
	* git remote add origin <pathFromGitHub>	-> vytvoreni remote s cestou, ktera se generuje na GitHubu -> musi se rucne repo vytvorit
	* git remote -v								-> kontrola remotu
		...

	--CLONE GITHUB REPO--
	* git clone <pathFromGitHub>				-> kopirovani repo z github

	--PULL--
	* git log									-> zobrazeni vsech commitu
	* git pull origin <branch>					-> nahrani do visual studia

	--COMMIT & PUSH--
	* git status								-> rozdily mezi kodem a poslednim commitem

	* git add <path>							-> pridani daneho souboru, ktery se zmenil, ke commitu
	* git add .									-> pridani vsech souboru, ktery se zmenil, ke commitu
	* git add SLOZKA/\*.<koncovka>				-> pridani vsech souboru s .<koncovka> ze slozky SLOZKA
	* 
	* git rm -r --cached <path>					-> odebrani zmeny

	* git commit -m "<msg>"						-> commit se zpravou
	* git push origin <branch>					-> nahrani do githubu

	--CHECKOUT--
	* git checkout <branch>						-> prechazeni na novou branch
	* git checkout <commit>						-> vraceni na dany commit
*/

