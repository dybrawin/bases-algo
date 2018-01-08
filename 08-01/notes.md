# Complexité

## Grand O

Constantes - exclues

## Voyageur de commerce : TSP _(Traveling Salesman Problem)_

Circuit / Tournée

Chaque voie a une distance donnée

Circuit le plus court - problème à resoudre

### Brute Force - tous les cas possibles
* Pour _n_ villes il y a _2 ^ (n - 1)_ possibilités, _(n - 1) * (n - 2) * (n - 3) * ... * 1 = (n - 1)!_
* _2 ^ (n - 1)_ - difficile (exponentiel)

_20!_ est le factoriel le plus grand qui rentre dans un _long_ de Java

### Dijkstra - plus court chemin (routage internet)
* Complexité - _polynomiale, O((n + m) * log(n))_
  * n - sommets
  * m - arrêtes
* Exemple
  * n = 35 000 _(communes)_
  * m = 100 000
  * _O((n + m) * log(n))_ = 135 000 * 16 ~= __2 160 000__ _(no. d'étapes pour résoudre l'exemple)_
  * 2 ^ 15 (32 768) < __35 000__ < 2 ^16 (65 536)
  
## Gauss et Fourier
* __FFT__ - Fast Fourier Transform - _O(n * log(n))_
  * transformation de signaux _(voix)_
  
## Optimisation combinatoire
* Linéaire (incrémentale)
* Exemple - Iceland, vulcan, chemin d'avions

## Collecitons / Structures de données
* tableau
  * tableau
	* 0 <-> n - 1
    * 0 | 1 | 2 | ... | ... | ... | n - 1
    * 10 | 3 | 8 | 2 | 15 | 4 | 9
    * x appartient à tab
    * 10 appartient à tab : 1
    * 15 appartient à tab : 5
    * 13 appartient à tab : 7 _(n)_
  * tableau trié _(inplace)_
    * _Dicitonnaire - Divide and conquer_
	* _O(log(n))_
	* Pour 1 Kilo (1024), le coût est 10
	* 1 Mega : 20
	* 1 Giga : 30
* liste
* arbre
* dictionnaire
* switch (réseau) - tri
  * Omega
  * Benes
  * Kloss
  * ...

## Méthodes de tri
* Bulle (et autres)
  * O(n ^ 2) - (n ^ 2 - n) / 2
  
## Exercices
### Ex. 1
* Rechercher du maximum dans un tableau non trié _(tous les éléments sont distincts / pas de doublons)_
* Rechercher du maximum dans un tableau croissant puis décroissant
### Ex. 2
* Fusion de 2 tableaux triés