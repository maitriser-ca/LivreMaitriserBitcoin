Tableaux et descriptions provenant de
<https://en.bitcoin.it/wiki/Script>.

&lt;&lt;tx\_script\_ops\_table\_pushdata&gt; &gt; affiche les opérateurs
pour pousser les valeurs sur la pile.<span class="indexterm"></span>
<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span>

<table>
<caption>Pousser la valeur sur la pile</caption>
<colgroup>
<col style="width: 33%" />
<col style="width: 33%" />
<col style="width: 33%" />
</colgroup>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p>Symbole</p></td>
<td style="text-align: left;"><p>Valeur (hex)</p></td>
<td style="text-align: left;"><p>La description</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_0 ou OP_FALSE</p></td>
<td style="text-align: left;"><p>0x00</p></td>
<td style="text-align: left;"><p>Un tableau vide est poussé sur la
pile</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>1 à 75</p></td>
<td style="text-align: left;"><p>0x01 à 0x4b</p></td>
<td style="text-align: left;"><p>Poussez les N octets suivants sur la
pile, où N est compris entre 1 et 75 octets</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_PUSHDATA1</p></td>
<td style="text-align: left;"><p>0x4c</p></td>
<td style="text-align: left;"><p>L'octet de script suivant contient N,
poussez les N octets suivants sur la pile</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_PUSHDATA2</p></td>
<td style="text-align: left;"><p>0x4d</p></td>
<td style="text-align: left;"><p>Les deux octets de script suivants
contiennent N, poussez les N octets suivants sur la pile</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_PUSHDATA4</p></td>
<td style="text-align: left;"><p>0x4e</p></td>
<td style="text-align: left;"><p>Les quatre octets de script suivants
contiennent N, poussez les N octets suivants sur la pile</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_1NEGATE</p></td>
<td style="text-align: left;"><p>0x4f</p></td>
<td style="text-align: left;"><p>Poussez la valeur "–1" sur la
pile</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_RESERVED</p></td>
<td style="text-align: left;"><p>0x50</p></td>
<td style="text-align: left;"><p>Halt - Transaction non valide à moins
qu'elle ne se trouve dans une clause OP_IF non exécutée</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_1 ou OP_TRUE</p></td>
<td style="text-align: left;"><p>0x51</p></td>
<td style="text-align: left;"><p>Poussez la valeur "1" sur la
pile</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_2 à OP_16</p></td>
<td style="text-align: left;"><p>0x52 à 0x60</p></td>
<td style="text-align: left;"><p>Pour OP_N, poussez la valeur "N" sur la
pile, par exemple, OP_2 pousse "2"</p></td>
</tr>
</tbody>
</table>

Pousser la valeur sur la pile

&lt;&lt;tx\_script\_ops\_table\_control&gt; &gt; affiche les opérateurs
de contrôle de flux conditionnel.

<table>
<caption>Contrôle de flux conditionnel</caption>
<colgroup>
<col style="width: 33%" />
<col style="width: 33%" />
<col style="width: 33%" />
</colgroup>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p>Symbole</p></td>
<td style="text-align: left;"><p>Valeur (hex)</p></td>
<td style="text-align: left;"><p>La description</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_NOP</p></td>
<td style="text-align: left;"><p>0x61</p></td>
<td style="text-align: left;"><p>Ne fais rien</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_VER</p></td>
<td style="text-align: left;"><p>0x62</p></td>
<td style="text-align: left;"><p>Halt - Transaction non valide à moins
qu'elle ne se trouve dans une clause OP_IF non exécutée</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_IF</p></td>
<td style="text-align: left;"><p>0x63</p></td>
<td style="text-align: left;"><p>Exécute les instructions suivantes si
le haut de la pile n'est pas 0</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_NOTIF</p></td>
<td style="text-align: left;"><p>0x64</p></td>
<td style="text-align: left;"><p>Exécute les instructions suivantes si
le haut de la pile est 0</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_VERIF</p></td>
<td style="text-align: left;"><p>0x65</p></td>
<td style="text-align: left;"><p>Interrompre—Transaction
invalide</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_VERNOTIF</p></td>
<td style="text-align: left;"><p>0x66</p></td>
<td style="text-align: left;"><p>Interrompre—Transaction
invalide</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_ELSE</p></td>
<td style="text-align: left;"><p>0x67</p></td>
<td style="text-align: left;"><p>Exécuter uniquement si les instructions
précédentes n'ont pas été exécutées</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_ENDIF</p></td>
<td style="text-align: left;"><p>0x68</p></td>
<td style="text-align: left;"><p>Terminer le bloc OP_IF, OP_NOTIF,
OP_ELSE</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_VERIFY</p></td>
<td style="text-align: left;"><p>0x69</p></td>
<td style="text-align: left;"><p>Vérifiez le haut de la pile, arrêtez et
invalidez la transaction si elle n'est pas VRAIE</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_RETURN</p></td>
<td style="text-align: left;"><p>0x6a</p></td>
<td style="text-align: left;"><p>Arrêter et invalider la
transaction</p></td>
</tr>
</tbody>
</table>

Contrôle de flux conditionnel

&lt;&lt;tx\_script\_ops\_table\_timelock&gt; &gt; affiche les opérateurs
utilisés pour les timelocks.

<table>
<caption>Opérations Timelock</caption>
<colgroup>
<col style="width: 33%" />
<col style="width: 33%" />
<col style="width: 33%" />
</colgroup>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p>Symbole</p></td>
<td style="text-align: left;"><p>Valeur (hex)</p></td>
<td style="text-align: left;"><p>La description</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_CHECKLOCKTIMEVERIFY (précédemment
OP_NOP2)</p></td>
<td style="text-align: left;"><p>0xb1</p></td>
<td style="text-align: left;"><p>Marque la transaction comme non valide
si l'élément supérieur de la pile est supérieur au champ nLockTime de la
transaction, sinon l'évaluation du script continue comme si un OP_NOP
avait été exécuté. La transaction est également invalide si 1. la pile
est vide ; ou 2. l'élément de la pile supérieure est négatif ; ou 3.
l'élément de la pile supérieure est supérieur ou égal à 500000000 alors
que le champ nLockTime de la transaction est inférieur à 500000000, ou
vice versa ; ou 4. le champ nSequence de l'entrée est égal à 0xffffffff.
La sémantique précise est décrite dans la BIP-65</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_CHECKSEQUENCEVERIFY (précédemment
OP_NOP3)</p></td>
<td style="text-align: left;"><p>0xb2</p></td>
<td style="text-align: left;"><p>Marque la transaction comme non valide
si le temps de verrouillage relatif de l'entrée (appliqué par BIP 0068
avec nSequence) n'est pas égal ou supérieur à la valeur de l'élément de
la pile supérieure. La sémantique précise est décrite dans
BIP-112</p></td>
</tr>
</tbody>
</table>

Opérations Timelock

&lt;&lt;tx\_script\_ops\_table\_stack&gt; &gt; montre les opérateurs
utilisés pour manipuler la pile.

<table>
<caption>Opérations de pile</caption>
<colgroup>
<col style="width: 33%" />
<col style="width: 33%" />
<col style="width: 33%" />
</colgroup>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p>Symbole</p></td>
<td style="text-align: left;"><p>Valeur (hex)</p></td>
<td style="text-align: left;"><p>La description</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_TOALTSTACK</p></td>
<td style="text-align: left;"><p>0x6b</p></td>
<td style="text-align: left;"><p>Sortez l'élément supérieur de la pile
et poussez vers une autre pile</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_FROMALTSTACK</p></td>
<td style="text-align: left;"><p>0x6c</p></td>
<td style="text-align: left;"><p>Sortez l'élément supérieur de la pile
alternative et poussez pour empiler</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_2DROP</p></td>
<td style="text-align: left;"><p>0x6d</p></td>
<td style="text-align: left;"><p>Pop top deux éléments de la
pile</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_2DUP</p></td>
<td style="text-align: left;"><p>0x6e</p></td>
<td style="text-align: left;"><p>Dupliquer les deux éléments du haut de
la pile</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_3DUP</p></td>
<td style="text-align: left;"><p>0x6f</p></td>
<td style="text-align: left;"><p>Dupliquer les trois premiers éléments
de la pile</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_2OVER</p></td>
<td style="text-align: left;"><p>0x70</p></td>
<td style="text-align: left;"><p>Copiez les troisième et quatrième
éléments de la pile vers le haut</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_2ROT</p></td>
<td style="text-align: left;"><p>0x71</p></td>
<td style="text-align: left;"><p>Déplacez les cinquième et sixième
éléments de la pile vers le haut</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_2SWAP</p></td>
<td style="text-align: left;"><p>0x72</p></td>
<td style="text-align: left;"><p>Échangez les deux meilleures paires
d'objets dans la pile</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_IFDUP</p></td>
<td style="text-align: left;"><p>0x73</p></td>
<td style="text-align: left;"><p>Dupliquer l'élément du haut de la pile
s'il n'est pas 0</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_DEPTH</p></td>
<td style="text-align: left;"><p>0x74</p></td>
<td style="text-align: left;"><p>Comptez les éléments sur la pile et
poussez le décompte résultant</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_DROP</p></td>
<td style="text-align: left;"><p>0x75</p></td>
<td style="text-align: left;"><p>Déposez l'élément du haut de la
pile</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_DUP</p></td>
<td style="text-align: left;"><p>0x76</p></td>
<td style="text-align: left;"><p>Dupliquer l'élément supérieur de la
pile</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_NIP</p></td>
<td style="text-align: left;"><p>0x77</p></td>
<td style="text-align: left;"><p>Déposez le deuxième élément de la
pile</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_OVER</p></td>
<td style="text-align: left;"><p>0x78</p></td>
<td style="text-align: left;"><p>Copiez le deuxième élément de la pile
et poussez-le vers le haut</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_PICK</p></td>
<td style="text-align: left;"><p>0x79</p></td>
<td style="text-align: left;"><p>Extraire la valeur N du haut, puis
copier le Nième élément en haut de la pile</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_ROLL</p></td>
<td style="text-align: left;"><p>0x7a</p></td>
<td style="text-align: left;"><p>Extraire la valeur N du haut, puis
déplacer le Nième élément vers le haut de la pile</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_ROT</p></td>
<td style="text-align: left;"><p>0x7b</p></td>
<td style="text-align: left;"><p>Faire pivoter les trois premiers
éléments de la pile</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_SWAP</p></td>
<td style="text-align: left;"><p>0x7c</p></td>
<td style="text-align: left;"><p>Échangez les deux premiers éléments de
la pile</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_TUCK</p></td>
<td style="text-align: left;"><p>0x7d</p></td>
<td style="text-align: left;"><p>Copiez l'élément supérieur et
insérez-le entre l'élément supérieur et le deuxième élément</p></td>
</tr>
</tbody>
</table>

Opérations de pile

&lt;&lt;tx\_script\_ops\_table\_splice&gt; &gt; affiche les opérateurs
de chaîne.

<table>
<caption>Opérations d'épissure de chaînes</caption>
<colgroup>
<col style="width: 33%" />
<col style="width: 33%" />
<col style="width: 33%" />
</colgroup>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p>Symbole</p></td>
<td style="text-align: left;"><p>Valeur (hex)</p></td>
<td style="text-align: left;"><p>La description</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><em>OP_CAT</em></p></td>
<td style="text-align: left;"><p>0x7e</p></td>
<td style="text-align: left;"><p>Désactivé (concatène les deux premiers
éléments)</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><em>OP_SUBSTR</em></p></td>
<td style="text-align: left;"><p>0x7f</p></td>
<td style="text-align: left;"><p>Désactivé (renvoie la
sous-chaîne)</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><em>OP_LEFT</em></p></td>
<td style="text-align: left;"><p>0x80</p></td>
<td style="text-align: left;"><p>Désactivé (renvoie la sous-chaîne
gauche)</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><em>OP_RIGHT</em></p></td>
<td style="text-align: left;"><p>0x81</p></td>
<td style="text-align: left;"><p>Désactivé (renvoie la sous-chaîne
droite)</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_SIZE</p></td>
<td style="text-align: left;"><p>0x82</p></td>
<td style="text-align: left;"><p>Calculer la longueur de la chaîne de
l'élément supérieur et pousser le résultat</p></td>
</tr>
</tbody>
</table>

Opérations d'épissure de chaînes

&lt;&lt;tx\_script\_ops\_table\_binmath&gt; &gt; affiche les opérateurs
logiques arithmétiques et booléens binaires.

<table>
<caption>Arithmétique binaire et conditionnelles</caption>
<colgroup>
<col style="width: 33%" />
<col style="width: 33%" />
<col style="width: 33%" />
</colgroup>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p>Symbole</p></td>
<td style="text-align: left;"><p>Valeur (hex)</p></td>
<td style="text-align: left;"><p>La description</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><em>OP_INVERT</em></p></td>
<td style="text-align: left;"><p>0x83</p></td>
<td style="text-align: left;"><p>Désactivé (Inverser les bits de
l'élément supérieur)</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><em>OP_AND</em></p></td>
<td style="text-align: left;"><p>0x84</p></td>
<td style="text-align: left;"><p>Désactivé (booléen ET des deux premiers
éléments)</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><em>OP_OU</em></p></td>
<td style="text-align: left;"><p>0x85</p></td>
<td style="text-align: left;"><p>Désactivé (OU booléen des deux éléments
supérieurs)</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><em>OP_XOR</em></p></td>
<td style="text-align: left;"><p>0x86</p></td>
<td style="text-align: left;"><p>Désactivé (XOR booléen des deux
principaux éléments)</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_EQUAL</p></td>
<td style="text-align: left;"><p>0x87</p></td>
<td style="text-align: left;"><p>Appuyez sur TRUE (1) si les deux
premiers éléments sont exactement égaux, appuyez sur FALSE (0)
sinon</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_EQUALVERIFY</p></td>
<td style="text-align: left;"><p>0x88</p></td>
<td style="text-align: left;"><p>Identique à OP_EQUAL, mais exécutez
OP_VERIFY après pour arrêter si ce n'est pas TRUE</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_RESERVED1</p></td>
<td style="text-align: left;"><p>0x89</p></td>
<td style="text-align: left;"><p>Halt - Transaction non valide à moins
qu'elle ne se trouve dans une clause OP_IF non exécutée</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_RESERVED2</p></td>
<td style="text-align: left;"><p>0x8a</p></td>
<td style="text-align: left;"><p>Halt - Transaction non valide à moins
qu'elle ne se trouve dans une clause OP_IF non exécutée</p></td>
</tr>
</tbody>
</table>

Arithmétique binaire et conditionnelles

&lt;&lt;tx\_script\_ops\_table\_numbers&gt; &gt; affiche les opérateurs
numériques (arithmétiques).

<table>
<caption>Opérateurs numériques</caption>
<colgroup>
<col style="width: 33%" />
<col style="width: 33%" />
<col style="width: 33%" />
</colgroup>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p>Symbole</p></td>
<td style="text-align: left;"><p>Valeur (hex)</p></td>
<td style="text-align: left;"><p>La description</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_1AJOUT</p></td>
<td style="text-align: left;"><p>0x8b</p></td>
<td style="text-align: left;"><p>Ajouter 1 à l'élément
supérieur</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_1SUB</p></td>
<td style="text-align: left;"><p>0x8c</p></td>
<td style="text-align: left;"><p>Soustraire 1 de l'élément
supérieur</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><em>OP_2MUL</em></p></td>
<td style="text-align: left;"><p>0x8d</p></td>
<td style="text-align: left;"><p>Désactivé (multiplier l'élément
supérieur par 2)</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><em>OP_2DIV</em></p></td>
<td style="text-align: left;"><p>0x8e</p></td>
<td style="text-align: left;"><p>Désactivé (diviser l'élément supérieur
par 2)</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_NEGATE</p></td>
<td style="text-align: left;"><p>0x8f</p></td>
<td style="text-align: left;"><p>Retournez le signe de l'élément
supérieur</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_ABS</p></td>
<td style="text-align: left;"><p>0x90</p></td>
<td style="text-align: left;"><p>Changer le signe de l'élément supérieur
en positif</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_NOT</p></td>
<td style="text-align: left;"><p>0x91</p></td>
<td style="text-align: left;"><p>Si l'élément supérieur est 0 ou 1
booléen retournez-le, sinon retournez 0</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_0NOTEQUAL</p></td>
<td style="text-align: left;"><p>0x92</p></td>
<td style="text-align: left;"><p>Si l'élément supérieur est 0, renvoie
0, sinon renvoie 1</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_ADD</p></td>
<td style="text-align: left;"><p>0x93</p></td>
<td style="text-align: left;"><p>Pop top deux éléments, ajoutez-les et
poussez le résultat</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_SUB</p></td>
<td style="text-align: left;"><p>0x94</p></td>
<td style="text-align: left;"><p>Faites apparaître les deux premiers
éléments, soustrayez le premier du second, poussez le résultat</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><em>OP_MUL</em></p></td>
<td style="text-align: left;"><p>0x95</p></td>
<td style="text-align: left;"><p>Désactivé (multiplier les deux premiers
éléments)</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><em>OP_DIV</em></p></td>
<td style="text-align: left;"><p>0x96</p></td>
<td style="text-align: left;"><p>Désactivé (diviser le deuxième élément
par le premier élément)</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><em>OP_MOD</em></p></td>
<td style="text-align: left;"><p>0x97</p></td>
<td style="text-align: left;"><p>Désactivé (le reste divise le deuxième
élément par le premier élément)</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><em>OP_LSHIFT</em></p></td>
<td style="text-align: left;"><p>0x98</p></td>
<td style="text-align: left;"><p>Désactivé (décaler le deuxième élément
vers la gauche du nombre de bits du premier élément)</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><em>OP_RSHIFT</em></p></td>
<td style="text-align: left;"><p>0x99</p></td>
<td style="text-align: left;"><p>Désactivé (décaler le deuxième élément
vers la droite du nombre de bits du premier élément)</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_BOLAND</p></td>
<td style="text-align: left;"><p>0x9a</p></td>
<td style="text-align: left;"><p>ET booléen des deux premiers
éléments</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_BOOLOR</p></td>
<td style="text-align: left;"><p>0x9b</p></td>
<td style="text-align: left;"><p>OU booléen des deux premiers
éléments</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_NUMEQUAL</p></td>
<td style="text-align: left;"><p>0x9c</p></td>
<td style="text-align: left;"><p>Renvoie TRUE si les deux premiers
éléments sont des nombres égaux</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_NUMEQUALVERIFY</p></td>
<td style="text-align: left;"><p>0x9d</p></td>
<td style="text-align: left;"><p>Identique à NUMEQUAL, puis OP_VERIFY
pour arrêter si ce n'est pas TRUE</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_NUMNOTEQUAL</p></td>
<td style="text-align: left;"><p>0x9e</p></td>
<td style="text-align: left;"><p>Renvoie VRAI si les deux premiers
éléments ne sont pas des nombres égaux</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_LESSTHAN</p></td>
<td style="text-align: left;"><p>0x9f</p></td>
<td style="text-align: left;"><p>Renvoie VRAI si le deuxième élément est
inférieur à l'élément supérieur</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_GREATERTHAN</p></td>
<td style="text-align: left;"><p>0xa0</p></td>
<td style="text-align: left;"><p>Renvoie VRAI si le deuxième élément est
supérieur à l'élément supérieur</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_LESSTHANOREQUAL</p></td>
<td style="text-align: left;"><p>0xa1</p></td>
<td style="text-align: left;"><p>Renvoie VRAI si le deuxième élément est
inférieur ou égal à l'élément supérieur</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_GREATERTHANOREQUAL</p></td>
<td style="text-align: left;"><p>0xa2</p></td>
<td style="text-align: left;"><p>Renvoie VRAI si le deuxième élément est
supérieur ou égal à l'élément supérieur</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_MIN</p></td>
<td style="text-align: left;"><p>0xa3</p></td>
<td style="text-align: left;"><p>Renvoie le plus petit des deux premiers
éléments</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_MAX</p></td>
<td style="text-align: left;"><p>0xa4</p></td>
<td style="text-align: left;"><p>Renvoie le plus grand des deux premiers
éléments</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_WITHIN</p></td>
<td style="text-align: left;"><p>0xa5</p></td>
<td style="text-align: left;"><p>Renvoie VRAI si le troisième élément
est compris entre le deuxième élément (ou égal) et le premier
élément</p></td>
</tr>
</tbody>
</table>

Opérateurs numériques

&lt;&lt;tx\_script\_ops\_table\_crypto&gt; &gt; affiche les opérateurs
de fonction cryptographique.

<table>
<caption>Opérations cryptographiques et de hachage</caption>
<colgroup>
<col style="width: 33%" />
<col style="width: 33%" />
<col style="width: 33%" />
</colgroup>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p>Symbole</p></td>
<td style="text-align: left;"><p>Valeur (hex)</p></td>
<td style="text-align: left;"><p>La description</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_RIPEMD160</p></td>
<td style="text-align: left;"><p>0xa6</p></td>
<td style="text-align: left;"><p>Renvoyer le hachage RIPEMD160 de
l'élément supérieur</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_SHA1</p></td>
<td style="text-align: left;"><p>0xa7</p></td>
<td style="text-align: left;"><p>Renvoie le hachage SHA1 de l'élément
supérieur</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_SHA256</p></td>
<td style="text-align: left;"><p>0xa8</p></td>
<td style="text-align: left;"><p>Renvoie le hachage SHA256 de l'élément
supérieur</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_HASH160</p></td>
<td style="text-align: left;"><p>0xa9</p></td>
<td style="text-align: left;"><p>Renvoie le hachage RIPEMD160(SHA256(x))
de l'élément supérieur</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_HASH256</p></td>
<td style="text-align: left;"><p>0xaa</p></td>
<td style="text-align: left;"><p>Renvoie le hachage SHA256(SHA256(x)) de
l'élément supérieur</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_CODESEPARATOR</p></td>
<td style="text-align: left;"><p>0xab</p></td>
<td style="text-align: left;"><p>Marquer le début des données vérifiées
par signature</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_CHECKSIG</p></td>
<td style="text-align: left;"><p>0xac</p></td>
<td style="text-align: left;"><p>Popez une clé publique et une signature
et validez la signature pour les données hachées de la transaction,
renvoyez TRUE si cela correspond</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_CHECKSIGNVERIFY</p></td>
<td style="text-align: left;"><p>0xad</p></td>
<td style="text-align: left;"><p>Identique à CHECKSIG, puis OP_VERIFY
pour arrêter si ce n'est pas TRUE</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_CHECKMULTISIG</p></td>
<td style="text-align: left;"><p>0xae</p></td>
<td style="text-align: left;"><p>Exécutez CHECKSIG pour chaque paire de
signature et de clé publique fournie. Tous doivent correspondre. Un
bogue dans la mise en œuvre affiche une valeur supplémentaire, préfixée
par OP_0 comme solution de contournement</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_CHECKMULTISIGVERIFY</p></td>
<td style="text-align: left;"><p>0xaf</p></td>
<td style="text-align: left;"><p>Identique à CHECKMULTISIG, puis
OP_VERIFY pour arrêter si ce n'est pas TRUE</p></td>
</tr>
</tbody>
</table>

Opérations cryptographiques et de hachage

&lt;&lt;tx\_script\_ops\_table\_nop&gt; &gt; affiche les symboles non
opérateur.

<table>
<caption>Nonopérateurs</caption>
<colgroup>
<col style="width: 33%" />
<col style="width: 33%" />
<col style="width: 33%" />
</colgroup>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p>Symbole</p></td>
<td style="text-align: left;"><p>Valeur (hex)</p></td>
<td style="text-align: left;"><p>La description</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_NOP1 à OP_NOP10</p></td>
<td style="text-align: left;"><p>0xb0 à 0xb9</p></td>
<td style="text-align: left;"><p>Ne fait rien, ignoré</p></td>
</tr>
</tbody>
</table>

Nonopérateurs

&lt;&lt;tx\_script\_ops\_table\_internal&gt; &gt; affiche les codes
opérateur réservés à l'analyseur de script interne.<span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span>

<table>
<caption>Codes OP réservés à un usage interne par l'analyseur</caption>
<colgroup>
<col style="width: 33%" />
<col style="width: 33%" />
<col style="width: 33%" />
</colgroup>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p>Symbole</p></td>
<td style="text-align: left;"><p>Valeur (hex)</p></td>
<td style="text-align: left;"><p>La description</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_SMALLDATA</p></td>
<td style="text-align: left;"><p>0xf9</p></td>
<td style="text-align: left;"><p>Représente un petit champ de
données</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_SMALLINTEGER</p></td>
<td style="text-align: left;"><p>0xfa</p></td>
<td style="text-align: left;"><p>Représente un petit champ de données
entier</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_PUBKEYS</p></td>
<td style="text-align: left;"><p>0xfb</p></td>
<td style="text-align: left;"><p>Représente les champs de clé
publique</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_PUBKEYHASH</p></td>
<td style="text-align: left;"><p>0xfd</p></td>
<td style="text-align: left;"><p>Représente un champ de hachage de clé
publique</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_PUBKEY</p></td>
<td style="text-align: left;"><p>0xfe</p></td>
<td style="text-align: left;"><p>Représente un champ de clé
publique</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_INVALIDOPCODE</p></td>
<td style="text-align: left;"><p>0xff</p></td>
<td style="text-align: left;"><p>Représente tout code OP non attribué
actuellement</p></td>
</tr>
</tbody>
</table>

Codes OP réservés à un usage interne par l'analyseur
