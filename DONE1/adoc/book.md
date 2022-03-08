# Préface

# Écrire le livre Bitcoin

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>Je suis tombé sur bitcoin pour la première fois
à la mi-2011. Ma réaction immédiate a été plus ou moins "Pfft ! Nerd
money !" et je l'ai ignoré pendant encore six mois, n'en saisissant pas
l'importance. C'est une réaction que j'ai vue se répéter chez bon nombre
des personnes les plus intelligentes que je connaisse, ce qui me
réconforte un peu. La deuxième fois que je suis tombé sur bitcoin, lors
d'une discussion sur une liste de diffusion, j'ai décidé de lire le
livre blanc écrit par Satoshi Nakamoto pour étudier la source faisant
autorité et voir de quoi il s'agissait. <span class="indexterm"></span>
<span class="indexterm"></span>Je me souviens encore du moment où j'ai
fini de lire ces neuf pages, quand j'ai réalisé que le bitcoin n'était
pas simplement une monnaie numérique, mais un réseau de confiance qui
pouvait aussi fournir la base de bien plus que de simples devises. La
prise de conscience que "ce n'est pas de l'argent, c'est un réseau de
confiance décentralisé", m'a lancé dans un voyage de quatre mois pour
dévorer toutes les informations sur le bitcoin que j'ai pu trouver. Je
suis devenu obsédé et captivé, passant 12 heures ou plus par jour collé
à un écran, lisant, écrivant, codant et apprenant autant que possible.
Je suis sorti de cet état de fugue, plus de 20 livres en moins à cause
du manque de repas réguliers, déterminé à me consacrer au travail sur le
bitcoin.

Deux ans plus tard, après avoir créé un certain nombre de petites
start-ups pour explorer divers services et produits liés au bitcoin,
j'ai décidé qu'il était temps d'écrire mon premier livre. Bitcoin était
le sujet qui m'avait poussé dans une frénésie de créativité et consommé
mes pensées; c'était la technologie la plus excitante que j'avais
rencontrée depuis Internet. Il était maintenant temps de partager ma
passion pour cette technologie incroyable avec un public plus large.

# Public visé

<span class="indexterm"></span>Ce livre est principalement destiné aux
codeurs. Si vous pouvez utiliser un langage de programmation, ce livre
vous apprendra comment fonctionnent les monnaies cryptographiques,
comment les utiliser et comment développer des logiciels qui
fonctionnent avec elles. Les premiers chapitres conviennent également
comme une introduction approfondie au bitcoin pour les non-codeurs, tel
ceux qui veulent comprendre le fonctionnement interne du bitcoin et des
crypto-monnaies.

# Les conventions utilisées dans ce livre

<span class="indexterm"></span>Les conventions typographiques suivantes
sont utilisées dans ce livre :

*Italique*  
Indique de nouveaux termes, URL, adresses e-mail, noms de fichiers et
extensions de fichiers.

`Largeur constante`  
Utilisé pour les listes de programmes, ainsi que dans les paragraphes
pour faire référence à des éléments de programme tels que des noms de
variables ou de fonctions, des bases de données, des types de données,
des variables d'environnement, des instructions et des mots-clés.

**`Largeur constante en gras`**  
Affiche les commandes ou tout autre texte qui doit être saisi
littéralement par l'utilisateur.

*`Largeur constante en italique`* : Affiche le texte qui doit être
remplacé par des valeurs fournies par l'utilisateur ou par des valeurs
déterminées par le contexte.

Cette icône signifie un conseil ou une suggestion.

Cette icône signifie une note générale.

Cette icône indique un avertissement ou une mise en garde.

# Exemples de codes

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span>Les exemples sont illustrés en Python, C++, et
en utilisant la ligne de commande d'un système d'exploitation de type
Unix tel que Linux ou macOS. Tous les extraits de code sont disponibles
dans le référentiel GitHub
(<https://github.com/bitcoinbook/bitcoinbook>) dans le sous-répertoire
*code* du référentiel principal. Fourchez le code du livre, essayez les
exemples de code ou soumettez des corrections via GitHub.

Tous les extraits de code peuvent être répliqués sur la plupart des
systèmes d'exploitation avec une installation minimale de compilateurs
et d'interpréteurs pour les langages correspondants. Si nécessaire, nous
fournissons des instructions d'installation de base et des exemples
étape par étape de la sortie de ces instructions.

Certains des extraits de code et des sorties de code ont été reformatés
pour l'impression. Dans tous ces cas, les lignes ont été séparées par un
caractère barre oblique inverse (\\), suivi d'un caractère de saut de
ligne. Lors de la transcription des exemples, supprimez ces deux
caractères et rejoignez les lignes à nouveau et vous devriez voir des
résultats identiques comme indiqué dans l'exemple.

Tous les extraits de code utilisent des valeurs réelles et des calculs
dans la mesure du possible, afin que vous puissiez construire d'exemple
en exemple et voir les mêmes résultats dans n'importe quel code que vous
écrivez pour calculer les mêmes valeurs. Par exemple, les clés privées
et les clés et adresses publiques correspondantes sont toutes réelles.
Les exemples de transactions, de blocs et de références de chaîne de
blocs ont tous été introduits dans la chaîne de blocs bitcoin réelle et
font partie du grand livre public, vous pouvez donc les consulter sur
n'importe quel système bitcoin.

# Adresses et transactions Bitcoin dans ce livre

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span>Les adresses
bitcoin, les transactions, les clés, les codes QR et les données de
chaîne de blocs utilisées dans ce livre sont, pour la plupart, réelles.
Cela signifie que vous pouvez parcourir la chaîne de blocs, regarder les
transactions proposées en exemple, les récupérer avec vos propres
scripts ou programmes, etc.

Cependant, notez que les clés privées utilisées pour construire les
adresses sont soit imprimées dans ce livre, soit ont été "radiées". Cela
signifie que si vous envoyez de l'argent à l'une de ces adresses,
l'argent sera perdu pour toujours ou, dans certains cas, tous ceux qui
peuvent lire ce livre peuvent le prendre en utilisant les clés privées
imprimées dans celui-ci.

N'ENVOYEZ PAS D'ARGENT AUX ADRESSES DANS CE LIVRE. Votre argent sera
pris par un autre lecteur, ou perdu à jamais.<span
class="indexterm"></span> <span class="indexterm"></span>

# Publication par O'Reilly Media

Ce livre est dérivé sous licence du livre "Mastering Bitcoin 2nd
Edition", par O'Reilly Media.

# Droit d'auteur et licence de livre

Copyright (c) 2014 Andreas M. Antonopoulos LLC

Ce travail est sous licence Creative Commons Attribution-ShareAlike 4.0
International License. Pour voir une copie de cette licence, visitez

<http://creativecommons.org/licenses/by-sa/4.0/>.

Pour fournir une attribution, veuillez créer un lien vers le référentiel
du livre :

<https://github.com/bitcoinbook/bitcoinbook>

et inclure cette licence ou une licence ouverte équivalente, pour
satisfaire aux exigences ShareAlike.

Cette licence conforme à la "Culture libre" a été approuvée par mon
éditeur O'Reilly Media (<http://oreilly.com>), qui comprend la valeur du
mouvement de source ouverte. O'Reilly Media n'est pas seulement le
meilleur éditeur de livres techniques au monde, mais aussi un fervent
partisan d'une culture ouverte et du partage des connaissances.

Merci O'Reilly !

# Contacter l'auteur

Vous pouvez me contacter, Andreas M. Antonopoulos, sur mon site
personnel : <https://aantonop.com/>

Des informations sur *Maîtriser Bitcoin (Mastering Bitcoin en anglais)*
ainsi que l'Édition Ouverte et les traductions sont disponibles sur :
<https://bitcoinbook.info/>

Suivez-moi sur Twitter: <https://twitter.com/aantonop>

Retrouvez plus de 500 vidéos pédagogiques sur ma chaîne YouTube :
<https://youtube.com/aantonop>

Un grand merci à tous mes mécènes qui soutiennent mon travail par des
dons mensuels. Vous pouvez suivre ma page Patreon ici :
<https://patreon.com/aantonop>

# Remerciements

<span class="indexterm"></span> <span class="indexterm"></span>Ce livre
représente les efforts et les contributions de nombreuses personnes. Je
suis reconnaissant pour toute l'aide que j'ai reçue d'amis, de collègues
et même de parfaits inconnus, qui m'ont rejoint dans cet effort pour
écrire le livre technique définitif sur les crypto-monnaies et le
bitcoin.

Il est impossible de faire une distinction entre la technologie bitcoin
et la communauté bitcoin, et ce livre est autant un produit de cette
communauté qu'un livre sur la technologie. Mon travail sur ce livre a
été encouragé, applaudi, soutenu et récompensé par toute la communauté
bitcoin du tout début jusqu'à la toute fin. Plus que tout, ce livre m'a
permis de faire partie d'une merveilleuse communauté pendant deux ans et
je ne vous remercierai jamais assez de m'avoir accepté dans cette
communauté. Il y a beaucoup trop de personnes à mentionner par leur
nom - des personnes que j'ai rencontrées lors de conférences,
d'événements, de séminaires, de rencontres, de pizzas et de petits
rassemblements privés, ainsi que beaucoup qui ont communiqué avec moi
par Twitter, sur reddit, sur bitcointalk. org, et sur GitHub qui ont eu
un impact sur ce livre. Chaque idée, analogie, question, réponse et
explication que vous trouverez dans ce livre a été à un moment donné
inspirée, testée ou améliorée grâce à mes interactions avec la
communauté. Merci à tous pour votre soutien; sans vous ce livre n'aurait
pas vu le jour. Je suis éternellement reconnaissant.

Le voyage pour devenir auteur commence bien avant le premier livre, bien
sûr. Ma première langue (et ma scolarité) était le grec, j'ai donc dû
suivre un cours de rattrapage en anglais écrit lors de ma première année
d'université. Je dois remercier Diana Kordas, mon professeur d'écriture
d'anglais, qui m'a aidé à développer ma confiance et mes compétences
cette année-là. Plus tard, en tant que professionnel, j'ai développé mes
compétences en rédaction technique sur le thème des centres de données,
en écrivant pour le magazine *Network World*. Je dois remercier John Dix
et John Gallant, qui m'ont donné mon premier travail d'écriture en tant
que chroniqueur à *Network World* et à mon éditeur Michael Cooney et mon
collègue Johna Till Johnson qui ont édité mes chroniques et les ont
rendues aptes à la publication. Écrire 500 mots par semaine pendant
quatre ans m'a donné suffisamment d'expérience pour éventuellement
envisager de devenir auteur.

Merci également à ceux qui m'ont soutenu lorsque j'ai soumis ma
proposition de livre à O'Reilly, en fournissant des références et en
examinant la proposition. Plus précisément, merci à John Gallant,
Gregory Ness, Richard Stiennon, Joel Snyder, Adam B. Levine, Sandra
Gittlen, John Dix, Johna Till Johnson, Roger Ver et Jon Matonis.
Remerciements particuliers à Richard Kagan et Tymon Mattoszko, qui ont
révisé les premières versions de la proposition et à Matthew Taylor, qui
a révisé la proposition.

Merci à Cricket Liu, auteur du titre O'Reilly *DNS et BIND*, qui m'a
présenté O'Reilly. Merci également à Michael Loukides et Allyson
MacDonald de O'Reilly, qui ont travaillé pendant des mois pour aider à
la réalisation de ce livre. Allyson a été particulièrement patiente
lorsque les délais ont été manqués et les livrables retardés alors que
la vie intervenait dans notre échéancier. Pour la deuxième édition, je
remercie Timothy McGovern d'avoir guidé le processus, Kim Cofer d'avoir
patiemment édité et Rebecca Panzer d'avoir illustré de nombreux nouveaux
diagrammes.

Les premières ébauches des premiers chapitres ont été les plus
difficiles, car le bitcoin est un sujet difficile à démêler. Chaque fois
que je tirais sur un fil de la technologie bitcoin, je devais tirer sur
le tout. Je me suis retrouvé coincé à plusieurs reprises et un peu
découragé alors que je luttais pour rendre le sujet facile à comprendre
et créer un récit autour d'un sujet technique aussi dense. Finalement,
j'ai décidé de raconter l'histoire du bitcoin à travers les histoires
des personnes utilisant le bitcoin et tout le livre est devenu beaucoup
plus facile à écrire. Je dois remercier mon ami et mentor, Richard
Kagan, qui m'a aidé à démêler l'histoire et à surmonter les moments de
blocage de l'écrivain. Je remercie Pamela Morgan, qui a révisé les
premières ébauches de chaque chapitre de la première et de la deuxième
édition du livre, et a posé les questions difficiles pour les améliorer.
Merci également aux développeurs du groupe San Francisco Bitcoin
Developers Meetup ainsi qu'à Taariq Lewis et Denise Terry pour avoir
aidé à tester le premier matériel. Merci également à Andrew Naugler pour
la conception infographique.

Pendant le développement du livre, j'ai rendu les premières ébauches
disponibles sur GitHub et j'ai invité les commentaires du public. Plus
d'une centaine de commentaires, suggestions, corrections et
contributions ont été soumis en réponse. Ces contributions sont
explicitement reconnues, avec mes remerciements, dans
&lt;&lt;github\_contrib&gt; &gt;. Surtout, mes sincères remerciements à
mes éditeurs bénévoles de GitHub, Ming T. Nguyen (1ère édition) et Will
Binns (2e édition), qui ont travaillé sans relâche pour organiser, gérer
et résoudre les demandes d'extraction, publier des rapports et effectuer
des corrections de bogues sur GitHub.

Une fois le livre rédigé, il est passé par plusieurs séries d'examens
techniques. Merci à Cricket Liu et Lorne Lantz pour leur examen
approfondi, leurs commentaires et leur soutien.

Plusieurs développeurs de bitcoins ont fourni des échantillons de code,
des critiques, des commentaires et des encouragements. Merci à Amir
Taaki et Eric Voskuil pour les extraits de code par exemple et de
nombreux excellents commentaires ; Chris Kleeschulte pour sa
contribution à l'annexe Bitcore ; Vitalik Buterin et Richard Kiss pour
leur aide avec les mathématiques des courbes elliptiques et leurs
contributions au code ; Gavin Andresen pour les corrections, les
commentaires et les encouragements ; Michalis Kargakis pour les
commentaires, les contributions et la rédaction de btcd ; et Robin Inge
pour les soumissions d'errata améliorant la deuxième impression. Dans la
deuxième édition, j'ai de nouveau reçu beaucoup d'aide de la part de
nombreux développeurs de Bitcoin Core, dont Eric Lombrozo qui a
démystifié le Témoin Séparé, Luke Dashjr qui a aidé à améliorer le
chapitre sur les transactions, Johnson Lau qui a revu le Témoin Séparé
et d'autres chapitres, et bien d'autres. Je dois remercier Joseph Poon,
Tadge Dryja et Olaoluwa Osuntokun qui ont expliqué le Lightning Network,
revu mes écrits et répondu aux questions lorsque je suis resté bloqué.

Je dois mon amour des mots et des livres à ma mère, Theresa, qui m'a
élevé dans une maison avec des livres tapissant tous les murs. Ma mère
m'a également acheté mon premier ordinateur en 1982, bien qu'elle se
décrive comme une technophobe. Mon père, Menelaos, un ingénieur civil
qui vient de publier son premier livre à 80 ans, est celui qui m'a
enseigné la pensée logique et analytique et l'amour de la science et de
l'ingénierie.

Merci à tous de m'avoir soutenu tout au long de ce parcours.

# Glossaire rapide

Ce glossaire rapide contient de nombreux termes utilisés en relation
avec le bitcoin. Ces termes sont utilisés tout au long du livre, alors
mettez-les en signet pour une référence rapide.

adresse  
Une adresse Bitcoin ressemble à `1DSrfJdB2AnWaFNgSbv3MZC2m74996JafV`. Il
se compose d'une suite de lettres et de chiffres. Il s'agit en réalité
d'une version codée en base58check d'un résultat de hachage à clé
publique de 160 bits. Tout comme vous demandez aux autres d'envoyer un
courriel à l’adresse de celle-ci, vous demanderez aux autres de vous
envoyer des bitcoins à l'une de vos adresses Bitcoin.

bip  
Bitcoin Improvement Proposals (ou Propositions d’améliorations du
Bitcoin). Un ensemble de propositions que les membres de la communauté
Bitcoin ont soumises pour améliorer Bitcoin. Par exemple, BIP-21 est une
proposition visant à améliorer le schéma d'identificateur de ressource
uniforme (URI) bitcoin.

bitcoin  
Le nom de l'unité monétaire (unité de cryptomonnaie), du réseau et du
logiciel.

bloc  
Regroupement de transactions, marqué d'un horodatage et d'une empreinte
digitale du bloc précédent. L'en-tête du bloc est haché (c.-à-d., on
obtient un résultat de hachage) pour produire une preuve de travail,
validant ainsi les transactions. Les blocs valides sont ajoutés à la
chaîne de blocs principale par consensus du réseau.

blockchain (ou chaîne de blocs)  
Une liste de blocs validés, chacun lié à son prédécesseur jusqu'au bloc
de genèse.

récompense de bloc (alias récompense coinbase (ou unité de monnaie primaire du bloc)  
Un montant inclus dans chaque nouveau bloc comme récompense par le
réseau au mineur qui a trouvé la solution Proof-of-Work (ou Preuve de
travail)). Environ tous les quatre ans, ou plus précisément tous les 210
000 blocs, la récompense de bloc globale est réduite de moitié. Il est
actuellement de 6,25 BTC par bloc.

Byzantine Generals Problem (ou Problème des généraux Byzantins)  
Un système informatique fiable doit pouvoir faire face à la défaillance
d'un ou plusieurs de ses composants. Un composant défaillant peut
présenter un type de comportement souvent négligé, à savoir l'envoi
d'informations contradictoires à différentes parties du système. Le
problème de faire face à ce type d'échec est exprimé abstraitement comme
le Byzantine Generals Problem (ou Problème des généraux byzantins) (voir
<https://fr.wikipedia.org/wiki/Probl%C3%A8me_des_g%C3%A9n%C3%A9raux_byzantins>).

bloc candidat  
Un bloc qu'un mineur essaie toujours d'exploiter. Ce n'est pas encore un
bloc valide, car il ne contient pas de Proof-of-Work (ou Preuve de
travail) valide.

coinbase (ou unité de monnaie primaire du bloc) (alias données coinbase)  
Un champ spécial utilisé comme seule entrée pour les transactions
coinbase. Le champ de données coinbase permet de réclamer la récompense
de bloc et fournit jusqu'à 100 octets pour les données arbitraires. À ne
pas confondre avec la "transaction coinbase" ou la "récompense
coinbase".

transaction coinbase  
La première transaction d'un bloc; toujours créé par un mineur. Le
coinbase est unique dans le bloc. À ne pas confondre avec coinbase
(données coinbase) ou "récompense coinbase".

stockage à froid  
Fait référence à la conservation d'une réserve de bitcoins hors ligne.
Le stockage à froid est réalisé lorsque les clés privées bitcoin sont
créées et stockées dans un environnement hors ligne sécurisé. Le
stockage à froid est important pour quiconque possède des avoirs en
bitcoins. Les ordinateurs en ligne sont vulnérables aux pirates et ne
doivent pas être utilisés pour stocker une quantité importante de
bitcoins. (note du traducteur: l’auteur est un peu paranoïde; les noeuds
sont en ligne. Si les noeuds sont insécures, c’est la fin de ce système
et de ce livre.) ;)

confirmations  
Une fois qu'une transaction est incluse dans un bloc, elle a une
confirmation. Dès qu'un autre bloc est miné sur la même chaîne de blocs,
la transaction a deux confirmations, et ainsi de suite. Six
confirmations ou plus sont considérées comme une preuve suffisante
qu'une transaction ne peut pas être annulée.

consensus  
Lorsque plusieurs nœuds, généralement la plupart des nœuds du réseau,
ont tous les mêmes blocs dans leur meilleure chaîne de blocs validée
localement. À ne pas confondre avec les règles de consensus.

règles de consensus  
Les règles de validation de bloc que les nœuds complets suivent pour
rester en consensus avec les autres nœuds. A ne pas confondre avec le
consensus.

difficulté  
Un paramètre à l'échelle du réseau qui contrôle la quantité de calculs
nécessaires pour produire une preuve de travail (ou le Proof-of-Work).

reciblage de difficulté  
Un recalcul à l'échelle du réseau de la difficulté qui se produit une
fois tous les 2 016 blocs et prend en compte la puissance de hachage des
2 016 blocs précédents.

cible de difficulté  
Une difficulté pour le calcul dans tout le réseau et qui permet de
solutionner et valider l’ajout d’un bloc environ toutes les 10 minutes.

double dépense  
La double dépense est le résultat d'avoir réussi à dépenser de l'argent
plus d'une fois. Bitcoin protège contre les doubles dépenses en
vérifiant chaque transaction ajoutée à la chaîne de blocs pour s'assurer
que les entrées de la transaction n'avaient pas déjà été dépensées
auparavant.

ECDSA  
Elliptic Curve Digital Signature Algorithm ou ECDSA est un algorithme
cryptographique utilisé par bitcoin pour garantir que les fonds ne
peuvent être dépensés que par leurs propriétaires légitimes.

nombre aléatoire explicite supplémentaire  
Au fur et à mesure que la difficulté augmentait, les mineurs
parcouraient souvent les 4 milliards de nombres aléatoires explicites
(nonce) sans trouver de bloc. Étant donné que le script coinbase peut
stocker entre 2 et 100 octets de données, les mineurs ont commencé à
utiliser cet espace comme espace pour un nombre aléatoire explicite
supplémentaire, leur permettant d'explorer une gamme beaucoup plus large
de valeurs d'en-tête de bloc pour trouver des blocs valides.

frais  
L'expéditeur d'une transaction inclut souvent une valeur de frais au
réseau pour le traitement de la transaction demandée. La plupart des
transactions nécessitent des frais minimum de 0,5 mBTC.

fourche  
La fourche, également connue sous le nom de fourche accidentelle, se
produit lorsque deux blocs ou plus ont la même hauteur de bloc, forçant
la chaîne de blocs à se dédoubler. Cela se produit généralement lorsque
deux mineurs ou plus trouvent des blocs presque en même temps. Peut
également se produire dans le cadre d'une attaque.

bloc de genèse  
Le premier bloc de la chaîne de blocs, utilisé pour initialiser la
cryptomonnaie (ou cybermonnaie).

halving (ou réduction de moitié)  
Un événement de réduction de moitié se produit lorsque la récompense de
bloc est réduite de moitié, ce qui se produit environ tous les quatre
ans (ou précisément tous les 210 000 blocs). Bitcoin a déjà connu trois
événements de réduction de moitié : en 2012 (de 50 à 25 BTC), en 2016
(de 25 à 12,5 BTC) et en 2020 (de 12,5 à 6,25 BTC).

fourche dure  
La fourche dure, également connu sous le nom de Hard-Forking Change, est
une divergence permanente dans la chaîne de blocs, se produit
généralement lorsque les nœuds non mis à niveau ne peuvent pas valider
les blocs créés par les nœuds mis à niveau qui suivent les nouvelles
règles de consensus. À ne pas confondre avec une fourche, une fourche
molle, une fourche de code ou une fourche Git, mais tout de même un
nouvel embranchement d’une arborescence de données (avec une source
parent unique).

portefeuille matériel (hardware)  
Un portefeuille matériel est un type spécial de portefeuille bitcoin qui
stocke les clés privées de l'utilisateur dans un périphérique matériel
sécurisé.

résultat de hachage  
Une empreinte numérique d'une entrée binaire.

hashlocks (ou serrure par empreinte numérique)  
Un hashlock (ou serrure par empreinte numérique) est un type de
contrainte qui limite les dépenses d'une sortie jusqu'à ce qu'une donnée
spécifique soit révélée publiquement. Les hashlocks ont la propriété
utile qu'une fois qu'un hashlock est ouvert publiquement, tout autre
hashlock sécurisé à l'aide de la même clé peut également être ouvert.
Cela permet de créer plusieurs sorties qui sont toutes encombrées par le
même hashlock et qui deviennent toutes dépensables en même temps.

Protocole HD  
Le protocole de création et de transfert de clés Hierarchical
Deterministic (HD) (BIP-32), qui permet de créer des clés enfants à
partir de clés parents dans une hiérarchie.

Portefeuille HD  
Portefeuilles utilisant le protocole de création et de transfert de clés
Hierarchical Deterministic (HD Protocol) (BIP-32).

Portefeuille d’amorçage HD  
Le portefeuille d’amorçage HD ou la valeur d’amorçage est une valeur
potentiellement courte utilisée comme valeur racine pour générer la clé
privée principale et le code de chaîne principal pour un portefeuille
HD.

HTLC  
Un contrat Hashed TimeLock ou HTLC est une classe de paiements qui
utilisent des hashlocks (ou serrures par empreintes numériques) et des
timelocks (ou serrures par horodatage) pour exiger que le destinataire
d'un paiement reconnaisse avoir reçu le paiement avant une date limite
en générant une preuve cryptographique de paiement ou renonce à la
possibilité de réclamer le paiement, le retournant au payeur.

KYC  
Know Your Customer (ou Connaître son client) (KYC) est le processus
d'une entreprise qui identifie et vérifie l'identité de ses clients. Le
terme est également utilisé pour désigner la réglementation bancaire qui
régit ces activités.

LevelDB  
LevelDB est un moyen de stockage clé-valeur open source sur disque.
LevelDB est une bibliothèque légère à usage unique pour la persistance
avec des liaisons sur de nombreuses plates-formes.

Lightning Networks  
Lightning Network est une implémentation de Hashed Timelock Contracts
(HTLC) avec des canaux de paiement bidirectionnels qui permettent aux
paiements d'être acheminés en toute sécurité sur plusieurs canaux de
paiement pair à pair. Cela permet la formation d'un réseau où n'importe
quel pair sur le réseau peut payer n'importe quel autre pair même s'ils
n'ont pas directement de canal ouvert entre eux.

Locktime (ou valeur de relâche de transaction)  
Locktime, ou plus techniquement nLockTime, est la partie d'une
transaction qui indique la première heure où le premier bloc auquel
cette transaction peut être ajoutée à la chaîne de blocs. C’est une
valeur horodatée servant de date ultérieur pour une transaction; comme
un chèque postdaté.

mempool  
Le bitcoin Mempool (bassin de mémoire) est une collection de toutes les
données de transaction dans un bloc qui ont été vérifiées par les nœuds
Bitcoin, mais qui ne sont pas encore confirmées.

racine de merkle  
Le nœud racine d'un arbre Merkle, un descendant de toutes les paires
hachées de l'arbre. Les en-têtes de bloc doivent inclure une racine
merkle valide issue de toutes les transactions de ce bloc.

arbre de merkle  
Un arbre construit en hachant des données appariées (les feuilles), puis
en appariant et en hachant les résultats jusqu'à ce qu'il ne reste qu'un
seul résultat de hachage, la racine de Merkle. En bitcoin, les feuilles
sont presque toujours des transactions d'un seul bloc.

mineur  
Un nœud de réseau qui trouve une preuve de travail valide pour les
nouveaux blocs, par hachage répété.

récompense minière  
Les récompense que les mineurs reçoivent en échange de la sécurité
fournie par l'exploitation minière, comprend les nouvelles pièces
bitcoin créées avec chaque nouveau bloc, également appelées récompense
de bloc ou récompense coinbase, et les frais de transaction de toutes
les transactions incluses dans le bloc.

multisignature  
La multisignature (multisig) fait référence à l'exigence d'un nombre
minimum (M) de clés (N) pour autoriser une transaction M-sur-N.

réseau  
Un réseau pair à pair qui propage les transactions et les bloques à
chaque nœud Bitcoin du réseau.

nonce (ou nombre aléatoire explicite)  
Le "nonce" (ou nombre aléatoire explicite) dans un bloc bitcoin est un
champ de 32 bits (4 octets) dont la valeur est définie de manière à ce
que le résultat de hachage du bloc contienne une série de zéros non
significatifs. Les autres champs ne peuvent pas être modifiés, car ils
ont une signification définie.

transactions hors chaîne  
Une transaction hors chaîne est le mouvement de valeur en dehors de la
chaîne de blocs, alors qu'une transaction en chaîne&#x2014 est
simplement appelée *une transaction*&#x2014. La transaction hors chaîne
modifie la chaîne de blocs et dépend de cette dernière pour déterminer
sa validité. Une transaction hors chaîne de blocs s'appuie sur d'autres
méthodes pour enregistrer et valider la transaction.

opcode  
Codes d'opération du langage de script bitcoin qui poussent des données
ou exécutent des fonctions dans un script pubkey ou un script de
signature.

Protocole Open Assets (ou Actifs ouverts)  
Le protocole Open Assets (ou Actifs ouverts) est un protocole simple et
puissant construit au-dessus de la chaîne de blocs Bitcoin. Il permet
l'émission et le transfert d'actifs créés par l'utilisateur.

OP\_RETURN  
Un opcode (ou code d’opération) utilisé dans l'une des sorties d'une
transaction OP\_RETURN. A ne pas confondre avec la transaction
OP\_RETURN.

Transaction OP\_RETURN  
Un type de transaction qui ajoute des données arbitraires à un script
pubkey prouvé que les nœuds complets n'ont pas à stocker dans leur base
de données UTXO. A ne pas confondre avec l'opcode OP\_RETURN.

bloc orphelin  
Les blocs dont le bloc parent n'a pas été traité par le nœud local, ils
ne peuvent donc pas encore être entièrement validés. À ne pas confondre
avec le bloc obsolète.

orphan transactions  
Transactions qui ne peuvent pas entrer dans le bassin de mémoire
(Mempool) en raison d'une ou plusieurs transactions d'entrée manquantes.

extrant  
L’Output (le produit sorti ou l’extrant), la sortie de transaction ou
TxOut est une sortie dans une transaction qui contient deux champs : un
champ de valeur pour transférer zéro ou plusieurs satoshis et un script
pubkey pour indiquer quelles conditions doivent être remplies pour que
ces satoshis soient dépensés davantage.

P2PKH  
Les transactions qui paient une adresse Bitcoin contiennent des scripts
P2PKH ou Pay To PubKey Hash. Une sortie verrouillée par un script P2PKH
peut être déverrouillée (dépensée) en présentant une clé publique et une
signature numérique créée par la clé privée correspondante.

P2SH  
P2SH ou Pay-to-Script-Hash est un nouveau type de transaction puissant
qui simplifie grandement l'utilisation de scripts de transaction
complexes. Avec P2SH le script complexe qui détaille les conditions de
dépense de la sortie (redeem script) n'est pas présenté dans le script
de verrouillage. Au lieu de cela, seul un résultat de hachage de
celui-ci se trouve dans le script de verrouillage.

Adresse P2SH  
Les adresses P2SH sont des encodages Base58Check du résultat de hachage
de 20 octets d'un script. Ils utilisent le préfixe de version "5", ce
qui donne des adresses encodées en Base58Check qui commencent par un
"3". Les adresses P2SH cachent toute la complexité, de sorte que la
personne effectuant un paiement ne voit pas le script.

P2WPKH  
La signature d'un P2WPKH (Pay-to-Witness-Public-Key-Hash) contient les
mêmes informations qu'une dépense P2PKH, mais se trouve dans le champ
témoin au lieu du champ scriptSig. Le scriptPubKey est également
modifié.

P2WSH  
La différence entre P2SH et P2WSH (Pay-to-Witness-Script-Hash) concerne
le changement d'emplacement de la preuve cryptographique du champ
scriptSig au champ témoin et le scriptPubKey qui est également modifié.

portefeuille papier  
Dans le sens le plus spécifique, un portefeuille papier est un document
contenant toutes les données nécessaires pour générer un nombre
quelconque de clés privées bitcoin, formant un portefeuille de clés.
Cependant, les gens utilisent souvent le terme pour désigner tout moyen
de stocker des bitcoins hors ligne en tant que document physique. Cette
deuxième définition comprend également les clés papier et les codes
échangeables.

phrase de passe  
Une phrase de passe est une chaîne de caractères facultative créée par
l'utilisateur qui sert de facteur de sécurité supplémentaire protégeant
la valeur d’amorçage, même lorsque la valeur d’amorçage est compromise
par un voleur. Il peut également être utilisé comme une forme de pot de
miel, où une phrase de passe choisie (une adresse bitcoin, un URL ou
autre) mène à un portefeuille avec une petite quantité de fonds utilisée
pour distraire un attaquant du "vrai" portefeuille qui contient la
majorité des fonds.

canaux de paiement  
Un canal de micropaiement ou canal de paiement est une classe de
techniques conçues pour permettre aux utilisateurs d'effectuer plusieurs
transactions bitcoin sans engager toutes les transactions dans la chaîne
de blocs Bitcoin. Dans un canal de paiement typique, seules deux
transactions sont ajoutées à la chaîne de blocs, mais un nombre illimité
ou presque illimité de paiements peut être effectué entre les
participants.

exploitation minière groupée  
L'exploitation minière en groupe est une approche d'exploitation minière
dans laquelle plusieurs clients générateurs contribuent à la génération
d'un bloc, puis divisent la récompense du bloc en fonction de la
puissance de traitement apportée.

Proof-of-Stake (ou Preuve d’enjeu)  
La preuve d’enjeu (PoS) est une méthode par laquelle un réseau de chaîne
de blocs de cryptomonnaie vise à atteindre un consensus distribué. La
preuve d’enjeu demande aux utilisateurs de prouver qu'ils sont
propriétaires d'un certain montant de devise (leur « enjeu » ou
« participation » dans la devise).

Proof-of-Work (ou Preuve de travail)  
Une donnée qui nécessite des calculs importants pour être trouvée. Dans
le bitcoin, les mineurs doivent trouver une solution numérique à
l'algorithme SHA256 qui répond à une cible à l'échelle du réseau, la
cible de difficulté.

RIPEMD-160  
RIPEMD-160 est une fonction de hachage cryptographique 160 bits.
RIPEMD-160 est une version renforcée de RIPEMD avec un résultat de
hachage de 160 bits, et devrait être sécurisé pour les dix prochaines
années ou plus.

satoshi  
Un satoshi est la plus petite dénomination de bitcoin pouvant être
enregistrée sur la blockchain. Il équivaut à 0,00000001 bitcoin et porte
le nom du créateur du bitcoin, Satoshi Nakamoto. <span
class="indexterm"></span>

Satoshi Nakamoto  
Satoshi Nakamoto est le nom utilisé par la ou les personnes qui ont
conçu le bitcoin et créé son implémentation de référence originale,
Bitcoin Core. Dans le cadre de la mise en œuvre, ils ont également conçu
la première base de données chaîne de blocs. Dans le processus, ils ont
été les premiers à résoudre le problème de la double dépense pour la
monnaie numérique. Leur véritable identité reste inconnue.

Script  
Bitcoin utilise un système de script pour les transactions. Comme Forth,
Script est simple, basé sur une pile et traité de gauche à droite. Il
n'est délibérément pas complet de Turing et sans boucles.

ScriptPubKey (alias script pubkey): : ScriptPubKey ou script pubkey, est
un script inclus dans les sorties qui définit les conditions qui doivent
être remplies pour que ces satoshis soient dépensés. Les données
permettant de remplir les conditions peuvent être fournies dans un
script de signature.

ScriptSig (ou Script de signature): : ScriptSig ou script de signature,
sont les données générées par un dépensier qui sont presque toujours
utilisées comme variables pour satisfaire un script pubkey.

clé secrète (ou clé privée): : Le numéro secret qui déverrouille le
bitcoin envoyé à l'adresse correspondante. Une clé secrète ressemble à
ceci :

\+

    5J76sF8L5jTtzE96r66Sf8cka9y44wdpJjMwCxR3tzLh3ibVPxh

Témoin Séparé  
Le témoin séparé est une mise à niveau du protocole Bitcoin dans
laquelle les données de signature ("témoin") sont séparées des données
de l'expéditeur/destinataire pour optimiser davantage la structure des
transactions. Le témoin Séparé a été implémenté comme un embranchement
convergent ; un changement qui rend techniquement les règles du
protocole de bitcoin plus restrictives.

SHA  
Le Secure Hash Algorithm ou SHA est une famille de fonctions de hachage
cryptographiques publiées par le National Institute of Standards and
Technology (NIST).

Simplified Payment Verification (SPV ou Vérification simplifiée des
paiements): : SPV ou vérification simplifiée des paiements est une
méthode permettant de vérifier que des transactions particulières ont
été incluses dans un bloc, sans télécharger le bloc entier. Cette
méthode de vérification est souvent utilisée par les clients Bitcoin
légers.

embranchement convergent  
L’embranchement convergent ou le Soft-Forking Change est un fourche
temporaire dans la chaîne de blocs qui se produit généralement lorsque
les mineurs utilisant des nœuds non mis à niveau ne suivent pas une
nouvelle règle de consensus que leurs nœuds ne connaissent pas. À ne pas
confondre avec fourche, fourche dure, fourche logicielle ou fourche de
Git.

bloc périmé  
Un bloc valide qui a été extrait avec succès mais qui n'est pas inclus
dans la branche principale actuelle (avec la plupart des preuves de
travail cumulatives), car un autre bloc valide qui a été extrait à la
même hauteur a vu sa chaîne étendue en premier. Le mineur d'un bloc
périmé ne reçoit pas la récompense du bloc ni les frais de transaction
de ce bloc. À ne pas confondre avec le bloc orphelin ou le bloc
candidat.

timelocks (ou serrures horaires)  
Un timelock (ou serrure horaire) est un type de contrainte qui limite la
dépense de certains bitcoins jusqu'à une heure future ou une hauteur de
bloc spécifiée. Les timelocks figurent en bonne place dans de nombreux
contrats bitcoin, y compris les canaux de paiement et les contrats de
timelock hachés.

transaction  
En termes simples, un transfert de bitcoin d'une adresse à une autre.
Plus précisément, une transaction est une structure de données signée
exprimant un transfert de valeur. Les transactions sont transmises sur
le réseau Bitcoin, collectées par les mineurs et incluses dans des
blocs, rendus permanents sur la chaîne de blocs.

bassin de transactions  
Une collection non ordonnée de transactions qui ne sont pas en blocs
dans la chaîne principale, mais pour lesquelles nous avons des
transactions d'entrée.

Complétude de Turing  
Un langage de programmation est appelé "Turing complet" s'il peut
exécuter n'importe quel programme qu'une machine de Turing peut
exécuter, avec suffisamment de temps et de mémoire.

unspent transaction output (UTXO ou sortie de transaction non dépensée)  
UTXO est une sortie de transaction non dépensée qui peut être dépensée
comme entrée dans une nouvelle transaction.

portefeuille  
Logiciel qui contient toutes vos adresses Bitcoin et clés secrètes.
Utilisez-le pour envoyer, recevoir et stocker vos bitcoins.

Wallet Import Format (WIF ou Format d’importation de portefeuille)  
WIF ou Wallet Import Format (format d’importation de portefeuille) est
un format d'échange de données conçu pour permettre l'exportation et
l'importation d'une seule clé privée avec un indicateur indiquant s'il
utilise ou non une clé publique compressée.

Certaines définitions fournies ont été extraites sous une licence CC-BY
de [bitcoin Wiki](https://en.bitcoin.it/wiki/Main_Page) ou d'autres
documentations à source libre.

# Introduction

# Qu'est-ce que Bitcoin ?

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span>Bitcoin est un ensemble de concepts et de
technologies qui constituent la base d'un écosystème de monnaie
numérique. Les unités monétaires appelées bitcoin sont utilisées pour
stocker et transmettre de la valeur entre les participants au réseau
Bitcoin. Les utilisateurs de Bitcoin communiquent entre eux en utilisant
le protocole Bitcoin principalement via Internet, bien que d'autres
réseaux de transport puissent également être utilisés. La pile de
protocole Bitcoin, disponible en tant que logiciel à source libre, peut
être exécutée sur une large gamme d'appareils informatiques, y compris
les ordinateurs portables et les smartphones, ce qui rend la technologie
facilement accessible.

Remarquez comment l'unité monétaire s'appelle "bitcoin" avec un petit
*b*, et le système s'appelle "Bitcoin", avec un *B* majuscule.

Les utilisateurs peuvent transférer des bitcoins sur le réseau pour
faire à peu près tout ce qui peut être fait avec des devises
conventionnelles, y compris acheter et vendre des biens, envoyer de
l'argent à des personnes ou à des organisations ou accorder un crédit.
Le bitcoin peut être acheté, vendu et échangé contre d'autres devises
dans des bureaux de change spécialisés. Le bitcoin est en un sens la
forme d'argent idéale pour Internet car il est rapide, sécurisé et sans
frontières.

Contrairement aux monnaies traditionnelles, le bitcoin est entièrement
virtuel. Il n'y a pas de pièces physiques ni même de pièces numériques
en soi. Les pièces sont impliquées dans des transactions qui transfèrent
de la valeur de l'expéditeur au destinataire. Les utilisateurs de
Bitcoin possèdent des clés qui leur permettent de prouver la propriété
du bitcoin dans le réseau Bitcoin. Avec ces clés, ils peuvent signer des
transactions pour débloquer la valeur et la dépenser en la transférant à
un nouveau propriétaire. Les clés sont souvent stockées dans un
portefeuille numérique sur l'ordinateur ou le smartphone de chaque
utilisateur. La possession de la clé qui peut signer une transaction est
la seule condition préalable pour dépenser du bitcoin, mettant le
contrôle entièrement entre les mains de chaque utilisateur.

Bitcoin est un système distribué pair à pair. En tant que tel, il n'y a
pas de serveur "central" ou de point de contrôle. Les unités de bitcoin
sont créés par un processus appelé "minage", qui implique une
compétition pour trouver des solutions à un problème mathématique lors
du traitement des transactions Bitcoin. Tout participant au réseau
Bitcoin (c'est-à-dire toute personne utilisant un appareil exécutant la
pile complète du protocole Bitcoin) peut opérer en tant que mineur, en
utilisant la puissance de traitement de son ordinateur pour vérifier et
enregistrer les transactions. Toutes les 10 minutes, en moyenne, un
mineur de Bitcoin peut valider les transactions et est récompensé par un
tout nouveau bitcoin. Essentiellement, l'extraction de Bitcoin
décentralise les fonctions d'émission et de compensation de devises
d'une banque centrale et remplace le besoin de cette dernière.

Le protocole Bitcoin comprend des algorithmes intégrés qui régulent la
fonction de minage sur le réseau. La difficulté de la tâche de
traitement que les mineurs doivent effectuer est ajustée dynamiquement
de sorte qu'en moyenne, quelqu'un réussisse toutes les 10 minutes, quel
que soit le nombre de mineurs (et la quantité de traitement) en
compétition à tout moment. Le protocole réduit également de moitié le
taux de création de nouveaux bitcoins tous les 4 ans et limite le nombre
total de bitcoins qui seront créés à un total fixe juste en dessous de
21 millions de pièces. Le résultat est que le nombre de bitcoins en
circulation suit de près une courbe facilement prévisible qui approche
les 21 millions d'ici 2140. En raison du taux d'émission décroissant du
bitcoin, sur le long terme, la monnaie Bitcoin est déflationniste. De
plus, le bitcoin ne peut pas être gonflé en "imprimant" de la nouvelle
monnaie au-delà du taux d'émission prévu.

Dans les coulisses, Bitcoin est aussi le nom du protocole, un réseau
pair à pair et une innovation informatique distribuée. La monnaie
bitcoin n'est vraiment que la première application de cette invention.
Bitcoin représente l'aboutissement de décennies de recherche en
cryptographie et en systèmes distribués et comprend quatre innovations
clés réunies dans une combinaison unique et puissante. Bitcoin se
compose de :

-   Un réseau pair à pair décentralisé (le protocole Bitcoin)

-   Un registre public des transactions (la chaîne de blocs)

-   <span class="indexterm"></span> <span class="indexterm"></span>
    <span class="indexterm"></span>Un ensemble de règles pour la
    validation indépendante des transactions et l'émission de devises
    (règles de consensus)

-   Un mécanisme pour parvenir à un consensus mondial décentralisé sur
    la chaîne de blocs valide (algorithme de Proof-of-Work (ou Preuve de
    travail))

En tant que développeur, je vois Bitcoin comme un Internet de l'argent,
un réseau pour propager la valeur et sécuriser la propriété des actifs
numériques via un calcul distribué. Il y a beaucoup plus à Bitcoin qu'il
n'y paraît à première vue.

Dans ce chapitre, nous commencerons par expliquer certains des concepts
et termes principaux, et obtenir le logiciel nécessaire et utiliser
Bitcoin pour des transactions simples. Dans les chapitres suivants, nous
commencerons à déballer les couches de technologie qui rendent Bitcoin
possible et examinerons le fonctionnement interne du réseau et du
protocole Bitcoin.<span class="indexterm"></span> <span
class="indexterm"></span>

<span class="indexterm"></span> <span
class="indexterm"></span>L'émergence d'une monnaie numérique viable est
étroitement liée aux développements de la cryptographie. Cela n'est pas
surprenant si l'on considère les défis fondamentaux liés à l'utilisation
de bits pour représenter la valeur qui peut être échangée contre des
biens et des services. Trois questions fondamentales pour quiconque
accepte de l'argent numérique sont :

1.  Puis-je avoir la certitude que l'argent est authentique et non
    contrefait ?

2.  Puis-je avoir confiance que l'argent numérique ne peut être dépensé
    qu'une seule fois (connu sous le nom de problème de « double
    dépense ») ?

3.  Puis-je être sûr que personne d'autre ne pourra prétendre que cet
    argent lui appartient et pas à moi ?

Les émetteurs de papier-monnaie luttent constamment contre le problème
de la contrefaçon en utilisant des papiers et des technologies
d'impression de plus en plus sophistiqués. L'argent physique résout
facilement le problème des doubles dépenses, car le même billet papier
ne peut pas se trouver à deux endroits à la fois. Bien sûr, l'argent
conventionnel est aussi souvent stocké et transmis numériquement. Dans
ces cas, les problèmes de contrefaçon et de double dépense sont traités
en compensant toutes les transactions électroniques par des autorités
centrales qui ont une vue globale de la monnaie en circulation. Pour la
monnaie numérique, qui ne peut tirer profit des encres ésotériques ou
des bandes holographiques, la cryptographie fournit la base pour faire
confiance à la légitimité de la revendication de valeur d'un
utilisateur. Plus précisément, les signatures numériques
cryptographiques permettent à un utilisateur de signer un actif
numérique ou une transaction prouvant la propriété de cet actif. Avec
l'architecture appropriée, les signatures numériques peuvent également
être utilisées pour résoudre le problème des doubles dépenses.

Lorsque la cryptographie a commencé à devenir plus largement disponible
et comprise à la fin des années 1980, de nombreux chercheurs ont
commencé à essayer d'utiliser la cryptographie pour créer des monnaies
numériques. Ces premiers projets de monnaie numérique émettaient de la
monnaie numérique, généralement adossée à une monnaie nationale ou à un
métal précieux comme l'or.

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span> Bien que ces anciennes monnaies numériques
fonctionnaient, elles étaient centralisées et, par conséquent, faciles à
attaquer par les gouvernements et les pirates. Les premières monnaies
numériques utilisaient une chambre de compensation centrale pour régler
toutes les transactions à intervalles réguliers, tout comme un système
bancaire traditionnel. Malheureusement, dans la plupart des cas, ces
monnaies numériques naissantes ont été ciblées par des gouvernements
inquiets et ont finalement été dissoutes. Certains ont échoué dans des
crashs spectaculaires lorsque la société mère a été liquidée
brutalement. Pour être robuste contre l'intervention d'antagonistes,
qu'il s'agisse de gouvernements légitimes ou d'éléments criminels, une
monnaie numérique *décentralisée* était nécessaire pour éviter un seul
point d'attaque. Bitcoin est un tel système, décentralisé par
conception, et libre de toute autorité centrale ou point de contrôle qui
peut être attaqué ou corrompu.

# Histoire de Bitcoin

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>Bitcoin a été inventé en 2008 avec la
publication d'un article intitulé "Bitcoin : A Peer-to-Peer Electronic
Cash System,"[1] écrit sous l'alias de Satoshi Nakamoto (voir
[???](#satoshi_whitepaper)). Nakamoto a combiné plusieurs inventions
antérieures telles que b-money et HashCash pour créer un système de
paiement électronique entièrement décentralisé qui ne repose pas sur une
autorité centrale pour l'émission de devises ou le règlement et la
validation des transactions. <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span>L'innovation
clé consistait à utiliser un système de calcul distribué (appelé
algorithme de « preuve de travail ») pour effectuer une « élection »
globale toutes les 10 minutes, permettant au réseau décentralisé
d'arriver à un *consensus* sur l'état des transactions. <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>Cela résout élégamment le problème de la double
dépense où une seule unité monétaire peut être dépensée deux fois.
Auparavant, le problème des doubles dépenses était une faiblesse de la
monnaie numérique et était résolu en compensant toutes les transactions
via une chambre de compensation centrale.

Le réseau Bitcoin a démarré en 2009, sur la base d'une référence
d’implémentation publiée par Nakamoto et révisée depuis par de nombreux
autres programmeurs. La mise en œuvre de l'algorithme Proof-of-Work (ou
Preuve de travail ou minage) qui assure la sécurité et la résilience de
Bitcoin a augmenté de manière exponentielle et dépasse désormais la
puissance de traitement combinée des meilleurs supercalculateurs du
monde. La valeur marchande totale de Bitcoin a parfois dépassé 1 billion
de dollars américains, selon le taux de change bitcoin-dollar. La
transaction la plus importante traitée jusqu'à présent par le réseau
était de 1,1 milliard de dollars américains, transmise instantanément et
traitée pour des frais de seulement 0,68 $.

Satoshi Nakamoto s'est retiré du public en avril 2011, laissant la
responsabilité de développer le code et le réseau à un groupe prospère
de bénévoles. L'identité de la personne ou des personnes derrière
Bitcoin est encore inconnue. <span class="indexterm"></span>Cependant,
ni Satoshi Nakamoto ni personne d'autre n'exerce de contrôle individuel
sur le système Bitcoin, qui fonctionne sur la base de principes
mathématiques totalement transparents, d'un code à source libre et d'un
consensus entre les participants. L'invention elle-même est
révolutionnaire et a déjà engendré une nouvelle science dans les
domaines de l'informatique distribuée, de l'économie et de
l'économétrie.

<span class="indexterm"></span>L'invention de Satoshi Nakamoto est
également une solution pratique et nouvelle à un problème d'informatique
distribuée, connu sous le nom de "Problème des généraux byzantins".
Brièvement, le problème consiste à essayer de s'entendre sur une ligne
de conduite ou sur l'état d'un système en échangeant des informations
sur un réseau peu fiable et potentiellement compromis. <span
class="indexterm"></span>La solution de Satoshi Nakamoto, qui utilise le
concept de preuve de travail pour parvenir à un consensus *sans autorité
centrale de confiance*, représente une percée dans l'informatique
distribuée et a une large applicabilité au-delà de la monnaie. Il peut
être utilisé pour parvenir à un consensus sur les réseaux décentralisés
afin de prouver l'équité des élections, des loteries, des registres
d'actifs, de la notarisation numérique, etc.

# Utilisations, utilisateurs et histoires de Bitcoin

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span>Bitcoin est une innovation dans l'ancienne
technologie de l'argent. À la base, l'argent facilite simplement
l'échange de valeur entre les personnes. Par conséquent, afin de bien
comprendre Bitcoin et ses utilisations, nous l'examinerons du point de
vue des personnes qui l'utilisent. Chacune des personnes et de leurs
histoires, telles qu'énumérées ici, illustre un ou plusieurs cas
d'utilisation spécifiques. Nous les verrons tout au long du livre :

Vente au détail de faible valeur en Amérique du Nord  
<span class="indexterm"></span> <span class="indexterm"></span>Alice vit
dans la région de la baie de Californie du Nord. Elle a entendu parler
de Bitcoin par ses amis technophiles et veut commencer à l'utiliser.
Nous suivrons son histoire au fur et à mesure qu'elle découvre le
Bitcoin, en acquiert, puis dépense une partie de son bitcoin pour
acheter une tasse de café au Bob's Cafe à Palo Alto. Cette histoire nous
présentera le logiciel, les échanges et les transactions de base du
point de vue d'un consommateur de détail.

Vente au détail de grande valeur en Amérique du Nord  
Carol est propriétaire d'une galerie d'art à San Francisco. Elle vend
des peintures chères pour Bitcoin. Cette histoire présentera les risques
d'une attaque de consensus "51%" pour les détaillants d'articles de
grande valeur.

Services contractuels extraterritorial  
<span class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>Bob, le propriétaire d'un café à Palo Alto, est
en train de créer un nouveau site Web. Il a passé un contrat avec un
développeur Web indien, Gopesh, qui vit à Bangalore, en Inde. Gopesh a
accepté d'être payé en bitcoin. Cette histoire examinera l'utilisation
de Bitcoin pour l'externalisation, les services contractuels et les
virements internationaux.

Commerce en ligne  
<span class="indexterm"></span> <span class="indexterm"></span>Gabriel
est un jeune adolescent entreprenant à Rio de Janeiro, qui dirige une
petite boutique en ligne qui vend des t-shirts, des tasses à café et des
autocollants de marque Bitcoin. Gabriel est trop jeune pour avoir un
compte bancaire, mais ses parents encouragent son esprit d'entreprise.

Dons caritatifs  
<span class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>Eugenia est directrice d'une association
caritative pour enfants aux Philippines. Récemment, elle a découvert
Bitcoin et souhaite l'utiliser pour atteindre un tout nouveau groupe de
donateurs étrangers et nationaux afin de collecter des fonds pour son
association caritative. Elle étudie également les moyens d'utiliser
Bitcoin pour distribuer rapidement des fonds aux zones qui en ont
besoin. Cette histoire montrera l'utilisation de Bitcoin pour la
collecte de fonds mondiale à travers les devises et les frontières et
l'utilisation d'un registre ouvert pour la transparence dans les
organisations caritatives.

Importation/Exportation  
<span class="indexterm"></span> <span class="indexterm"></span>Mohammed
est un importateur d'électronique à Dubaï. Il essaie d'utiliser Bitcoin
pour acheter des appareils électroniques aux États-Unis et en Chine pour
les importer aux Émirats arabes unis afin d'accélérer le processus de
paiement des importations. Cette histoire montrera comment Bitcoin peut
être utilisé pour d'importants paiements internationaux interentreprises
liés à des biens physiques.

Miner des bitcoins  
<span class="indexterm"></span> <span class="indexterm"></span>Jing est
un étudiant en génie informatique à Shanghai. Il a construit une
plate-forme «minière» pour exploiter le bitcoin en utilisant ses
compétences en ingénierie pour compléter ses revenus. Cette histoire
examinera la base "industrielle" de Bitcoin : l'équipement spécialisé
utilisé pour sécuriser le réseau Bitcoin et émettre de nouvelles
devises.

Chacune de ces histoires est basée sur de vraies personnes et de vraies
industries utilisant actuellement Bitcoin pour créer de nouveaux
marchés, de nouvelles industries et des solutions innovantes aux
problèmes économiques mondiaux.<span class="indexterm"></span> <span
class="indexterm"></span>

# Mise en route

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span>Bitcoin est un protocole accessible à l'aide
d'une application cliente qui parle le protocole. Un "portefeuille
Bitcoin" est l'interface utilisateur la plus courante du système
Bitcoin, tout comme un navigateur Web est l'interface utilisateur la
plus courante pour le protocole HTTP. Il existe de nombreuses
implémentations et marques de portefeuilles Bitcoin, tout comme il
existe de nombreuses marques de navigateurs Web (par exemple, Chrome,
Safari, Firefox et Internet Explorer). Et tout comme nous avons tous nos
navigateurs préférés (Mozilla Firefox, Yé !) et nos méchants (Internet
Explorer, Beurk !), les portefeuilles Bitcoin varient en termes de
qualité, de performances, de sécurité, de confidentialité et de
fiabilité. Il existe également une implémentation de référence du
protocole Bitcoin qui inclut un portefeuille, connu sous le nom de
"Satoshi Client" ou "Bitcoin Core", qui est dérivé de l'implémentation
originale écrite par Satoshi Nakamoto.

## Choisir un portefeuille Bitcoin

<span class="indexterm"></span> <span class="indexterm"></span>Les
portefeuilles Bitcoin sont l'une des applications les plus activement
développées dans l'écosystème Bitcoin. La concurrence est intense et,
bien qu'un nouveau portefeuille soit probablement en cours de
développement, plusieurs portefeuilles de l'année dernière ne sont plus
activement maintenus. De nombreux portefeuilles se concentrent sur des
plates-formes spécifiques ou des utilisations spécifiques et certains
sont plus adaptés aux débutants tandis que d'autres sont remplis de
fonctionnalités pour les utilisateurs avancés. Le choix d'un
portefeuille est très subjectif et dépend de l'utilisation et de
l'expertise de l'utilisateur. Par conséquent, il serait inutile de
recommander une marque ou un portefeuille spécifique. Cependant, nous
pouvons classer les portefeuilles Bitcoin en fonction de leur
plate-forme et de leur fonction et fournir des éclaircissements sur tous
les différents types de portefeuilles qui existent. Mieux encore,
déplacer des clés ou des valeurs d’amorçages (les "seeds") entre les
portefeuilles Bitcoin est relativement facile, il vaut donc la peine
d'essayer plusieurs portefeuilles différents jusqu'à ce que vous en
trouviez un qui corresponde à vos besoins.

Les portefeuilles Bitcoin peuvent être classés comme suit, selon la
plateforme :

Portefeuille de bureau  
Un portefeuille de bureau a été le premier type de portefeuille Bitcoin
créé comme implémentation de référence et de nombreux utilisateurs
utilisent des portefeuilles de bureau pour les fonctionnalités,
l'autonomie et le contrôle qu'ils offrent. L'exécution sur des systèmes
d'exploitation à usage général tels que Windows et Mac OS présente
cependant certains inconvénients en matière de sécurité, car ces
plates-formes sont souvent non sécurisées et mal configurées.

Portefeuille mobile  
Un portefeuille mobile est le type le plus courant de portefeuille
Bitcoin. Fonctionnant sur des systèmes d'exploitation de téléphones
intelligents tels qu'Apple iOS et Android, ces portefeuilles sont
souvent un excellent choix pour les nouveaux utilisateurs. Beaucoup sont
conçus pour être simples et faciles à utiliser, mais il existe également
des portefeuilles mobiles complets pour les utilisateurs expérimentés.

Portefeuille Web  
Les portefeuilles Web sont accessibles via un navigateur Web et stockent
le portefeuille de l'utilisateur sur un serveur appartenant à un tiers.
Ceci est similaire au webmail en ce sens qu'il repose entièrement sur un
serveur tiers. Certains de ces services fonctionnent à l'aide d'un code
côté client exécuté dans le navigateur web de l'utilisateur, qui garde
le contrôle des clés Bitcoin entre les mains de l'utilisateur. La
plupart, cependant, présentent un compromis en prenant le contrôle des
clés Bitcoin des utilisateurs en échange d'une facilité d'utilisation.
Il est déconseillé de stocker de grandes quantités de bitcoins sur des
systèmes tiers.

Portefeuille matériel (hardware)  
Les portefeuilles matériels sont des appareils qui exploitent un
portefeuille Bitcoin autonome sécurisé sur du matériel à usage spécial.
Ils se connectent généralement à un ordinateur de bureau ou à un
appareil mobile via un câble USB ou une communication en champ proche
(NFC) et fonctionnent avec un navigateur Web ou un logiciel associé. En
gérant toutes les opérations liées au Bitcoin sur le matériel
spécialisé, ces portefeuilles sont considérés comme très sécurisés et
adaptés au stockage de grandes quantités de Bitcoin.

Une autre façon de catégoriser les portefeuilles bitcoin est leur degré
d'autonomie et la façon dont ils interagissent avec le réseau Bitcoin :

Client de nœud complet  
<span class="indexterm"></span> Un client complet, ou "nœud complet",
est un client qui stocke l'historique complet des transactions Bitcoin
(chaque transaction par chaque utilisateur, toujours), gère les
portefeuilles des utilisateurs et peuvent initier des transactions
directement sur le réseau Bitcoin. Un nœud complet gère tous les aspects
du protocole et peut valider indépendamment l'ensemble de la chaîne de
blocs et toute transaction. Un client à nœud complet consomme des
ressources informatiques importantes (par exemple, plus de 125 Go de
disque, 2 Go de RAM) mais offre une autonomie complète et une
vérification indépendante des transactions.

Client léger  
<span class="indexterm"></span><span class="indexterm"></span>Un client
léger, également connu sous le nom de client de vérification de paiement
simplifié (SPV ou simplified-payment-verification), se connecte aux
nœuds complets Bitcoin (mentionnés précédemment) pour l'accès aux
informations de transaction Bitcoin, mais stocke le portefeuille de
l'utilisateur localement et crée, valide et transmet indépendamment les
transactions. Les clients légers interagissent directement avec le
réseau Bitcoin, sans intermédiaire.

Client API tiers  
<span class="indexterm"></span> Un client API tiers est un client qui
interagit avec Bitcoin via un système tiers d'interfaces de
programmation d'applications (API), plutôt qu'en se connectant
directement au réseau Bitcoin. Le portefeuille peut être stocké par
l'utilisateur ou par des serveurs tiers, mais toutes les transactions
passent par un tiers.

En combinant ces catégorisations, de nombreux portefeuilles Bitcoin se
répartissent en quelques groupes, les trois plus courants étant le
client complet de bureau, le portefeuille léger mobile et le
portefeuille Web tiers. Les frontières entre les différentes catégories
sont souvent floues, car de nombreux portefeuilles fonctionnent sur
plusieurs plates-formes et peuvent interagir avec le réseau de
différentes manières.

Pour les besoins de ce livre, nous démontrerons l'utilisation d'une
variété de clients Bitcoin téléchargeables, de l'implémentation de
référence (Bitcoin Core) aux portefeuilles mobiles et Web. Certains des
exemples nécessiteront l'utilisation de Bitcoin Core, qui, en plus
d'être un client complet, expose également les API au portefeuille, au
réseau et aux services de transaction. Si vous envisagez d'explorer les
interfaces de programmation dans le système Bitcoin, vous devrez
exécuter Bitcoin Core ou l'un des clients alternatifs.<span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span>

## Démarrage rapide

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span>Alice, que nous avons présenté dans
[Utilisations, utilisateurs et histoires de Bitcoin](#user-stories),
n'est pas une utilisatrice technique et n'a entendu parler de Bitcoin
que récemment par son ami Joe. Lors d'une fête, Joe explique à nouveau
avec enthousiasme Bitcoin à tout le monde et propose une démonstration.
Intriguée, Alice demande comment elle peut démarrer avec Bitcoin. Joe
dit qu'un portefeuille mobile est ce qu'il y a de mieux pour les
nouveaux utilisateurs et il recommande quelques-uns de ses portefeuilles
préférés. Alice télécharge "Bluewallet" (disponible pour iOS et Android)
et l'installe sur son téléphone.

Quand Alice exécute son application de portefeuille pour la première
fois, elle choisit l'option de créer un nouveau portefeuille Bitcoin et
prend un moment **loin de Joe et de toutes les autres parties** pour
écrire une phrase mnémonique secrète *dans l'ordre* sur un morceau de
papier. Comme expliqué par le portefeuille mobile et par Joe plus tôt,
la phrase mnémotechnique permet à Alice de restaurer son portefeuille au
cas où elle perdrait son appareil mobile et lui donne accès à ses fonds
sur un autre appareil. Après avoir créé son portefeuille et sécurisé sa
phrase mnémonique, Alice peut appuyer sur son portefeuille pour voir son
montant en bitcoins, l'historique des transactions, ainsi que deux
boutons qui lui permettent de *recevoir* ou *envoyer* des bitcoins,
illustrés dans [figure\_title](#bluewallet-welcome).

## Mots Mnémoniques

Un portefeuille Bitcoin moderne fournira une *phrase mnémonique* (aussi
parfois appelée "valeur d’amorçage" ou "phrase de récupération")
qu'Alice pourra sauvegarder. La phrase mnémonique se compose de 12 à 24
mots anglais, sélectionnés au hasard par le logiciel, et utilisés comme
base pour les clés générées par le portefeuille. La phrase
mnémotechnique peut être utilisée par Alice pour restaurer toutes les
transactions et tous les fonds de son portefeuille en cas d'événement
tel qu'un appareil mobile perdu, un bogue logiciel ou une corruption de
la mémoire.

Le terme correct pour ces mots de sauvegarde est "phrase mnémonique".
Nous évitons d'utiliser le terme "valeur d’amorçage" pour désigner une
phrase mnémotechnique, car même si son utilisation est la même, son
usage initial est différent.

## Stocker le mnémonique en toute sécurité

Alice doit faire attention à stocker la phrase mnémonique d'une manière
qui équilibre la nécessité d'empêcher le vol et la perte accidentelle.
Si elle ne le protège pas suffisamment, son mnémonique risque de se
faire voler. Si elle le protège trop, son mnémonique risque d'être
définitivement perdu. La méthode recommandée pour équilibrer
correctement ces risques est d'écrire deux copies de la phrase
mnémonique sur papier, avec chacun des mots numérotés selon l'ordre.

Une fois qu'Alice a enregistré la phrase mnémotechnique, elle doit
prévoir de stocker chaque copie dans un endroit sécurisé séparé, tel
qu'un tiroir de bureau verrouillé ou un coffre-fort ignifuge.

N'essayez jamais un système de sécurité "bricolage" qui s'écarte de
quelque manière que ce soit de la recommandation des meilleures
pratiques dans &lt;&lt;mnemonic-storage&gt; &gt;. Ne coupez pas votre
mnémonique en deux, ne faites pas de captures d'écran, ne stockez pas
sur des clés USB, des e-mails ou des lecteurs cloud, ne le cryptez pas
ou n'essayez aucune autre méthode non standard. Vous ferez pencher la
balance de manière à risquer une perte permanente ou un vol. De
nombreuses personnes ont perdu de l'argent, non pas à cause d'un vol,
mais parce qu'elles ont essayé une solution non standard sans avoir
l'expertise pour équilibrer les risques encourus. La recommandation des
meilleures pratiques est soigneusement équilibrée par des experts et
adaptée à la grande majorité des utilisateurs.

<figure>
<img src="images/mbc2_0101.png" id="bluewallet-welcome"
alt="Alice utilise l&#39;écran de réception sur son portefeuille Bitcoin mobile Bluewallet et affiche son adresse à Bob au format de code QR" />
<figcaption aria-hidden="true">Alice utilise l'écran de réception sur
son portefeuille Bitcoin mobile Bluewallet et affiche son adresse à Bob
au format de code QR</figcaption>
</figure>

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span> La vue
principale du portefeuille affiche le montant en bitcoins, l'historique
des transactions et les boutons *Receive* et *Send*. En outre, de
nombreux portefeuilles offrent la possibilité d'acheter des Bitcoins
directement via un échange ou un service similaire où vous pouvez offrir
de l'argent fiduciaire en échange de cryptomonnaie, ce qui est fait par
[Trouver le prix actuel du Bitcoin](#bitcoin_price) et vendre à
l'utilisateur du portefeuille à ce prix ou au-dessus. Le bouton *Buy
Bitcoin* permettrait à Alice d'acheter des Bitcoins de cette manière.

Alice est maintenant prête à commencer à utiliser son nouveau
portefeuille Bitcoin. <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span> Son application de portefeuille a généré
aléatoirement une clé privée (décrite plus en détail dans [Clés
privées](#private_keys)) qui sera utilisé pour dériver des adresses
Bitcoin qui dirigent vers son portefeuille. À ce stade, ses adresses
Bitcoin ne sont pas connues du réseau Bitcoin ou "enregistrées" auprès
d'une quelconque partie du système Bitcoin. Ses adresses Bitcoin sont
simplement des nombres aléatoires qui correspondent à sa clé privée
qu'elle peut utiliser pour contrôler l'accès aux fonds. Les adresses
sont générées indépendamment par son portefeuille sans référence ni
inscription à aucun service. En fait, dans la plupart des portefeuilles,
il n'y a aucune association entre une adresse Bitcoin et toute
information d'identification externe, y compris l'identité de
l'utilisateur. Jusqu'au moment où une adresse est référencée comme
destinataire de la valeur dans une transaction publiée sur le grand
livre bitcoin, l'adresse Bitcoin fait simplement partie du grand nombre
d'adresses possibles valides en bitcoin. Ce n'est qu'une fois qu'une
adresse a été associée à une transaction qu'elle fait partie des
adresses connues du réseau.

Alice utilise le bouton *Receive*, qui affiche un code QR avec une
adresse Bitcoin. Le code QR est le carré avec un motif de points noirs
et blancs, servant de forme de code-barres contenant les mêmes
informations dans un format pouvant être scanné par l'appareil photo du
smartphone de Joe. À côté du code QR du portefeuille se trouve l'adresse
Bitcoin qu'il encode, et Alice peut choisir d'envoyer manuellement son
adresse à Joe en la copiant dans son presse-papiers d'un simple toucher.
Il convient de noter que lorsque vous recevez des fonds sur un nouveau
portefeuille mobile pour la première fois, de nombreux portefeuilles
revérifieront souvent que vous avez bien sécurisé votre phrase
mnémonique. Cela peut aller d'une simple invitation à demander à
l'utilisateur de ressaisir manuellement la phrase.

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span>Les adresses
Bitcoin commencent par 1, 3 ou bc1. Comme les adresses e-mail, elles
peuvent être partagées avec d'autres utilisateurs de bitcoins qui
peuvent les utiliser pour envoyer des bitcoins directement dans votre
portefeuille. Il n'y a rien de sensible, du point de vue de la sécurité,
à propos de l'adresse Bitcoin. Il peut être affiché n'importe où sans
risquer la sécurité du compte. Contrairement aux adresses e-mail, vous
pouvez créer de nouvelles adresses aussi souvent que vous le souhaitez,
qui dirigeront toutes les fonds vers votre portefeuille. En fait, de
nombreux portefeuilles modernes créent automatiquement une nouvelle
adresse pour chaque transaction afin de maximiser la confidentialité. Un
portefeuille est simplement une collection d'adresses et les clés qui
débloquent les fonds à l'intérieur.

## Obtenir son premier Bitcoin

Il existe plusieurs façons pour Alice d'acquérir des bitcoins :

-   Elle peut échanger une partie de sa monnaie nationale (par exemple
    USD) à un échange de crypto-monnaie

-   Elle peut en acheter à un ami ou à une connaissance d'un Meetup
    Bitcoin, en échange d'argent

-   Elle peut trouver un *guichet Bitcoin* dans sa région, qui agit
    comme un distributeur automatique, vendant des bitcoins contre de
    l'argent

-   Elle peut offrir ses compétences ou un produit qu'elle vend et
    accepte le paiement en bitcoin

-   Elle peut demander à son employeur ou à ses clients de la payer en
    bitcoin

Toutes ces méthodes présentent des degrés de difficulté variables et
nombre d'entre elles impliquent le paiement de frais. Certaines
institutions financières exigeront également qu'Alice fournisse des
documents d'identification pour se conformer aux réglementations
bancaires locales/aux pratiques de lutte contre le blanchiment d'argent
(AML), un processus connu sous le nom de Know Your Customer (KYC).
Cependant, avec toutes ces méthodes, Alice pourra recevoir des bitcoins.

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>L'un des avantages du bitcoin par rapport aux
autres systèmes de paiement est que, lorsqu'il est utilisé correctement,
il offre aux utilisateurs beaucoup plus d'intimité. Acquérir, détenir et
dépenser des bitcoins ne vous oblige pas à divulguer des informations
sensibles et personnellement identifiables à des tiers. Cependant,
lorsque le bitcoin touche les systèmes traditionnels, tels que les
échanges de devises, les réglementations nationales et internationales
s'appliquent souvent. Afin d'échanger des bitcoins contre votre monnaie
nationale, il vous sera souvent demandé de fournir une preuve d'identité
et des informations bancaires. Les utilisateurs doivent savoir qu'une
fois qu'une adresse Bitcoin est associée à une identité, toutes les
transactions Bitcoin associées sont également faciles à identifier et à
suivre. C'est l'une des raisons pour lesquelles de nombreux utilisateurs
choisissent de maintenir des comptes d'échange dédiés non liés à leurs
portefeuilles.

Alice a été initiée au bitcoin par un ami, elle a donc un moyen facile
d'acquérir son premier bitcoin. Ensuite, nous verrons comment elle
achète des bitcoins à son ami Joe et comment Joe envoie les bitcoins
dans son portefeuille.

## Trouver le prix actuel du Bitcoin

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span>Avant qu'Alice
puisse acheter du bitcoin à Joe, ils doivent s'entendre sur le *taux de
change* entre le bitcoin et le dollar américain . Cela soulève une
question courante pour ceux qui découvrent le bitcoin : "Qui fixe le
prix du bitcoin ?" La réponse courte est que le prix est fixé par les
marchés.

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span>Le bitcoin, comme la plupart des autres
devises, a un *cours du change flottant*. Cela signifie que la valeur du
bitcoin vis-à-vis de toute autre devise fluctue en fonction de l'offre
et de la demande sur les différents marchés où il est négocié. Par
exemple, le « prix » du bitcoin en dollars américains est calculé sur
chaque marché en fonction de la transaction la plus récente de bitcoin
et de dollars américains. En tant que tel, le prix a tendance à fluctuer
minutieusement plusieurs fois par seconde. Un service de tarification
regroupera les prix de plusieurs marchés et calculera une moyenne
pondérée en fonction du volume représentant le taux de change général du
marché d'une paire de devises (par exemple, BTC/USD).

Il existe des centaines d'applications et de sites Web qui peuvent
fournir le taux actuel du marché. Voici quelques-uns des plus
populaires :

[Bitcoin Average](https://bitcoinaverage.com/)  
<span class="indexterm"></span>Un site qui fournit une vue simple de la
moyenne pondérée en fonction du volume pour chaque devise.

[CoinCap](https://coincap.io/)  
Un service répertoriant la capitalisation boursière et les taux de
change de centaines de crypto-monnaies, dont le bitcoin.

[Chicago Mercantile Exchange Bitcoin Reference Rate](https://bit.ly/cmebrr)  
Un taux de référence qui peut être utilisé comme référence
institutionnelle et contractuelle, fourni dans le cadre des flux de
données d'investissement par le CME.

En plus de ces différents sites et applications, la plupart des
portefeuilles bitcoin convertiront automatiquement les montants entre le
bitcoin et d'autres devises. Joe utilisera son portefeuille pour
convertir automatiquement le prix avant d'envoyer des bitcoins à Alice.

## Envoi et réception de Bitcoin

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>Alice a décidé d'échanger 10 dollars américains
contre des bitcoins, afin de ne pas risquer trop d'argent sur cette
nouvelle technologie. Elle donne à Joe 10 $ en espèces, ouvre son
application de portefeuille mobile Bluewallet et sélectionne Recevoir.
Cela affiche un code QR avec la première adresse Bitcoin d'Alice.

Joe sélectionne ensuite *Envoyer* sur son portefeuille de smartphone
Bluewallet et un écran contenant les entrées suivantes s'affiche :

-   Le montant à envoyer, en bitcoin (BTC) ou sa devise locale (USD)

-   Une adresse Bitcoin de destination

-   Une note de transaction (description)

-   Des frais de transaction

Dans le champ de saisie de l'adresse Bitcoin, il y a un petit bouton
*Scan*. Cela permet à Joe de scanner le code QR avec l'appareil photo de
son smartphone afin de ne pas avoir à taper l'adresse Bitcoin d'Alice,
qui est assez longue et difficile à taper. Joe appuie sur le bouton
*Scan* et il active la caméra du smartphone, scannant le code QR affiché
sur le smartphone d'Alice.

Joe a maintenant l'adresse Bitcoin d'Alice définie comme destinataire.
Joe saisit le montant de 10 dollars américains et son portefeuille le
convertit en accédant au taux de change le plus récent à partir d'un
service en ligne. Le taux de change à l'époque est de 100 dollars
américains par bitcoin, donc 10 dollars américains valent 0,10 bitcoin
(BTC) ou 100 millibitcoin (mBTC) comme le montre la capture d'écran du
portefeuille de Joe (voir [figure\_title](#bluewallet-mobile-send)).

Dans la saisie de la note/description de la transaction, Joe saisit
« Alice ». Il peut utiliser ce champ pour ajouter des informations
concernant sa transaction pour référence future. Cette fonction est pour
sa tenue de dossiers uniquement. La note de transaction sera stockée
dans son portefeuille et seul Joe pourra la voir. Il ne sera pas envoyé
à Alice, ni stocké sur la blockchain.

Il sélectionne également des frais de transaction pour sa transaction.
Plus les frais de transaction sont élevés, plus vite sa transaction sera
confirmée (incluse dans un bloc par un mineur). Il sélectionne les frais
de transaction minimum possibles à ce moment-là (0 satoshis/octet).

Le prix du bitcoin a beaucoup changé au fil du temps, et une quantité
incroyable depuis la rédaction de la première édition de ce livre. En
mars 2021, une personne aurait besoin d'environ 54 000 USD pour acheter
un bitcoin entier. De nombreux exemples dans ce livre font référence à
des transactions passées réelles, lorsque le prix du bitcoin était
beaucoup plus bas et que des transactions sans frais étaient encore
possibles. Pensez à quel point Joe aurait été un ami généreux s'il avait
conclu le même accord avec Alice aujourd'hui !

<figure>
<img src="images/mbc2_0102.png" id="bluewallet-mobile-send"
alt="Écran d&#39;envoi du portefeuille bitcoin mobile Bluewallet" />
<figcaption aria-hidden="true">Écran d'envoi du portefeuille bitcoin
mobile Bluewallet</figcaption>
</figure>

À l'aide de Bluewallet, Joe vérifie soigneusement qu'il a saisi le bon
montant, car il est sur le point de transmettre de l'argent et les
erreurs sont irréversibles. Par souci de simplicité, nous supposerons
que Joe ne paie aucun frais de transaction. L'objet et la fixation des
frais de transaction sont traités dans les chapitres suivants. Après
avoir revérifié l'adresse et le montant, il appuie sur *Envoyer* pour
transmettre la transaction. Le portefeuille bitcoin mobile de Joe
construit une transaction qui attribue 0,10 BTC à l'adresse fournie par
Alice, puise les fonds dans le portefeuille de Joe et signe la
transaction avec les clés privées de Joe. Cela indique au réseau Bitcoin
que Joe a autorisé un transfert de valeur vers la nouvelle adresse
d'Alice. Comme la transaction est transmise via le protocole pair à
pair, elle se propage rapidement sur le réseau Bitcoin. En moins d'une
seconde, la plupart des nœuds bien connectés du réseau reçoivent la
transaction et voient l'adresse d'Alice pour la première fois.

Pendant ce temps, le portefeuille d'Alice "écoute" constamment les
transactions publiées sur le réseau Bitcoin, à la recherche de celles
qui correspondent aux adresses qu'il contient. Quelques secondes après
que le portefeuille de Joe ait transmis la transaction, le portefeuille
d'Alice indiquera qu'il reçoit 0,10 BTC.

Chaque bitcoin peut être subdivisé en 100 millions d'unités, chacune
appelée "satoshi" (singulier) ou "satoshis" (pluriel). Nommé en
l'honneur du créateur du bitcoin, le Satoshi est la plus petite unité de
bitcoin, équivalente à 0,00000001 BTC.

**Confirmations**

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span>Au début, le
portefeuille d'Alice affichera la transaction de Joe comme "Non
confirmée". Cela signifie que la transaction a été propagée au réseau
mais n'a pas encore été enregistrée dans le registre des transactions
bitcoin, connu sous le nom de blockchain ou la chaîne de blocs. Pour
être confirmée, une transaction doit être incluse dans un bloc et
ajoutée à la chaîne de blocs, ce qui se produit toutes les 10 minutes en
moyenne. En termes financiers traditionnels, cela s'appelle *liquidation
(ou clearing)*. Ce livre couvrira en détail la propagation, la
validation et la liquidation (ou la confirmation) des transactions
bitcoin.

Alice est maintenant l'heureuse propriétaire de 0,10 BTC qu'elle peut
dépenser. Dans le chapitre suivant, nous examinerons son premier achat
avec Bitcoin et examinerons plus en détail les technologies
sous-jacentes de transaction et de propagation.<span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span>

# Comment fonctionne Bitcoin

# Transactions, blocs, minage et la chaîne de blocs

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span> Le système Bitcoin, contrairement aux systèmes
bancaires et de paiement traditionnels, est basé sur la confiance
décentralisée. Au lieu d'une autorité centrale de confiance, dans le
bitcoin, la confiance est obtenue en tant que propriété émergente à
partir des interactions des différents participants au système Bitcoin.
Dans ce chapitre, nous examinerons le bitcoin d'un niveau élevé en
suivant une seule transaction via le système Bitcoin et en observant
qu'elle devient "de confiance" et acceptée par le mécanisme de consensus
distribué bitcoin et est finalement enregistrée sur la chaîne de blocs,
le grand livre distribué de toutes transactions. Les chapitres suivants
approfondiront la technologie derrière les transactions, le réseau et
l'exploitation minière.

## Présentation de Bitcoin

Dans le schéma d'ensemble présenté dans
[figure\_title](#bitcoin-overview), nous voyons que le système Bitcoin
se compose d'utilisateurs avec des portefeuilles contenant des clés, des
transactions qui se propagent à travers le réseau et des mineurs qui
produisent (par le calcul concurrentiel) le consensus de la chaîne de
blocs, qui est le registre faisant autorité de toutes les transactions.

<span class="indexterm"></span>Chaque exemple de ce chapitre est basé
sur une transaction réelle effectuée sur le réseau Bitcoin, simulant les
interactions entre les utilisateurs (Joe, Alice, Bob et Gopesh) en
envoyant des fonds à partir d'un portefeuille à un autre. Lors du suivi
d'une transaction via le réseau Bitcoin jusqu'à la chaîne de blocs, nous
utiliserons un site *explorateur de chaîne de blocs* pour visualiser
chaque étape. Un explorateur de chaîne de blocs est une application Web
qui fonctionne comme un moteur de recherche bitcoin, en ce sens qu'il
vous permet de rechercher des adresses, des transactions et des blocs et
de voir les relations et les flux entre eux.

<figure>
<img src="images/mbc2_0201.png" id="bitcoin-overview"
alt="Présentation de Bitcoin" />
<figcaption aria-hidden="true">Présentation de Bitcoin</figcaption>
</figure>

<span class="indexterm"></span><span class="indexterm"></span><span
class="indexterm"></span><span class="indexterm"></span>Les explorateurs
de blockchain populaires incluent :

-   [Explorateur BlockCypher](https://live.blockcypher.com)

-   [Blockchain.com](https://blockchain.com)

-   [BitPay Insight](https://insight.bitpay.com)

-   [Blockstream Explorer](https://blockstream.info)

Chacun d'eux a une fonction de recherche qui peut prendre une adresse
Bitcoin, un hachage de transaction, un numéro de bloc ou un hachage de
bloc et récupérer les informations correspondantes du réseau Bitcoin.
Avec chaque exemple de transaction ou de bloc, nous fournirons une URL
afin que vous puissiez la rechercher vous-même et l'étudier en détail.

## Acheter une tasse de café

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span>Alice, présentée dans le chapitre précédent,
est une nouvelle utilisatrice qui vient d'acquérir son premier bitcoin.
Dans [Obtenir son premier Bitcoin](#getting_first_bitcoin), Alice a
rencontré son ami Joe pour échanger de l'argent contre du bitcoin. La
transaction créée par Joe a financé le portefeuille d'Alice avec 0,10
BTC. Alice va maintenant faire sa première transaction de vente au
détail en achetant une tasse de café au café de Bob à Palo Alto, en
Californie.

<span class="indexterm"></span> <span class="indexterm"></span>Bob's
Cafe a récemment commencé à accepter les paiements en bitcoin en
ajoutant une option bitcoin à son système de point de vente. Les prix au
Bob's Cafe sont indiqués dans la devise locale (dollars américains),
mais à la caisse, les clients ont la possibilité de payer en dollars ou
en bitcoins. Alice passe sa commande pour une tasse de café et Bob
l'inscrit dans le registre, comme il le fait pour toutes les
transactions. Le système de point de vente convertit automatiquement le
prix total des dollars américains en bitcoins au taux du marché en
vigueur et affiche le prix dans les deux devises :

    Total:
    1,50 USD
    0,015 BTC

<span class="indexterm"></span> Bob dit : "C'est un dollar cinquante, ou
quinze millibits."

<span class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>Le système de point de vente de Bob créera
également automatiquement un code QR spécial contenant une *demande de
paiement* (voir [figure\_title](#payment-request-QR)).

Contrairement à un code QR qui contient simplement une adresse Bitcoin
de destination, une demande de paiement est une URL encodée QR qui
contient une adresse de destination, un montant de paiement et une
description générique telle que "Bob's Cafe". Cela permet à une
application de portefeuille bitcoin de pré-remplir les informations
utilisées pour envoyer le paiement tout en affichant une description
lisible par l'utilisateur à l'utilisateur. Vous pouvez scanner le code
QR avec une application de portefeuille bitcoin pour voir ce qu'Alice
verrait.

<figure>
<img src="images/mbc2_0202.png" id="payment-request-QR"
alt="Code QR de la demande de paiement" />
<figcaption aria-hidden="true">Code QR de la demande de
paiement</figcaption>
</figure>

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span> Essayez de
scanner ceci avec votre portefeuille pour voir l'adresse et le montant,
mais N'ENVOYEZ PAS D'ARGENT.

**Le QR code de demande de paiement encode l'URL suivante, définie dans
BIP-21 :**

    bitcoin:1GdK9UzpHBzqzX2A9JFP3Di4weBwqgmoQA?
    amount=0.015&
    label=Bob%27s%20Cafe&
    message=Acheter%20chez%20Bob%27s%20Café

    Composants de l&#39;URL

    Une adresse Bitcoin : &quot;1GdK9UzpHBzqzX2A9JFP3Di4weBwqgmoQA&quot;
    Le montant du paiement: &quot;0,015&quot;
    Une étiquette pour l&#39;adresse du destinataire : « Bob&#39;s Cafe »
    Une description du paiement : &quot;Acheter au Bob&#39;s Cafe&quot;

Alice utilise son smartphone pour scanner le code-barres affiché. Son
smartphone affiche un paiement de `0,0150 BTC` à `Bob's Cafe` et elle
sélectionne Envoyer pour autoriser le paiement. En quelques secondes
(environ le même temps qu'une autorisation de carte de crédit), Bob voit
la transaction sur le registre, complétant la transaction.

Dans les sections suivantes, nous examinerons cette transaction plus en
détail. Nous verrons comment le portefeuille d'Alice l'a construit,
comment il s'est propagé sur le réseau, comment il a été vérifié et
enfin, comment Bob peut dépenser ce montant lors de transactions
ultérieures.

<span class="indexterm"></span><span class="indexterm"></span><span
class="indexterm"></span>Le réseau Bitcoin peut effectuer des
transactions en valeurs fractionnaires, par exemple à partir de
millibitcoin (1/1000e de bitcoin ) jusqu'à 1/100 000 000e de bitcoin,
connu sous le nom de satoshi. Tout au long de ce livre, nous utiliserons
le terme "bitcoin" pour désigner toute quantité de monnaie bitcoin, de
la plus petite unité (1 satoshi) au nombre total (21 000 000) de tous
les bitcoins qui seront extraits.

Vous pouvez examiner la transaction d'Alice avec Bob's Cafe sur la
blockchain en utilisant un site d'exploration de blocs
([example\_title](#view_alice_transaction)):

    https://www.blockchain.com/btc/tx/0627052b6f28912f2703066a912ea577f2ce4da4caa5a5fbd8a57286c345c2f2

# Transactions en bitcoins

<span class="indexterm"></span> <span class="indexterm"></span>En termes
simples, une transaction indique au réseau que le propriétaire d'une
valeur bitcoin a autorisé le transfert de cette valeur à un autre
propriétaire. Le nouveau propriétaire peut désormais dépenser le bitcoin
en créant une autre transaction qui autorise le transfert à un autre
propriétaire, et ainsi de suite, dans une chaîne de propriété.

## Entrées et sorties de transactions

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>Les transactions sont comme des lignes dans un
livre comptable en partie double. Chaque transaction contient une ou
plusieurs "entrées", qui sont comme des débits sur un compte bitcoin. De
l'autre côté de la transaction, il y a une ou plusieurs "sorties", qui
sont comme des crédits ajoutés à un compte bitcoin. <span
class="indexterm"></span> <span class="indexterm"></span>Les entrées et
les sorties (débits et crédits) ne totalisent pas nécessairement le même
montant. Au lieu de cela, les sorties s'additionnent légèrement moins
que les entrées et la différence représente des *frais de transaction*
implicites, qui sont un petit paiement perçu par le mineur qui inclut la
transaction dans le grand livre. Une transaction bitcoin s'affiche sous
la forme d'une écriture comptable dans
[figure\_title](#transaction-double-entry).

La transaction contient également une preuve de propriété pour chaque
montant de bitcoin (entrées) dont la valeur est dépensée, sous la forme
d'une signature numérique du propriétaire, qui peut être validée
indépendamment par n'importe qui. <span class="indexterm"></span> <span
class="indexterm"></span>En termes de bitcoin, "dépenser" consiste à
signer une transaction qui transfère la valeur d'une transaction
précédente à un nouveau propriétaire identifié par une adresse Bitcoin.

<figure>
<img src="images/mbc2_0203.png" id="transaction-double-entry"
alt="Transaction comptable en double parties" />
<figcaption aria-hidden="true">Transaction comptable en double
parties</figcaption>
</figure>

## Chaînes de transaction

<span class="indexterm"></span>Le paiement d'Alice à Bob's Cafe utilise
la sortie d'une transaction précédente comme entrée. Dans le chapitre
précédent, Alice a reçu des bitcoins de son ami Joe en échange d'argent.
Cette transaction a créé une valeur bitcoin verrouillée par la clé
d'Alice. Sa nouvelle transaction avec Bob's Cafe fait référence à la
transaction précédente comme entrée et crée de nouvelles sorties pour
payer la tasse de café et recevoir la monnaie. Les transactions forment
une chaîne, où les entrées de la dernière transaction correspondent aux
sorties des transactions précédentes. La clé d'Alice fournit la
signature qui déverrouille ces sorties de transaction précédentes,
prouvant ainsi au réseau Bitcoin qu'elle possède les fonds. Elle joint
le paiement du café à l'adresse de Bob, "encombrant" ainsi cette sortie
avec l'exigence que Bob produise une signature afin de dépenser ce
montant. Cela représente un transfert de valeur entre Alice et Bob.
Cette chaîne de transactions, de Joe à Alice à Bob, est illustrée dans
[figure\_title](#blockchain-mnemonic).

<figure>
<img src="images/mbc2_0204.png" id="blockchain-mnemonic"
alt="Une chaîne de transactions, où la sortie d&#39;une transaction est l&#39;entrée de la transaction suivante" />
<figcaption aria-hidden="true">Une chaîne de transactions, où la sortie
d'une transaction est l'entrée de la transaction suivante</figcaption>
</figure>

## Faire du change (ou de la petite monnaie)

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>De nombreuses transactions bitcoin incluront
des sorties qui référencent à la fois une adresse du nouveau
propriétaire et une adresse du propriétaire actuel, appelée *adresse de
change*. En effet, les entrées de transaction, comme les billets de
banque, ne peuvent pas être divisées. Si vous achetez un article de 5
dollars américains dans un magasin mais que vous utilisez un billet de
20 dollars américains pour payer l'article, vous vous attendez à
recevoir 15 dollars américains en monnaie. Le même concept s'applique
aux entrées de transaction bitcoin. Si vous avez acheté un article qui
coûte 5 bitcoins mais que vous n'aviez qu'une entrée de 20 bitcoins à
utiliser, votre portefeuille créerait une seule transaction qui
enverrait deux sorties, une sortie de 5 bitcoins au propriétaire du
magasin et une sortie de 15 bitcoins à vous-même comme changement (moins
les frais de transaction applicables). Il est important de noter que
l'adresse de change ne doit pas nécessairement être la même que celle de
l'entrée et, pour des raisons de confidentialité, il s'agit souvent
d'une nouvelle adresse du portefeuille du propriétaire.

Différents portefeuilles peuvent utiliser différentes stratégies lors de
l'agrégation des entrées pour effectuer un paiement demandé par
l'utilisateur. Ils peuvent regrouper de nombreux petits intrants ou en
utiliser un égal ou supérieur au paiement souhaité. À moins que le
portefeuille ne puisse agréger les entrées de manière à correspondre
exactement au paiement souhaité plus les frais de transaction, le
portefeuille devra générer du change. C'est très similaire à la façon
dont les gens gèrent l'argent liquide. Si vous utilisez toujours le plus
gros billet dans votre poche, vous vous retrouverez avec une poche
pleine de monnaie. Si vous n'utilisez que la petite monnaie, vous
n'aurez toujours que de gros billets. Les gens trouvent inconsciemment
un équilibre entre ces deux extrêmes, et les développeurs de
portefeuilles Bitcoin s'efforcent de programmer cet équilibre.

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span>En résumé, les
*transactions* déplacent des valeurs des *entrées de transaction* aux
*sorties de transaction*. Une entrée est une référence à la sortie d'une
transaction précédente, indiquant d'où provient la valeur. Une
transaction comprend généralement une sortie qui dirige une valeur
spécifique vers l'adresse Bitcoin d'un nouveau propriétaire et une
sortie de modification vers le propriétaire d'origine. Les sorties d'une
transaction peuvent être utilisées comme entrées dans une nouvelle
transaction, créant ainsi une chaîne de propriété lorsque la valeur est
déplacée d'un propriétaire à l'autre (voir
[figure\_title](#blockchain-mnemonic)).

## Formulaires de transaction communs

La forme de transaction la plus courante est un simple paiement d'une
adresse à une autre, qui comprend souvent une « monnaie » rendue au
propriétaire d'origine. Ce type de transaction a une entrée et deux
sorties et est affiché dans [figure\_title](#transaction-common).

<figure>
<img src="images/mbc2_0205.png" id="transaction-common"
alt="Transaction la plus courante" />
<figcaption aria-hidden="true">Transaction la plus courante</figcaption>
</figure>

Une autre forme courante de transaction est celle qui agrège plusieurs
entrées en une seule sortie (voir &lt;&lt;transaction-aggregating&gt;
&gt;). Cela représente l'équivalent réel de l'échange d'une pile de
pièces et de billets de banque contre un seul billet plus gros. Des
transactions comme celles-ci sont parfois générées par des applications
de portefeuille pour nettoyer de nombreux petits montants reçus en
monnaie de paiement.

<figure>
<img src="images/mbc2_0206.png" id="transaction-aggregating"
alt="Transaction agrégeant des fonds" />
<figcaption aria-hidden="true">Transaction agrégeant des
fonds</figcaption>
</figure>

Enfin, une autre forme de transaction que l'on voit souvent sur le grand
livre bitcoin est une transaction par lots, qui distribue une entrée à
plusieurs sorties représentant plusieurs destinataires, une technique
appelée "transactions par lot" (voir
[figure\_title](#transaction-distributing)). Étant donné que ce type de
transaction est utile pour économiser sur les frais de transaction, il
est couramment utilisé par les entités commerciales pour distribuer des
fonds, par exemple lorsqu'une entreprise traite les paiements de paie à
plusieurs employés ou lorsqu'un échange de bitcoins traite les retraits
de plusieurs clients en un seul. transaction.<span
class="indexterm"></span> <span class="indexterm"></span>

<figure>
<img src="images/mbc2_0207.png" id="transaction-distributing"
alt="Transaction distribuant des fonds" />
<figcaption aria-hidden="true">Transaction distribuant des
fonds</figcaption>
</figure>

# Construction d'une transaction

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>L'application de portefeuille d'Alice contient
toute la logique pour sélectionner les entrées et les sorties
appropriées pour construire une transaction à la spécification d'Alice.
Alice n'a qu'à spécifier une destination et un montant, et le reste se
passe dans l'application portefeuille sans qu'elle ne voie les détails.
Il est important de noter qu'une application de portefeuille peut créer
des transactions même si elle est complètement hors ligne. Comme écrire
un chèque à la maison et l'envoyer plus tard à la banque dans une
enveloppe, la transaction n'a pas besoin d'être construite et signée
tout en étant connectée au réseau Bitcoin.

## Obtenir les bonnes entrées

<span class="indexterm"></span> <span
class="indexterm"></span>L'application de portefeuille d'Alice devra
d'abord trouver des entrées qui peuvent payer le montant qu'elle veut
envoyer à Bob. La plupart des portefeuilles gardent une trace de toutes
les sorties disponibles appartenant aux adresses du portefeuille. Par
conséquent, le portefeuille d'Alice contiendrait une copie de la sortie
de transaction de la transaction de Joe, qui a été créée en échange
d'argent (voir [Obtenir son premier Bitcoin](#getting_first_bitcoin)).
Une application de portefeuille bitcoin qui s'exécute en tant que client
à nœud complet contient en fait une copie de chaque sortie non dépensée
de chaque transaction dans la chaîne de blocs. Cela permet à un
portefeuille de construire des entrées de transaction ainsi que de
vérifier rapidement les transactions entrantes comme ayant des entrées
correctes. Cependant, comme un client à nœud complet occupe beaucoup
d'espace disque, la plupart des portefeuilles d'utilisateurs exécutent
des clients "légers" qui ne suivent que les sorties non dépensées de
l'utilisateur.

Si l'application de portefeuille ne conserve pas une copie des sorties
de transaction non dépensées, elle peut interroger le réseau Bitcoin
pour récupérer ces informations à l'aide d'une variété d'API disponibles
par différents fournisseurs ou en demandant à un nœud complet via l'aide
d'un appel d'interface de programmation d'application (API).
[example\_title](#example_2-2) montre une requête API, construite comme
une commande HTTP GET vers une URL spécifique. Cette URL renverra toutes
les sorties de transaction non dépensées pour une adresse, donnant à
toute application les informations dont elle a besoin pour construire
des entrées de transaction pour les dépenses. Nous utilisons le simple
client HTTP en ligne de commande *cURL* pour récupérer la réponse.

    $ curl https://blockchain.info/unspent?active=1Cdid9KFAaatwczBwBttQcwXYCpvK8h7FK

    {

            "unspent_outputs":[

                    {
                            "tx_hash":"186f9f998a5...2836dd734d2804fe65fa35779",
                            "tx_index":104810202,
                            "tx_output_n": 0,
                            "script":"76a9147f9b1a7fb68d60c536c2fd8aeaa53a8f3cc025a888ac",
                            "value": 10000000,
                            "value_hex": "00989680",
                            "confirmations":0
                    }

            ]
    }

La réponse en [example\_title](#example_2-2) montre une sortie non
dépensée (une qui n'a pas encore été échangée) sous la propriété de
l'adresse d'Alice `1Cdid9KFAaatwczBwBttQcwXYCpvK8h7FK`. La réponse
inclut la référence à la transaction dans laquelle cette sortie non
dépensée est contenue (le paiement de Joe) et sa valeur en satoshis, à
10 millions, équivalent à 0,10 bitcoin. Avec ces informations,
l'application de portefeuille d'Alice peut construire une transaction
pour transférer cette valeur aux nouvelles adresses de propriétaire.

Voir la [transaction de Joe à
Alice](https://www.blockchain.com/btc/tx/7957a35fe64f80d234d76d83a2a8f1a0d8149a41d81de548f0a65a8a999f6f18).

Comme vous pouvez le voir, le portefeuille d'Alice contient suffisamment
de bitcoins en une seule sortie non dépensée pour payer la tasse de
café. Si cela n'avait pas été le cas, l'application de portefeuille
d'Alice aurait peut-être dû "fouiller" dans une pile de petites sorties
non dépensées, comme prendre des pièces dans un sac à main jusqu'à ce
qu'elle puisse en trouver assez pour payer le café. Dans les deux cas,
il peut être nécessaire de récupérer de la monnaie, ce que nous verrons
dans la section suivante, car l'application de portefeuille crée les
sorties de transaction (paiements).

## Création des sorties

<span class="indexterm"></span> <span class="indexterm"></span>Une
sortie de transaction est créée sous la forme d'un script qui crée une
charge sur la valeur et ne peut être rachetée que par l'introduction
d'une solution au script. En termes plus simples, la sortie de
transaction d'Alice contiendra un script qui dit quelque chose comme
"Cette sortie est payable à quiconque peut présenter une signature à
partir de la clé correspondant à l'adresse de Bob." Étant donné que seul
Bob possède le portefeuille avec les clés correspondant à cette adresse,
seul le portefeuille de Bob peut présenter une telle signature pour
racheter cette sortie. Alice « encombrera » donc la valeur de sortie
avec une demande de signature de Bob.

Cette transaction comprendra également une deuxième sortie, car les
fonds d'Alice se présentent sous la forme d'une sortie à 0,10 BTC, trop
d'argent pour la tasse de café à 0,015 BTC. Alice aura besoin de 0,085
BTC en monnaie. Le paiement de monnaie d'Alice est créé par le
portefeuille d'Alice en tant que sortie dans la même transaction que le
paiement à Bob. Essentiellement, le portefeuille d'Alice divise ses
fonds en deux paiements : un à Bob et un à elle-même. Elle peut ensuite
utiliser (dépenser) la sortie de monnaie dans une transaction
ultérieure.

Enfin, pour que la transaction soit traitée par le réseau en temps
opportun, l'application de portefeuille d'Alice ajoutera une somme
modique. Ce n'est pas explicite dans la transaction ; il est impliqué
par la différence entre les entrées et les sorties. Si au lieu de
prendre 0,085 en monnaie, Alice ne crée que 0,0845 comme deuxième
sortie, il restera 0,0005 BTC (un demi-millibitcoin). Le 0,10 BTC de
l'entrée n'est pas entièrement dépensé avec les deux sorties, car elles
totaliseront moins de 0,10. La différence qui en résulte est le *frais
de transaction* qui est perçu par le mineur en tant que frais de
validation et d'inclusion de la transaction dans un bloc à enregistrer
sur la chaîne de blocs.

La transaction résultante peut être vue à l'aide d'une application Web
d'exploration de chaîne de blocs, comme indiqué dans
[figure\_title](#transaction-alice).

<figure>
<img src="images/mbc2_0208.png" id="transaction-alice"
alt="Transaction d&#39;Alice au Bob&#39;s Cafe" />
<figcaption aria-hidden="true">Transaction d'Alice au Bob's
Cafe</figcaption>
</figure>

Voir la [transaction d'Alice à Bob's
Cafe](https://www.blockchain.com/btc/tx/0627052b6f28912f2703066a912ea577f2ce4da4caa5a5fbd8a57286c345c2f2).

## Ajout de la transaction au grand livre

La transaction créée par l'application du portefeuille d'Alice fait 258
octets et contient tout le nécessaire pour confirmer la propriété des
fonds et attribuer à de nouveaux propriétaires. Désormais, la
transaction doit être transmise au réseau Bitcoin où elle fera partie de
la chaîne de blocs. Dans la section suivante, nous verrons comment une
transaction devient partie intégrante d'un nouveau bloc et comment le
bloc est « miné ». Enfin, nous verrons comment le nouveau bloc, une fois
ajouté à la chaîne de blocs, est de plus en plus approuvé par le réseau
au fur et à mesure que de nouveaux blocs sont ajoutés.

### Transmission de la transaction

<span class="indexterm"></span> <span class="indexterm"></span>La
transaction contient toutes les informations nécessaires au traitement,
et ce peu importe comment et où elle est transmise au réseau Bitcoin. Le
réseau Bitcoin est un réseau pair à pair, chaque client Bitcoin
participant en se connectant à plusieurs autres clients Bitcoin. Le but
du réseau Bitcoin est de propager les transactions et les blocages à
tous les participants.

### Comment ça se propage

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span>Tout système,
tel qu'un serveur, une application de bureau ou un portefeuille, qui
participe au réseau Bitcoin en "parlant", le protocole Bitcoin est
appelé un *nœud Bitcoin*. L'application de portefeuille d'Alice peut
envoyer la nouvelle transaction à n'importe quel nœud Bitcoin auquel
elle est connectée via n'importe quel type de connexion : filaire,
Wi-Fi, mobile, etc. Son portefeuille Bitcoin n'a pas besoin d'être
connecté directement au portefeuille Bitcoin de Bob et elle n'a pas à
nécessairement utiliser la connexion Internet offerte par le café, bien
que ces deux options soient également possibles. <span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span>Tout nœud Bitcoin qui reçoit une transaction
valide qu'il n'a pas vue auparavant la transmettra immédiatement à tous
les autres nœuds auxquels il est connecté , une technique de propagation
connue sous le nom d'*inondation*. Ainsi, la transaction se propage (en
inondant ou distribuant) rapidement à travers le réseau pair à pair,
atteignant un grand pourcentage de nœuds en quelques secondes.

### Le point de vue de Bob

Si l'application de portefeuille bitcoin de Bob est directement
connectée à l'application de portefeuille d'Alice, l'application de
portefeuille de Bob peut être le premier nœud à recevoir la transaction.
Cependant, même si le portefeuille d'Alice envoie la transaction via
d'autres nœuds, elle atteindra le portefeuille de Bob en quelques
secondes. Le portefeuille de Bob identifiera immédiatement la
transaction d'Alice comme un paiement entrant car il contient des
sorties remboursables par les clés de Bob. L'application de portefeuille
de Bob peut également vérifier de manière indépendante que la
transaction est bien formée, utilise des sorties précédemment non
dépensées et contient des frais de transaction suffisants pour être
inclus dans le bloc suivant. À ce stade, Bob peut supposer, avec peu de
risques, que la transaction sera bientôt incluse dans un bloc et
confirmée.

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span> Une idée fausse courante à propos des
transactions bitcoin est qu'elles doivent être "confirmées" en attendant
10 minutes pour un nouveau bloc, ou jusqu'à 60 minutes pour six
confirmations complètes. Bien que les confirmations garantissent que la
transaction a été acceptée par l'ensemble du réseau, un tel délai n'est
pas nécessaire pour les articles de petite valeur comme une tasse de
café. Un commerçant peut accepter une transaction valide de petite
valeur sans confirmation, sans plus de risque qu'un paiement par carte
de crédit effectué sans pièce d'identité ni signature, comme les
commerçants l'acceptent couramment aujourd'hui.((("",
startref="Tconstruct02")) )

# Extraction de bitcoins

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span> <span class="indexterm"></span>La transaction
d'Alice est maintenant propagé sur le réseau Bitcoin. Il ne fait pas
partie de la *chaîne de blocs* tant qu'il n'est pas vérifié et inclus
dans un bloc par un processus appelé *minage*. Voir [???](#mining) pour
une explication détaillée.

Le système de confiance Bitcoin est basé sur le calcul. Les transactions
sont regroupées en *blocs*, qui nécessitent une énorme quantité de
calculs pour prouver, mais seulement une petite quantité de calculs pour
vérifier comme prouvé. Le processus de minage sert à deux fins dans le
bitcoin :

-   <span class="indexterm"></span> <span class="indexterm"></span>
    <span class="indexterm"></span><span class="indexterm"></span> <span
    class="indexterm"></span>Les nœuds de minage valident toutes les
    transactions en se référant au *consensus des règles de bitcoin*.
    Par conséquent, le minage assure la sécurité des transactions
    bitcoin en rejetant les transactions invalides ou malformées.

-   L'exploitation minière crée de nouveaux bitcoins dans chaque bloc,
    presque comme une banque centrale imprimant de la nouvelle monnaie.
    La quantité de bitcoin créée par bloc est limitée et diminue avec le
    temps, suivant un calendrier d'émission fixe.

L'exploitation minière atteint un bon équilibre entre le coût et la
récompense. L'exploitation minière utilise l'électricité pour résoudre
un problème mathématique. Un mineur qui réussit recevra une *récompense*
sous la forme de nouveaux bitcoins et de frais de transaction.
Cependant, la récompense ne sera perçue que si le mineur a correctement
validé toutes les transactions, à la satisfaction des règles de
*consensus*. Cet équilibre délicat assure la sécurité du bitcoin sans
autorité centrale.

Une bonne façon de décrire l'exploitation minière est comme un jeu
compétitif géant de sudoku qui se réinitialise chaque fois que quelqu'un
trouve une solution et dont la difficulté s'ajuste automatiquement de
sorte qu'il faut environ 10 minutes pour trouver une solution. Imaginez
un puzzle sudoku géant, de plusieurs milliers de lignes et de colonnes.
Si je vous montre un puzzle terminé, vous pouvez le vérifier assez
rapidement. Cependant, si le puzzle a quelques cases remplies et que les
autres sont vides, cela demande beaucoup de travail à résoudre ! La
difficulté du sudoku peut être ajustée en modifiant sa taille (plus ou
moins de lignes et de colonnes), mais elle peut toujours être vérifiée
assez facilement même si elle est très grande. Le "casse-tête" utilisé
dans le bitcoin est basé sur un hachage cryptographique et présente des
caractéristiques similaires : il est asymétriquement difficile à
résoudre mais facile à vérifier, et sa difficulté peut être ajustée.

<span class="indexterm"></span> <span class="indexterm"></span>In
[Utilisations, utilisateurs et histoires de Bitcoin](#user-stories),
nous avons présenté <span class="indexterm"></span> <span
class="indexterm"></span>Jing est un entrepreneur à Shanghai. Jing
dirige une *ferme minière*, qui est une entreprise qui gère des milliers
d'ordinateurs miniers spécialisés, en compétition pour la récompense.
Toutes les 10 minutes environ, les ordinateurs miniers de Jing
rivalisent avec des milliers de systèmes similaires dans une course
mondiale pour trouver une solution à un bloc de transactions. <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>Trouver une telle solution, la soi-disant
*Proof-of-Work (ou Preuve de travail)* (PoW), nécessite des quadrillions
d'opérations de hachage par seconde sur l'ensemble du réseau Bitcoin.
L'algorithme de preuve de travail implique de hacher à plusieurs
reprises l'en-tête du bloc et un nombre aléatoire avec l'algorithme
cryptographique SHA256 jusqu'à ce qu'une solution correspondant à un
modèle prédéterminé émerge. Le premier mineur à trouver une telle
solution remporte la compétition et publie ce bloc dans la chaîne de
blocs.

Jing a commencé l'exploitation minière en 2010 en utilisant un
ordinateur de bureau très rapide pour trouver une preuve de travail
appropriée pour les nouveaux blocs. Au fur et à mesure que de plus en
plus de mineurs rejoignaient le réseau Bitcoin, la difficulté du
problème augmentait rapidement. Bientôt, Jing et d'autres mineurs sont
passés à du matériel plus spécialisé, avec des unités de traitement
graphique (GPU) dédiées de haute de gamme, souvent utilisées dans les
ordinateurs de bureau ou les consoles de jeu. Au moment d'écrire ces
lignes, la difficulté est si élevée qu'il n'est rentable de miner
qu'avec des <span class="indexterm"></span>circuits intégrés à
application spécifique (ASIC), essentiellement des centaines
d'algorithmes de minage imprimé en matériel, fonctionnant en parallèle
sur une seule puce de silicium. <span class="indexterm"></span> <span
class="indexterm"></span>La société de Jing participe également à un
*groupe ou bassin de mineurs*, qui, tout comme un groupe de loterie,
permet à plusieurs participants de partager leurs efforts et leurs
récompenses. La société de Jing gère désormais un entrepôt contenant des
milliers de mineurs ASIC pour extraire du bitcoin 24 heures sur 24.
L'entreprise paie ses frais d'électricité en vendant le bitcoin qu'elle
est capable de générer à partir de l'exploitation minière, créant ainsi
des revenus à partir des bénéfices.

# Transactions minières en blocs

<span class="indexterm"></span> <span class="indexterm"></span> De
nouvelles transactions affluent constamment sur le réseau à partir des
portefeuilles des utilisateurs et d'autres applications. Comme ceux-ci
sont vus par les nœuds du réseau Bitcoin, ils sont ajoutés à un bassin
temporaire de transactions non vérifiées maintenues par chaque nœud.
Lorsque les mineurs construisent un nouveau bloc, ils ajoutent des
transactions non vérifiées de ce bassin au nouveau bloc, puis tentent de
prouver la validité de ce nouveau bloc, avec l'algorithme de minage (la
preuve de travail). Le processus d'extraction est expliqué en détail
dans [???](#mining).

Les transactions sont ajoutées au nouveau bloc, classées par ordre de
priorité par les transactions les plus payantes en premier et quelques
autres critères. Chaque mineur commence le processus d'extraction d'un
nouveau bloc de transactions dès qu'il reçoit le bloc précédent du
réseau, sachant qu'il a perdu le tour de compétition précédent. Ils
créent immédiatement un nouveau bloc, le remplissent avec les
transactions et l'empreinte numérique du bloc précédent, et commencent à
calculer la preuve de travail pour le nouveau bloc. Chaque mineur inclut
une transaction spéciale dans son bloc, une transaction qui paie à sa
propre adresse Bitcoin la récompense du bloc (actuellement 6,25 bitcoins
nouvellement créés) plus la somme des frais de transaction de toutes les
transactions incluses dans le bloc. S'ils trouvent une solution qui rend
ce bloc valide, ils "gagnent" cette récompense car leur bloc réussi est
ajouté à la chaîne de blocs mondiale et la transaction de récompense
qu'ils ont incluse devient dépensable. <span class="indexterm"></span>
<span class="indexterm"></span>Jing, qui participe à un groupe de
minage, a mis en place son logiciel pour créer de nouveaux blocs qui
attribuent la récompense à une adresse de pool. À partir de là, une part
de la récompense est distribuée à Jing et aux autres mineurs
proportionnellement à la quantité de travail qu'ils ont apportée lors du
dernier tour.

<span class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>La transaction d'Alice a été récupérée par le
réseau et incluse dans le groupe de transactions non vérifiées. Une fois
validé par le logiciel de minage, il a été inclus dans un nouveau bloc,
appelé *bloc candidat*, généré par le pool de minage de Jing. Tous les
mineurs participant à ce pool de minage commencent immédiatement à
calculer la preuve de travail pour le bloc candidat. Environ cinq
minutes après la première transmission de la transaction par le
portefeuille d'Alice, l'un des mineurs ASIC de Jing a trouvé une
solution pour le bloc candidat et l'a annoncée au réseau. Une fois que
les autres mineurs ont validé le bloc gagnant, ils ont commencé la
course pour générer le bloc suivant.

Le bloc gagnant de Jing est devenu une partie de la blockchain en tant
que bloc \# 277316, contenant 419 transactions, y compris la transaction
d'Alice. Le bloc contenant la transaction d'Alice est compté comme une
"confirmation" de cette transaction.

Vous pouvez voir le bloc qui inclut [Transaction
d’Alice](https://www.blockchain.com/btc/block/277316).

<span class="indexterm"></span> <span class="indexterm"></span> Environ
20 minutes plus tard, un nouveau bloc, \#277317, est miné par un autre
mineur. Parce que ce nouveau bloc est construit au-dessus du bloc
\#277316 qui contenait la transaction d'Alice, il a ajouté encore plus
de calculs à la chaîne de blocs, renforçant ainsi la confiance dans ces
transactions. Chaque bloc miné en plus de celui contenant la transaction
compte comme une confirmation supplémentaire pour la transaction
d'Alice. Au fur et à mesure que les blocs s'empilent les uns sur les
autres, il devient exponentiellement plus difficile d'inverser la
transaction, ce qui la rend de plus en plus fiable par le réseau.

<span class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>Dans le diagramme en
[figure\_title](#block-alice1), nous pouvons voir le bloc \#277316, qui
contient la transaction d'Alice. En dessous se trouvent 277 316 blocs (y
compris le bloc \#0), liés les uns aux autres dans une chaîne de blocs
(blockchain) jusqu'au bloc \#0, connu sous le nom de *bloc d’origine*.
Au fil du temps, à mesure que la "hauteur" des blocs augmente, la
difficulté de calcul de chaque bloc et de la chaîne dans son ensemble
augmente également. Les blocs extraits après celui qui contient la
transaction d'Alice agissent comme une assurance supplémentaire, car ils
accumulent plus de calculs dans une chaîne de plus en plus longue. Par
convention, tout bloc avec plus de six confirmations est considéré comme
irrévocable, car il faudrait une immense quantité de calculs pour
invalider et recalculer six blocs. Nous examinerons plus en détail le
processus d'exploitation minière et la manière dont il renforce la
confiance dans [???](#mining).<span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>

<figure>
<img src="images/mbc2_0209.png" id="block-alice1"
alt="Transaction d&#39;Alice incluse dans le bloc #277316" />
<figcaption aria-hidden="true">Transaction d'Alice incluse dans le bloc
#277316</figcaption>
</figure>

# Dépenser la transaction

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> Maintenant que la transaction d'Alice a été
intégrée à la chaîne de blocs dans le cadre d’un bloc, il fait partie du
grand livre distribué de Bitcoin et est visible par toutes les
applications Bitcoin. Chaque client Bitcoin peut indépendamment vérifier
que la transaction est valide et utilisable. Les clients du nœud complet
peuvent suivre la source des fonds à partir du moment où les bitcoins
ont été générés pour la première fois dans un bloc, progressivement
d'une transaction à l'autre, jusqu'à ce qu'ils atteignent l'adresse de
Bob. Les clients légers peuvent faire ce qu'on appelle une vérification
de paiement simplifiée (voir [???](#spv_nodes)) en confirmant que la
transaction est dans la chaîne de blocs et qu'elle a plusieurs blocs
extraits après elle, fournissant ainsi l'assurance que les mineurs l'ont
acceptée comme valide.

Bob peut maintenant dépenser le résultat de cette transaction et
d'autres transactions. Par exemple, Bob peut payer un entrepreneur ou un
fournisseur en transférant la valeur du paiement de la tasse de café
d'Alice à ces nouveaux propriétaires. Très probablement, le logiciel
Bitcoin de Bob regroupera de nombreux petits paiements en un paiement
plus important, concentrant peut-être tous les revenus Bitcoin de la
journée en une seule transaction. Cela regrouperait les différents
paiements en un seul résultat (et une seule adresse). Pour un diagramme
d'une transaction d'agrégation, voir
[figure\_title](#transaction-aggregating).

Au fur et à mesure que Bob dépense les paiements reçus d'Alice et
d'autres clients, il étend la chaîne des transactions. Supposons que Bob
paie son concepteur Web Gopesh<span class="indexterm"></span> <span
class="indexterm"></span> à Bangalore pour une nouvelle page Web.
Maintenant, la chaîne de transactions ressemblera à
[figure\_title](#block-alice2).

<figure>
<img src="images/mbc2_0210.png" id="block-alice2"
alt="La transaction d&#39;Alice dans le cadre d&#39;une chaîne de transactions de Joe à Gopesh, où la sortie d&#39;une transaction est utilisée comme entrée de la transaction suivante" />
<figcaption aria-hidden="true">La transaction d'Alice dans le cadre
d'une chaîne de transactions de Joe à Gopesh, où la sortie d'une
transaction est utilisée comme entrée de la transaction
suivante</figcaption>
</figure>

Dans ce chapitre, nous avons vu comment les transactions construisent
une chaîne qui déplace la valeur d'un propriétaire à l'autre. Nous avons
également suivi la transaction d'Alice, à partir du moment où elle a été
créée dans son portefeuille, via le réseau Bitcoin et jusqu'aux mineurs
qui l'ont enregistrée sur la chaîne de blocs. Dans le reste de ce livre,
nous examinerons les technologies spécifiques derrière les
portefeuilles, les adresses, les signatures, les transactions, le réseau
et enfin le minage.<span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span>

# Bitcoin Core : La référence d'implémentation

<span class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>Bitcoin est un projet *source libre* et le code
source est disponible sous une licence ouverte (MIT), téléchargeable et
utilisable à n'importe quelle fin. Source libre signifie plus que
simplement libre d'utilisation. Cela signifie également que le bitcoin
est développé par une communauté ouverte de bénévoles. Au début, cette
communauté se composait uniquement de Satoshi Nakamoto. En 2016, le code
source de Bitcoin comptait plus de 400 contributeurs avec une douzaine
de développeurs travaillant sur le code presque à temps plein et
plusieurs dizaines d'autres à temps partiel. Tout le monde peut
contribuer au code, y compris vous !

<span class="indexterm"></span><span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span>((("Bitcoin
Core", "implémentation de référence") ))Lorsque bitcoin a été créé par
Satoshi Nakamoto, le logiciel était en fait terminé avant le livre blanc
reproduit dans [???](#satoshi_whitepaper). Satoshi voulait s'assurer que
cela fonctionnait avant d'écrire à ce sujet. Cette première
implémentation, alors simplement connue sous le nom de "Bitcoin" ou
"client Satoshi", a été fortement modifiée et améliorée. Il a évolué
vers ce qu'on appelle *Bitcoin Core*, pour le différencier des autres
implémentations compatibles. Bitcoin Core est la *mise en œuvre de
référence* du système Bitcoin, ce qui signifie qu'il s'agit de la
référence faisant autorité sur la manière dont chaque partie de la
technologie doit être mise en œuvre. Bitcoin Core implémente tous les
aspects du bitcoin, y compris les portefeuilles, un moteur de validation
des transactions et des blocs et un nœud de réseau complet dans le
réseau Bitcoin pair à pair.

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span> Même si
Bitcoin Core inclut une implémentation de référence d'un portefeuille,
celui-ci n'est pas destiné à être utilisé comme portefeuille de
production pour les utilisateurs ou pour les applications. Il est
conseillé aux développeurs d'applications de créer des portefeuilles en
utilisant des normes modernes telles que BIP-39 et BIP-32 (voir [Mots de
code mnémonique (BIP-39)](#mnemonic_code_words) et [Portefeuilles HD
(BIP-32/BIP-44)](#hd_wallets)). BIP signifie *Bitcoin Improvement
Proposal*.

[variablelist\_title](#bitcoin_core_architecture) montre l'architecture
de Bitcoin Core.<span class="indexterm"></span> <span
class="indexterm"></span>

image  
images/mbc2\_0301.png\["Architecture de base Bitcoin"\]

# Environnement de développement Bitcoin

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span> Si vous êtes un développeur, vous souhaiterez
configurer un environnement de développement avec tous les outils,
bibliothèques et logiciels de support pour le développement
d’applications bitcoin. Dans ce chapitre très technique, nous allons
parcourir ce processus étape par étape. Si le matériel devient trop
dense (et que vous n'êtes pas en train de mettre en place un
environnement de développement), n'hésitez pas à passer au chapitre
suivant, qui est moins technique.

# Compilation de Bitcoin Core à partir du code source

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span>Le code source
de Bitcoin Core peut être téléchargé sous forme d'archive ou en clonant
le référentiel source faisant autorité à partir de GitHub. <span
class="indexterm"></span>Sur la [page de téléchargement de Bitcoin
Core](https://bitcoincore.org/bin/), sélectionnez la version la plus
récente et téléchargez l'archive compressée du code source, par exemple,
`bitcoin-0.15.0.2.tar.gz`. <span class="indexterm"></span>Vous pouvez
également utiliser la ligne de commande git pour créer une copie locale
du code source à partir de la [page GitHub de
bitcoin](https://github.com/bitcoin/bitcoin).

<span class="indexterm"></span><span class="indexterm"></span><span
class="indexterm"></span>Dans de nombreux exemples de ce chapitre, nous
utiliserons l'interface de de commande du système d'exploitation (
également appelé "shell" ou "interface système" ou "coque logicielle"),
accessible via une application "terminal". L’interface système affichera
une invite; vous tapez une commande; et l’interface système répond avec
du texte et une nouvelle invite pour votre prochaine commande. L'invite
peut sembler différente sur votre système, mais dans les exemples
suivants, elle est indiquée par un symbole `$`. Dans les exemples,
lorsque vous voyez du texte après un symbole `$`, ne tapez pas le
symbole `$` mais tapez la commande qui le suit immédiatement, puis
appuyez sur Entrée pour exécuter la commande. Dans les exemples, les
lignes sous chaque commande sont les réponses du système d'exploitation
à cette commande. Lorsque vous verrez le prochain préfixe `$`, vous
saurez qu'il s'agit d'une nouvelle commande et vous devrez répéter le
processus.

<span class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span> <span class="indexterm"></span> Dans cet
exemple, nous utilisons la commande `git` pour créer une copie locale
(un "clone") du code source :

    $ git clone https://github.com/bitcoin/bitcoin.git
    Cloning into 'bitcoin'...
    remote: Counting objects: 102071, done.
    remote: Compressing objects: 100% (10/10), done.
    Receiving objects: 100% (102071/102071), 86.38 MiB | 730.00 KiB/s, done.
    remote: Total 102071 (delta 4), reused 5 (delta 1), pack-reused 102060
    Resolving deltas: 100% (76168/76168), done.
    Checking connectivity... done.
    $

<span class="indexterm"></span>Git est le système de contrôle de version
distribué le plus largement utilisé et un élément essentiel de la boîte
à outils de tout développeur de logiciels. Vous devrez peut-être
installer la commande `git`, ou une interface utilisateur graphique pour
git, sur votre système d'exploitation si vous ne l'avez pas déjà.

Une fois l'opération de clonage git terminée, vous aurez une copie
locale complète du référentiel de code source dans le répertoire
*bitcoin*. Accédez à ce répertoire en tapant `cd bitcoin` à l'invite :

    $ cd bitcoin

## Sélection d'une version de Bitcoin Core

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span>Par défaut, la copie locale sera synchronisée
avec le code le plus récent, qui peut être une version instable ou bêta
de bitcoin. Avant de compiler le code, sélectionnez une version
spécifique en consultant une version avec la commande Git *tag*. Cela
synchronisera la copie locale avec un instantané (snapshot) spécifique
du référentiel de code identifié par une balise de mot-clé (le *tag*.)
Les balises sont utilisées par les développeurs pour marquer des
versions spécifiques du code par numéro de version. Tout d'abord, pour
trouver les balises disponibles, nous utilisons la commande `git tag` :

    $ git tag
    v0.1.5
    v0.1.6test1
    v0.10.0
    ...
    v0.11.2
    v0.11.2rc1
    v0.12.0rc1
    v0.12.0rc2
    ...

La liste des balises montre toutes les versions publiées de bitcoin. Par
convention, les *release candidates* (ou *versions d’évaluations*), qui
sont destinées aux tests, ont le suffixe "rc". Les versions stables
pouvant être exécutées sur des systèmes de production n'ont pas de
suffixe. Dans la liste précédente, sélectionnez la version la plus
élevée, qui au moment de la rédaction était v0.15.0. Pour synchroniser
le code local avec cette version, utilisez la commande `git checkout` :

    $ git checkout v0.15.0
    HEAD is now at 3751912... Merge #11295: doc: Old fee_estimates.dat are discarded by 0.15.0

Vous pouvez confirmer que vous avez la version souhaitée "extraite" en
lançant la commande `git status` :

    $ git status
    HEAD detached at v0.15.0
    nothing to commit, working directory clean

## Configuration de la construction de Bitcoin Core

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span>Le code source
inclut la documentation, qui peut être trouvée dans un certain nombre de
fichiers. Passez en revue la documentation principale située dans
*README.md* dans le répertoire *bitcoin* en tapant `more README.md` à
l'invite et en utilisant la barre d'espace pour passer à la page
suivante. Dans ce chapitre, nous allons construire le client Bitcoin en
ligne de commande, également connu sous le nom de `bitcoind` sous Linux.
Passez en revue les instructions pour compiler le client de ligne de
commande `bitcoind` sur votre plate-forme en tapant
`more doc/build-unix.md`. Des instructions alternatives pour macOS et
Windows peuvent être trouvées dans le répertoire *doc*, comme
*build-osx.md* ou *build-windows.md*, respectivement.

Examinez attentivement les prérequis de construction, qui se trouvent
dans la première partie de la documentation de construction. Ce sont des
bibliothèques qui doivent être présentes sur votre système avant de
pouvoir commencer à compiler Bitcoin. Si ces conditions préalables sont
manquantes, le processus de génération échouera avec une erreur. Si cela
se produit parce que vous avez manqué une condition préalable, vous
pouvez l'installer, puis reprendre le processus de génération là où vous
l'avez laissé. En supposant que les prérequis sont installés, vous
démarrez le processus de génération en générant un ensemble de scripts
de génération à l'aide du script *autogen.sh*.

    $ ./autogen.sh
    ...
    glibtoolize: copying file 'build-aux/m4/libtool.m4'
    glibtoolize: copying file 'build-aux/m4/ltoptions.m4'
    glibtoolize: copying file 'build-aux/m4/ltsugar.m4'
    glibtoolize: copying file 'build-aux/m4/ltversion.m4'
    ...
    configure.ac:10: installing 'build-aux/compile'
    configure.ac:5: installing 'build-aux/config.guess'
    configure.ac:5: installing 'build-aux/config.sub'
    configure.ac:9: installing 'build-aux/install-sh'
    configure.ac:9: installing 'build-aux/missing'
    Makefile.am: installing 'build-aux/depcomp'
    ...

Le script *autogen.sh* crée un ensemble de scripts de configuration
automatique qui interrogeront votre système pour découvrir les
paramètres corrects et s'assurer que vous disposez de toutes les
bibliothèques nécessaires pour compiler le code. Le plus important
d'entre eux est le script `configure` qui offre un certain nombre
d'options différentes pour personnaliser le processus de construction.
Tapez `./configure --help` pour voir les différentes options:

    $ ./configure --help
    `configure' configures Bitcoin Core 0.15.0 to adapt to many kinds of systems.

    Usage: ./configure [OPTION]... [VAR=VALUE]...

    ...
    Optional Features:
      --disable-option-checking  ignore unrecognized --enable/--with options
      --disable-FEATURE       do not include FEATURE (same as --enable-FEATURE=no)
      --enable-FEATURE[=ARG]  include FEATURE [ARG=yes]

      --enable-wallet         enable wallet (default is yes)

      --with-gui[=no|qt4|qt5|auto]
    ...

Le script `configure` vous permet d'activer ou de désactiver certaines
fonctionnalités de `bitcoind` grâce à l'utilisation des drapeaux
`--enable-FEATURE` et `--disable-FEATURE`, où `FEATURE` est remplacé par
le nom de la fonctionnalité, comme indiqué dans la sortie d'aide. Dans
ce chapitre, nous allons construire le client `bitcoind` avec toutes les
fonctionnalités par défaut. Nous n'utiliserons pas les indicateurs de
configuration, mais vous devriez les consulter pour comprendre quelles
fonctionnalités facultatives font partie du client. Si vous êtes dans un
environnement universitaire, les restrictions du laboratoire
informatique peuvent vous obliger à installer des applications dans
votre répertoire personnel (par exemple, en utilisant `--prefix=$HOME`).

Voici quelques options utiles qui remplacent le comportement par défaut
du script configure:

--prefix=$HOME

Cela remplace l'emplacement d'installation par défaut (qui est

/usr/local/

) pour l'exécutable résultant. Utilisez

$HOME

pour tout mettre dans votre répertoire personnel, ou un chemin
différent.

--disable-wallet

Ceci est utilisé pour désactiver l'implémentation du portefeuille de
référence.

--with-incompatible-bdb

Si vous construisez un portefeuille, autorisez l'utilisation d'une
version incompatible de la bibliothèque Berkeley DB.

--with-gui=no

Ne construisez pas l'interface utilisateur graphique, qui nécessite la
bibliothèque Qt. Cela construit uniquement le bitcoin du serveur et de
la ligne de commande.

Ensuite, exécutez le script `configure` pour découvrir automatiquement
toutes les bibliothèques nécessaires et créer un script de construction
personnalisé pour votre système :

    $ ./configure
    checking build system type... x86_64-unknown-linux-gnu
    checking host system type... x86_64-unknown-linux-gnu
    checking for a BSD-compatible install... /usr/bin/install -c
    checking whether build environment is sane... yes
    checking for a thread-safe mkdir -p... /bin/mkdir -p
    checking for gawk... gawk
    checking whether make sets $(MAKE)... yes
    ...
    [de nombreuses pages de tests de configuration suivent]
    ...
    $

Si tout s'est bien passé, la commande `configure` se terminera par la
création des scripts de construction personnalisés qui nous permettront
de compiler `bitcoind`. S'il y a des bibliothèques manquantes ou des
erreurs, la commande `configure` se terminera par une erreur au lieu de
créer les scripts de construction. Si une erreur se produit, elle est
probablement due à une bibliothèque manquante ou incompatible. Relisez à
nouveau la documentation de build et assurez-vous d'installer les
prérequis manquants. Ensuite, exécutez à nouveau `configure` et voyez si
cela corrige l'erreur.

## Construire les exécutables Bitcoin Core

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span> Ensuite, vous allez compiler le code source,
un processus qui peut prendre jusqu'à une heure, en fonction de la
vitesse de votre processeur et de la mémoire disponible. Pendant le
processus de compilation, vous devriez voir une sortie toutes les
quelques secondes ou toutes les quelques minutes, ou une erreur si
quelque chose ne va pas. Si une erreur se produit ou si le processus de
compilation est interrompu, il peut être repris à tout moment en tapant
à nouveau `make`. Tapez `make` pour lancer la compilation de
l'application exécutable :

    $ make
    Making all in src
      CXX      crypto/libbitcoinconsensus_la-hmac_sha512.lo
      CXX      crypto/libbitcoinconsensus_la-ripemd160.lo
      CXX      crypto/libbitcoinconsensus_la-sha1.lo
      CXX      crypto/libbitcoinconsensus_la-sha256.lo
      CXX      crypto/libbitcoinconsensus_la-sha512.lo
      CXX      libbitcoinconsensus_la-hash.lo
      CXX      primitives/libbitcoinconsensus_la-transaction.lo
      CXX      libbitcoinconsensus_la-pubkey.lo
      CXX      script/libbitcoinconsensus_la-bitcoinconsensus.lo
      CXX      script/libbitcoinconsensus_la-interpreter.lo

    [... de nombreux autres messages de compilation suivent ...]

    $

Sur un système rapide avec plusieurs processeurs, vous souhaiterez
peut-être définir le nombre de tâches de compilation parallèles. Par
exemple, `make -j 2` utilisera deux cœurs s'ils sont disponibles. Si
tout se passe bien, Bitcoin Core est maintenant compilé. Vous devez
exécuter la suite de tests unitaires avec `make check` pour vous assurer
que les bibliothèques liées ne sont pas cassées de manière évidente. La
dernière étape consiste à installer les différents exécutables sur votre
système à l'aide de la commande `make install`. Vous serez peut-être
invité à saisir votre mot de passe utilisateur, car cette étape
nécessite des privilèges d'administrateur:

    $ make check && sudo make install
    Password:
    Making install in src
     ../build-aux/install-sh -c -d '/usr/local/lib'
    libtool: install: /usr/bin/install -c bitcoind /usr/local/bin/bitcoind
    libtool: install: /usr/bin/install -c bitcoin-cli /usr/local/bin/bitcoin-cli
    libtool: install: /usr/bin/install -c bitcoin-tx /usr/local/bin/bitcoin-tx
    ...
    $

<span class="indexterm"></span> <span
class="indexterm"></span>L'installation par défaut de `bitcoind` le
place dans */usr/local/bin*. Vous pouvez confirmer que Bitcoin Core est
correctement installé en demandant au système le chemin des exécutables,
comme suit:

    $ which bitcoind
    /usr/local/bin/bitcoind

    $ which bitcoin-cli
    /usr/local/bin/bitcoin-cli

# Exécution d'un nœud Bitcoin Core

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span> <span class="indexterm"></span>Le réseau pair
à pair de Bitcoin est composé de "nœuds" de réseau, gérés principalement
par des bénévoles et certaines des entreprises qui créent des
applications bitcoin. Ceux qui exécutent des nœuds Bitcoin ont une vue
directe et faisant autorité sur la chaîne de blocs Bitcoin, avec une
copie locale de toutes les transactions, validées indépendamment par
leur propre système. En exécutant un nœud, vous n'avez pas besoin de
faire appel à un tiers pour valider une transaction. De plus, en
exécutant un nœud Bitcoin, vous contribuez au réseau Bitcoin en le
rendant plus robuste et sécuritaire.

Cependant, l'exécution d'un nœud nécessite un système connecté en
permanence avec suffisamment de ressources pour traiter toutes les
transactions bitcoin. Selon que vous choisissez d'indexer toutes les
transactions et de conserver une copie complète de la chaîne de blocs,
vous pouvez également avoir besoin de beaucoup d'espace disque et de
mémoire RAM. Au début de 2021, un nœud à index complet a besoin de 2 Go
de RAM et d'un minimum de 360 Go d'espace disque (voir
<https://www.blockchain.com/charts/blocks-size>). Les nœuds Bitcoin
transmettent et reçoivent également des transactions et des blocs
Bitcoin, consommant de la bande passante Internet. Si votre connexion
Internet est limitée, a un faible plafond de données ou est mesurée
(facturée au gigabit), vous ne devriez probablement pas exécuter un nœud
Bitcoin, ou l'exécuter d'une manière qui limite sa bande passante (voir
[example\_title](#constrained_resources)).

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span>Bitcoin Core conserve une copie complète de la
chaîne de blocs par défaut, avec chaque transaction qui s'est déjà
produite sur le Bitcoin réseau depuis sa création en 2009. Cet ensemble
de données a une taille de dizaines de gigaoctets et est téléchargé de
manière incrémentielle sur plusieurs jours ou semaines, en fonction de
la vitesse de votre CPU et de votre connexion Internet. Bitcoin Core ne
pourra pas traiter les transactions ou mettre à jour les soldes des
comptes tant que l'ensemble de données complet de la chaîne de blocs
n'aura pas été téléchargé. Assurez-vous que vous disposez de
suffisamment d'espace disque, de bande passante et de temps pour
effectuer la synchronisation initiale. Vous pouvez configurer Bitcoin
Core pour réduire la taille de la chaîne de blocs en supprimant les
anciens blocs (voir [example\_title](#constrained_resources)), mais il
téléchargera tout de même l'intégralité de l'ensemble de données avant
de les supprimer.

Malgré ces besoins en ressources, des milliers de bénévoles gèrent des
nœuds Bitcoin. Certains fonctionnent sur des systèmes aussi simples
qu'un Raspberry Pi (un ordinateur à 35$ US de la taille d'un paquet de
cartes). De nombreux volontaires exécutent également des nœuds Bitcoin
sur des serveurs loués, généralement une variante de Linux. Une instance
de *Virtual Private Server* (VPS ou serveur virtuel privé) ou *Cloud
Computing Server* (ou serveur en infonuagique) peut être utilisée pour
exécuter un nœud Bitcoin. Ces serveurs peuvent être loués pour 25$ à 50$
US par mois auprès de divers fournisseurs.

Pourquoi voudriez-vous exécuter un nœud ? Voici quelques-unes des
raisons les plus courantes :

-   Si vous développez un logiciel bitcoin et que vous devez vous fier à
    un nœud Bitcoin pour un accès programmable (API) au réseau et à la
    blockchain.

-   Si vous créez des applications qui doivent valider les transactions
    selon les règles de consensus de bitcoin. En règle générale, les
    éditeurs de logiciels Bitcoin exécutent plusieurs nœuds.

-   Si vous souhaitez prendre en charge le bitcoin. L'exécution d'un
    nœud rend le réseau plus robuste et capable de servir plus de
    portefeuilles, plus d'utilisateurs et plus de transactions.

-   Si vous ne souhaitez pas vous fier à un tiers pour traiter ou
    valider vos transactions.

Si vous lisez ce livre et êtes intéressé par le développement d'un
logiciel Bitcoin, vous devriez exécuter votre propre nœud.

## Configuration du nœud Bitcoin Core

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>( <span
class="indexterm"></span>"sécurité"Bitcoin Core recherchera un fichier
de configuration dans son répertoire de données à chaque démarrage. Dans
cette section, nous examinerons les différentes options de configuration
et créerons un fichier de configuration. Pour localiser le fichier de
configuration, exécutez `bitcoind -printtoconsole` dans votre terminal
et recherchez les deux premières lignes.

    $ bitcoind -printtoconsole
    Bitcoin version v0.15.0
    Using the 'standard' SHA256 implementation
    Using data directory /home/ubuntu/.bitcoin/
    Using config file /home/ubuntu/.bitcoin/bitcoin.conf
    ...
    [beaucoup plus de sortie de débogage]
    ...

Vous pouvez appuyer sur Ctrl-C pour fermer le nœud une fois que vous
avez déterminé l'emplacement du fichier de configuration.
Habituellement, le fichier de configuration se trouve dans le répertoire
de données *.bitcoin* sous le répertoire personnel de votre utilisateur.
Il n'est pas créé automatiquement, mais vous pouvez créer un fichier de
configuration de démarrage en copiant et collant à partir de l'exemple
&lt;&lt;#full\_index\_node&gt;&gt; ci-dessous. Vous pouvez créer ou
modifier le fichier de configuration dans votre éditeur préféré.

Bitcoin Core propose plus de 100 options de configuration qui modifient
le comportement du nœud de réseau, le stockage de la chaîne de blocs et
de nombreux autres aspects de son fonctionnement. Pour voir une liste de
ces options, exécutez `bitcoind --help` :

    $ bitcoind --help
    Bitcoin Core Daemon version v0.15.0

    Usage:
      bitcoind [options]                     Start Bitcoin Core Daemon

    Options:

      -?
           Print this help message and exit

      -version
           Print version and exit

      -alertnotify=<cmd>
           Execute command when a relevant alert is received or we see a really
           long fork (%s in cmd is replaced by message)
    ...
    [beaucoup plus d&#39;options]
    ...

      -rpcthreads=<n>
           Set the number of threads to service RPC calls (default: 4)

<span class="indexterm"></span> <span class="indexterm"></span>Voici
quelques-unes des options les plus importantes que vous pouvez définir
dans le fichier de configuration, ou en tant que paramètres de ligne de
commande pour `bitcoind` :

alertnotify  
Exécute une commande ou un script spécifié pour envoyer des alertes
d'urgence au propriétaire de ce nœud, généralement par courriel.

conf  
Un emplacement alternatif pour le fichier de configuration. Cela n'a de
sens qu'en tant que paramètre de ligne de commande pour `bitcoind`, car
il ne peut pas se trouver dans le fichier de configuration auquel il se
réfère.

datadir  
Sélectionnez le répertoire et le système de fichiers dans lesquels vous
placer toutes les données de la chaîne de blocs. Par défaut, il s'agit
d’un sous-répertoire de *.bitcoin* de votre répertoire personnel.
Assurez-vous que ce système de fichiers dispose de plusieurs gigaoctets
d'espace libre.

prune  
Réduisez les besoins en espace disque à ce nombre de mégaoctets, en
supprimant les anciens blocs. Utilisez ceci sur un nœud à ressources
limitées qui ne peut pas contenir la chaîne de blocs complète.

txindex  
Maintient un index de toutes les transactions. Cela signifie une copie
complète de la chaîne de blocs. Cela vous permet de récupérer par
programmation toute transaction par identifiant (ID).

dbcache  
La taille du cache UTXO. La valeur par défaut est 450 Mio. Augmentez
cette valeur sur le matériel haut de gamme et réduisez la taille sur le
matériel bas de gamme pour économiser de la mémoire au détriment des
entrées-sorties des disques lents.

maxconnections  
Définissez le nombre maximal de nœuds à partir desquels accepter les
connexions. Le réduire par défaut réduira votre consommation de bande
passante. À utiliser si vous avez un plafond de données ou si vous payez
au gigaoctet.

maxmempool  
Limite le bassin de mémoire de transaction à ce nombre de mégaoctets.
Utilisez-le pour réduire l'utilisation de la mémoire sur les nœuds à
mémoire limitée.

maxreceivebuffer/maxsendbuffer  
Limite la mémoire tampon par connexion à ce nombre de multiples de 1000
octets. À utiliser sur les nœuds à mémoire limitée.

minrelaytxfee  
Définissez le taux de frais minimum pour la transaction que vous
relayerez. En dessous de cette valeur, la transaction est traitée non
standard, rejetée du bassin de transactions et non relayée.

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span><span
class="indexterm"></span>Par défaut, Bitcoin Core construit une base de
données contenant *uniquement* les transactions liées au portefeuille de
l'utilisateur. Si vous voulez pouvoir accéder à *n'importe quelle*
transaction avec des commandes comme `getrawtransaction` (voir [Explorer
et décoder les transactions](#exploring_and_decoding_transanctions)),
vous devez configurer Bitcoin Core pour créer un index de transaction
complet, ce qui peut être réalisé avec l'option `txindex`. Définissez
`txindex=1` dans le fichier de configuration de Bitcoin Core. Si vous ne
définissez pas cette option au début et que vous la réglez ensuite sur
l'indexation complète, vous devez redémarrer `bitcoind` avec l'option
`-reindex` et attendre qu'elle reconstruise l'index.

[example\_title](#full_index_node) montre comment vous pouvez combiner
les options précédentes, avec un nœud entièrement indexé, fonctionnant
comme un backend API pour une application bitcoin.

    alertnotify=myemailscript.sh &quot;Alerte : %s&quot;
    datadir=/lotsofspace/bitcoin
    index_tx=1

[example\_title](#constrained_resources) montre un nœud à ressources
limitées s'exécutant sur un serveur plus petit.

    alertnotify=myemailscript.sh &quot;Alerte : %s&quot;
    maxconnexions=15
    prune=5000
    dbcache=150
    maxmempool=150
    maxreceivebuffer=2500
    maxsendbuffer=500

Une fois que vous avez modifié le fichier de configuration et défini les
options qui représentent le mieux vos besoins, vous pouvez tester
`bitcoind` avec cette configuration. Exécutez Bitcoin Core avec l'option
`printtoconsole` pour s'exécuter au premier plan avec une sortie vers la
console :

    $ bitcoind -printtoconsole

    Bitcoin version v0.15.0
    InitParameterInteraction: parameter interaction: -whitelistforcerelay=1 -> setting -whitelistrelay=1
    Assuming ancestors of block 0000000000000000003b9ce759c2a087d52abc4266f8f4ebd6d768b89defa50a have valid signatures.
    Using the 'standard' SHA256 implementation
    Default data directory /home/ubuntu/.bitcoin
    Using data directory /lotsofspace/.bitcoin
    Using config file /home/ubuntu/.bitcoin/bitcoin.conf
    Using at most 125 automatic connections (1048576 file descriptors available)
    Using 16 MiB out of 32/2 requested for signature cache, able to store 524288 elements
    Using 16 MiB out of 32/2 requested for script execution cache, able to store 524288 elements
    Using 2 threads for script verification
    HTTP: creating work queue of depth 16
    No rpcpassword set - using random cookie authentication
    Generated RPC authentication cookie /lotsofspace/.bitcoin/.cookie
    HTTP: starting 4 worker threads
    init message: Verifying wallet(s)...
    Using BerkeleyDB version Berkeley DB 4.8.30: (April  9, 2010)
    Using wallet wallet.dat
    CDBEnv::Open: LogDir=/lotsofspace/.bitcoin/database ErrorFile=/lotsofspace/.bitcoin/db.log
    scheduler thread start
    Cache configuration:
    * Using 250.0MiB for block index database
    * Using 8.0MiB for chain state database
    * Using 1742.0MiB for in-memory UTXO set (plus up to 286.1MiB of unused mempool space)
    init message: Loading block index...
    Opening LevelDB in /lotsofspace/.bitcoin/blocks/index
    Opened LevelDB successfully

    [... plus de messages de démarrage ...]

Vous pouvez appuyer sur Ctrl-C pour interrompre le processus une fois
que vous êtes convaincu qu'il charge les paramètres correctement et
s'exécute comme prévu.

Pour exécuter Bitcoin Core en arrière-plan en tant que processus,
démarrez-le avec l'option `daemon`, en tant que `bitcoind -daemon`.

Pour surveiller la progression et l'état d'exécution de votre nœud
Bitcoin, utilisez la commande `bitcoin-cli getblockchaininfo` :

    $ bitcoin-cli getblockchaininfo

    {
      "chain": "main",
      "blocks": 0,
      "headers": 83999,
      "bestblockhash": "000000000019d6689c085ae165831e934ff763ae46a2a6c172b3f1b60a8ce26f",
      "difficulty": 1,
      "mediantime": 1231006505,
      "verificationprogress": 3.783041623201835e-09,
      "chainwork": "0000000000000000000000000000000000000000000000000000000100010001",
      "pruned": false,
      [...]
    }

Cela montre un nœud avec une hauteur de blockchain de 0 blocs et 83999
en-têtes. Le nœud récupère actuellement les en-têtes de bloc de la
meilleure chaîne et continue ensuite à télécharger les blocs complets.

Une fois que vous êtes satisfait des options de configuration que vous
avez sélectionnées, vous devez ajouter *bitcoin* aux scripts de
démarrage de votre système d'exploitation, afin qu'il s'exécute en
continu et au redémarrage du système d'exploitation. Vous trouverez un
certain nombre d'exemples de scripts de démarrage pour différents
systèmes d'exploitation dans le répertoire source de bitcoin sous
*contrib/init* et un fichier *README.md* indiquant quel système utilise
quel script.<span class="indexterm"></span> <span
class="indexterm"></span>(( ("", startref="BNcore03")))

# Interface de programmation d'application (API) de base Bitcoin

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span>Le client Bitcoin Core implémente une interface
JSON-RPC accessible également à l'aide de l'assistant de ligne de
commande `bitcoin-cli`. La ligne de commande nous permet d'expérimenter
de manière interactive les fonctionnalités qui sont également
disponibles par programmation via l'API. <span class="indexterm"></span>
<span class="indexterm"></span> <span class="indexterm"></span>Pour
commencer, appelez la commande `help` pour voir une liste des commandes
RPC bitcoin disponibles :

    $ bitcoin-cli help
    addmultisigaddress nrequired ["key",...] ( "account" )
    addnode "node" "add|remove|onetry"
    backupwallet "destination"
    createmultisig nrequired ["key",...]
    createrawtransaction [{"txid":"id","vout":n},...] {"address":amount,...}
    decoderawtransaction "hexstring"
    ...
    ...
    verifymessage "bitcoinaddress" "signature" "message"
    walletlock
    walletpassphrase "passphrase" timeout
    walletpassphrasechange "oldpassphrase" "newpassphrase"

Chacune de ces commandes peut prendre un certain nombre de paramètres.
Pour obtenir une aide supplémentaire, une description détaillée et des
informations sur les paramètres, ajoutez le nom de la commande après
`help`. Par exemple, pour voir l'aide sur la commande `getblockhash`
RPC :

    $ bitcoin-cli help getblockhash
    getblockhash height

    Returns hash of block in best-block-chain at height provided.

    Arguments:
    1. height         (numeric, required) The height index

    Result:
    "hash"         (string) The block hash

    Examples:
    > bitcoin-cli getblockhash 1000
    > curl --user myusername --data-binary '{"jsonrpc": "1.0", "id":"curltest", "method": "getblockhash", "params": [1000] }' -H 'content-type: text/plain;' http://127.0.0.1:8332/

À la fin des informations d'aide, vous verrez deux exemples de la
commande RPC, utilisant l'assistant `bitcoin-cli` ou le client HTTP
`curl`. Ces exemples montrent comment vous pouvez appeler la commande.
Copiez le premier exemple et voyez le résultat :

    $ bitcoin-cli getblockhash 1000
    00000000c937983704a73af28acdec37b049d214adbda81d7e2a3dd146f6ed09

Le résultat est un hachage de bloc, qui est décrit plus en détail dans
les chapitres suivants. Mais pour l'instant, cette commande devrait
renvoyer le même résultat sur votre système, démontrant que votre nœud
Bitcoin Core est en cours d'exécution, accepte les commandes et dispose
d'informations sur le bloc 1000 à vous renvoyer.

Dans les sections suivantes, nous allons démontrer quelques commandes
RPC très utiles et leur sortie attendue.

## Obtenir des informations sur l'état du client Bitcoin Core

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span>Bitcoin Core fournit des rapports d'état sur
différents modules via l'interface JSON-RPC. Les commandes les plus
importantes incluent `getblockchaininfo`, `getmempoolinfo`,
`getnetworkinfo` et `getwalletinfo`.

La commande `getblockchaininfo` RPC de Bitcoin a été introduite plus
tôt. La commande `getnetworkinfo` affiche des informations de base sur
l'état du nœud de réseau Bitcoin. Utilisez `bitcoin-cli` pour
l'exécuter :

    $ bitcoin-cli getnetworkinfo

      "version": 150000,
      "subversion": "/Satoshi:0.15.0/",
      "protocolversion": 70015,
      "localservices": "000000000000000d",
      "localrelay": true,
      "timeoffset": 0,
      "networkactive": true,
      "connections": 8,
      "networks": [
        ...
        detailed information about all networks (ipv4, ipv6 or onion)
        ...
      ],
      "relayfee": 0.00001000,
      "incrementalfee": 0.00001000,
      "localaddresses": [
      ],
      "warnings": ""
    }

Les données sont renvoyées en JavaScript Object Notation (JSON), un
format qui peut facilement être "consommé" par tous les langages de
programmation mais qui est également assez lisible par l'homme. Parmi
ces données, nous voyons les numéros de version du client logiciel
bitcoin (150000) et du protocole Bitcoin (70015). On y voit le nombre
actuel de connexions (8) et diverses informations sur le réseau Bitcoin
et les paramètres liés à ce client.

Il faudra un certain temps, peut-être plus d'une journée, pour que le
client `bitcoind` "rattrape" la hauteur actuelle de la chaîne de blocs
lorsqu'il télécharge des blocs d'autres clients Bitcoin. Vous pouvez
vérifier sa progression en utilisant `getblockchaininfo` pour voir le
nombre de blocs connus.

## Explorer et décoder les transactions

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>Commandes : `getrawtransaction`,
`decoderawtransaction`

Dans [Acheter une tasse de café](#cup_of_coffee), <span
class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span>Alice a acheté une tasse de café au Bob's Cafe.
Sa transaction a été enregistrée sur la blockchain avec l'identifiant de
transaction (`txid`)
`0627052b6f28912f2703066a912ea577f2ce4da4caa5a5fbd8a57286c345c2f2`.
Utilisons l'API pour récupérer et examiner cette transaction en
transmettant l'identifiant de transaction en tant que paramètre :

$ bitcoin-cli getrawtransaction
0627052b6f28912f2703066a912ea577f2ce4da4caa5a↵ 5fbd8a57286c345c2f2
0100000001186f9f998a5aa6f048e51dd8419a14d8a0f1a8a2836dd734d2804fe65fa35779000↵
000008b483045022100884d142d86652a3f47ba4746ec719bbfbd040a570b1deccbb6498c75c4↵
ae24cb02204b9f039ff08df09cbe9f6addac960298cad530a863ea8f53982c09db8f6e3813014↵
10484ecc0d46f1918b30928fa0e4ed99f16a0fb4fde0735e7ade8416ab9fe423cc54123363767↵
89d172787ec3457eee41c04f4938de5cc17b4a10fa336a8d752adfffffffff0260e3160000000↵
0001976a914ab68025513c3dbd2f7b92a94e0581f5d50f654e788acd0ef8000000000001976a9↵
147f9b1a7fb68d60c536c2fd8aeaa53a8f3cc025a888ac00000000

<span class="indexterm"></span><span class="indexterm"></span>Un
identifiant de transaction ne fait pas autorité tant qu'une transaction
n'a pas été confirmée. L'absence d'un hachage de transaction dans la
blockchain ne signifie pas que la transaction n'a pas été traitée. C'est
ce qu'on appelle la "malléabilité des transactions", car les hachages de
transaction peuvent être modifiés avant la confirmation dans un bloc.
Après confirmation, le `txid` est immuable et fait autorité.

La commande `getrawtransaction` renvoie une transaction sérialisée en
notation hexadécimale. Pour décoder cela, nous utilisons la commande
`decoderawtransaction`, en passant les données hexadécimales en
paramètre. Vous pouvez copier l'hex renvoyé par `getrawtransaction` et
le coller en tant que paramètre dans `decoderawtransaction` :

$ bitcoin-cli decoderawtransaction
0100000001186f9f998a5aa6f048e51dd8419a14d8↵
a0f1a8a2836dd734d2804fe65fa35779000000008b483045022100884d142d86652a3f47ba474↵
6ec719bbfbd040a570b1deccbb6498c75c4ae24cb02204b9f039ff08df09cbe9f6addac960298↵
cad530a863ea8f53982c09db8f6e381301410484ecc0d46f1918b30928fa0e4ed99f16a0fb4fd↵
e0735e7ade8416ab9fe423cc5412336376789d172787ec3457eee41c04f4938de5cc17b4a10fa↵
336a8d752adfffffffff0260e31600000000001976a914ab68025513c3dbd2f7b92a94e0581f5↵
d50f654e788acd0ef8000000000001976a9147f9b1a7fb68d60c536c2fd8aeaa53a8f3cc025a8↵
88ac00000000

{ "txid":
"0627052b6f28912f2703066a912ea577f2ce4da4caa5a5fbd8a57286c345c2f2",
"size": 258, "version": 1, "locktime": 0, "vin": \[ { "txid":
"7957a35fe64f80d234d76d83a2...8149a41d81de548f0a65a8a999f6f18", "vout":
0, "scriptSig": {
"asm":"3045022100884d142d86652a3f47ba4746ec719bbfbd040a570b1decc...",
"hex":"483045022100884d142d86652a3f47ba4746ec719bbfbd040a570b1de..." },
"sequence": 4294967295 } \], "vout": \[ { "value": 0.01500000, "n": 0,
"scriptPubKey": { "asm": "OP\_DUP OP\_HASH160 ab68...5f654e7
OP\_EQUALVERIFY OP\_CHECKSIG", "hex":
"76a914ab68025513c3dbd2f7b92a94e0581f5d50f654e788ac", "reqSigs": 1,
"type": "pubkeyhash", "addresses": \[
"1GdK9UzpHBzqzX2A9JFP3Di4weBwqgmoQA" \] } }, { "value": 0.08450000, "n":
1, "scriptPubKey": { "asm": "OP\_DUP OP\_HASH160 7f9b1a...025a8
OP\_EQUALVERIFY OP\_CHECKSIG", "hex":
"76a9147f9b1a7fb68d60c536c2fd8aeaa53a8f3cc025a888ac", "reqSigs": 1,
"type": "pubkeyhash", "addresses": \[
"1Cdid9KFAaatwczBwBttQcwXYCpvK8h7FK" \] } } \] }

Le décodage de la transaction montre tous les composants de cette
transaction, y compris les entrées et les sorties de la transaction.
Dans ce cas, nous voyons que la transaction qui a crédité notre nouvelle
adresse de 15 millibits a utilisé une entrée et généré deux sorties.
L'entrée de cette transaction était la sortie d'une transaction
précédemment confirmée (indiquée par `txid` commençant par `7957a35fe`).
Les deux sorties correspondent au crédit de 15 millibits et une sortie
avec retour à l'expéditeur.

Nous pouvons explorer davantage la chaîne de blocs en examinant la
transaction précédente référencée par son `txid` dans cette transaction
en utilisant les mêmes commandes (par exemple, `getrawtransaction`). En
sautant d'une transaction à l'autre, nous pouvons suivre une chaîne de
transactions à mesure que les pièces sont transmises d'adresse de
propriétaire à adresse de propriétaire.

## Explorer les blocs

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>Commandes : `getblock`, `getblockhash`

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span>L'exploration
de blocs est similaire à l'exploration de transactions. Cependant, les
blocs peuvent être référencés soit par la *hauteur* du bloc (*height*),
soit par le résultat de *hachage* (ou *hash*) du bloc. Tout d'abord,
trouvons un bloc par sa hauteur. Dans [Acheter une tasse de
café](#cup_of_coffee), nous avons vu que la transaction d'Alice était
incluse dans le bloc 277316.

Nous utilisons la commande `getblockhash`, qui prend la hauteur du bloc
comme paramètre et renvoie le hachage pour ce bloc :

$ bitcoin-cli getblockhash 277316
0000000000000001b6b9a13b095e96db41c4a928b97ef2d944a9b31b2cc7bdc4

Maintenant que nous savons dans quel bloc la transaction d'Alice était
incluse, nous pouvons interroger ce bloc. Nous utilisons la commande
`getblock` avec le hachage de bloc comme paramètre :

$ bitcoin-cli getblock
0000000000000001b6b9a13b095e96db41c4a928b97ef2d944a9b3↵ 1b2cc7bdc4

{ "hash":
"0000000000000001b6b9a13b095e96db41c4a928b97ef2d944a9b31b2cc7bdc4",
"confirmations": 37371, "size": 218629, "height": 277316, "version": 2,
"merkleroot":
"c91c008c26e50763e9f548bb8b2fc323735f73577effbc55502c51eb4cc7cf2e",
"tx": \[
"d5ada064c6417ca25c4308bd158c34b77e1c0eca2a73cda16c737e7424afba2f",
"b268b45c59b39d759614757718b9918caf0ba9d97c56f3b91956ff877c503fbe",
"04905ff987ddd4cfe603b03cfb7ca50ee81d89d1f8f5f265c38f763eea4a21fd",
"32467aab5d04f51940075055c2f20bbd1195727c961431bf0aff8443f9710f81",
"561c5216944e21fa29dd12aaa1a45e3397f9c0d888359cb05e1f79fe73da37bd",
\[... des centaines de transactions ...\]
"78b300b2a1d2d9449b58db7bc71c3884d6e0579617e0da4991b9734cef7ab23a",
"6c87130ec283ab4c2c493b190c20de4b28ff3caf72d16ffa1ce3e96f2069aca9",
"6f423dbc3636ef193fd8898dfdf7621dcade1bbe509e963ffbff91f696d81a62",
"802ba8b2adabc5796a9471f25b02ae6aeee2439c679a5c33c4bbcee97e081196",
"eaaf6a048588d9ad4d1c092539bd571dd8af30635c152a3b0e8b611e67d1a1af",
"e67abc6bd5e2cac169821afc51b207127f42b92a841e976f9b752157879ba8bd",
"d38985a6a1bfd35037cb7776b2dc86797abbb7a06630f5d03df2785d50d5a2ac",
"45ea0a3f6016d2bb90ab92c34a7aac9767671a8a84b9bcce6c019e60197c134b",
"c098445d748ced5f178ef2ff96f2758cbec9eb32cb0fc65db313bcac1d3bc98f" \],
"time": 1388185914, "mediantime": 1388183675, "nonce": 924591752,
"bits": "1903a30c", "difficulty": 1180923195.258026, "chainwork":
"000000000000000000000000000000000000000000000934695e92aaf53afa1a",
"previousblockhash":
"0000000000000002a7bbd25a417c0374cc55261021e8a9ca74442b01284f0569",
"nextblockhash":
"000000000000000010236c269dd6ed714dd5db39d36b33959079d78dfd431ba7" }

Le bloc contient 419 transactions et la 64ème transaction répertoriée
(`0627052b…`) est le paiement du café d'Alice. L'entrée + hauteur + nous
indique qu'il s'agit du 277316e bloc de la blockchain.

## Utilisation de l'interface de programmation de Bitcoin Core

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>L'assistant `bitcoin-cli` est très utile pour
explorer la bibliothèue (API) Bitcoin Core et les fonctions de test.
Mais tout l'intérêt d'une interface de programmation d'application est
d'accéder aux fonctions par programmation. Dans cette section, nous
montrerons comment accéder à Bitcoin Core à partir d'un autre programme.

L'API de Bitcoin Core est une interface JSON-RPC. JSON signifie
JavaScript Object Notation et c'est un moyen très pratique de présenter
des données que les humains et les programmes peuvent facilement lire.
RPC signifie Remote Procedure Call (ou appel de procédure à distance),
ce qui signifie que nous appelons des procédures (fonctions) distantes
(sur le nœud Bitcoin Core) via un protocole réseau. Dans ce cas, le
protocole réseau est HTTP ou HTTPS (pour les connexions cryptées).

Lorsque nous avons utilisé la commande `bitcoin-cli` pour obtenir de
l'aide sur une commande, elle nous a montré un exemple d'utilisation de
`curl`, le client HTTP polyvalent en ligne de commande pour construire
l'un de ces appels JSON-RPC :

    $ curl --user myusername --data-binary '{"jsonrpc": "1.0", "id":"curltest", "method": "getblockchaininfo", "params": [] }' -H 'content-type: text/plain;' http://127.0.0.1:8332/

Cette commande montre que `curl` soumet une requête HTTP à l'hôte local
(127.0.0.1), se connecte au port bitcoin par défaut (8332) et soumet une
requête `jsonrpc` pour la méthode `getblockchaininfo` en utilisant
l'encodage `text/plain`.

Vous remarquerez peut-être que curl demandera que les informations
d'identification soient envoyées avec la demande. Bitcoin Core créera un
mot de passe aléatoire à chaque démarrage et le placera dans le
répertoire de données sous le nom `.cookie`. L'assistant `bitcoin-cli`
peut lire ce fichier de mots de passe étant donné le répertoire de
données. De même, vous pouvez copier le mot de passe et le transmettre à
curl (ou à tout wrapper Bitcoin Core RPC de niveau supérieur).
Alternativement, vous pouvez créer un mot de passe statique avec le
script d'assistance fourni dans *./share/rpcauth/rpcauth.py* dans le
répertoire source de Bitcoin Core.

Si vous implémentez un appel JSON-RPC dans votre propre programme, vous
pouvez utiliser une bibliothèque HTTP générique pour construire l'appel,
similaire à ce qui est montré dans l'exemple `curl` précédent.

Cependant, il existe des bibliothèques dans la plupart des langages de
programmation qui "enveloppent" l'API Bitcoin Core d'une manière qui
rend cela beaucoup plus simple. Nous utiliserons la bibliothèque
`python-bitcoinlib` pour simplifier l'accès à l'API. N'oubliez pas que
cela nécessite que vous disposiez d'une instance Bitcoin Core en cours
d'exécution, qui sera utilisée pour effectuer des appels JSON-RPC.

Le script Python dans [example\_title](#rpc_example) effectue un simple
appel `getblockchaininfo` et imprime le paramètre `blocks` à partir des
données renvoyées par Bitcoin Core (nœud complet requis).

    from bitcoin.rpc import RawProxy

    # Create a connection to local Bitcoin Core node
    p = RawProxy()

    # Run the getinfo command, store the resulting data in info
    info = p.getinfo()

    # Retrieve the 'blocks' element from the info
    print(info['blocks'])

Son exécution nous donne le résultat suivant:

    $ python rpc_example.py
    394075

Il nous indique que notre nœud local Bitcoin Core a 394075 blocs dans sa
chaîne de blocs. Ce n'est pas un résultat spectaculaire, mais cela
démontre l'utilisation de base de la bibliothèque en tant qu'interface
simplifiée avec l'API JSON-RPC de Bitcoin Core.

Ensuite, utilisons les appels `getrawtransaction` et `decodetransaction`
pour récupérer les détails du paiement du café d'Alice. Dans
[example\_title](#rpc_transaction), nous récupérons la transaction
d'Alice et listons les sorties de la transaction. Pour chaque sortie,
nous affichons l'adresse et la valeur du destinataire. Pour rappel, la
transaction d'Alice avait une sortie pour payer Bob's Cafe et une sortie
pour rendre la monnaie à Alice.

    from bitcoin.rpc import RawProxy

    p = RawProxy()

    # Alice's transaction ID
    txid = "0627052b6f28912f2703066a912ea577f2ce4da4caa5a5fbd8a57286c345c2f2"

    # First, retrieve the raw transaction in hex
    raw_tx = p.getrawtransaction(txid)

    # Decode the transaction hex into a JSON object
    decoded_tx = p.decoderawtransaction(raw_tx)

    # Retrieve each of the outputs from the transaction
    for output in decoded_tx['vout']:
        print(output['scriptPubKey']['addresses'], output['value'])

En exécutant ce code, nous obtenons :

    $ python rpc_transaction.py
    ([u'1GdK9UzpHBzqzX2A9JFP3Di4weBwqgmoQA'], Decimal('0.01500000'))
    ([u'1Cdid9KFAaatwczBwBttQcwXYCpvK8h7FK'], Decimal('0.08450000'))

Les deux exemples précédents sont assez simples. Vous n'avez pas
vraiment besoin d'un programme pour les exécuter ; vous pouvez tout
aussi bien utiliser l'assistant `bitcoin-cli`. L'exemple suivant,
cependant, nécessite plusieurs centaines d'appels RPC et démontre plus
clairement l'utilisation d'une interface de programmation.

Dans [example\_title](#rpc_block), nous récupérons d'abord le bloc
277316, puis récupérons chacune des 419 transactions en référence à
chaque identifiant de transaction. Ensuite, nous parcourons chacune des
sorties de la transaction et additionnons la valeur.<span
class="indexterm"></span> <span class="indexterm"></span>

    from bitcoin.rpc import RawProxy

    p = RawProxy()

    # The block height where Alice's transaction was recorded
    blockheight = 277316

    # Get the block hash of block with height 277316
    blockhash = p.getblockhash(blockheight)

    # Retrieve the block by its hash
    block = p.getblock(blockhash)

    # Element tx contains the list of all transaction IDs in the block
    transactions = block['tx']

    block_value = 0

    # Iterate through each transaction ID in the block
    for txid in transactions:
        tx_value = 0
        # Retrieve the raw transaction by ID
        raw_tx = p.getrawtransaction(txid)
        # Decode the transaction
        decoded_tx = p.decoderawtransaction(raw_tx)
        # Iterate through each output in the transaction
        for output in decoded_tx['vout']:
            # Add up the value of each output
            tx_value = tx_value + output['value']

        # Add the value of this transaction to the total
        block_value = block_value + tx_value

    print("Total value in block: ", block_value)

En exécutant ce code, nous obtenons :

    $ python rpc_block.py

    ('Total value in block: ', Decimal('10322.07722534'))

Notre exemple de code calcule que la valeur totale des transactions dans
ce bloc est de 10 322,07722534 BTC (dont 25 BTC de récompense et 0,0909
BTC de frais). Comparez cela au montant rapporté par un site
d'exploration de blocs en recherchant le hachage ou la hauteur du bloc.
Certains explorateurs de blocs rapportent la valeur totale hors
récompense et hors frais. Voyez si vous pouvez repérer la
différence.<span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>

# Clients, bibliothèques et boîtes à outils alternatifs

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span> Il existe de
nombreux clients alternatifs, bibliothèques, boîtes à outils et même des
implémentations de nœuds complets dans l'écosystème bitcoin. Ceux-ci
sont implémentés dans une variété de langages de programmation, offrant
aux programmeurs des interfaces natives dans leur langue préférée.

Les sections suivantes répertorient certaines des meilleures
bibliothèques, clients et kits d'outils, organisés par langages de
programmation.

## C/C++

[Bitcoin Core](https://github.com/bitcoin/bitcoin)  
L'implémentation de référence de bitcoin

[libbitcoin](https://github.com/libbitcoin/libbitcoin-system)  
Boîte à outils de développement C++ multiplateforme, nœud et
bibliothèque de consensus

[bitcoin explorer](https://github.com/libbitcoin/libbitcoin-explorer)  
L'outil de ligne de commande de Libbitcoin

[picocoin](https://github.com/jgarzik/picocoin)  
Bibliothèque cliente légère en langage C pour bitcoin par Jeff Garzik

## JavaScript

[bcoin](https://bcoin.io/)  
Une implémentation modulaire et évolutive de nœud complet avec API

[Bitcore](https://bitcore.io/)  
Noeud complet, API et bibliothèque par Bitpay

[BitcoinJS](https://github.com/bitcoinjs/bitcoinjs-lib)  
Une pure bibliothèque Bitcoin en JavaScript pour node.js et les
navigateurs

## Java

[bitcoinj](https://bitcoinj.github.io)  
Une bibliothèque client Java à nœud complet

====PHP [bitwasp/bitcoin](https://github.com/bit-wasp/bitcoin-php):: Une
bibliothèque Bitcoin en PHP et des projets associés

====Python
[python-bitcoinlib](https://github.com/petertodd/python-bitcoinlib)::
Une bibliothèque Bitcoin en Python dont une bibliothèque de consensus et
un nœud par Peter Todd [pycoin](https://github.com/richardkiss/pycoin)::
Une bibliothèque Bitcoin en Python par Richard Kiss
[pybitcointools](https://github.com/primal100/pybitcointools):: Une
fourche archivé de la bibliothèque Bitcoin en Python par Vitalik Buterin

## Ruby

[bitcoin-client](https://github.com/sinisterchipmunk/bitcoin-client)  
Un wrapper de bibliothèque Ruby pour l'API JSON-RPC

## Go

[btcd](https://github.com/btcsuite/btcd)  
Un client Bitcoin à nœud complet en langage Go

## Rust

[rust-bitcoin](https://github.com/rust-bitcoin/rust-bitcoin)  
Bibliothèque Bitcoin Rust pour la sérialisation, l'analyse et les appels
d'API

## C#

[NBitcoin](https://github.com/MetacoSA/NBitcoin)  
Bibliothèque Bitcoin complète pour le framework .NET

## Objective-C

[CoreBitcoin](https://github.com/oleganza/CoreBitcoin)  
Boîte à outils Bitcoin pour ObjC et Swift

De nombreuses autres bibliothèques existent dans une variété d'autres
langages de programmation et d'autres sont créées tout le temps.<span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span>

# Clés, Adresses

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span>Vous avez
peut-être entendu dire que le bitcoin est basé sur la *cryptographie*,
qui est une branche des mathématiques largement utilisée en sécurité
informatique. La cryptographie signifie "écriture secrète" en grec, mais
la science de la cryptographie englobe plus que la simple écriture
secrète, appelée cryptage. La cryptographie peut également être utilisée
pour prouver la connaissance d'un secret sans révéler ce secret
(signature numérique), ou prouver l'authenticité des données (empreinte
numérique). Ces types de preuves cryptographiques sont les outils
mathématiques essentiels au bitcoin et largement utilisés dans les
applications bitcoin. <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span>Ironiquement,
le cryptage n'est pas une partie importante du bitcoin, car ses
communications et ses données de transaction ne sont pas cryptées et ne
doivent être chiffrés pour protéger les fonds. Dans ce chapitre, nous
présenterons une partie de la cryptographie utilisée dans le bitcoin
pour contrôler la propriété des fonds, sous la forme de clés, d'adresses
et de portefeuilles.

# Présentation

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span> La propriété du bitcoin est établie par le
biais de *clés numériques*, *adresses Bitcoin* et *signatures
numériques*. Les clés numériques ne sont pas réellement stockées dans le
réseau, mais sont plutôt créées et stockées par les utilisateurs dans un
fichier, ou une simple base de données, appelée *wallet*. Les clés
numériques du portefeuille d'un utilisateur sont totalement
indépendantes du protocole Bitcoin et peuvent être générées et gérées
par le logiciel du portefeuille de l'utilisateur sans référence à la
chaîne de blocs ni accès à Internet. Les clés permettent de nombreuses
propriétés intéressantes du bitcoin, notamment la confiance et le
contrôle décentralisés, l'attestation de propriété et le modèle de
sécurité à l'épreuve de la cryptographie.

La plupart des transactions bitcoin nécessitent une signature numérique
valide à inclure dans la chaîne de blocs, qui ne peut être générée
qu'avec une clé secrète ; par conséquent, toute personne possédant une
copie de cette clé a le contrôle du bitcoin. <span
class="indexterm"></span> La signature numérique utilisée pour dépenser
des fonds est également appelée *témoin*, un terme utilisé en
cryptographie. Les données témoins dans une transaction bitcoin
témoignent de la véritable propriété des fonds dépensés.

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span>Les clés sont
fournies par paires constituées d'une clé privée (secrète) et une clé
publique. Considérez la clé publique comme similaire à un numéro de
compte bancaire et la clé privée comme similaire au code PIN secret, ou
à la signature d'un chèque, qui permet de contrôler le compte. Ces clés
numériques sont très rarement vues par les utilisateurs de bitcoin. Pour
la plupart, ils sont stockés dans le fichier du portefeuille et gérés
par le logiciel du portefeuille bitcoin.

Dans la partie paiement d'une transaction bitcoin, la clé publique du
destinataire est représentée par son empreinte numérique, appelée
*adresse Bitcoin*, qui est utilisée de la même manière que le nom du
bénéficiaire sur un chèque (c'est-à-dire "Payer à l'ordre de") . Dans la
plupart des cas, une adresse Bitcoin correspond et est générée à partir
d’une clé publique. Cependant, toutes les adresses Bitcoin ne
représentent pas des clés publiques ; ils peuvent également représenter
d'autres bénéficiaires tels que des scripts, comme nous le verrons plus
loin dans ce chapitre. De cette manière, les adresses Bitcoin font
abstraction du destinataire des fonds, ce qui rend les destinations de
transaction flexibles, similaires aux chèques papier : un instrument de
paiement unique qui peut être utilisé pour payer les comptes des
personnes, payer les comptes de l'entreprise, payer des factures ou
payer en espèces. L'adresse Bitcoin est la seule représentation des clés
que les utilisateurs verront régulièrement, car c'est la partie qu'ils
doivent partager avec le monde.

Tout d'abord, nous présenterons la cryptographie et expliquerons les
mathématiques utilisées dans le bitcoin. Ensuite, nous verrons comment
les clés sont générées, stockées et gérées. Nous passerons en revue les
différents formats de codage utilisés pour représenter les clés privées
et publiques, les adresses et les adresses de script. Enfin, nous nous
pencherons sur l'utilisation avancée des clés et des adresses : adresses
personnalisées, multisignatures, scripts et portefeuilles papier.

## Cryptographie à clé publique et cryptomonnaie

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>La cryptographie à clé publique a été inventée
dans les années 1970 et constitue une base mathématique pour
informatique et sécurité de l'information.

Depuis l'invention de la cryptographie à clé publique, plusieurs
fonctions mathématiques appropriées, telles que l'exponentiation des
nombres premiers et la multiplication des courbes elliptiques, ont été
découvertes. Ces fonctions mathématiques sont pratiquement
irréversibles, ce qui signifie qu'elles sont faciles à calculer dans un
sens et impossibles à calculer dans le sens opposé. Sur la base de ces
fonctions mathématiques, la cryptographie permet la création de secrets
numériques et de signatures numériques infalsifiables. Bitcoin utilise
la multiplication de courbes elliptiques comme base de sa cryptographie.

En bitcoin, nous utilisons la cryptographie à clé publique pour créer
une paire de clés qui contrôle l'accès au bitcoin. La paire de clés se
compose d'une clé privée et - dérivée de celle-ci - d'une clé publique
unique. La clé publique est utilisée pour recevoir des fonds et la clé
privée est utilisée pour signer des transactions afin de dépenser les
fonds.

Il existe une relation mathématique entre la clé publique et la clé
privée qui permet d'utiliser la clé privée pour générer des signatures
sur les messages. Ces signatures peuvent être validées par rapport à la
clé publique sans révéler la clé privée.

Lorsqu'il dépense des bitcoins, le propriétaire actuel de bitcoins
présente sa clé publique et une signature (différente à chaque fois,
mais créée à partir de la même clé privée) dans une transaction pour
dépenser ces bitcoins. Grâce à la présentation de la clé publique et de
la signature, tous les membres du réseau Bitcoin peuvent vérifier et
accepter la transaction comme valide, confirmant que la personne
transférant le bitcoin en était propriétaire au moment du transfert.

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span> Dans la plupart des implémentations de
portefeuille, les clés privées et publiques sont stockées ensemble sous
la forme d'une *paire de clés* pour plus de commodité. Cependant, la clé
publique peut être calculée à partir de la clé privée, de sorte qu'il
est également possible de ne stocker que la clé privée.

## Clés privées et publiques

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span> Un
portefeuille bitcoin contient une collection de paires de clés, chacune
composée d'une clé privée et d'une clé publique. La clé privée (k) est
un nombre, généralement choisi au hasard. A partir de la clé privée,
nous utilisons la multiplication par courbe elliptique, une fonction
cryptographique à sens unique, pour générer une clé publique (K). A
partir de la clé publique (K), nous utilisons une fonction de hachage
cryptographique unidirectionnelle pour générer une adresse Bitcoin (A).
Dans cette section, nous commencerons par générer la clé privée,
examinerons les mathématiques de la courbe elliptique utilisées pour la
transformer en clé publique, et enfin, générerons une adresse Bitcoin à
partir de la clé publique. La relation entre la clé privée, la clé
publique et l'adresse Bitcoin est indiquée dans
[figure\_title](#k_to_K_to_A).

<figure>
<img src="images/mbc2_0401.png" id="k_to_K_to_A"
alt="Clé privée, clé publique et adresse Bitcoin" />
<figcaption aria-hidden="true">Clé privée, clé publique et adresse
Bitcoin</figcaption>
</figure>

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span>Pourquoi la cryptographie asymétrique est-elle
utilisée dans le bitcoin ? Elle n'est pas utilisée pour "crypter"
(rendre secrètes) les transactions. Au contraire, la propriété utile de
la cryptographie asymétrique est la capacité à générer des *signatures
numériques*. Une clé privée peut être appliquée à l'empreinte numérique
d'une transaction pour produire une signature numérique. Cette signature
ne peut être produite que par une personne connaissant la clé privée.
Cependant, toute personne ayant accès à la clé publique et à l'empreinte
digitale de la transaction peut les utiliser pour *vérifier* la
signature. Cette propriété utile de la cryptographie asymétrique permet
à quiconque de vérifier chaque signature sur chaque transaction, tout en
garantissant que seuls les propriétaires de clés privées peuvent
produire des signatures valides.

## Clés privées

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>Une clé privée est simplement un nombre, choisi
au hasard . La propriété et le contrôle de la clé privée sont à la base
du contrôle de l'utilisateur sur tous les fonds associés à l'adresse
Bitcoin correspondante. La clé privée est utilisée pour créer des
signatures nécessaires pour dépenser des bitcoins en prouvant la
propriété des fonds utilisés dans une transaction. La clé privée doit
rester secrète à tout moment, car la révéler à des tiers équivaut à leur
donner le contrôle sur le bitcoin sécurisé par cette clé. La clé privée
doit également être sauvegardée et protégée contre toute perte
accidentelle, car si elle est perdue, elle ne peut pas être récupérée et
les fonds qu'elle garantit sont également perdus à jamais.

La clé privée bitcoin n'est qu'un nombre. Vous pouvez choisir vos clés
privées au hasard en utilisant simplement une pièce de monnaie, un
crayon et du papier : lancez une pièce 256 fois et vous avez les
chiffres binaires d'une clé privée aléatoire que vous pouvez utiliser
dans un portefeuille bitcoin. La clé publique peut alors être générée à
partir de la clé privée.

### Générer une clé privée à partir d'un nombre aléatoire

La première et la plus importante étape de la génération de clés
consiste à trouver une source sécurisée d'entropie ou de caractère
aléatoire. La création d'une clé bitcoin est essentiellement la même que
"Choisissez un nombre entre 1 et 2 <sup>256</sup> ". La méthode exacte
que vous utilisez pour choisir ce nombre n'a pas d'importance tant
qu'elle n'est pas prévisible ou reproductible. Le logiciel Bitcoin
utilise les générateurs de nombres aléatoires du système d'exploitation
sous-jacent pour produire 256 bits d'entropie (aléatoire).
Habituellement, le générateur de nombres aléatoires du système
d'exploitation est initialisé par une source humaine d'aléatoire, c'est
pourquoi il peut vous être demandé de remuer votre souris pendant
quelques secondes.

Plus précisément, la clé privée peut être n'importe quel nombre compris
entre `0` et `n - 1` inclus, où n est une constante (n = 1,1578 \*
10<sup>77</sup>, légèrement inférieure à 2<sup>256</sup>) définie comme
l'ordre de la courbe elliptique utilisée dans le bitcoin (voir [La
cryptographie à courbe elliptique expliquée](#elliptic_curve)). Pour
créer une telle clé, nous choisissons au hasard un nombre de 256 bits et
vérifions qu'il est inférieur à `n`. En termes de programmation, cela
est généralement réalisé en alimentant une plus grande chaîne de bits
aléatoires, collectés à partir d'une source aléatoire sécurisée par
cryptographie, dans l'algorithme de hachage SHA256, qui produira
commodément un nombre de 256 bits. Si le résultat est inférieur à `n`,
nous avons une clé privée appropriée. Sinon, nous réessayons simplement
avec un autre nombre aléatoire.

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span>N'écrivez pas
votre propre code pour créer un nombre aléatoire ou n’utilisez pas un
nombre aléatoire "simple" généré par votre langage de programmation.
Utilisez un générateur de nombres pseudo-aléatoires cryptographiquement
sécurisé (CSPRNG) avec une valeur d’amorçage provenant d'une source
d'entropie suffisante. Étudiez la documentation de la bibliothèque de
générateurs de nombres aléatoires que vous choisissez pour vous assurer
qu'elle est cryptographiquement sécurisée. La mise en œuvre correcte du
CSPRNG est essentielle à la sécurité des clés.

Ce qui suit est une clé privée générée aléatoirement (k) affichée au
format hexadécimal (256 bits affichés sous la forme de 64 chiffres
hexadécimaux, chacun de 4 bits) :

    1E99423A4ED27608A15A2616A2B0E9E52CED330AC530EDCC32C8FFC6A526AEDD

La taille de l'espace de clé privée de bitcoin, (2 <sup>256</sup>) est
un nombre insondable. Il est d'environ 10<sup>77</sup> en décimal. À
titre de comparaison, on estime que l'univers visible contient
10<sup>80</sup> atomes.

<span class="indexterm"></span>Pour générer une nouvelle clé avec le
client Bitcoin Core (voir [Bitcoin Core : La référence
d'implémentation](#ch03_bitcoin_client)), utilisez la commande
`getnewaddress`. Pour des raisons de sécurité, il affiche uniquement
l'adresse, pas la clé privée. Pour demander à `bitcoind` d'exposer la
clé privée, utilisez la commande `dumpprivkey`. La commande
`dumpprivkey` affiche la clé privée dans un format de somme de contrôle
Base58 appelé *Wallet Import Format* (WIF ou format d’importation de
portefeuille), que nous examinerons plus en détail dans [Formats de clé
privée](#priv_formats). Voici un exemple de génération et d'affichage
d'une clé privée à l'aide de ces deux commandes :

    $ bitcoin-cli getnewaddress
    1J7mdg5rbQyUHENYdx39WVWK7fsLpEoXZy
    $ bitcoin-cli dumpprivkey 1J7mdg5rbQyUHENYdx39WVWK7fsLpEoXZy
    KxFC1jmwwCoACiCAWZ3eXa96mBM6tb3TYzGmf6YwgdGWZgawvrtJ

La commande `dumpprivkey` ouvre le portefeuille et extrait la clé privée
qui a été générée par la commande `getnewaddress`. Il n'est pas possible
pour `bitcoind` de connaître la clé privée à partir de l'adresse à moins
qu'elles ne soient toutes deux stockées dans le portefeuille.

La commande `dumpprivkey` ne génère pas de clé privée à partir d'une
adresse, car cela est impossible. La commande révèle simplement la clé
privée qui est déjà connue du portefeuille et qui a été générée par la
commande `getnewaddress`.

Vous pouvez également utiliser l'outil de ligne de commande Bitcoin
Explorer (voir [???](#appdx_bx)) pour générer et afficher des clés
privées avec les commandes `seed`, `ec-new` et `ec-to-wif` :

    $ bx seed | bx ec-new | bx ec-to-wif
    5J3mBbAH58CpQ3Y5RNJpUKPE62SQ5tfcvU2JpbnkeyhfsYB1Jcn

## Clés publiques

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span>La clé publique
est calculée à partir de la clé privée en utilisant la multiplication
par courbe elliptique, qui est irréversible : *K* = *k* \* *G*, où *k*
est la clé privée, *G* est un point constant appelé *point générateur*
et *K* est la clé publique résultante. L'opération inverse, connue sous
le nom de "trouver le logarithme discret" - calculer *k* si vous
connaissez *K* - est aussi difficile que d'essayer toutes les valeurs
possibles de *k*, c'est-à-dire par une recherche par force brute. Avant
de montrer comment générer une clé publique à partir d'une clé privée,
examinons un peu plus en détail la cryptographie à courbe elliptique.

La multiplication de courbe elliptique est un type de fonction que les
cryptographes appellent une fonction « à sens unique » : elle est facile
à faire dans un sens (multiplication) et impossible à faire dans le sens
inverse (« division », ou trouver le logarithme discret). Le
propriétaire de la clé privée peut facilement créer la clé publique,
puis la partager avec le monde entier, sachant que personne ne peut
inverser la fonction et calculer la clé privée à partir de la clé
publique. Cette astuce mathématique devient la base de signatures
numériques infalsifiables et sécurisées qui prouvent la propriété des
fonds bitcoin.

## La cryptographie à courbe elliptique expliquée

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span> <span class="indexterm"></span> La
cryptographie à courbe elliptique est un type de cryptographie
asymétrique ou à clé publique basée sur le problème du logarithme
discret exprimé par addition et multiplication sur les points d'une
courbe elliptique.

[figure\_title](#ecc-curve) est un exemple de courbe elliptique,
similaire à celle utilisée par le bitcoin.

<figure>
<img src="images/mbc2_0402.png" id="ecc-curve"
alt="Une courbe elliptique" />
<figcaption aria-hidden="true">Une courbe elliptique</figcaption>
</figure>

Bitcoin utilise une courbe elliptique spécifique et un ensemble de
constantes mathématiques, telles que définies dans une norme appelée
`secp256k1`, établie par le National Institute of Standards and
Technology (NIST). La courbe `secp256k1` est définie par la fonction
suivante, qui produit une courbe elliptique :

ou

Parce que cette courbe est définie sur un champ fini d'ordre premier au
lieu de sur les nombres réels, elle ressemble à un motif de points
dispersés en deux dimensions, ce qui la rend difficile à visualiser.
Cependant, le calcul est identique à celui d'une courbe elliptique sur
des nombres réels. A titre d'exemple,
[figure\_title](#ecc-over-F17-math) montre la même courbe elliptique sur
un champ fini beaucoup plus petit d'ordre premier 17, montrant un motif
de points sur une grille. La courbe elliptique du bitcoin `secp256k1`
peut être considérée comme un motif beaucoup plus complexe de points sur
une grille insondable.

<figure>
<img src="images/mbc2_0403.png" id="ecc-over-F17-math"
alt="Cryptographie sur courbe elliptique : visualisation d&#39;une courbe elliptique sur F(p), avec p=17" />
<figcaption aria-hidden="true">Cryptographie sur courbe elliptique :
visualisation d'une courbe elliptique sur F(p), avec p=17</figcaption>
</figure>

Ainsi, par exemple, ce qui suit est un point P de coordonnées (x,y) qui
est un point sur la courbe `secp256k1` :

    P = (55066263022277343669578718895168534326250603453777594175500187360389116729240, 32670510020758816978083085130507043184471273380659243275938904335757337482424)

[example\_title](#example_4_1) montre comment vous pouvez vérifier cela
vous-même en utilisant Python :

    Python 3.4.0 (default, Mar 30 2014, 19:23:13)
    [GCC 4.2.1 Compatible Apple LLVM 5.1 (clang-503.0.38)] on darwin
    Type "help", "copyright", "credits" or "license" for more information.
    >>> p = 115792089237316195423570985008687907853269984665640564039457584007908834671663
    >>> x = 55066263022277343669578718895168534326250603453777594175500187360389116729240
    >>> y = 32670510020758816978083085130507043184471273380659243275938904335757337482424
    >>> (x ** 3 + 7 - y**2) % p
    0

Dans les mathématiques des courbes elliptiques, il existe un point
appelé le "point à l'infini", qui correspond à peu près au rôle de zéro.
Sur les ordinateurs, il est parfois représenté par x = y = 0 (ce qui ne
satisfait pas l'équation de la courbe elliptique, mais c'est un cas
séparé facile qui peut être vérifié).

Il existe également un opérateur +, appelé "addition", qui possède
certaines propriétés similaires à l'addition traditionnelle de nombres
réels apprise par les élèves du primaire. Étant donné deux points
P<sub>1</sub> et P<sub>2</sub> sur la courbe elliptique, il existe un
troisième point P<sub>3</sub> = P<sub>1</sub> + P<sub>2</sub>, également
sur la courbe elliptique.

Géométriquement, ce troisième point P<sub>3</sub> est calculé en traçant
une ligne entre P<sub>1</sub> et P<sub>2</sub>. Cette ligne coupera la
courbe elliptique exactement à un endroit supplémentaire. Appelons ce
point P<sub>3</sub> = (x, y). Renvoyé ensuite sur l'axe des x pour
obtenir P<sub>3</sub> = (x, –y).

Il y a quelques cas particuliers qui expliquent la nécessité du "point à
l'infini".

Si P<sub>1</sub> et P<sub>2</sub> sont le même point, la ligne "entre"
P<sub>1</sub> et P<sub>2</sub> doit s'étendre pour être la tangente sur
la courbe en ce point P<sub>1</sub>. Cette tangente coupera la courbe en
exactement un nouveau point. Vous pouvez utiliser des techniques de
calcul pour déterminer la pente de la ligne tangente. Ces techniques
fonctionnent curieusement, même si nous restreignons notre intérêt aux
points de la courbe à deux coordonnées entières !

Dans certains cas (par exemple, si P<sub>1</sub> et P<sub>2</sub> ont
les mêmes valeurs x mais des valeurs y différentes), la ligne entre
P<sub>1</sub> et P<sub>2</sub> sera exactement verticale, auquel cas
P<sub>3</sub> = "point à l'infini."

Si P<sub>1</sub> est le "point à l'infini", alors P<sub>1</sub> +
P<sub>2</sub> = P<sub>2</sub>. De même, si P<sub>2</sub> est le point à
l'infini, alors P<sub>1</sub> + P<sub>2</sub> = P<sub>1</sub>. Cela
montre comment le point à l'infini joue le rôle de zéro.

Il s'avère que + est associatif, ce qui signifie que (A + B) + C = A +
(B + C). Cela signifie que nous pouvons écrire A + B + C sans
parenthèses et sans ambiguïté.

Maintenant que nous avons défini l'addition, nous pouvons définir la
multiplication de la manière standard qui extensionne l'addition. Pour
un point P sur la courbe elliptique, si k est un nombre entier, alors kP
= P + P + P + … + P (k fois). Notez que k est parfois appelé un
"exposant" dans ce cas.<span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>

## Génération d'une clé publique

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span>En partant d'une
clé privée sous la forme d'un nombre généré aléatoirement *k*, nous la
multiplions par un point prédéterminé sur la courbe appelé *point
générateur* *G* pour produire un autre point ailleurs sur la courbe, qui
est la clé publique correspondante *K*. Le point générateur est spécifié
dans le cadre de la norme `secp256k1` et est toujours le même pour
toutes les clés en bitcoin :

où *k* est la clé privée, *G* est le point générateur et *K* est la clé
publique résultante, un point sur la courbe. Comme le point générateur
est toujours le même pour tous les utilisateurs de bitcoins, une clé
privée *k* multipliée par *G* donnera toujours la même clé publique *K*.
La relation entre *k* et *K* est fixe, mais ne peut être calculée que
dans un sens, de *k* vers *K*. C'est pourquoi une adresse Bitcoin
(dérivée de *K*) peut être partagée avec n'importe qui et ne révèle pas
la clé privée de l'utilisateur (*k*).

Une clé privée peut être convertie en clé publique, mais une clé
publique ne peut pas être reconvertie en clé privée car le calcul ne
fonctionne que dans un sens.

En implémentant la multiplication par courbe elliptique, nous prenons la
clé privée *k* générée précédemment et la multiplions avec le point
générateur G pour trouver la clé publique *K* :

    K = 1E99423A4ED27608A15A2616A2B0E9E52CED330AC530EDCC32C8FFC6A526AEDD * G

La clé publique *K* est définie comme un point `K = (x,y)` :

    K = (x, y)

    où,

    x = F028892BAD7ED57D2FB57BF33081D5CFCF6F9ED3D3D7F159C2E2FFF579DC341A
    y = 07CF33DA18BD734C600B96A72BBC4749D5141C90EC8AC328AE52DDFE2E505BDB

Pour visualiser la multiplication d'un point avec un nombre entier, nous
utiliserons la courbe elliptique plus simple sur des nombres réels -
rappelez-vous, le calcul est le même. Notre objectif est de trouver le
multiple *kG* du point générateur *G*, ce qui revient à ajouter *G* à
lui-même, *k* fois de suite. Dans les courbes elliptiques, l'ajout d'un
point à lui-même équivaut à tracer une ligne tangente sur le point et à
trouver à nouveau l'endroit où il coupe la courbe, puis à refléter ce
point sur l'axe des x.

[figure\_title](#ecc_illustrated) montre le processus de dérivation de
*G*, *2G*, *4G* et *8G* en tant qu'opération géométrique sur la courbe.

<span class="indexterm"></span>Bitcoin utilise la [bibliothèque C
optimisée secp256k1](https://github.com/bitcoin-core/secp256k1) pour
effectuer les calculs de la courbe elliptique.<span
class="indexterm"></span> <span class="indexterm"></span>

<figure>
<img src="images/mbc2_0404.png" id="ecc_illustrated"
alt="Cryptographie sur courbe elliptique : visualisation de la multiplication d&#39;un point G par un entier k sur une courbe elliptique" />
<figcaption aria-hidden="true">Cryptographie sur courbe elliptique :
visualisation de la multiplication d'un point G par un entier k sur une
courbe elliptique</figcaption>
</figure>

# Adresses Bitcoin

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span>Une adresse Bitcoin est une chaîne de chiffres
et de caractères qui peut être partagée avec toute personne souhaitant
vous envoyer de l'argent. Les adresses produites à partir de clés
publiques consistent en une chaîne de chiffres et de lettres commençant
par le chiffre "1". Voici un exemple d'adresse Bitcoin :

    1J7mdg5rbQyUHENYdx39WVWK7fsLpEoXZy

L'adresse Bitcoin est ce qui apparaît le plus souvent dans une
transaction en tant que "destinataire" des fonds. Si nous comparons une
transaction bitcoin à un chèque papier, l'adresse Bitcoin est le
bénéficiaire, c'est ce que nous écrivons sur la ligne après "Payer à
l'ordre de". Sur un chèque papier, ce bénéficiaire peut parfois être le
nom d'un titulaire de compte bancaire, mais peut également inclure des
sociétés, des institutions ou même des espèces. Étant donné que les
chèques papier n'ont pas besoin de spécifier un compte, mais utilisent
plutôt un nom abstrait en tant que destinataire des fonds, ce sont des
instruments de paiement très flexibles. Les transactions Bitcoin
utilisent une abstraction similaire, l'adresse Bitcoin, pour les rendre
très flexibles. Une adresse Bitcoin peut représenter le propriétaire
d'une paire de clés privée/publique, ou elle peut représenter autre
chose, comme un script de paiement, comme nous le verrons dans
[Pay-to-Script-Hash (P2SH)](#p2sh). Pour l'instant, examinons le cas
simple; une adresse Bitcoin qui représente et est dérivée d'une clé
publique.

<span class="indexterm"></span> <span class="indexterm"></span>L'adresse
Bitcoin est dérivée de la clé publique grâce à l'utilisation d'un
hachage cryptographique unidirectionnel. Un "algorithme de hachage" ou
simplement "algorithme de hachage" est une fonction à sens unique qui
produit une empreinte digitale ou un "hachage" (ou un "résultat de
hachage") d'une entrée de taille arbitraire. Les fonctions de hachage
cryptographiques sont largement utilisées dans le bitcoin : dans les
adresses Bitcoin, dans les adresses de script et dans l'algorithme de
minage de preuve de travail. Les algorithmes utilisés pour créer une
adresse Bitcoin à partir d'une clé publique sont le Secure Hash
Algorithm (SHA) et le RACE Integrity Primitives Evaluation Message
Digest (RIPEMD), ou plus précisément SHA256 et RIPEMD160.

En commençant par la clé publique *K*, nous calculons le hachage SHA256,
puis calculons le hachage RIPEMD160 du résultat, produisant un nombre de
160 bits (20 octets) :

où *K* est la clé publique et *A* est l'adresse Bitcoin résultante.

Une adresse Bitcoin n'est *pas* la même chose qu'une clé publique. Les
adresses Bitcoin sont dérivées d'une clé publique à l'aide d'une
fonction unidirectionnelle.

Les adresses Bitcoin sont presque toujours encodées en "Base58Check"
(voir [Encodage Base58 et Base58Check](#base58)), qui utilise 58
caractères (un système de numérotation Base58) et une somme de contrôle
pour faciliter la lisibilité humaine, éviter toute ambiguïté et protéger
contre les erreurs de transcription et de saisie d'adresse. Base58Check
est également utilisé de nombreuses autres manières dans Bitcoin, par
exemple lorsque chaque fois qu'un utilisateur a besoin de lire et de
transcrire correctement un numéro, tel qu'une adresse Bitcoin, une clé
privée, une clé cryptée ou un hachage de script. Dans la section
suivante, nous examinerons les mécanismes d'encodage et de décodage
Base58Check et les représentations qui en résultent.
[figure\_title](#pubkey_to_address) illustre la conversion d'une clé
publique en une adresse Bitcoin.

<figure>
<img src="images/mbc2_0405.png" id="pubkey_to_address"
alt="Clé publique vers adresse Bitcoin : conversion d&#39;une clé publique en adresse Bitcoin" />
<figcaption aria-hidden="true">Clé publique vers adresse Bitcoin :
conversion d'une clé publique en adresse Bitcoin</figcaption>
</figure>

## Encodage Base58 et Base58Check

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span> <span class="indexterm"></span> Afin de
représenter les nombres longs de manière compacte, en utilisant moins de
symboles, de nombreux systèmes informatiques utilisent des
représentations alphanumériques mixtes avec une base supérieure à 10.
Par exemple, alors que le système décimal traditionnel utilise les 10
chiffres de 0 à 9, le système hexadécimal utilise 16, avec les lettres A
à F comme six symboles supplémentaires. Un nombre représenté au format
hexadécimal est plus court que la représentation décimale équivalente.
Encore plus compacte, la représentation Base64 utilise 26 lettres
minuscules, 26 lettres majuscules, 10 chiffres et 2 caractères
supplémentaires tels que "`+`" et "/" pour transmettre des données
binaires sur des supports textuels tels que le courrier électronique.
Base64 est le plus couramment utilisé pour ajouter des pièces jointes
binaires aux e-mails. Base58 est un format de codage binaire basé sur du
texte développé pour être utilisé dans le bitcoin et utilisé dans de
nombreuses autres cryptomonnaies. Il offre un équilibre entre
représentation compacte, lisibilité et détection et prévention des
erreurs. Base58 est un sous-ensemble de Base64, utilisant des lettres et
des chiffres majuscules et minuscules, mais omettant certains caractères
qui sont fréquemment confondus et qui peuvent apparaître identiques
lorsqu'ils sont affichés dans certaines polices. Plus précisément,
Base58 est Base64 sans le 0 (chiffre zéro), O (o majuscule), l (L
inférieur), I (i majuscule) et les symboles "`+`" et "/". Ou, plus
simplement, c'est un ensemble de lettres minuscules et majuscules et de
chiffres sans les quatre (0, O, l, I) que nous venons de mentionner.
[simpara\_title](#base58alphabet) affiche l'alphabet Base58 complet.

Alphabet Base58 de .Bitcoin

    123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyz

Pour ajouter une sécurité supplémentaire contre les fautes de frappe ou
les erreurs de transcription, Base58Check est un format d'encodage
Base58, fréquemment utilisé dans le bitcoin, qui possède un code de
vérification des erreurs intégré. La somme de contrôle est constituée de
quatre octets supplémentaires ajoutés à la fin des données en cours de
codage. La somme de contrôle est dérivée du hachage des données codées
et peut donc être utilisée pour détecter et prévenir les erreurs de
transcription et de frappe. Lorsqu'il est présenté avec le code
Base58Check, le logiciel de décodage calcule la somme de contrôle des
données et la compare à la somme de contrôle incluse dans le code. Si
les deux ne correspondent pas, une erreur a été introduite et les
données Base58Check ne sont pas valides. Cela empêche qu'une adresse
Bitcoin mal saisie soit acceptée par le logiciel du portefeuille comme
destination valide, une erreur qui entraînerait autrement une perte de
fonds.

Pour convertir des données (un nombre) dans un format Base58Check, nous
ajoutons d'abord un préfixe aux données, appelé "octet de version", qui
sert à identifier facilement le type de données encodées. Par exemple,
dans le cas d'une adresse Bitcoin, le préfixe est zéro (0x00 en
hexadécimal), alors que le préfixe utilisé lors de l'encodage d'une clé
privée est 128 (0x80 en hexadécimal). Une liste des préfixes de version
courants est affichée dans [table\_title](#base58check_versions).

Ensuite, nous calculons la somme de contrôle "double-SHA", ce qui
signifie que nous appliquons l'algorithme de hachage SHA256 deux fois
sur le résultat précédent (préfixe et données):

    somme de contrôle (checksum) = SHA256(SHA256(préfixe+données))

À partir du hachage de 32 octets résultant (hachag-d’un-hachage), nous
ne prenons que les quatre premiers octets. Ces quatre octets servent de
code de contrôle d'erreur ou de somme de contrôle (checksum). La somme
de contrôle est concaténée (ajoutée) à la fin.

Le résultat est composé de trois éléments : un préfixe, les données et
une somme de contrôle. Ce résultat est encodé en utilisant l'alphabet
Base58 décrit précédemment. [simpara\_title](#base58check_encoding)
illustre le processus d'encodage Base58Check.

Encodage .Base58Check : un format Base58, versionné et à somme de
contrôle pour encoder sans ambiguïté les données bitcoin
![Base58CheckEncoding](:images/mbc2_0406.png)

En bitcoin, la plupart des données présentées à l'utilisateur sont
encodées en Base58Check pour les rendre compactes, faciles à lire et
faciles à détecter les erreurs. Le préfixe de version dans l'encodage
Base58Check est utilisé pour créer des formats faciles à distinguer qui,
lorsqu'ils sont encodés en Base58, contiennent des caractères
spécifiques au début de la charge utile encodée en Base58Check. Ces
caractères permettent aux humains d'identifier facilement le type de
données codées et comment les utiliser. C'est ce qui différencie, par
exemple, une adresse Bitcoin encodée en Base58Check qui commence par un
1 d'une clé privée WIF encodée en Base58Check qui commence par un 5.
Quelques exemples de préfixes de version et les caractères Base58
résultants sont affichés dans [table\_title](#base58check_versions).

<table>
<caption>Base58Check préfixe de version et exemples de résultats
encodés</caption>
<colgroup>
<col style="width: 33%" />
<col style="width: 33%" />
<col style="width: 33%" />
</colgroup>
<thead>
<tr class="header">
<th style="text-align: left;">Type</th>
<th style="text-align: left;">Préfixe de version (hex)</th>
<th style="text-align: left;">Préfixe de résultat Base58</th>
</tr>
</thead>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p>Adresse Bitcoin</p></td>
<td style="text-align: left;"><p>0x00</p></td>
<td style="text-align: left;"><p>1</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>Adresse de hachage
Pay-to-Script</p></td>
<td style="text-align: left;"><p>0x05</p></td>
<td style="text-align: left;"><p>3</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>Adresse de test Bitcoin</p></td>
<td style="text-align: left;"><p>0x6F</p></td>
<td style="text-align: left;"><p>m ou n</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>Clé privée WIF</p></td>
<td style="text-align: left;"><p>0x80</p></td>
<td style="text-align: left;"><p>5, K ou L</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>Clé privée cryptée BIP-38</p></td>
<td style="text-align: left;"><p>0x0142</p></td>
<td style="text-align: left;"><p>6P</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>Clé publique étendue BIP-32</p></td>
<td style="text-align: left;"><p>0x0488B21E</p></td>
<td style="text-align: left;"><p>xpub</p></td>
</tr>
</tbody>
</table>

Base58Check préfixe de version et exemples de résultats encodés

## Formats de clé

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span> Les clés privées et publiques peuvent être
représentées dans un certain nombre de formats différents. Ces
représentations codent tous le même nombre, même si elles semblent
différentes. Ces formats sont principalement utilisés pour faciliter la
lecture et la transcription des clés sans introduire d'erreurs.

### Formats de clé privée

<span class="indexterm"></span> <span class="indexterm"></span> La clé
privée peut être représentée dans un certain nombre de formats
différents, qui correspondent tous au même nombre de 256 bits.
[table\_title](#table_4-2) montre trois formats courants utilisés pour
représenter les clés privées. Différents formats sont utilisés dans
différentes circonstances. Les formats binaires hexadécimaux et bruts
sont utilisés en interne dans les logiciels et rarement montrés aux
utilisateurs. Le WIF est utilisé pour l'importation/exportation de clés
entre portefeuilles et souvent utilisé dans les représentations de code
QR (code-barres) des clés privées.

<table>
<caption>Représentations de clés privées (formats d'encodage)</caption>
<colgroup>
<col style="width: 33%" />
<col style="width: 33%" />
<col style="width: 33%" />
</colgroup>
<thead>
<tr class="header">
<th style="text-align: left;">Type</th>
<th style="text-align: left;">Préfixe</th>
<th style="text-align: left;">Description</th>
</tr>
</thead>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p>Brut</p></td>
<td style="text-align: left;"><p>Aucun</p></td>
<td style="text-align: left;"><p>32 octets</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>Hex</p></td>
<td style="text-align: left;"><p>Aucun</p></td>
<td style="text-align: left;"><p>64 chiffres hexadécimaux</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>WIF</p></td>
<td style="text-align: left;"><p>5</p></td>
<td style="text-align: left;"><p>Encodage Base58Check : Base58 avec
préfixe de version 0x80 et somme de contrôle de 4 octets</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>WIF compressé</p></td>
<td style="text-align: left;"><p>K ou L</p></td>
<td style="text-align: left;"><p>Comme ci-dessus, avec le suffixe ajouté
0x01 avant l'encodage</p></td>
</tr>
</tbody>
</table>

Représentations de clés privées (formats d'encodage)

[table\_title](#table_4-3) affiche la clé privée générée dans ces trois
formats.

<table>
<caption>Exemple : même clé, différents formats</caption>
<colgroup>
<col style="width: 50%" />
<col style="width: 50%" />
</colgroup>
<thead>
<tr class="header">
<th style="text-align: left;">Format</th>
<th style="text-align: left;">Clé privée</th>
</tr>
</thead>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p>Hex</p></td>
<td
style="text-align: left;"><p>1e99423a4ed27608a15a2616a2b0e9e52ced330ac530edcc32c8ffc6a526aedd</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>WIF</p></td>
<td
style="text-align: left;"><p>5J3mBbAH58CpQ3Y5RNJpUKPE62SQ5tfcvU2JpbnkeyhfsYB1Jcn</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>WIF compressé</p></td>
<td
style="text-align: left;"><p>KxFC1jmwwCoACiCAWZ3eXa96mBM6tb3TYzGmf6YwgdGWZgawvrtJ</p></td>
</tr>
</tbody>
</table>

Exemple : même clé, différents formats

Toutes ces représentations sont des manières différentes de montrer le
même numéro, la même clé privée. Ils semblent différents, mais n'importe
quel format peut facilement être converti en n'importe quel autre
format. Notez que le "binaire brut" n'est pas affiché dans
[table\_title](#table_4-3) car tout encodage à afficher ici ne serait,
par définition, pas une donnée binaire brute.

Nous utilisons la commande `wif-to-ec` de Bitcoin Explorer (voir
[???](#appdx_bx)) pour montrer que les deux clés WIF représentent la
même clé privée :

    $ bx wif-to-ec 5J3mBbAH58CpQ3Y5RNJpUKPE62SQ5tfcvU2JpbnkeyhfsYB1Jcn
    1e99423a4ed27608a15a2616a2b0e9e52ced330ac530edcc32c8ffc6a526aedd

    $ bx wif-to-ec KxFC1jmwwCoACiCAWZ3eXa96mBM6tb3TYzGmf6YwgdGWZgawvrtJ
    1e99423a4ed27608a15a2616a2b0e9e52ced330ac530edcc32c8ffc6a526aedd

### Décoder à partir de Base58Check

Les commandes de Bitcoin Explorer (voir [???](#appdx_bx)) facilitent
l'écriture de scripts interface système (ou shell) à l’aide
d'"opérateurs de transfert de données" en ligne de commande (ou
"command-line pipes") qui manipulent les clés, les adresses et les
transactions bitcoin. Vous pouvez utiliser Bitcoin Explorer pour décoder
le format Base58Check sur la ligne de commande.

Nous utilisons la commande `base58check-decode` pour décoder la clé non
compressée :

    $ bx base58check-decode 5J3mBbAH58CpQ3Y5RNJpUKPE62SQ5tfcvU2JpbnkeyhfsYB1Jcn
    wrapper
    {
        checksum 4286807748
        payload 1e99423a4ed27608a15a2616a2b0e9e52ced330ac530edcc32c8ffc6a526aedd
        version 128
    }

Le résultat contient la clé comme charge utile (payload), le préfixe de
version WIF 128 et une somme de contrôle (checksum).

Notez que la "charge utile" (ou "payload") de la clé compressée est
ajoutée avec le suffixe `01`, signalant que la clé publique dérivée doit
être compressée :

    $ bx base58check-decode KxFC1jmwwCoACiCAWZ3eXa96mBM6tb3TYzGmf6YwgdGWZgawvrtJ
    wrapper
    {
        checksum 2339607926
        payload 1e99423a4ed27608a15a2616a2b0e9e52ced330ac530edcc32c8ffc6a526aedd01
        version 128
    }

### Encoder de l'hex vers Base58Check

Pour encoder en Base58Check (l'inverse de la commande précédente), nous
utilisons la commande `base58check-encode` de Bitcoin Explorer (voir
[???](#appdx_bx)) et indiquez la clé privée hexadécimale, suivie du
préfixe de version WIF 128 :

    bx base58check-encode 1e99423a4ed27608a15a2616a2b0e9e52ced330ac530edcc32c8ffc6a526aedd --version 128
    5J3mBbAH58CpQ3Y5RNJpUKPE62SQ5tfcvU2JpbnkeyhfsYB1Jcn

### Encoder de l'hex (clé compressée) à Base58Check

Pour encoder dans Base58Check comme une clé privée "compressée" (voir
[Clés privées compressées](#comp_priv)), nous ajoutons le suffixe `01` à
la clé hexadécimale puis encodons comme dans la section précédente :

    $ bx base58check-encode 1e99423a4ed27608a15a2616a2b0e9e52ced330ac530edcc32c8ffc6a526aedd01 --version 128
    KxFC1jmwwCoACiCAWZ3eXa96mBM6tb3TYzGmf6YwgdGWZgawvrtJ

Le format compressé WIF résultant commence par un "K". Cela indique que
la clé privée à l'intérieur a un suffixe de "01" et sera utilisée pour
produire des clés publiques compressées uniquement (voir [Clés publiques
compressées](#comp_pub)).

### Formats de clé publique

<span class="indexterm"></span> <span class="indexterm"></span>Les clés
publiques sont également présentées de différentes manières,
généralement sous forme de clés publiques *compressées* ou *non
compressées*.

Comme nous l'avons vu précédemment, la clé publique est un point de la
courbe elliptique constitué d'un couple de coordonnées `(x,y)`. Il est
généralement présenté avec le préfixe `04` suivi de deux nombres de 256
bits : un pour la coordonnée *x* du point, l'autre pour la coordonnée
*y*. Le préfixe `04` est utilisé pour distinguer les clés publiques non
compressées des clés publiques compressées qui commencent par un `02` ou
un `03`.

Voici la clé publique générée par la clé privée que nous avons créée
précédemment, indiquée par les coordonnées `x` et `y` :

    x = F028892BAD7ED57D2FB57BF33081D5CFCF6F9ED3D3D7F159C2E2FFF579DC341A
    y = 07CF33DA18BD734C600B96A72BBC4749D5141C90EC8AC328AE52DDFE2E505BDB

Voici la même clé publique affichée sous la forme d'un nombre de
520 bits (130 chiffres hexadécimaux) avec le préfixe `04` suivi de `x`
puis des coordonnées `y`, sous la forme `04 x y` :

K = 04F028892BAD7ED57D2FB57BF33081D5CFCF6F9ED3D3D7F159C2E2FFF579DC341A↵
07CF33DA18BD734C600B96A72BBC4749D5141C90EC8AC328AE52DDFE2E505BDB

### Clés publiques compressées

<span class="indexterm"></span> <span class="indexterm"></span>Des clés
publiques compressées ont été introduites dans le bitcoin pour réduire
la taille des transactions et économiser de l'espace disque sur les
nœuds qui stockent la base de données de la blockchain Bitcoin. La
plupart des transactions incluent la clé publique, qui est nécessaire
pour valider les informations d'identification du propriétaire et
dépenser le bitcoin. Chaque clé publique nécessite 520 bits (préfixe +
x + y), ce qui, multiplié par plusieurs centaines de transactions par
bloc, soit des dizaines de milliers de transactions par jour, ajoute une
quantité importante de données à la chaîne de blocs.

Comme nous l'avons vu dans la section [Clés publiques](#pubkey), une clé
publique est un point (x,y) sur une courbe elliptique. Parce que la
courbe exprime une fonction mathématique, un point sur la courbe
représente une solution à l'équation et, par conséquent, si nous
connaissons la coordonnée *x*, nous pouvons calculer la coordonnée *y*
en résolvant l'équation y <sup>2</sup> mod p = (x <sup>3</sup> + 7) mod
p. Cela nous permet de stocker uniquement la coordonnée *x* du point de
clé publique, en omettant la coordonnée *y* et en réduisant la taille de
la clé et l'espace requis pour la stocker de 256 bits. Une réduction de
près de 50 % de la taille de chaque transaction représente une grande
quantité de données enregistrées au fil du temps !

Alors que les clés publiques non compressées ont un préfixe de `04`, les
clés publiques compressées commencent par un préfixe `02` ou `03`.
Regardons pourquoi il y a deux préfixes possibles : parce que le côté
gauche de l'équation est *y*<sup>2</sup>, la solution pour *y* est une
racine carrée, qui peut avoir une valeur positive ou négative.
Visuellement, cela signifie que la coordonnée *y* résultante peut être
au-dessus ou au-dessous de l'axe des x. Comme vous pouvez le voir sur le
graphique de la courbe elliptique en [figure\_title](#ecc-curve), la
courbe est symétrique, c'est-à-dire qu'elle est réfléchie comme par un
miroir à l'axe des abscisses. Ainsi, bien que nous puissions omettre la
coordonnée *y*, nous devons stocker le *signe* de *y* (positif ou
négatif) ; ou en d'autres termes, nous devons nous rappeler si c'était
au-dessus ou au-dessous de l'axe des x parce que chacune de ces options
représente un point différent et une clé publique différente. Lors du
calcul de la courbe elliptique en arithmétique binaire sur le corps fini
d'ordre premier p, la coordonnée *y* est paire ou impaire, ce qui
correspond au signe positif/négatif comme expliqué précédemment. Ainsi,
pour distinguer les deux valeurs possibles de *y*, on stocke une clé
publique compressée avec le préfixe `02` si le *y* est pair, et `03`
s'il est impair, permettant au logiciel de déduire correctement la
coordonnée *y* de la coordonnée *x* et de décompresser la clé publique
aux coordonnées complètes du point. La compression de clé publique est
illustrée dans [figure\_title](#pubkey_compression).

Voici la même clé publique générée précédemment, présentée sous la forme
d'une clé publique compressée stockée sur 264 bits (66 chiffres
hexadécimaux) avec le préfixe `03` indiquant que la coordonnée *y* est
impaire :

    K = 03F028892BAD7ED57D2FB57BF33081D5CFCF6F9ED3D3D7F159C2E2FFF579DC341A

Cette clé publique compressée correspond à la même clé privée,
c'est-à-dire qu'elle est générée à partir de la même clé privée.
Cependant, il semble différent de la clé publique non compressée. Plus
important encore, si nous convertissons cette clé publique compressée en
une adresse Bitcoin à l'aide de la fonction de double hachage
(`RIPEMD160(SHA256(K))`), cela produira une adresse Bitcoin
*différente*. Cela peut prêter à confusion, car cela signifie qu'une
seule clé privée peut produire une clé publique exprimée dans deux
formats différents (compressé et non compressé) qui produisent deux
adresses Bitcoin différentes. Cependant, la clé privée est identique
pour les deux adresses Bitcoin.

<figure>
<img src="images/mbc2_0407.png" id="pubkey_compression"
alt="Compression de clé publique" />
<figcaption aria-hidden="true">Compression de clé publique</figcaption>
</figure>

Les clés publiques compressées deviennent progressivement la valeur par
défaut pour les clients Bitcoin, ce qui a un impact significatif sur la
réduction de la taille des transactions et donc de la chaîne de blocs.
Cependant, tous les clients ne prennent pas encore en charge les clés
publiques compressées. Les clients plus récents qui prennent en charge
les clés publiques compressées doivent comptabiliser les transactions
des clients plus anciens qui ne prennent pas en charge les clés
publiques compressées. Ceci est particulièrement important lorsqu'une
application de portefeuille importe des clés privées à partir d'une
autre application de portefeuille bitcoin, car le nouveau portefeuille
doit analyser la chaîne de blocs pour trouver les transactions
correspondant à ces clés importées. Quelles adresses Bitcoin le
portefeuille Bitcoin doit-il rechercher ? Les adresses Bitcoin produites
par des clés publiques non compressées, ou les adresses Bitcoin
produites par des clés publiques compressées ? Les deux sont des
adresses Bitcoin valides et peuvent être signées par la clé privée, mais
ce sont des adresses différentes !

Pour résoudre ce problème, lorsque des clés privées sont exportées
depuis un portefeuille, le WIF utilisé pour les représenter est
implémenté différemment dans les nouveaux portefeuilles Bitcoin, pour
indiquer que ces clés privées ont été utilisées pour produire des clés
publiques *compressées* et donc des adresses Bitcoin *compressées*. Cela
permet au portefeuille importateur de faire la distinction entre les
clés privées provenant de portefeuilles plus anciens ou plus récents et
de rechercher dans la chaîne de blocs des transactions avec des adresses
Bitcoin correspondant respectivement aux clés publiques non compressées
ou compressées. Voyons comment cela fonctionne plus en détail, dans la
section suivante.

### Clés privées compressées

<span class="indexterm"></span> <span
class="indexterm"></span>Ironiquement, le terme "clé privée compressée"
est un abus de langage, car lorsqu'une clé privée est exportée au format
WIF compressé, elle est en fait un octet *plus long* qu'une clé privée
"non compressée". C'est parce que la clé privée a un suffixe d'un octet
ajouté (affiché comme 01 en hexadécimal dans
[table\_title](#table_4-4)), ce qui signifie que la clé privée provient
d'un portefeuille plus récent et ne doit être utilisée que pour produire
des clés publiques compressées. Les clés privées ne sont pas elles-mêmes
compressées et ne peuvent pas être compressées. Le terme "clé privée
compressée" signifie en réalité "clé privée à partir de laquelle seules
les clés publiques compressées doivent être dérivées", tandis que "clé
privée non compressée" signifie en réalité "clé privée à partir de
laquelle seules les clés publiques non compressées doivent être
dérivées". Vous devez uniquement faire référence au format d'exportation
en tant que "WIF-compressé" ou "WIF" et ne pas faire référence à la clé
privée elle-même en tant que "compressée" pour éviter toute confusion
supplémentaire.

[table\_title](#table_4-4) affiche la même clé, encodée aux formats WIF
et WIF compressé.

<table>
<caption>Exemple : même clé, différents formats</caption>
<colgroup>
<col style="width: 50%" />
<col style="width: 50%" />
</colgroup>
<thead>
<tr class="header">
<th style="text-align: left;">Format</th>
<th style="text-align: left;">Clé privée</th>
</tr>
</thead>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p>Hex</p></td>
<td
style="text-align: left;"><p>1E99423A4ED27608A15A2616A2B0E9E52CED330AC530EDCC32C8FFC6A526AEDD</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>WIF</p></td>
<td
style="text-align: left;"><p>5J3mBbAH58CpQ3Y5RNJpUKPE62SQ5tfcvU2JpbnkeyhfsYB1Jcn</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>Hex-compressé</p></td>
<td
style="text-align: left;"><p>1E99423A4ED27608A15A2616A2B0E9E52CED330AC530EDCC32C8FFC6A526AEDD01</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>WIF compressé</p></td>
<td
style="text-align: left;"><p>KxFC1jmwwCoACiCAWZ3eXa96mBM6tb3TYzGmf6YwgdGWZgawvrtJ</p></td>
</tr>
</tbody>
</table>

Exemple : même clé, différents formats

Notez que le format de clé privée compressée en hexadécimal a un octet
supplémentaire à la fin (01 en hexadécimal). Bien que le préfixe de
version Base58Check soit le même (0x80) pour les formats WIF et WIF
compressés, l'ajout d'un octet à la fin du numéro fait passer le premier
caractère de l'encodage Base58 de 5 à *K* ou *L* . Considérez cela comme
l'équivalent Base58 de la différence de codage décimal entre le nombre
100 et le nombre 99. Alors que 100 est un chiffre plus long que 99, il a
également un préfixe de 1 au lieu d'un préfixe de 9. Lorsque la longueur
change, il affecte le préfixe. En Base58, le préfixe 5 se transforme en
*K* ou *L* lorsque la longueur du nombre augmente d'un octet.

N'oubliez pas que ces formats ne sont *pas* utilisés de manière
interchangeable. Dans un portefeuille plus récent qui implémente des
clés publiques compressées, les clés privées ne seront exportées qu'au
format WIF compressé (avec un préfixe *K* ou *L*). Si le portefeuille
est une implémentation plus ancienne et n'utilise pas de clés publiques
compressées, les clés privées ne seront exportées qu'au format WIF (avec
un préfixe 5). Le but ici est de signaler au portefeuille qui importe
ces clés privées s'il doit rechercher dans la blockchain des clés et des
adresses publiques compressées ou non.

Si un portefeuille bitcoin est capable d'implémenter des clés publiques
compressées, il les utilisera dans toutes les transactions. Les clés
privées du portefeuille seront utilisées pour dériver les points de clé
publique sur la courbe, qui seront compressés. Les clés publiques
compressées seront utilisées pour produire des adresses Bitcoin et
celles-ci seront utilisées dans les transactions. Lors de l'exportation
de clés privées à partir d'un nouveau portefeuille qui implémente des
clés publiques compressées, le WIF est modifié, avec l'ajout d'un
suffixe d'un octet `01` à la clé privée. La clé privée encodée en
Base58Check qui en résulte est appelée "WIF compressé" et commence par
la lettre *K* ou *L*, au lieu de commencer par "5" comme c'est le cas
avec les clés encodées en WIF (non compressées) des portefeuilles plus
anciens.

"Clés privées compressées" est un terme impropre ! Ils ne sont pas
compressés ; au lieu de cela, WIF-compressé signifie que les clés ne
doivent être utilisées que pour dériver des clés publiques compressées
et leurs adresses Bitcoin correspondantes. Ironiquement, une clé privée
codée "compressée en WIF" est plus longue d'un octet car elle a le
suffixe `01` ajouté pour la distinguer d'une clé "non compressée".<span
class="indexterm"></span> <span class="indexterm"></span>

# Implémentation des clés et des adresses dans C++

Regardons le processus complet de création d'une adresse Bitcoin, d'une
clé privée, à une clé publique (un point sur la courbe elliptique), à
une adresse à hachage double, et enfin, l'encodage Base58Check. Le code
C++ dans [example\_title](#addr_example) montre le processus complet
étape par étape, de la clé privée à l'adresse Bitcoin encodée en
Base58Check. L'exemple de code utilise la bibliothèque libbitcoin
introduite dans [Clients, bibliothèques et boîtes à outils
alternatifs](#alt_libraries) pour certaines fonctions d'assistance.

    #include <bitcoin/bitcoin.hpp>

    int main()
    {
        // Private secret key string as base16
        bc::ec_secret decoded;
        bc::decode_base16(decoded,
            "038109007313a5807b2eccc082c8c3fbb988a973cacf1a7df9ce725c31b14776");

        bc::wallet::ec_private secret(
            decoded, bc::wallet::ec_private::mainnet_p2kh);

        // Get public key.
        bc::wallet::ec_public public_key(secret);
        std::cout << "Public key: " << public_key.encoded() << std::endl;

        // Create Bitcoin address.
        // Normally you can use:
        //    bc::wallet::payment_address payaddr =
        //        public_key.to_payment_address(
        //            bc::wallet::ec_public::mainnet_p2kh);
        //  const std::string address = payaddr.encoded();

        // Compute hash of public key for P2PKH address.
        bc::data_chunk public_key_data;
        public_key.to_data(public_key_data);
        const auto hash = bc::bitcoin_short_hash(public_key_data);

        bc::data_chunk unencoded_address;
        // Reserve 25 bytes
        //   [ version:1  ]
        //   [ hash:20    ]
        //   [ checksum:4 ]
        unencoded_address.reserve(25);
        // Version byte, 0 is normal BTC address (P2PKH).
        unencoded_address.push_back(0);
        // Hash data
        bc::extend_data(unencoded_address, hash);
        // Checksum is computed by hashing data, and adding 4 bytes from hash.
        bc::append_checksum(unencoded_address);
        // Finally we must encode the result in Bitcoin's base58 encoding.
        assert(unencoded_address.size() == 25);
        const std::string address = bc::encode_base58(unencoded_address);

        std::cout << "Address: " << address << std::endl;
        return 0;
    }

Le code utilise une clé privée prédéfinie pour produire la même adresse
Bitcoin à chaque exécution, comme indiqué dans
[example\_title](#addr_example_run).<span class="indexterm"></span>
<span class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>

    # Compiler le code addr.cpp
    $ g++ -o addr addr.cpp -std=c++11 $(pkg-config --cflags --libs libbitcoin)
    # Lancer l&#39;exécutable addr
    $ ./addr
    Public key: 0202a406624211f2abbdc68da3df929f938c3399dd79fac1b51b0e4ad1d26a47aa
    Address: 1PRTTaJesdNovgne6Ehcdu1fpEdX7913CK

Le code dans [example\_title](#addr_example_run) produit une adresse
Bitcoin (`1PRTT…`) à partir d'une clé publique *compressée* (voir [Clés
publiques compressées](#comp_pub)). Si vous utilisiez la clé publique
non compressée à la place, cela produirait une adresse Bitcoin
différente (`14K1y…`).

# Implémenter des clés et des adresses en Python

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> La bibliothèque
bitcoin la plus complète en Python est
[pybitcointools](https://github.com/vbuterin/pybitcointools) par Vitalik
Buterin. Dans [example\_title](#key-to-address_script), nous utilisons
la bibliothèque pybitcointools (importée en tant que "bitcoin") pour
générer et afficher des clés et des adresses dans différents formats.

    import bitcoin

    # Generate a random private key
    valid_private_key = False
    while not valid_private_key:
        private_key = bitcoin.random_key()
        decoded_private_key = bitcoin.decode_privkey(private_key, 'hex')
        valid_private_key =  0 < decoded_private_key < bitcoin.N

    print "Private Key (hex) is: ", private_key
    print "Private Key (decimal) is: ", decoded_private_key

    # Convert private key to WIF format
    wif_encoded_private_key = bitcoin.encode_privkey(decoded_private_key, 'wif')
    print "Private Key (WIF) is: ", wif_encoded_private_key

    # Add suffix "01" to indicate a compressed private key
    compressed_private_key = private_key + '01'
    print "Private Key Compressed (hex) is: ", compressed_private_key

    # Generate a WIF format from the compressed private key (WIF-compressed)
    wif_compressed_private_key = bitcoin.encode_privkey(
        bitcoin.decode_privkey(compressed_private_key, 'hex'), 'wif')
    print "Private Key (WIF-Compressed) is: ", wif_compressed_private_key

    # Multiply the EC generator point G with the private key to get a public key point
    public_key = bitcoin.fast_multiply(bitcoin.G, decoded_private_key)
    print "Public Key (x,y) coordinates is:", public_key

    # Encode as hex, prefix 04
    hex_encoded_public_key = bitcoin.encode_pubkey(public_key,'hex')
    print "Public Key (hex) is:", hex_encoded_public_key

    # Compress public key, adjust prefix depending on whether y is even or odd
    (public_key_x, public_key_y) = public_key
    if (public_key_y % 2) == 0:
        compressed_prefix = '02'
    else:
        compressed_prefix = '03'
    hex_compressed_public_key = compressed_prefix + bitcoin.encode(public_key_x, 16)
    print "Compressed Public Key (hex) is:", hex_compressed_public_key

    # Generate bitcoin address from public key
    print "Bitcoin Address (b58check) is:", bitcoin.pubkey_to_address(public_key)

    # Generate compressed bitcoin address from compressed public key
    print "Compressed Bitcoin Address (b58check) is:", \
        bitcoin.pubkey_to_address(hex_compressed_public_key)

[example\_title](#key-to-address_script_run) affiche la sortie de
l'exécution de ce code.

$ python key-to-address-ecc-example.py Private Key (hex) is:
3aba4162c7251c891207b747840551a71939b0de081f85c4e44cf7c13e41daa6 Private
Key (decimal) is:
26563230048437957592232553826663696440606756685920117476832299673293013768870
Private Key (WIF) is:
5JG9hT3beGTJuUAmCQEmNaxAuMacCTfXuw1R3FCXig23RQHMr4K Private Key
Compressed (hex) is:
3aba4162c7251c891207b747840551a71939b0de081f85c4e44cf7c13e41daa601
Private Key (WIF-Compressed) is:
KyBsPXxTuVD82av65KZkrGrWi5qLMah5SdNq6uftawDbgKa2wv6S Public Key (x,y)
coordinates is:
(41637322786646325214887832269588396900663353932545912953362782457239403430124L,
16388935128781238405526710466724741593761085120864331449066658622400339362166L)
Public Key (hex) is:
045c0de3b9c8ab18dd04e3511243ec2952002dbfadc864b9628910169d9b9b00ec↵
243bcefdd4347074d44bd7356d6a53c495737dd96295e2a9374bf5f02ebfc176
Compressed Public Key (hex) is:
025c0de3b9c8ab18dd04e3511243ec2952002dbfadc864b9628910169d9b9b00ec
Bitcoin Address (b58check) is: 1thMirt546nngXqyPEz532S8fLwbozud8
Compressed Bitcoin Address (b58check) is:
14cxpo3MBCYYWCgF74SWTdcmxipnGUsPw3

[example\_title](#ec_math) est un autre exemple, utilisant la
bibliothèque Python ECDSA pour les mathématiques de la courbe elliptique
et sans utiliser de bibliothèques bitcoin spécialisées.

    import ecdsa
    import os
    from ecdsa.util import string_to_number, number_to_string

    # secp256k1, http://www.oid-info.com/get/1.3.132.0.10
    _p = 0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFFFFFC2FL
    _r = 0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEBAAEDCE6AF48A03BBFD25E8CD0364141L
    _b = 0x0000000000000000000000000000000000000000000000000000000000000007L
    _a = 0x0000000000000000000000000000000000000000000000000000000000000000L
    _Gx = 0x79BE667EF9DCBBAC55A06295CE870B07029BFCDB2DCE28D959F2815B16F81798L
    _Gy = 0x483ada7726a3c4655da4fbfc0e1108a8fd17b448a68554199c47d08ffb10d4b8L
    curve_secp256k1 = ecdsa.ellipticcurve.CurveFp(_p, _a, _b)
    generator_secp256k1 = ecdsa.ellipticcurve.Point(curve_secp256k1, _Gx, _Gy, _r)
    oid_secp256k1 = (1, 3, 132, 0, 10)
    SECP256k1 = ecdsa.curves.Curve("SECP256k1", curve_secp256k1, generator_secp256k1, oid_secp256k1)
    ec_order = _r

    curve = curve_secp256k1
    generator = generator_secp256k1

    def random_secret():
        convert_to_int = lambda array: int("".join(array).encode("hex"), 16)

        # Collect 256 bits of random data from the OS's cryptographically secure random generator
        byte_array = os.urandom(32)

        return convert_to_int(byte_array)

    def get_point_pubkey(point):
        if point.y() & 1:
            key = '03' + '%064x' % point.x()
        else:
            key = '02' + '%064x' % point.x()
        return key.decode('hex')

    def get_point_pubkey_uncompressed(point):
        key = '04' + \
              '%064x' % point.x() + \
              '%064x' % point.y()
        return key.decode('hex')


    # Generate a new private key.
    secret = random_secret()
    print "Secret: ", secret

    # Get the public key point.
    point = secret * generator
    print "EC point:", point

    print "BTC public key:", get_point_pubkey(point).encode("hex")

    # Given the point (x, y) we can create the object using:
    point1 = ecdsa.ellipticcurve.Point(curve, point.x(), point.y(), ec_order)
    assert point1 == point

[example\_title](#ec_math_run) affiche la sortie produite en exécutant
ce script.

[example\_title](#ec_math) <span class="indexterm"></span> <span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>utilise `os.urandom`, qui reflète un générateur
de nombres aléatoires cryptographiquement sécurisé (CSRNG) fourni par le
système d'exploitation sous-jacent. Attention : Selon le système
d'exploitation, `os.urandom` peut *ne pas* être implémenté avec une
sécurité suffisante ou correctement amorcé et peut *ne pas* être
approprié pour générer des clés bitcoin de qualité production.<span
class="indexterm"></span> <span class="indexterm"></span>

    # Installer le gestionnaire de packages Python PIP
    $ sudo apt-get install python-pip
    # Installer la bibliothèque Python ECDSA
    $ sudo pip install ecdsa
    # Exécuter le script
    $ python ec-math.py
    Secret:  38090835015954358862481132628887443905906204995912378278060168703580660294000
    EC point: (70048853531867179489857750497606966272382583471322935454624595540007269312627, 105262206478686743191060800263479589329920209527285803935736021686045542353380)
    BTC public key: 029ade3effb0a67d5c8609850d797366af428f4a0d5194cb221d807770a1522873

# Clés et adresses avancées

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span>Dans les sections suivantes, nous examinerons
les formes avancées de clés et d'adresses, telles que les clés privées
cryptées, les adresses de script et des multisignatures, les adresses
personnalisées, et les portefeuilles en papier.

## Pay-to-Script Hash (P2SH) et adresses multisig

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>Comme nous le savons, les adresses Bitcoin
traditionnelles commencent par le chiffre "1" et sont dérivées de la clé
publique, qui est dérivé de la clé privée. Bien que n'importe qui puisse
envoyer des bitcoins à une adresse "1", ce bitcoin ne peut être dépensé
qu'en présentant la signature de la clé privée et la clé publique
correspondantes.

<span class="indexterm"></span> <span class="indexterm"></span>Les
adresses Bitcoin qui commencent par le chiffre "3" sont des adresses
Pay-to-Script Hash (P2SH ou hachage de paiement-à-script), parfois
appelées à tort adresses multisig ou adresses multisignatures. Ils
désignent le bénéficiaire d'une transaction bitcoin comme le hachage
d'un script, au lieu du propriétaire d'une clé publique. La
fonctionnalité a été introduite en janvier 2012 avec BIP-16 (voir
[???](#appdxbitcoinimpproposals)), et est largement adopté car il offre
la possibilité d'ajouter des fonctionnalités à l'adresse elle-même.
Contrairement aux transactions qui "envoient" des fonds aux adresses
Bitcoin traditionnelles "1", également connues sous le nom de hachage de
clé publique (P2PKH), les fonds envoyés aux adresses "3" nécessitent
quelque chose de plus que la présentation d'une clé publique et une
signature de clé privée comme preuve de propriété. Les exigences sont
désignées au moment de la création de l'adresse, dans le script, et
toutes les entrées de cette adresse seront encombrées des mêmes
exigences.

Une adresse P2SH est créée à partir d'un script de transaction, qui
définit qui peut dépenser une sortie de transaction (pour plus de
détails, voir [Pay-to-Script-Hash (P2SH)](#p2sh)). L'encodage d'une
adresse P2SH consiste à utiliser la même fonction de double hachage que
celle utilisée lors de la création d'une adresse Bitcoin, appliquée
uniquement sur le script à la place de la clé publique :

    hachage de script = RIPEMD160(SHA256(script))

Le "hachage de script" résultant est encodé avec Base58Check avec un
préfixe de version de 5, ce qui donne une adresse encodée commençant par
un `3`. Un exemple d'adresse P2SH est
`3F6i6kwkevjR7AsAd4te2YB2zZyASEm1HM`, qui peut être dérivée à l'aide des
commandes Bitcoin Explorer `script-encode`, `sha256`, `ripemd160` et
`base58check-encode` (voir [???](#appdx_bx)) comme suit :

    $ echo \
    'DUP HASH160 [89abcdefabbaabbaabbaabbaabbaabbaabbaabba] EQUALVERIFY CHECKSIG' > script
    $ bx script-encode < script | bx sha256 | bx ripemd160 \
    | bx base58check-encode --version 5
    3F6i6kwkevjR7AsAd4te2YB2zZyASEm1HM

P2SH n'est pas nécessairement la même chose qu'une transaction standard
multisignature. Une adresse P2SH représente *le plus souvent* un script
multi-signatures, mais elle peut également représenter un script codant
d'autres types de transactions.

### Adresses multisignatures et P2SH

Actuellement, l'implémentation la plus courante de la fonction P2SH est
le script d'adresse multisignature. Comme son nom l'indique, le script
sous-jacent nécessite un nombre minimum de signatures pour prouver la
propriété et donc dépenser des fonds. La fonctionnalité de
multisignature bitcoin est conçue pour exiger M signatures (également
appelées «seuil») à partir d'un total de N clés, appelées multisig
M-de-N, où M est égal ou inférieur à N. Par exemple , Bob le
propriétaire du café de [Introduction](#ch01_intro_what_is_bitcoin)
pourrait utiliser une adresse multisignature nécessitant 1 sur 2
signatures d'une clé lui appartenant et d'une clé appartenant à son ou
sa conjointe, garantissant que l'un ou l'autre pourrait signer pour
passer une sortie de transaction verrouillée à cette adresse. Cela
ressemblerait à un «compte conjoint» tel qu'il est mis en œuvre dans les
banques traditionnelles où l'un ou l'autre des conjoints peut dépenser
avec une seule signature. Gopesh,<span class="indexterm"></span> <span
class="indexterm"></span> le concepteur Web payé par Bob pour créer un
site Web, pourrait avoir une adresse multisignature 2 sur 3 pour son
entreprise qui garantit qu'aucun fonds ne peut être dépensé à moins
qu'au moins deux des partenaires commerciaux ne signent une transaction.

Nous explorerons comment créer des transactions qui dépensent des fonds
à partir d'adresses P2SH (et multisignatures) dans
[Opérations](#transactions).

## Adresses personnalisées

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span> <span class="indexterm"></span>Les adresses
personnalisées sont des adresses Bitcoin valides qui contiennent des
messages lisibles par l'homme. Par exemple,
`1LoveBPzzD72PUXLzCkYAtGFYmK5vYNR33` est une adresse valide qui contient
les lettres formant le mot "Love" comme les quatre premières lettres
Base58. Les adresses personnalisées nécessitent de générer et de tester
des milliards de clés privées candidates, jusqu'à ce qu'une adresse
Bitcoin avec le modèle souhaité soit trouvée. Bien qu'il y ait quelques
optimisations dans l'algorithme de génération de vanité, le processus
consiste essentiellement à choisir une clé privée au hasard, à dériver
la clé publique, à dériver l'adresse Bitcoin et à vérifier si elle
correspond au modèle de vanité souhaité, en répétant des milliards de
fois jusqu'à ce qu'un correspondance est trouvée.

Une fois qu'une adresse personnalisée correspondant au modèle souhaité
est trouvée, la clé privée dont elle est dérivée peut être utilisée par
le propriétaire pour dépenser des bitcoins exactement de la même manière
que n'importe quelle autre adresse. Les adresses personnalisées ne sont
ni moins ni plus sécurisées que toute autre adresse. Ils dépendent de la
même cryptographie à courbe elliptique (ECC) et SHA que toute autre
adresse. Vous ne pouvez pas plus facilement trouver la clé privée d'une
adresse commençant par un modèle de vanité que vous ne le pouvez de
n'importe quelle autre adresse.

Dans [Introduction](#ch01_intro_what_is_bitcoin), nous avons présenté
Eugenia, directrice d'une association caritative pour enfants opérant
aux Philippines. Disons qu'Eugenia organise une collecte de fonds en
bitcoins et souhaite utiliser une adresse personnalisée Bitcoin pour
faire connaître la collecte de fonds. Eugenia créera une adresse de
vanité qui commence par "1Kids" pour promouvoir la collecte de fonds
caritative pour les enfants. Voyons comment cette adresse personnalisée
sera créée et ce que cela signifie pour la sécurité de l'association
caritative d'Eugenia.<span class="indexterm"></span> <span
class="indexterm"></span> <span class="indexterm"></span>

### Génération d'adresses personnalisées

Il est important de réaliser qu'une adresse Bitcoin est simplement un
nombre représenté par des symboles dans l'alphabet Base58. La recherche
d'un modèle comme "1Kids" peut être considérée comme la recherche d'une
adresse comprise entre `1Kids1111111111111111111111111111` et
`1Kidszzzzzzzzzzzzzzzzzzzzzzzzzz`. Il y a environ 58 <sup>29</sup>
(environ 1,4 \* 10 <sup>51</sup> ) adresses dans cette plage, toutes
commençant par "1Kids". [table\_title](#table_4-11) affiche la plage
d'adresses qui ont le préfixe 1Kids.

<table>
<caption>La plage d'adresses personnalisées (ou de vanités) commençant
par "1Kids"</caption>
<colgroup>
<col style="width: 50%" />
<col style="width: 50%" />
</colgroup>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p><strong>De</strong></p></td>
<td
style="text-align: left;"><p><code>1Kids11111111111111111111111111111</code></p></td>
</tr>
<tr class="even">
<td style="text-align: left;"></td>
<td
style="text-align: left;"><p><code>1Kids11111111111111111111111111112</code></p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"></td>
<td
style="text-align: left;"><p><code>1Kids11111111111111111111111111113</code></p></td>
</tr>
<tr class="even">
<td style="text-align: left;"></td>
<td style="text-align: left;"><p><code>…</code></p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><strong>À</strong></p></td>
<td
style="text-align: left;"><p><code>1Kidszzzzzzzzzzzzzzzzzzzzzzzzzzzzz</code></p></td>
</tr>
</tbody>
</table>

La plage d'adresses personnalisées (ou de vanités) commençant par
"1Kids"

Regardons le modèle "1Kids" comme un nombre et voyons à quelle fréquence
nous pourrions trouver ce modèle dans une adresse Bitcoin (voir
[table\_title](#table_4-12)). Un ordinateur de bureau moyen, sans aucun
matériel spécialisé, peut rechercher environ 100 000 clés par seconde.

<table>
<caption>La fréquence d'un modèle de vanité (1KidsCharity) et le temps
de recherche moyen sur un PC de bureau</caption>
<colgroup>
<col style="width: 25%" />
<col style="width: 25%" />
<col style="width: 25%" />
<col style="width: 25%" />
</colgroup>
<thead>
<tr class="header">
<th style="text-align: left;">Longueur</th>
<th style="text-align: left;">Motif</th>
<th style="text-align: left;">Fréquence</th>
<th style="text-align: left;">Temps de recherche moyen</th>
</tr>
</thead>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p>1</p></td>
<td style="text-align: left;"><p>1K</p></td>
<td style="text-align: left;"><p>1 sur 58 touches</p></td>
<td style="text-align: left;"><p>&lt; 1 millisecondes</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>2</p></td>
<td style="text-align: left;"><p>1Ki</p></td>
<td style="text-align: left;"><p>1 sur 3 364</p></td>
<td style="text-align: left;"><p>50 millisecondes</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>3</p></td>
<td style="text-align: left;"><p>1Kid</p></td>
<td style="text-align: left;"><p>1 sur 195 000</p></td>
<td style="text-align: left;"><p>&lt; 2 secondes</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>4</p></td>
<td style="text-align: left;"><p>1Kids</p></td>
<td style="text-align: left;"><p>1 sur 11 millions</p></td>
<td style="text-align: left;"><p>1 minute</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>5</p></td>
<td style="text-align: left;"><p>1KidsC</p></td>
<td style="text-align: left;"><p>1 sur 656 millions</p></td>
<td style="text-align: left;"><p>1 heure</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>6</p></td>
<td style="text-align: left;"><p>1KidsCh</p></td>
<td style="text-align: left;"><p>1 sur 38 milliards</p></td>
<td style="text-align: left;"><p>2 jours</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>7</p></td>
<td style="text-align: left;"><p>1KidsCha</p></td>
<td style="text-align: left;"><p>1 sur 2,2 trillions</p></td>
<td style="text-align: left;"><p>3–4 mois</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>8</p></td>
<td style="text-align: left;"><p>1KidsChar</p></td>
<td style="text-align: left;"><p>1 sur 128 billions</p></td>
<td style="text-align: left;"><p>13–18 ans</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>9</p></td>
<td style="text-align: left;"><p>1KidsChari</p></td>
<td style="text-align: left;"><p>1 sur 7 quadrillions</p></td>
<td style="text-align: left;"><p>800 ans</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>10</p></td>
<td style="text-align: left;"><p>1KidsCharit</p></td>
<td style="text-align: left;"><p>1 sur 400 quadrillions</p></td>
<td style="text-align: left;"><p>46 000 ans</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>11</p></td>
<td style="text-align: left;"><p>1KidsCharity</p></td>
<td style="text-align: left;"><p>1 sur 23 quintillions</p></td>
<td style="text-align: left;"><p>2,5 millions d'années</p></td>
</tr>
</tbody>
</table>

La fréquence d'un modèle de vanité (1KidsCharity) et le temps de
recherche moyen sur un PC de bureau

Comme vous pouvez le voir, Eugenia ne créera pas de sitôt l'adresse
personnalisée "1KidsCharity", même si elle avait accès à plusieurs
milliers d'ordinateurs. Chaque caractère supplémentaire augmente la
difficulté d'un facteur de 58. Les modèles de plus de sept caractères
sont généralement trouvés par du matériel spécialisé, tel que des
ordinateurs de bureau personnalisés avec plusieurs GPU. Ce sont souvent
des "plates-formes" de minage de bitcoin réutilisées qui ne sont plus
rentables pour le minage de bitcoin mais peuvent être utilisées pour
trouver des adresses personnalisées. Les recherches d’adresse
personnalisées (ou de vanités) sur les systèmes GPU sont de plusieurs
ordres de grandeur plus rapides que sur un processeur à usage général.

Une autre façon de trouver une adresse de vanité consiste à sous-traiter
le travail à un groupe ou bassin de mineurs de vanité, comme le groupe
sur [Vanity Pool](https://vanitypool.appspot.com). Un groupe ou bassin
de ce type est un service qui permet à ceux qui disposent de matériel
GPU de gagner des bitcoins en recherchant des adresses personnalisées
pour les autres. Pour un petit paiement (0,01 bitcoin ou environ 5 $ au
moment d'écrire ces lignes), Eugenia peut externaliser la recherche
d'une adresse personnalisée à sept caractères et obtenir des résultats
en quelques heures au lieu d'avoir à exécuter une recherche de CPU
pendant des mois.

Générer une adresse personnalisée est un exercice de force brute :
essayez une clé aléatoire, vérifiez l'adresse résultante pour voir si
elle correspond au modèle souhaité, et répétez jusqu'à ce que vous
réussissiez. [example\_title](#vanity_miner_code) montre un exemple de
"mineur de vanité", un programme conçu pour trouver des adresses
personnalisées, écrit en C++. L'exemple utilise la bibliothèque
libbitcoin, que nous avons introduite dans [Clients, bibliothèques et
boîtes à outils alternatifs](#alt_libraries).

    #include <random>
    #include <bitcoin/bitcoin.hpp>

    // The string we are searching for
    const std::string search = "1kid";

    // Generate a random secret key. A random 32 bytes.
    bc::ec_secret random_secret(std::default_random_engine& engine);
    // Extract the Bitcoin address from an EC secret.
    std::string bitcoin_address(const bc::ec_secret& secret);
    // Case insensitive comparison with the search string.
    bool match_found(const std::string& address);

    int main()
    {
        // random_device on Linux uses "/dev/urandom"
        // CAUTION: Depending on implementation this RNG may not be secure enough!
        // Do not use vanity keys generated by this example in production
        std::random_device random;
        std::default_random_engine engine(random());

        // Loop continuously...
        while (true)
        {
            // Generate a random secret.
            bc::ec_secret secret = random_secret(engine);
            // Get the address.
            std::string address = bitcoin_address(secret);
            // Does it match our search string? (1kid)
            if (match_found(address))
            {
                // Success!
                std::cout << "Found vanity address! " << address << std::endl;
                std::cout << "Secret: " << bc::encode_base16(secret) << std::endl;
                return 0;
            }
        }
        // Should never reach here!
        return 0;
    }

    bc::ec_secret random_secret(std::default_random_engine& engine)
    {
        // Create new secret...
        bc::ec_secret secret;
        // Iterate through every byte setting a random value...
        for (uint8_t& byte: secret)
            byte = engine() % std::numeric_limits<uint8_t>::max();
        // Return result.
        return secret;
    }

    std::string bitcoin_address(const bc::ec_secret& secret)
    {
        // Convert secret to payment address
        bc::wallet::ec_private private_key(secret);
        bc::wallet::payment_address payaddr(private_key);
        // Return encoded form.
        return payaddr.encoded();
    }

    bool match_found(const std::string& address)
    {
        auto addr_it = address.begin();
        // Loop through the search string comparing it to the lower case
        // character of the supplied address.
        for (auto it = search.begin(); it != search.end(); ++it, ++addr_it)
            if (*it != std::tolower(*addr_it))
                return false;
        // Reached end of search string, so address matches.
        return true;
    }

[example\_title](#vanity_miner_code) utilise `std::random_device`. Selon
l'implémentation, cela peut refléter un CSRNG fourni par le système
d'exploitation sous-jacent. Dans le cas d'un système d'exploitation de
type Unix tel que Linux, il tire de `/dev/urandom`. Le générateur de
nombres aléatoires utilisé ici est à des fins de démonstration n'est
*pas* approprié pour générer des clés bitcoin de qualité production car
il n'est pas implémenté avec une sécurité suffisante.

L'exemple de code doit être compilé à l'aide d'un compilateur C++ et lié
à la bibliothèque libbitcoin (qui doit d'abord être installée sur ce
système). Pour exécuter l'exemple, lancez l'exécutable `vanity-miner`
sans paramètres (voir [example\_title](#vanity_miner_run)) et il tentera
de trouver une adresse personnalisée commençant par "1kid".

    # Compiler le code avec g++
    $ g++ -o vanity-miner vanity-miner.cpp $(pkg-config --cflags --libs libbitcoin)
    # Exécutez l&#39;exemple
    $ ./vanity-miner
    Found vanity address! 1KiDzkG4MxmovZryZRj8tK81oQRhbZ46YT
    Secret: 57cc268a05f83a23ac9d930bc8565bac4e277055f4794cbd1a39e5e71c038f3f
    # Exécutez-le à nouveau pour un résultat différent
    $ ./vanity-miner
    Found vanity address! 1Kidxr3wsmMzzouwXibKfwTYs5Pau8TUFn
    Secret: 7f65bbbbe6d8caae74a0c6a0d2d7b5c6663d71b60337299a1a2cf34c04b2a623
    # Utilisez &quot;time&quot; pour voir combien de temps il faut pour trouver un résultat
    $ time ./vanity-miner
    Found vanity address! 1KidPWhKgGRQWD5PP5TAnGfDyfWp5yceXM
    Secret: 2a802e7a53d8aa237cd059377b616d2bfcfa4b0140bc85fa008f2d3d4b225349

    real    0m8.868s
    user    0m8.828s
    sys     0m0.035s

L'exemple de code prendra quelques secondes pour trouver une
correspondance pour le modèle à trois caractères "kid", comme nous
pouvons le voir lorsque nous utilisons la commande Unix `time` pour
mesurer le temps d'exécution. Modifiez le modèle `search` dans le code
source et voyez combien de temps cela prend pour les modèles à quatre ou
cinq caractères !

### Sécurité de l'adresse personnalisée

<span class="indexterm"></span> <span class="indexterm"></span>Les
adresses personnalisées peuvent être utilisées pour améliorer *et* pour
contourner les mesures de sécurité ; ils sont vraiment une épée à double
tranchant. Utilisée pour améliorer la sécurité, une adresse distinctive
rend plus difficile pour les adversaires de substituer leur propre
adresse et de tromper vos clients en les payant à votre place.
Malheureusement, les adresses personnalisées permettent également à
quiconque de créer une adresse qui *ressemble* à n'importe quelle
adresse aléatoire, ou même à une autre adresse personnalisée, trompant
ainsi vos clients.

Eugenia pourrait annoncer une adresse générée aléatoirement (par
exemple, `1J7mdg5rbQyUHENYdx39WVWK7fsLpEoXZy`) à laquelle les gens
peuvent envoyer leurs dons. Ou, elle pourrait générer une adresse de
vanité qui commence par 1Kids, pour la rendre plus distinctive.

Dans les deux cas, l'un des risques d'utiliser une seule adresse fixe
(plutôt qu'une adresse dynamique distincte par donateur) est qu'un
voleur puisse s'infiltrer dans votre site Web et le remplacer par sa
propre adresse, détournant ainsi les dons vers lui. Si vous avez annoncé
votre adresse de don à plusieurs endroits différents, vos utilisateurs
peuvent inspecter visuellement l'adresse avant d'effectuer un paiement
pour s'assurer qu'il s'agit de la même adresse qu'ils ont vue sur votre
site Web, sur votre e-mail et sur votre dépliant. Dans le cas d'une
adresse aléatoire comme `1J7mdg5rbQyUHENYdx39WVWK7fsLpEoXZy`,
l'utilisateur moyen inspectera peut-être les premiers caractères
"1J7mdg" et sera satisfait que l'adresse corresponde. À l'aide d'un
générateur d'adresses personnalisées, une personne ayant l'intention de
voler en substituant une adresse d'apparence similaire peut rapidement
générer des adresses qui correspondent aux premiers caractères, comme
indiqué dans [table\_title](#table_4-13).

<table>
<caption>Génération d'adresses personnalisées pour correspondre à une
adresse aléatoire</caption>
<colgroup>
<col style="width: 50%" />
<col style="width: 50%" />
</colgroup>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p><strong>Adresse aléatoire
originale</strong></p></td>
<td
style="text-align: left;"><p>1J7mdg5rbQyUHENYdx39WVWK7fsLpEoXZy</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><strong>Vanité (correspondance à 4
caractères)</strong></p></td>
<td
style="text-align: left;"><p>1J7md1QqU4LpctBetHS2ZoyLV5d6dShhEy</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><strong>Vanité (correspondance à 5
caractères)</strong></p></td>
<td
style="text-align: left;"><p>1J7mdgYqyNd4ya3UEcq31Q7sqRMXw2XZ6n</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><strong>Vanité (correspondance à 6
caractères)</strong></p></td>
<td
style="text-align: left;"><p>1J7mdg5WxGENmwyJP9xuGhG5KRzu99BBCX</p></td>
</tr>
</tbody>
</table>

Génération d'adresses personnalisées pour correspondre à une adresse
aléatoire

Alors, une adresse personnalisée augmente-t-elle la sécurité ? Si
Eugenia génère l'adresse personnalisée
`1Kids33q44erFfpeXrmDSz7zEqG2FesZEN`, les utilisateurs sont susceptibles
de regarder le mot de modèle personnalisé *et quelques caractères
au-delà*, par exemple en remarquant la partie "1Kids33" de l'adresse.
Cela obligerait un attaquant à générer une adresse de vanité
correspondant à au moins six caractères (deux de plus), en déployant un
effort 3 364 fois (58 × 58) supérieur à l'effort qu'Eugenia a dépensé
pour sa vanité à 4 caractères. Essentiellement, l'effort qu'Eugenia
déploie (ou paie une vanité pour) "pousse" l'attaquant à devoir produire
une vanité de modèle plus longue. Si Eugenia paie un pool pour générer
une adresse de vanité à 8 caractères, l'attaquant serait poussé dans le
domaine de 10 caractères, ce qui est irréalisable sur un ordinateur
personnel et coûteux même avec une plate-forme d'extraction de vanité
personnalisée ou un pool de vanité. Ce qui est abordable pour Eugenia
devient inabordable pour l'attaquant, surtout si la récompense
potentielle de la fraude n'est pas assez élevée pour couvrir le coût de
la génération d'adresse personnalisée.<span class="indexterm"></span>
<span class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>

## Portefeuilles en papier

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span> <span class="indexterm"></span> Les paper
wallets, ou les portefeuilles en papier, sont des clés privées bitcoin
imprimées sur papier. Souvent, le portefeuille papier comprend également
l'adresse Bitcoin correspondante pour plus de commodité, mais ce n'est
pas nécessaire car elle peut être dérivée de la clé privée.

Les portefeuilles en papier sont une technologie OBSOLÈTE et sont
dangereux pour la plupart des utilisateurs. Il existe de nombreux pièges
subtils impliqués dans leur génération, notamment la possibilité que le
code de génération soit compromis par une "porte dérobée". Des centaines
de bitcoins ont été volés de cette façon. Les portefeuilles en papier
sont présentés ici à titre informatif uniquement et ne doivent pas être
utilisés pour stocker des bitcoins. Utilisez une phrase mnémonique
BIP-39 pour sauvegarder vos clés. Utilisez un portefeuille matériel pour
stocker des clés et signer des transactions. N'UTILISEZ PAS DE
PORTEFEUILLES EN PAPIER.

Les portefeuilles en papier se présentent sous de nombreuses formes,
tailles et conceptions, mais à un niveau très basique, il ne s'agit que
d'une clé et d'une adresse imprimées sur papier.
[table\_title](#table_4-14) montre la forme la plus simple d'un
portefeuille en papier.

<table>
<caption>La forme la plus simple d'un portefeuille papier - une
impression de l'adresse Bitcoin et de la clé privée</caption>
<colgroup>
<col style="width: 50%" />
<col style="width: 50%" />
</colgroup>
<thead>
<tr class="header">
<th style="text-align: left;">Adresse publique</th>
<th style="text-align: left;">Clé privée (WIF)</th>
</tr>
</thead>
<tbody>
<tr class="odd">
<td
style="text-align: left;"><p>1424C2F4bC9JidNjjTUZCbUxv6Sa1Mt62x</p></td>
<td
style="text-align: left;"><p>5J3mBbAH58CpQ3Y5RNJpUKPE62SQ5tfcvU2JpbnkeyhfsYB1Jcn</p></td>
</tr>
</tbody>
</table>

La forme la plus simple d'un portefeuille papier - une impression de
l'adresse Bitcoin et de la clé privée

Les portefeuilles en papier sont disponibles dans de nombreux modèles et
tailles, avec de nombreuses fonctionnalités différentes.
[figure\_title](#paper_wallet_simple) montre un exemple de portefeuille
en papier.

<figure>
<img src="images/mbc2_0408.png" id="paper_wallet_simple"
alt="Un exemple de portefeuille en papier simple" />
<figcaption aria-hidden="true">Un exemple de portefeuille en papier
simple</figcaption>
</figure>

Certains sont destinés à être offerts en cadeau et ont des thèmes
saisonniers, tels que les thèmes de Noël et du Nouvel An. D'autres sont
conçus pour être stockés dans un coffre-fort de banque ou un coffre-fort
avec la clé privée cachée d'une manière ou d'une autre, soit avec des
autocollants opaques à gratter, soit pliés et scellés avec une feuille
adhésive inviolable.

D'autres conceptions comportent des copies supplémentaires de la clé et
de l'adresse, sous la forme de talons détachables similaires aux talons
de ticket, vous permettant de stocker plusieurs copies pour vous
protéger contre les incendies, les inondations ou d'autres catastrophes
naturelles.<span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>

<figure>
<img src="images/mbc2_0412.png" id="paper_wallet_spw"
alt="Un exemple de portefeuille papier avec des copies supplémentaires des clés sur un &quot;talon&quot; de sauvegarde" />
<figcaption aria-hidden="true">Un exemple de portefeuille papier avec
des copies supplémentaires des clés sur un "talon" de
sauvegarde</figcaption>
</figure>

# Portefeuilles

<span class="indexterm"></span> <span class="indexterm"></span>Le mot
"portefeuille" est utilisé pour décrire différentes choses dans le
bitcoin.

À un niveau élevé, un portefeuille est une application qui sert
d'interface utilisateur principale. Le portefeuille contrôle l'accès à
l'argent d'un utilisateur, gère les clés et les adresses, le solde et
crée et signe des transactions.

Plus précisément, du point de vue d'un programmeur, le mot
"portefeuille" fait référence à la structure de données utilisée pour
stocker et gérer les clés d'un utilisateur.

Dans ce chapitre, nous examinerons la deuxième signification, où les
portefeuilles sont des conteneurs de clés privées, généralement
implémentés sous forme de fichiers structurés ou de simples bases de
données.

# Présentation de la technologie de portefeuille

Dans cette section, nous résumons les différentes technologies utilisées
pour construire des portefeuilles Bitcoin conviviaux, sécurisés et
flexibles.

<span class="indexterm"></span> <span class="indexterm"></span> Une idée
faussement courante à propos du bitcoin est que les portefeuilles
bitcoin contiennent du bitcoin. En fait, le portefeuille ne contient que
des clés. Les "monnaies ou coins" sont enregistrés dans la chaîne de
blocs sur le réseau Bitcoin. Les utilisateurs contrôlent les pièces sur
le réseau en signant des transactions avec les clés de leur
portefeuille. <span class="indexterm"></span> Dans un sens, un
portefeuille bitcoin est un *porte-clés*.

Les portefeuilles Bitcoin contiennent des clés, pas des pièces (ou
coins). Chaque utilisateur dispose d'un portefeuille contenant des clés.
Les portefeuilles sont en réalité des porte-clés contenant des paires de
clés privées/publiques (voir [Clés privées et
publiques](#private_public_keys)). Les utilisateurs signent des
transactions avec les clés, prouvant ainsi qu'ils sont propriétaires des
sorties de transaction (leurs pièces ou monnaies). Les pièces sont
stockées sur la blockchain sous la forme de sorties de transaction
(souvent notées vout ou txout).

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span>Il existe deux principaux types de
portefeuilles, qui se distinguent par le fait que les clés qu'ils
contiennent sont liées les unes aux autres ou non.

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>Le premier type est un *portefeuille non
déterministe*, où chaque clé est générée indépendamment à partir d'un
nombre aléatoire. Les clés ne sont pas liées les unes aux autres. Ce
type de portefeuille est également connu sous le nom de portefeuille
JBOK à partir de l'expression "Just a Bunch Of Keys" (juste une poignées
de clés).

<span class="indexterm"></span> <span class="indexterm"></span>Le
deuxième type de portefeuille est un *portefeuille déterministe*, où
toutes les clés sont dérivées d'une seule clé principale, connue sous le
nom de *seed* (ou valeur d’amorçage). Toutes les clés de ce type de
portefeuille sont liées les unes aux autres et peuvent être générées à
nouveau si l'on dispose de la valeur d’amorçage d'origine. <span
class="indexterm"></span> Il existe un certain nombre de méthodes
différentes de *dérivation de clé* utilisées dans les portefeuilles
déterministes. <span class="indexterm"></span> <span
class="indexterm"></span>La méthode de dérivation la plus couramment
utilisée utilise une structure arborescente et est connue sous le nom de
portefeuille *déterministe hiérarchique* ou *HD*.

<span class="indexterm"></span>Les portefeuilles déterministes sont
initialisés à partir d'une séquence aléatoire (une entropie). Pour
faciliter leur utilisation, les séquences aléatoires sont encodées sous
forme de mots anglais, également appelés *mots de code mnémoniques*.

Les prochaines sections présentent chacune de ces technologies à un
niveau élevé.

## Portefeuilles non déterministes (aléatoires)

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span> Dans le premier portefeuille bitcoin
(maintenant appelé Bitcoin Core), les portefeuilles étaient des
collections de clés privées générées aléatoirement. Par exemple, le
client Bitcoin Core d'origine prégénère 100 clés privées aléatoires lors
du premier démarrage et génère plus de clés si nécessaire, en utilisant
chaque clé une seule fois. Ces portefeuilles sont remplacés par des
portefeuilles déterministes car ils sont lourds à gérer, à sauvegarder
et à importer. L'inconvénient des clés aléatoires est que si vous en
générez beaucoup, vous devez conserver des copies de toutes, ce qui
signifie que le portefeuille doit être sauvegardé fréquemment. Chaque
clé doit être sauvegardée, sinon les fonds qu'elle contrôle sont
irrévocablement perdus si le portefeuille devient inaccessible. Cela
entre directement en conflit avec le principe d'éviter la réutilisation
des adresses, en utilisant chaque adresse Bitcoin pour une seule
transaction. La réutilisation des adresses réduit la confidentialité en
associant plusieurs transactions et adresses les unes aux autres. Un
portefeuille non déterministe de type-0 est un mauvais choix de
portefeuille, surtout si vous voulez éviter la réutilisation des
adresses car cela implique de gérer de nombreuses clés, ce qui crée le
besoin de sauvegardes fréquentes. Bien que le client Bitcoin Core inclue
un portefeuille de type 0, l'utilisation de ce portefeuille est
déconseillée par les développeurs de Bitcoin Core.
[figure\_title](#Type0_wallet) montre un portefeuille non déterministe,
contenant une collection lâche de clés aléatoires.

L'utilisation de portefeuilles non déterministes est déconseillée pour
autre chose que de simples tests. Ils sont tout simplement trop lourds à
sauvegarder et à utiliser. À la place, utilisez un *portefeuille HD*
standard de l'industrie avec une séquence aléatoire *mnémonique*
(entropie, ou "valeur d’amorçage") pour la sauvegarde.

<figure>
<img src="images/mbc2_0501.png" id="Type0_wallet"
alt="Portefeuille non déterministe (aléatoire) de type-0 : une collection de clés générées aléatoirement" />
<figcaption aria-hidden="true">Portefeuille non déterministe (aléatoire)
de type-0 : une collection de clés générées aléatoirement</figcaption>
</figure>

## Portefeuilles déterministes (ensemencés)

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span>Les portefeuilles déterministes ou "ensemencés"
sont des portefeuilles qui contiennent des clés privées qui sont toutes
dérivées d'une valeur d’amorçage commune, grâce à l'utilisation d'un
fonction de hachage à sens unique. La valeur d’amorçage est un nombre
généré aléatoirement qui est combiné avec d'autres données, telles qu'un
numéro d'index ou un "code de chaîne" (voir [Portefeuilles HD
(BIP-32/BIP-44)](#hd_wallets)) pour dériver les clés privées. Dans un
portefeuille déterministe, la valeur d’amorçage est suffisante pour
récupérer toutes les clés dérivées, et donc une seule sauvegarde au
moment de la création est suffisante. La valeur d’amorçage est également
suffisante pour une exportation ou une importation de portefeuille,
permettant une migration facile de toutes les clés de l'utilisateur
entre différentes implémentations de portefeuille.
[figure\_title](#Type1_wallet) montre un diagramme logique d'un
portefeuille déterministe.

<figure>
<img src="images/mbc2_0502.png" id="Type1_wallet"
alt="Portefeuille déterministe (ensemencé) de type-1 : une séquence déterministe de clés dérivée d&#39;une valeur d’amorçage" />
<figcaption aria-hidden="true">Portefeuille déterministe (ensemencé) de
type-1 : une séquence déterministe de clés dérivée d'une valeur
d’amorçage</figcaption>
</figure>

## Portefeuilles HD (BIP-32/BIP-44)

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span> Des
portefeuilles déterministes ont été développés pour faciliter la
dérivation de nombreuses clés à partir d'une seule "valeur d’amorçage".
La forme la plus avancée de portefeuilles déterministes est le
portefeuille HD défini par la norme BIP-32. Les portefeuilles HD
contiennent des clés dérivées dans une structure arborescente, de sorte
qu'une clé parent peut dériver une séquence de clés enfants, chacune
pouvant dériver une séquence de clés petits-enfants, et ainsi de suite,
jusqu'à une profondeur infinie. Cette arborescence est illustrée dans
[figure\_title](#Type2_wallet).

<figure>
<img src="images/mbc2_0503.png" id="Type2_wallet"
alt="Portefeuille HD de type-2 : un arbre de clés généré à partir d&#39;une seule valeur d’amorçage" />
<figcaption aria-hidden="true">Portefeuille HD de type-2 : un arbre de
clés généré à partir d'une seule valeur d’amorçage</figcaption>
</figure>

Les portefeuilles HD offrent deux avantages majeurs par rapport aux clés
aléatoires (non déterministes). Tout d'abord, la structure arborescente
peut être utilisée pour exprimer une signification organisationnelle
supplémentaire, par exemple lorsqu'une branche spécifique de sous-clés
est utilisée pour recevoir des paiements entrants et qu'une branche
différente est utilisée pour recevoir la monnaie des paiements sortants.
Les branches de clés peuvent également être utilisées dans les
paramètres de l'entreprise, en attribuant différentes branches à des
départements, des filiales, des fonctions spécifiques ou des catégories
comptables.

Le deuxième avantage des portefeuilles HD est que les utilisateurs
peuvent créer une séquence de clés publiques sans avoir accès aux clés
privées correspondantes. Cela permet aux portefeuilles HD d'être
utilisés sur un serveur non sécurisé ou dans une capacité de réception
uniquement, en émettant une clé publique différente pour chaque
transaction. Les clés publiques n'ont pas besoin d'être préchargées ou
dérivées à l'avance, mais le serveur ne dispose pas des clés privées qui
peuvent dépenser les fonds.

## Graines (ou valeurs d’amorçages) et codes mnémoniques (BIP-39)

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span>Les
portefeuilles HD sont un mécanisme très puissant pour gérer de
nombreuses clés et adresses. Ils sont encore plus utiles s'ils sont
combinés à une manière standardisée de créer des valeurs d’amorçage à
partir d'une séquence de mots anglais faciles à transcrire, exporter et
importer sur plusieurs portefeuilles. C'est ce qu'on appelle un
*mnémonique* et la norme est définie par BIP-39. Aujourd'hui, la plupart
des portefeuilles Bitcoin (ainsi que des portefeuilles pour d'autres
cryptomonnaies) utilisent cette norme et peuvent importer et exporter
des valeurs d’amorçage pour la sauvegarde et la récupération à l'aide de
mnémoniques interopérables.

Regardons cela d'un point de vue pratique. Laquelle des valeurs
d’amorçage suivantes est la plus facile à transcrire, à enregistrer sur
papier, à lire sans erreur ou à exporter et à importer dans un autre
portefeuille ?

**Une valeur d’amorçage pour un portefeuille déterministe, en
hexadécimal**

    0C1E24E5917779D297E14D45F14E1A1A

**Une valeur d’amorçage pour un portefeuille déterministe, à partir d'un
mnémonique de 12 mots**

    army van defense carry jealous true
    garbage claim echo media make crunch

## Meilleures procédures de portefeuille

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span>Au fur et à
mesure que les portefeuilles de Bitcoin ont atteint un degré de
maturité, certaines normes industrielles mis en commun ont émergé,
rendant de nos jours des portefeuilles Bitcoin largement interopérables,
faciles à utiliser, sécurisés et flexibles. Ces normes communes sont :

-   Mots de code mnémonique, basés sur BIP-39

-   Portefeuilles HD, basés sur BIP-32

-   Structure de portefeuille HD polyvalente, basée sur BIP-43

-   Portefeuilles multidevises et multicomptes, basés sur BIP-44

Ces normes peuvent changer ou devenir obsolètes en raison de
développements futurs, mais pour l'instant, elles forment un ensemble de
technologies imbriquées qui sont devenues de facto la norme de
portefeuille pour le bitcoin.

Les normes ont été adoptées par une large gamme de portefeuilles bitcoin
logiciels et matériels, rendant tous ces portefeuilles interopérables.
Un utilisateur peut exporter un mnémonique généré sur l'un de ces
portefeuilles et l'importer dans un autre portefeuille, récupérant
toutes les transactions, clés et adresses.

<span class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span> Quelques exemples de portefeuilles logiciels
prenant en charge ces normes incluent (par ordre alphabétique)
Bluewallet, Breadwallet, Copay et Multibit HD. Des exemples de
portefeuilles matériels prenant en charge ces normes incluent (par ordre
alphabétique) KeepKey, Ledger et Trezor.

Les sections suivantes examinent chacune de ces technologies en détail.

Si vous implémentez un portefeuille bitcoin, il doit être construit
comme un portefeuille HD, avec une valeur d’amorçage dérivée et codée
comme un code mnémonique pour la sauvegarde, suivant les normes BIP-32,
BIP-39, BIP-43 et BIP-44, comme décrit dans les sections suivantes.

## Utiliser un portefeuille Bitcoin

<span class="indexterm"></span> <span class="indexterm"></span>Dans
[Utilisations, utilisateurs et histoires de Bitcoin](#user-stories) nous
avons présenté Gabriel, <span class="indexterm"></span> <span
class="indexterm"></span> <span class="indexterm"></span>un jeune
adolescent entreprenant à Rio de Janeiro, qui gère une simple boutique
en ligne qui vend des t-shirts de marque bitcoin, des tasses à café et
des autocollants.

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span>Gabriel utilise un portefeuille matériel
bitcoin Trezor ([figure\_title](#a_trezor_device)) pour gérer en toute
sécurité son bitcoin. Le Trezor est un simple périphérique USB à deux
boutons qui stocke les clés (sous la forme d'un portefeuille HD) et
signe les transactions. Les portefeuilles Trezor mettent en œuvre toutes
les normes de l'industrie abordées dans ce chapitre, de sorte que
Gabriel ne dépend d'aucune technologie propriétaire ou d'une solution de
fournisseur unique.

<figure>
<img src="images/mbc2_0504.png" id="a_trezor_device"
alt="Un appareil Trezor : un portefeuille bitcoin HD en matériel" />
<figcaption aria-hidden="true">Un appareil Trezor : un portefeuille
bitcoin HD en matériel</figcaption>
</figure>

Lorsque Gabriel a utilisé le Trezor pour la première fois, l'appareil a
généré une séquence aléatoire (entropie), le mnémonique associé et a
dérivé une valeur d’amorçage à partir d'un générateur de nombres
aléatoires matériel intégré. Lors de cette phase d'initialisation, le
portefeuille affichait à l'écran une séquence de mots numérotés, un par
un (voir [figure\_title](#trezor_mnemonic_display)).

<figure>
<img src="images/mbc2_0505.png" id="trezor_mnemonic_display"
alt="Trezor affichant un des mots mnémoniques" />
<figcaption aria-hidden="true">Trezor affichant un des mots
mnémoniques</figcaption>
</figure>

En écrivant ce mnémonique, Gabriel a créé une sauvegarde (voir
[table\_title](#mnemonic_paper_backup)) qui peut être utilisé pour la
récupération en cas de perte ou d'endommagement de l'appareil Trezor. Ce
mnémonique peut être utilisé pour la récupération dans un nouveau Trezor
ou dans l'un des nombreux portefeuilles logiciels ou matériels
compatibles. Notez que la séquence des mots est importante, donc les
sauvegardes papier mnémotechniques ont des espaces numérotés pour chaque
mot. Gabriel a dû enregistrer soigneusement chaque mot dans l'espace
numéroté pour préserver la séquence correcte.

<table style="width:80%;">
<caption>La sauvegarde papier de Gabriel du mnémonique</caption>
<colgroup>
<col style="width: 0%" />
<col style="width: 39%" />
<col style="width: 0%" />
<col style="width: 39%" />
</colgroup>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p><strong>1.</strong></p></td>
<td style="text-align: center;"><p><em>army</em></p></td>
<td style="text-align: left;"><p><strong>7.</strong></p></td>
<td style="text-align: center;"><p><em>garbage</em></p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><strong>2.</strong></p></td>
<td style="text-align: center;"><p><em>van</em></p></td>
<td style="text-align: left;"><p><strong>8.</strong></p></td>
<td style="text-align: center;"><p><em>claim</em></p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><strong>3.</strong></p></td>
<td style="text-align: center;"><p><em>defense</em></p></td>
<td style="text-align: left;"><p><strong>9.</strong></p></td>
<td style="text-align: center;"><p><em>echo</em></p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><strong>4.</strong></p></td>
<td style="text-align: center;"><p><em>carry</em></p></td>
<td style="text-align: left;"><p><strong>10.</strong></p></td>
<td style="text-align: center;"><p><em>media</em></p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><strong>5.</strong></p></td>
<td style="text-align: center;"><p><em>jealous</em></p></td>
<td style="text-align: left;"><p><strong>11.</strong></p></td>
<td style="text-align: center;"><p><em>make</em></p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><strong>6.</strong></p></td>
<td style="text-align: center;"><p><em>true</em></p></td>
<td style="text-align: left;"><p><strong>12.</strong></p></td>
<td style="text-align: center;"><p><em>crunch</em></p></td>
</tr>
</tbody>
</table>

La sauvegarde papier de Gabriel du mnémonique

Un mnémonique de 12 mots est affiché dans
[table\_title](#mnemonic_paper_backup), pour plus de simplicité. En
fait, la plupart des portefeuilles matériels génèrent un mnémonique de
24 mots plus sécurisé. Le mnémonique est utilisé exactement de la même
manière, quelle que soit sa longueur.

Pour la première implémentation de sa boutique en ligne, Gabriel utilise
une seule adresse Bitcoin, générée sur son appareil Trezor. Cette
adresse unique est utilisée par tous les clients pour toutes les
commandes. Comme nous le verrons, cette approche présente quelques
inconvénients et peut être améliorée avec un portefeuille HD.<span
class="indexterm"></span> <span class="indexterm"></span>

# Détails de la technologie de portefeuille

Examinons maintenant en détail chacune des normes importantes de
l'industrie utilisées par de nombreux portefeuilles Bitcoin.

## Mots de code mnémonique (BIP-39)

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span> <span class="indexterm"></span>Les mots de
code mnémonique sont des séquences de mots qui représentent (encodent)
un nombre aléatoire utilisé comme valeur d’amorçage pour dériver un
portefeuille déterministe. La séquence de mots est suffisante pour
recréer la valeur d’amorçage et à partir de là recréer le portefeuille
et toutes les clés dérivées. Une application de portefeuille qui
implémente des portefeuilles déterministes avec des mots mnémoniques
montrera à l'utilisateur une séquence de 12 à 24 mots lors de la
première création d'un portefeuille. Cette séquence de mots est à
sauvegarder et est la valeur d’amorçage du portefeuille. Elle peut être
utilisée pour récupérer et recréer toutes les clés dans la même
application de portefeuille ou dans n'importe quelle application de
portefeuille compatible. Les mots mnémotechniques facilitent la
sauvegarde des portefeuilles par les utilisateurs, car ils sont faciles
à lire et à transcrire correctement, par rapport à une séquence
aléatoire de chiffres.

<span class="indexterm"></span> Les mots mnémoniques sont souvent
confondus avec les "brainwallets". Ils ne sont pas les mêmes. La
principale différence est qu'un brainwallet se compose de mots choisis
par l'utilisateur, tandis que les mots mnémoniques sont créés de manière
aléatoire par le portefeuille et présentés à l'utilisateur. Cette
différence importante rend les mots mnémoniques beaucoup plus sûrs, car
les humains sont de très mauvaises sources d'aléatoire.

Les codes mnémoniques sont définis dans le BIP-39 (voir
[???](#appdxbitcoinimpproposals)). Notez que BIP-39 est une
implémentation d'une norme de code mnémonique. <span
class="indexterm"></span> <span class="indexterm"></span> Il existe une
norme différente, avec un ensemble de mots différent, utilisée par le
portefeuille Electrum et antérieure à BIP-39. BIP-39 a été proposé par
la société à l'origine du portefeuille matériel Trezor et est
incompatible avec la mise en œuvre d'Electrum. Cependant, BIP-39 a
maintenant obtenu un large soutien de l'industrie à travers des dizaines
d'implémentations interopérables et devrait être considéré comme la
norme de facto de l'industrie.

La BIP-39 définit la création d'un code mnémonique et d'une valeur
d’amorçage, que nous décrivons ici en neuf étapes. Pour plus de clarté,
le processus est divisé en deux parties: les étapes 1 à 6 sont
présentées dans [Génération de mots
mnémoniques](#generating_mnemonic_words) et les étapes 7 à 9 sont
illustrées dans [Du mnémonique à la valeur
d’amorçage](#mnemonic_to_seed).

### Génération de mots mnémoniques

Les mots mnémoniques sont générés automatiquement par le portefeuille en
utilisant le processus standardisé défini dans BIP-39. Le portefeuille
part d'une source d'entropie, ajoute une somme de contrôle, puis mappe
l'entropie sur une liste de mots :

1.  Créez une séquence aléatoire (entropie) de 128 à 256 bits.

2.  Créez une somme de contrôle de la séquence aléatoire en prenant les
    premiers bits (longueur d'entropie/32) de son hachage SHA256.

3.  Ajoutez la somme de contrôle à la fin de la séquence aléatoire.

4.  Divisez le résultat en segments de 11 bits.

5.  Associez chaque valeur 11 bits à un mot du dictionnaire prédéfini de
    2048 mots.

6.  Le code mnémonique est la séquence de mots.

&lt;&lt;generating\_entropy\_and\_encoding&gt; &gt; montre comment
l'entropie est utilisée pour générer des mots mnémoniques.

<figure>
<img src="images/mbc2_0506.png" id="generating_entropy_and_encoding"
alt="Génération d&#39;entropie et encodage sous forme de mots mnémoniques" />
<figcaption aria-hidden="true">Génération d'entropie et encodage sous
forme de mots mnémoniques</figcaption>
</figure>

[table\_title](#table_4-5) montre la relation entre la taille des
données d'entropie et la longueur des codes mnémoniques en mots.

<table>
<caption>Codes mnémoniques : entropie et longueur des mots</caption>
<colgroup>
<col style="width: 25%" />
<col style="width: 25%" />
<col style="width: 25%" />
<col style="width: 25%" />
</colgroup>
<thead>
<tr class="header">
<th style="text-align: left;">Entropie (bits)</th>
<th style="text-align: left;">Somme de contrôle (bits)</th>
<th style="text-align: left;">Somme de contrôle d'entropie
<strong>+</strong> (bits)</th>
<th style="text-align: left;">Longueur mnémonique (mots)</th>
</tr>
</thead>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p>128</p></td>
<td style="text-align: left;"><p>4</p></td>
<td style="text-align: left;"><p>132</p></td>
<td style="text-align: left;"><p>12</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>160</p></td>
<td style="text-align: left;"><p>5</p></td>
<td style="text-align: left;"><p>165</p></td>
<td style="text-align: left;"><p>15</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>192</p></td>
<td style="text-align: left;"><p>6</p></td>
<td style="text-align: left;"><p>198</p></td>
<td style="text-align: left;"><p>18</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>224</p></td>
<td style="text-align: left;"><p>7</p></td>
<td style="text-align: left;"><p>231</p></td>
<td style="text-align: left;"><p>21</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>256</p></td>
<td style="text-align: left;"><p>8</p></td>
<td style="text-align: left;"><p>264</p></td>
<td style="text-align: left;"><p>24</p></td>
</tr>
</tbody>
</table>

Codes mnémoniques : entropie et longueur des mots

### Du mnémonique à la valeur d’amorçage

<span class="indexterm"></span><span class="indexterm"></span>Les mots
mnémoniques représentent l'entropie d'une longueur de 128 à 256 bits.
L'entropie est ensuite utilisée pour dériver une valeur d’amorçage plus
longue (512 bits) grâce à l'utilisation de la fonction d'étirement de
clé PBKDF2. La valeur d’amorçage produite est ensuite utilisée pour
construire un portefeuille déterministe et en dériver ses clés.

<span class="indexterm"></span><span class="indexterm"></span>La
fonction d'étirement de clé prend deux paramètres : le mnémonique et un
*sel*. Le but d'un sel dans une fonction d'étirement de clé est de
rendre difficile la construction d'une table de recherche permettant une
attaque par force brute. Dans la norme BIP-39, le sel a un autre
objectif : il permet l'introduction d'une phrase secrète qui sert de
facteur de sécurité supplémentaire protégeant la valeur d’amorçage,
comme nous le décrirons plus en détail dans [Phrase secrète facultative
dans BIP-39](#mnemonic_passphrase).

Le processus décrit aux étapes 7 à 9 continue à partir du processus
décrit précédemment dans [Génération de mots
mnémoniques](#generating_mnemonic_words) :

Le premier paramètre de la fonction d'étirement de clé PBKDF2 est le

mnémonique

produit à partir de l'étape 6.

Le deuxième paramètre de la fonction d'étirement de clé PBKDF2 est un

sel

. Le sel est composé de la constante de chaîne "

mnemonique

" concaténée avec une phrase de passe facultative fournie par
l'utilisateur.

PBKDF2 étend les paramètres mnémoniques et le sel en utilisant 2048
cycles de hachage avec l'algorithme HMAC-SHA512, produisant une valeur
de 512 bits comme sortie finale. Cette valeur de 512 bits est la valeur
d'amorçage.

[figure\_title](#fig_5_7) montre comment un mnémonique est utilisé pour
générer une valeur d’amorçage.

<figure>
<img src="images/mbc2_0507.png" id="fig_5_7"
alt="Du mnémonique à la valeur d’amorçage" />
<figcaption aria-hidden="true">Du mnémonique à la valeur
d’amorçage</figcaption>
</figure>

La fonction d'étirement de clé, avec ses 2048 tours de hachage, est une
protection très efficace contre les attaques par force brute contre le
mnémonique ou la phrase secrète. Cela rend extrêmement coûteux (en
calcul) d'essayer plus de quelques milliers de combinaisons de mots de
passe et de mnémoniques, alors que le nombre de graines dérivées
possibles est vaste (2 <sup>512</sup> ).

Les tableaux \#mnemonic\_128\_no\_pass, \#mnemonic\_128\_w\_pass et
\#mnemonic\_256\_no\_pass montrent quelques exemples de codes
mnémoniques et les valeurs d’amorçage qu'ils produisent (avec ou sans
phrase secrète).

<table>
<caption>Code mnémonique d'entropie 128 bits, sans phrase secrète,
valeur d’amorçage résultante</caption>
<colgroup>
<col style="width: 50%" />
<col style="width: 50%" />
</colgroup>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p><strong><strong>Entrée d'entropie (128
bits)</strong></strong></p></td>
<td
style="text-align: left;"><p><code>0c1e24e5917779d297e14d45f14e1a1a</code></p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><strong><strong>Mnémonique (12
mots)</strong></strong></p></td>
<td
style="text-align: left;"><p><code>army van defense carry jealous true garbage claim echo media make crunch</code></p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><strong><strong>Phrase
secrète</strong></strong></p></td>
<td style="text-align: left;"><p>(rien)</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><strong><strong>Valeur d’amorçage (512
bits)</strong></strong></p></td>
<td
style="text-align: left;"><p><code>5b56c417303faa3fcba7e57400e120a0ca83ec5a4fc9ffba757fbe63fbd77a89a1a3be4c67196f57c39</code>
<code>a88b76373733891bfaba16ed27a813ceed498804c0570</code></p></td>
</tr>
</tbody>
</table>

Code mnémonique d'entropie 128 bits, sans phrase secrète, valeur
d’amorçage résultante

<table>
<caption>Code mnémonique d'entropie 128 bits, avec phrase secrète,
valeur d’amorçage résultante</caption>
<colgroup>
<col style="width: 50%" />
<col style="width: 50%" />
</colgroup>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p><strong><strong>Entrée d'entropie (128
bits)</strong></strong></p></td>
<td
style="text-align: left;"><p><code>0c1e24e5917779d297e14d45f14e1a1a</code></p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><strong><strong>Mnémonique (12
mots)</strong></strong></p></td>
<td
style="text-align: left;"><p><code>army van defense carry jealous true garbage claim echo media make crunch</code></p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><strong><strong>Phrase
secrète</strong></strong></p></td>
<td style="text-align: left;"><p>SuperDuperSecret</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><strong><strong>Valeur d’amorçage (512
bits)</strong></strong></p></td>
<td
style="text-align: left;"><p><code>3b5df16df2157104cfdd22830162a5e170c0161653e3afe6c88defeefb0818c793dbb28ab3ab091897d0</code>
<code>715861dc8a18358f80b79d49acf64142ae57037d1d54</code></p></td>
</tr>
</tbody>
</table>

Code mnémonique d'entropie 128 bits, avec phrase secrète, valeur
d’amorçage résultante

<table>
<caption>Code mnémonique d'entropie 256 bits, sans phrase secrète,
valeur d’amorçage résultante</caption>
<colgroup>
<col style="width: 50%" />
<col style="width: 50%" />
</colgroup>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p><strong><strong>Entrée d'entropie (256
bits)</strong></strong></p></td>
<td
style="text-align: left;"><p><code>2041546864449caff939d32d574753fe684d3c947c3346713dd8423e74abcf8c</code></p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><strong><strong>Mnémonique (24
mots)</strong></strong></p></td>
<td
style="text-align: left;"><p><code>cake apple borrow silk endorse fitness top denial coil riot stay wolf luggage oxygen faint major edit measure invite love trap field dilemma oblige</code></p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><strong><strong>Phrase
secrète</strong></strong></p></td>
<td style="text-align: left;"><p>(rien)</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><strong><strong>Valeur d’amorçge (512
bits)</strong></strong></p></td>
<td
style="text-align: left;"><p><code>3269bce2674acbd188d4f120072b13b088a0ecf87c6e4cae41657a0bb78f5315b33b3a04356e53d062e5</code>
<code>5f1e0deaa082df8d487381379df848a6ad7e98798404</code></p></td>
</tr>
</tbody>
</table>

Code mnémonique d'entropie 256 bits, sans phrase secrète, valeur
d’amorçage résultante

De nombreux portefeuilles ne permettent pas la création de portefeuilles
avec plus d'une phrase mnémonique de 12 mots. Vous remarquerez dans les
tableaux ci-dessus que malgré les longueurs uniques d'entrée d'entropie,
la taille de la valeur d’amorçage reste la même (512 bits). Du point de
vue de la sécurité, la quantité d'entropie réellement utilisée pour la
production de portefeuilles HD est d'environ 128 bits, ce qui équivaut à
12 mots. Fournir plus de 12 mots produit une entropie supplémentaire qui
n'est pas nécessaire, et cette entropie est *inutilisée* pour la
dérivation de la valeur d’amorçage de la manière que l'on pourrait
initialement soupçonner. Du point de vue de la convivialité, 12 mots
sont également plus faciles à écrire, à sauvegarder et à stocker.

### Phrase secrète facultative dans BIP-39

<span class="indexterm"></span>La norme BIP-39 permet l'utilisation
d'une phrase secrète facultative dans la dérivation de la valeur
d’amorçage. Si aucune phrase secrète n'est utilisée, le mnémonique est
étiré avec un sel constitué de la chaîne constante `"mnémonique"`,
produisant une graine spécifique de 512 bits à partir de n'importe quel
mnémonique donné. Si une phrase secrète est utilisée, la fonction
d'étirement produit une valeur d’amorçage *différente* à partir de ce
même mnémonique. En fait, étant donné un seul mnémonique, chaque phrases
secrètes possible conduit à une valeurs d’amorçage différente.
Essentiellement, il n'y a pas de "mauvaise" phrase secrète. Toutes les
phrases secrètes sont valides et mènent toutes à des valeurs d’amorçage
différentes, formant un vaste ensemble de portefeuilles non initialisés
possibles. L'ensemble des portefeuilles possibles est si grand (2
<sup>512</sup>) qu'il n'y a aucune possibilité pratique de forcer
brutalement ou de deviner accidentellement celui qui est utilisé.

Il n'y a pas de "mauvaises" phrases secrètes dans BIP-39. Chaque phrase
de passe mène à un portefeuille qui, à moins qu'il n'ait été utilisé
auparavant, sera vide.

La phrase secrète facultative crée deux fonctionnalités importantes :

-   Un deuxième facteur (quelque chose de mémorisé) qui rend un
    mnémonique inutile par lui-même, protégeant les sauvegardes
    mnémoniques de la compromission par un voleur.

-   Une forme de déni plausible ou "portefeuille sous contrainte", où
    une phrase secrète choisie mène à un portefeuille avec une petite
    quantité de fonds utilisée pour distraire un attaquant du "vrai"
    portefeuille qui contient la majorité des fonds.

Cependant, il est important de noter que l'utilisation d'une phrase
secrète introduit également un risque de perte :

-   Si le propriétaire du portefeuille est incapacité ou décédé et que
    personne d'autre ne connaît la phrase secrète, le code mnémonique
    est inutile et tous les fonds stockés dans le portefeuille sont
    perdus à jamais.

-   À l'inverse, si le propriétaire sauvegarde la phrase secrète au même
    endroit que le code mnémonique, cela va à l'encontre de l'objectif
    d'un deuxième facteur.

Bien que les phrases secrètes soient très utiles, elles ne doivent être
utilisées qu'en combinaison avec un processus soigneusement planifié de
sauvegarde et de récupération, compte tenu de la possibilité de survivre
au propriétaire et de permettre à sa famille de récupérer le patrimoine
de la cryptomonnaie.

### Travailler avec des codes mnémoniques

BIP-39 est implémenté en tant que bibliothèque dans de nombreux langages
de programmation différents :

[python-mnemonic](https://github.com/trezor/python-mnemonic)  
L'implémentation de référence de la norme par l'équipe SatoshiLabs qui a
proposé BIP-39, en Python

[bitcoinjs/bip39](https://github.com/bitcoinjs/bip39)  
Une implémentation de BIP-39, dans le cadre du populaire framework
bitcoinJS, en JavaScript

[libbitcoin/mnemonic](https://github.com/libbitcoin/libbitcoin/blob/master/src/wallet/mnemonic.cpp)  
Une implémentation de BIP-39, dans le cadre du populaire framework
Libbitcoin, en C++

## Créer un portefeuille HD à partir de la valeur d’amorçage

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span><span
class="indexterm"></span>Les portefeuilles HD sont créé à partir d'une
seule *valeur d’amorçage racine*, qui est un nombre aléatoire de 128,
256 ou 512 bits. Le plus souvent, cette valeur d’amorçage est générée à
partir d'un *mnemonique* comme détaillé dans la section précédente.

Chaque clé du portefeuille HD est dérivée de manière déterministe de
cette valeur d’amorçage racine, ce qui permet de recréer l'intégralité
du portefeuille HD à partir de cette valeur d’amorçage dans n'importe
quel portefeuille HD compatible. Cela facilite la sauvegarde, la
restauration, l'exportation et l'importation de portefeuilles HD
contenant des milliers, voire des millions de clés en transférant
simplement uniquement le mnémonique dont la valeur d’amorçage racine est
dérivée.

Le processus de création des clés principales et du code de chaîne
principal pour un portefeuille HD est illustré dans
[figure\_title](#HDWalletFromSeed).

<figure>
<img src="images/mbc2_0509.png" id="HDWalletFromSeed"
alt="Création de clés principales et de code de chaîne à partir d&#39;une valeur d’amorçage racine" />
<figcaption aria-hidden="true">Création de clés principales et de code
de chaîne à partir d'une valeur d’amorçage racine</figcaption>
</figure>

La valeur d’amorçage racine est entrée dans l'algorithme HMAC-SHA512 et
le hachage résultant est utilisé pour créer une *clé privée principale*
(m) et un *code de chaîne principal* (c).

La clé privée principale (m) génère ensuite une clé publique principale
correspondante (M) en utilisant le processus normal de multiplication de
courbe elliptique `m * G` que nous avons vu dans [Clés
publiques](#pubkey).

Le code de chaîne (c) est utilisé pour introduire de l'entropie dans la
fonction qui crée des clés enfants à partir des clés parents, comme nous
le verrons dans la section suivante.

### Dérivation de clé enfant privée

<span class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>Les portefeuilles HD utilisent une fonction
*dérivation de la clé-enfant* (CKD) pour dériver les clés enfants à
partir des clés parents.

Les fonctions de dérivation de la clé-enfant sont basées sur une
fonction de hachage unidirectionnelle qui combine :

-   Une clé privée ou publique parent (clé compressée ECDSA)

-   Une valeur d’amorçage appelée code de chaîne (256 bits)

-   Un numéro d'index (32 bits)

Le code de chaîne est utilisé pour introduire des données aléatoires
déterministes dans le processus, de sorte que la connaissance de l'index
et d'une clé-enfant ne suffit pas pour dériver d'autres clés-enfants.
Connaître une clé enfant ne permet pas de retrouver ses frères et sœurs,
sauf si vous disposez également du code chaîne. La valeur d’amorçage de
code de chaîne initiale (à la racine de l'arborescence) est créée à
partir de la valeur d’amorçage, tandis que les codes de chaîne enfants
suivants sont dérivés de chaque code de chaîne parent.

Ces trois éléments (clé parent, code de chaîne et index) sont combinés
et hachés pour générer des clés enfants, comme suit.

La clé publique parent, le code de chaîne et le numéro d'index sont
combinés et hachés avec l'algorithme HMAC-SHA512 pour produire un
hachage de 512 bits. Ce hachage de 512 bits est divisé en deux moitiés
de 256 bits. Les 256 bits de la moitié droite de la sortie de hachage
deviennent le code de chaîne pour l'enfant. Les 256 bits de la moitié
gauche du hachage sont ajoutés à la clé parent pour produire la clé
privée enfant. Dans [figure\_title](#CKDpriv), nous voyons cela illustré
avec l'index mis à 0 pour produire l'enfant "zéro" (premier par index)
du parent.

<figure>
<img src="images/mbc2_0510.png" id="CKDpriv"
alt="Étendre une clé privée parent pour créer une clé privée enfant" />
<figcaption aria-hidden="true">Étendre une clé privée parent pour créer
une clé privée enfant</figcaption>
</figure>

Changer l'index nous permet d'étendre le parent et de créer les autres
enfants dans la séquence, par exemple, Enfant 0, Enfant 1, Enfant 2,
etc. Chaque clé parent peut avoir 2 147 483 647 (2<sup>31</sup>) enfants
(2<sup>31</sup> est moitié de la plage entière 2<sup>32</sup> disponible
car l'autre moitié est réservée à un type spécial de dérivation dont
nous parlerons plus loin dans ce chapitre).

En répétant le processus un niveau plus bas dans l'arbre, chaque enfant
peut à son tour devenir parent et créer ses propres enfants, dans un
nombre infini de générations.

### Utilisation de clés enfants dérivées

Les clés privées enfants ne peuvent pas être distinguées des clés non
déterministes (aléatoires). Comme la fonction de dérivation est une
fonction à sens unique, la clé enfant ne peut pas être utilisée pour
trouver la clé parent. La clé enfant ne peut pas non plus être utilisée
pour trouver des frères et sœurs. Si vous avez le n<sub>ième</sub>
enfant, vous ne pouvez pas trouver ses frères et sœurs, tels que
l'enfant n–1 ou l'enfant n+1, ou tout autre enfant faisant partie de la
séquence. Seuls la clé parent et le code de chaîne peuvent dériver tous
les enfants. Sans le code de chaîne enfant, la clé enfant ne peut pas
non plus être utilisée pour dériver des petits-enfants. Vous avez besoin
à la fois de la clé privée enfant et du code de chaîne enfant pour
démarrer une nouvelle branche et dériver des petits-enfants.

Alors, à quoi peut servir la clé privée enfant seule ? Il peut être
utilisé pour créer une clé publique et une adresse Bitcoin. Ensuite, il
peut être utilisé pour signer des transactions afin de dépenser tout ce
qui est payé à cette adresse.

Une clé privée enfant, la clé publique correspondante et l'adresse
Bitcoin sont toutes indiscernables des clés et des adresses créées au
hasard. Le fait qu'ils fassent partie d'une séquence n'est pas visible
en dehors de la fonction de portefeuille HD qui les a créés. Une fois
créées, elles fonctionnent exactement comme des clés "normales".

### Touches étendues

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span>Comme nous l'avons vu précédemment, la fonction
de dérivation de clé peut être utilisée pour créer des enfants à
n'importe quel niveau de l'arborescence, en fonction sur les trois
entrées : une clé, un code chaîne et l'index de l'enfant souhaité. Les
deux ingrédients essentiels sont la clé et le code de chaîne, et
combinés, ils s'appellent une *clé étendue*. Le terme "clé étendue"
pourrait également être considéré comme une "clé extensible" car une
telle clé peut être utilisée pour dériver des enfants.

Les clés étendues sont stockées et représentées simplement comme la
concaténation de la clé de 256 bits et du code de chaîne de 256 bits
dans une séquence de 512 bits. Il existe deux types de clés étendues.
Une clé privée étendue est la combinaison d'une clé privée et d'un code
de chaîne et peut être utilisée pour dériver des clés privées enfants
(et à partir de celles-ci, des clés publiques enfants). Une clé publique
étendue est une clé publique et un code de chaîne, qui peuvent être
utilisés pour créer des clés publiques enfants (*public uniquement*),
comme décrit dans [Génération d'une clé
publique](#public_key_derivation).

Considérez une clé étendue comme la racine d'une branche dans
l'arborescence du portefeuille HD. Avec la racine de la branche, vous
pouvez dériver le reste de la branche. La clé privée étendue peut créer
une branche complète, tandis que la clé publique étendue peut créer
*uniquement* une branche de clés publiques.

Une clé étendue se compose d'une clé privée ou publique et d'un code de
chaîne. Une clé étendue peut créer des enfants, générant sa propre
branche dans l'arborescence. Le partage d'une clé étendue donne accès à
l'ensemble de la branche.

Les clés étendues sont encodées à l'aide de Base58Check, pour exporter
et importer facilement entre différents portefeuilles compatibles
BIP-32. Le codage Base58Check pour les clés étendues utilise une somme
de contrôle qui se traduit par le préfixe "xprv" et "xpub" lorsqu'il est
codé en caractères Base58 pour les rendre facilement reconnaissables.
Étant donné que la clé étendue est de 512 ou 513 bits, elle est
également beaucoup plus longue que les autres chaînes codées en
Base58Check que nous avons vues précédemment.

Voici un exemple de clé *privée* étendue, codée en Base58Check :

    xprv9tyUQV64JT5qs3RSTJkXCWKMyUgoQp7F3hA1xzG6ZGu6u6Q9VMNjGr67Lctvy5P8oyaYAL9CAWrUE9i6GoNMKUga5biW6Hx4tws2six3b9c

Voici la clé *publique* étendue correspondante, codée en Base58Check :

    xpub67xpozcx8pe95XVuZLHXZeG6XWXHpGq6Qv5cmNfi7cS5mtjJ2tgypeQbBs2UAR6KECeeMVKZBPLrtJunSDMstweyLXhRgPxdp14sk9tJPW9

### Dérivation de la clé enfant publique

<span class="indexterm"></span> <span class="indexterm"></span>Comme
mentionné précédemment, une caractéristique très utile des portefeuilles
HD est la possibilité de dériver des clés publiques enfant à partir de
clés publiques parent, *sans* avoir les clés privées. Cela nous donne
deux façons de dériver une clé publique enfant : soit à partir de la clé
privée enfant, soit directement à partir de la clé publique parent.

Une clé publique étendue peut donc être utilisée pour dériver toutes les
clés *publiques* (et uniquement les clés publiques) dans cette branche
de la structure du portefeuille HD.

Ce raccourci peut être utilisé pour créer des déploiements très
sécurisés à clé publique uniquement dans lesquels un serveur ou une
application possède une copie d'une clé publique étendue et aucune clé
privée. Ce type de déploiement peut produire un nombre infini de clés
publiques et d'adresses Bitcoin, mais ce type de déploiement ne permet
pas dépenser l'argent envoyé à ces adresses. Pendant ce temps, sur un
autre serveur plus sécurisé, la clé privée étendue peut dériver toutes
les clés privées correspondantes pour signer des transactions et
dépenser de l'argent.

Une application courante de cette solution consiste à installer une clé
publique étendue sur un serveur Web qui sert une application de commerce
électronique. Le serveur Web peut utiliser la fonction de dérivation de
clé publique pour créer une nouvelle adresse Bitcoin pour chaque
transaction (par exemple, pour le panier d'un client). Le serveur Web
n'aura aucune clé privée qui serait vulnérable au vol. Sans les
portefeuilles HD, la seule façon d'y parvenir est de générer des
milliers d'adresses Bitcoin sur un serveur sécurisé séparé, puis de les
précharger sur le serveur de commerce électronique. Cette approche est
lourde et nécessite une maintenance constante pour s'assurer que le
serveur de commerce électronique ne "manque" pas d'adresses.

<span class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span>Une autre
application courante de cette solution est le stockage à froid ou les
portefeuilles matériels. Dans ce scénario, la clé privée étendue peut
être stockée sur un portefeuille papier ou un périphérique matériel (tel
qu'un portefeuille matériel Trezor), tandis que la clé publique étendue
peut être conservée en ligne. L'utilisateur peut créer des adresses "de
réception" à volonté, tandis que les clés privées sont stockées en toute
sécurité hors ligne. Pour dépenser les fonds, l'utilisateur peut
utiliser la clé privée étendue sur un client Bitcoin de signature hors
ligne ou signer des transactions sur le périphérique de portefeuille
matériel (par exemple, Trezor). [figure\_title](#CKDpub) illustre le
mécanisme d'extension d'une clé publique parent pour dériver des clés
publiques enfants.

<figure>
<img src="images/mbc2_0511.png" id="CKDpub"
alt="Étendre une clé publique parent pour créer une clé publique enfant" />
<figcaption aria-hidden="true">Étendre une clé publique parent pour
créer une clé publique enfant</figcaption>
</figure>

### Dérivation de clé enfant renforcée

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span>La possibilité de dériver une branche de clés
publiques à partir d'un xpub est très utile, mais elle est
potentiellement risquée. L'accès à une xpub ne donne pas accès aux clés
privées enfants. Cependant, étant donné que xpub contient le code de
chaîne, si une clé privée enfant est connue ou divulguée d'une manière
ou d'une autre, elle peut être utilisée avec le code de chaîne pour
dériver toutes les autres clés privées enfants. Une seule clé privée
enfant divulguée, associée à un code de chaîne parent, révèle toutes les
clés privées de tous les enfants. Pire encore, la clé privée enfant
associée à un code de chaîne parent peut être utilisée pour déduire la
clé privée parent.

Pour contrer ce risque, les portefeuilles HD utilisent une fonction de
dérivation alternative appelée *dérivation renforcée*, qui "casse" la
relation entre la clé publique parent et le code de chaîne enfant. La
fonction de dérivation renforcée utilise la clé privée parent pour
dériver le code de chaîne enfant, au lieu de la clé publique parent.
Cela crée un "pare-feu" dans la séquence parent/enfant, avec un code de
chaîne qui ne peut pas être utilisé pour compromettre une clé privée
parent ou sœur. La fonction de dérivation renforcée semble presque
identique à la dérivation de clé privée enfant normale, sauf que la clé
privée parent est utilisée comme entrée de la fonction de hachage, au
lieu de la clé publique parent, comme indiqué dans le diagramme de
[figure\_title](#CKDprime).

<figure>
<img src="images/mbc2_0513.png" id="CKDprime"
alt="Dérivation renforcée d&#39;une clé enfant ; omet la clé publique parent" />
<figcaption aria-hidden="true">Dérivation renforcée d'une clé enfant ;
omet la clé publique parent</figcaption>
</figure>

Lorsque la fonction de dérivation privée renforcée est utilisée, la clé
privée enfant et le code de chaîne résultants sont complètement
différents de ce qui résulterait de la fonction de dérivation normale.
La "branche" de clés résultante peut être utilisée pour produire des
clés publiques étendues qui ne sont pas vulnérables, car le code de
chaîne qu'elles contiennent ne peut pas être exploité pour révéler des
clés privées. La dérivation renforcée est donc utilisée pour créer un
"trou" dans l'arborescence au-dessus du niveau où les clés publiques
étendues sont utilisées.

En termes simples, si vous souhaitez utiliser la commodité d'un xpub
pour dériver des branches de clés publiques, sans vous exposer au risque
d'une fuite de code de chaîne, vous devez le dériver d'une clé parent
renforcée, plutôt que d'une clé normale (non-renforcée) clé parent. En
tant que meilleure pratique, les enfants de niveau 1 des clés
principales sont toujours dérivés via la dérivation renforcée, pour
éviter la compromission des clés principales.

### Numéros d'index pour dérivation normale et durcie

Le numéro d'index utilisé dans la fonction de dérivation est un entier
de 32 bits. Pour distinguer facilement les clés dérivées par la fonction
de dérivation normale des clés dérivées par dérivation renforcée, ce
numéro d'index est divisé en deux plages. Les numéros d'index entre 0 et
2<sup>31</sup>–1 (0x0 à 0x7FFFFFFF) sont utilisés *uniquement* pour la
dérivation normale. Les numéros d'index entre 2<sup>31</sup> et
2<sup>32</sup>–1 (0x80000000 à 0xFFFFFFFF) sont utilisés *uniquement*
pour la dérivation renforcée. Donc, si l'indice est inférieur à
2<sup>31</sup>, l'enfant est normal, alors que si l'indice est égal ou
supérieur à 2<sup>31</sup>, l'enfant est renforcé.

Pour faciliter la lecture et l'affichage du numéro d'index, le numéro
d'index pour les enfants renforcés est affiché à partir de zéro, mais
avec un symbole prime. La première clé enfant normale s'affiche donc
sous la forme 0, tandis que la première clé enfant renforcée (index
0x80000000) s'affiche sous la forme 0`'`. Dans l'ordre, la deuxième clé
renforcée aurait l'index 0x80000001 et serait affichée sous la forme
1`'`, et ainsi de suite. Lorsque vous voyez un index de portefeuille HD
i`'`, cela signifie 2<sup>31</sup>+i.

### Identifiant de clé de portefeuille HD (chemin)

<span class="indexterm"></span>Les clés d'un portefeuille HD sont
identifiées à l'aide d'une convention de dénomination "chemin", où
chaque niveau de l'arborescence est séparé par une barre oblique (/)
(voir [table\_title](#table_4-8)). Les clés privées dérivées de la clé
privée principale commencent par "m". Les clés publiques dérivées de la
clé publique principale commencent par « M ». Par conséquent, la
première clé privée enfant de la clé privée principale est m/0. La
première clé publique enfant est M/0. Le deuxième petit-enfant du
premier enfant est m/0/1, et ainsi de suite.

L'"ascendance" d'une clé se lit de droite à gauche, jusqu'à atteindre la
clé maîtresse dont elle est issue. Par exemple, l'identifiant m/x/y/z
décrit la clé privée qui est le z-ième enfant de la clé privée parent
m/x/y, qui est le y-ième enfant de la clé privée parent m/x, qui est le
x-ième enfant de la clé privée principale parente m.

<table>
<caption>Exemples de chemin de portefeuille HD</caption>
<colgroup>
<col style="width: 50%" />
<col style="width: 50%" />
</colgroup>
<thead>
<tr class="header">
<th style="text-align: left;">Chemin HD</th>
<th style="text-align: left;">Clé décrite</th>
</tr>
</thead>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p>m/0</p></td>
<td style="text-align: left;"><p>La première (0) clé privée enfant de la
clé privée maîtresse (m)</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>m/0/0</p></td>
<td style="text-align: left;"><p>La première (0) clé privée enfant du
premier enfant (m/0)</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>m/0'/0</p></td>
<td style="text-align: left;"><p>Le premier (0) enfant normal du premier
enfant <em>renforcé</em> (m/0')</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>m/1/0</p></td>
<td style="text-align: left;"><p>La première (0) clé privée enfant du
deuxième enfant (m/1)</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>M/23/17/0/0</p></td>
<td style="text-align: left;"><p>La première (0) clé publique enfant du
premier enfant (M/23/17/0) du 18ème enfant (M/23/17) du 24ème enfant
(M/23)</p></td>
</tr>
</tbody>
</table>

Exemples de chemin de portefeuille HD

### Naviguer dans l'arborescence du portefeuille HD

La structure arborescente du portefeuille HD offre une grande
flexibilité. Chaque clé étendue parent peut avoir 4 milliards d'enfants
: 2 milliards d'enfants normaux et 2 milliards d'enfants renforcés.
Chacun de ces enfants peut avoir 4 milliards d'enfants supplémentaires,
et ainsi de suite. L'arbre peut être aussi profond que vous le
souhaitez, avec un nombre infini de générations. Avec toute cette
flexibilité, cependant, il devient assez difficile de naviguer dans cet
arbre infini. Il est particulièrement difficile de transférer des
portefeuilles HD entre les implémentations, car les possibilités
d'organisation interne en succursales et sous-succursales sont infinies.

Deux BIP offrent une solution à cette complexité en créant des
propositions de normes pour la structure des arborescences de
portefeuille HD. BIP-43 propose l'utilisation du premier index enfant
renforcé comme identifiant spécial qui signifie le "but" de la structure
arborescente. Basé sur BIP-43, un portefeuille HD ne devrait utiliser
qu'une seule branche de niveau 1 de l'arborescence, le numéro d'index
identifiant la structure et l'espace de noms du reste de l'arborescence
en définissant son objectif. Par exemple, un portefeuille HD utilisant
uniquement la branche m/i`'`/ est destiné à signifier un objectif
spécifique et cet objectif est identifié par le numéro d'index "i".

En étendant cette spécification, BIP-44 propose une structure
multicompte en tant que numéro "d'objet" `44'` sous BIP-43. Tous les
portefeuilles HD suivant la structure BIP-44 sont identifiés par le fait
qu'ils n'utilisent qu'une seule branche de l'arborescence : m/44'/.

BIP-44 spécifie la structure comme étant composée de cinq niveaux
d'arborescence prédéfinis :

    m / but&#39; / type_monnaie&#39; / compte&#39; / change / index_adresse

Le "but" de premier niveau est toujours réglé sur `44'`. Le
"type\_monnaie" de deuxième niveau spécifie le type de pièce de
cryptomonnaie, permettant des portefeuilles HD multidevises où chaque
devise a son propre sous-arbre sous le deuxième niveau. Il y a trois
devises définies pour l'instant : Bitcoin est m/44'/0', Bitcoin Testnet
est m/44`'`/1`'`, et Litecoin est m/44`'`/2`'`.

Le troisième niveau de l'arborescence est "compte", qui permet aux
utilisateurs de subdiviser leurs portefeuilles en sous-comptes logiques
distincts, à des fins comptables ou organisationnelles. Par exemple, un
portefeuille HD peut contenir deux "comptes" bitcoin : m/44`'`/0`'`/0`'`
et m/44`'`/0`'`/1`'`. Chaque compte est la racine de sa propre
sous-arborescence.

<span class="indexterm"></span> <span class="indexterm"></span> Au
quatrième niveau, "change", un portefeuille HD a deux
sous-arborescences, une pour créer des adresses de réception et une pour
créer des adresses de modification. Notez qu'alors que les niveaux
précédents utilisaient une dérivation renforcée, ce niveau utilise une
dérivation normale. Cela permet à ce niveau de l'arborescence d'exporter
des clés publiques étendues pour une utilisation dans un environnement
non sécurisé. Les adresses utilisables sont dérivées par le portefeuille
HD en tant qu'enfants du quatrième niveau, faisant du cinquième niveau
de l'arborescence l'"index\_adresse". Par exemple, la troisième adresse
de réception pour les paiements en bitcoins dans le compte principal
serait M/44`'`/0`'`/0`'`/0/2. [table\_title](#table_4-9) montre quelques
exemples supplémentaires.

<table>
<caption>Exemples de structure de portefeuille HD BIP-44</caption>
<colgroup>
<col style="width: 50%" />
<col style="width: 50%" />
</colgroup>
<thead>
<tr class="header">
<th style="text-align: left;">Chemin HD</th>
<th style="text-align: left;">Clé décrite</th>
</tr>
</thead>
<tbody>
<tr class="odd">
<td
style="text-align: left;"><p>M/44<code>'</code>/0<code>'</code>/0<code>'</code>/0/2</p></td>
<td style="text-align: left;"><p>La troisième clé publique de réception
pour le compte bitcoin principal</p></td>
</tr>
<tr class="even">
<td
style="text-align: left;"><p>M/44<code>'</code>/0<code>'</code>/3<code>'</code>/1/14</p></td>
<td style="text-align: left;"><p>La quinzième clé publique de changement
d'adresse pour le quatrième compte bitcoin</p></td>
</tr>
<tr class="odd">
<td
style="text-align: left;"><p>m/44<code>'</code>/2<code>'</code>/0<code>'</code>/0/1</p></td>
<td style="text-align: left;"><p>La deuxième clé privée du compte
principal Litecoin, pour la signature des transactions</p></td>
</tr>
</tbody>
</table>

Exemples de structure de portefeuille HD BIP-44

## Utilisation d'une clé publique étendue sur une boutique en ligne

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span> Voyons comment les portefeuilles HD sont
utilisés en poursuivant notre histoire avec la boutique en ligne de
Gabriel.<span class="indexterm"></span> <span class="indexterm"></span>
<span class="indexterm"></span>

Gabriel a d'abord créé sa boutique en ligne comme passe-temps, basé sur
une simple page Wordpress hébergée. Son magasin était assez simple avec
seulement quelques pages et un bon de commande avec une seule adresse
Bitcoin.

Gabriel a utilisé la première adresse Bitcoin générée par son appareil
Trezor comme adresse Bitcoin principale pour son magasin. De cette
façon, tous les paiements entrants seraient versés à une adresse
contrôlée par son portefeuille matériel Trezor.

Les clients soumettraient une commande en utilisant le formulaire et
enverraient le paiement à l'adresse Bitcoin publiée de Gabriel,
déclenchant un e-mail avec les détails de la commande à traiter par
Gabriel. Avec seulement quelques commandes par semaine, ce système
fonctionnait assez bien.

Cependant, la petite boutique en ligne a connu un certain succès et a
attiré de nombreuses commandes de la communauté locale. Bientôt, Gabriel
a été submergé. Avec toutes les commandes payées à la même adresse, il
devenait difficile de faire correspondre correctement les commandes et
les transactions, en particulier lorsque plusieurs commandes pour le
même montant arrivaient à proximité.

Le portefeuille HD de Gabriel offre une bien meilleure solution grâce à
la possibilité de dériver des clés enfants publiques sans connaître les
clés privées. Gabriel peut charger une clé publique étendue (xpub) sur
son site Web, qui peut être utilisée pour dériver une adresse unique
pour chaque commande client. Gabriel peut dépenser les fonds de son
Trezor, mais le xpub chargé sur le site Web ne peut que générer des
adresses et recevoir des fonds. Cette fonctionnalité des portefeuilles
HD est une excellente fonctionnalité de sécurité. Le site Web de Gabriel
ne contient aucune clé privée et n'a donc pas besoin de niveaux de
sécurité élevés.

Pour exporter le xpub, Gabriel utilise l'application de bureau Trezor
Suite en conjonction avec le portefeuille matériel Trezor. L'appareil
Trezor doit être branché pour que les clés publiques soient exportées.
Notez que les portefeuilles matériels n'exporteront jamais de clés
privées, celles-ci restant toujours sur l'appareil.
[figure\_title](#export_xpub) montre ce que Gabriel voit dans Trezor
Suite lors de l'exportation du xpub.

<figure>
<img src="images/mbc2_0512.png" id="export_xpub"
alt="Exportation d&#39;un xpub à partir d&#39;un portefeuille matériel Trezor" />
<figcaption aria-hidden="true">Exportation d'un xpub à partir d'un
portefeuille matériel Trezor</figcaption>
</figure>

Gabriel copie le xpub dans le logiciel de boutique bitcoin de sa
boutique en ligne. Il utilise *BTCPay Server*, qui est une boutique en
ligne open source pour une variété de plates-formes d'hébergement Web et
de contenu. BTCPay Server utilise le xpub pour générer une adresse
unique pour chaque achat. <span class="indexterm"></span> <span
class="indexterm"></span>

### Découverte et gestion de compte

L'entreprise de Gabriel est florissante. Il a fourni sa clé publique
étendue (xpub) à *BTCPay Server*, qui génère des adresses uniques pour
les clients de son site Web. Chaque fois qu'un client du site Web de
Gabriel clique sur le bouton "Commander" avec une modalité de paiement
spécifiée (dans ce cas, bitcoin), *BTCPay Server* génère une nouvelle
adresse pour ce client. Plus précisément, *BTCPay Server* itère sur
l'arborescence *address\_index* pour créer une nouvelle adresse à
afficher au client, comme défini par BIP-44. Si le client décide de
changer de méthode de paiement ou d'abandonner complètement la
transaction, cette adresse Bitcoin n'est pas utilisée et ne sera pas
utilisée pour un autre client tout de suite.

À un moment donné, le site Web de Gabriel peut avoir un grand nombre
d'adresses en attente pour les clients effectuant des achats, dont
certaines peuvent rester inutilisées et éventuellement expirer. Une fois
ces adresses expirées, *BTCPay Server* réutilisera ces adresses pour
combler le vide dans l'*index\_adresse*, mais il devient clair qu'il
peut y avoir des vides entre les feuilles d'*index\_adresse* de l'arbre
déterministe hiérarchique où se trouve réellement l'argent.

Disons que Gabriel est intéressé à voir son montant total de bitcoin
gagné sur un portefeuille de surveillance uniquement (celui qui vous
permet de voir l'historique des transactions, mais pas de dépenser des
fonds) qui est distinct du serveur BTCPay mais également conforme à la
norme BIP-44 . Comment ce portefeuille séparé devrait-il rechercher des
fonds dans ce vaste arbre hiérarchique, et quand devrait-il cesser de
chercher ? La plupart des portefeuilles suivent généralement un
processus itératif qui utilise une limite prédéfinie, connue sous le nom
de *gap limit*. Si, lors de la recherche d'adresses utilisées, le
portefeuille ne trouve pas d'adresses utilisées d'affilée au-delà de ce
nombre limite, il arrête de rechercher la chaîne d'adresses. La limite
d'écart par défaut est généralement fixée à 20. Ceci est détaillé dans
<span
id="bip-44"></span>[BIP-44](https://github.com/bitcoin/bips/blob/master/bip-0044.mediawiki).

Les limites d'écart expliquent le phénomène selon lequel l'importation
d'un portefeuille peut afficher un solde incorrect ou nul. Les fonds ne
sont pas perdus, mais plutôt, la fonction d'importation de portefeuille
n'a pas traversé suffisamment de feuilles pour détecter pleinement les
fonds. De nombreux portefeuilles permettent de modifier cette limite
d'écart par défaut, et Gabriel peut avoir besoin d'augmenter cette
limite pour permettre à son portefeuille d'importer entièrement son
historique de transactions.

# Opérations

# Présentation

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span>Les
transactions sont la partie la plus importante du système Bitcoin. Tout
le reste dans le bitcoin est conçu pour garantir que les transactions
peuvent être créées, propagées sur le réseau, validées et finalement
ajoutées au grand livre mondial des transactions (la chaîne de blocs).
Les transactions sont des structures de données qui encodent le
transfert de valeur entre les participants au système Bitcoin. Chaque
transaction est une entrée publique dans la chaîne de blocs de bitcoin,
le grand livre comptable mondial en partie double.

Dans ce chapitre, nous examinerons toutes les différentes formes de
transactions, ce qu'elles contiennent, comment les créer, comment elles
sont vérifiées et comment elles deviennent partie intégrante de
l'enregistrement permanent de toutes les transactions. Lorsque nous
utilisons le terme "portefeuille" dans ce chapitre, nous faisons
référence au logiciel qui construit les transactions, et pas seulement à
la base de données des clés.

# Transactions en détail

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span>Dans [Comment fonctionne
Bitcoin](#ch02_bitcoin_overview), nous avons examiné la transaction
utilisée par Alice pour payer un café au comptoir à café de Bob à l'aide
d'un explorateur de blocs
([figure\_title](#alices_transactions_to_bobs_cafe)).

L'application de l'explorateur de blocs montre une transaction de
"l'adresse" d'Alice à "l'adresse" de Bob. Il s'agit d'une vue très
simplifiée de ce qui est contenu dans une transaction. En fait, comme
nous le verrons dans ce chapitre, une grande partie des informations
affichées sont construites par l'explorateur de blocs et ne se trouvent
pas réellement dans la transaction.

<figure>
<img src="images/mbc2_0208.png" id="alices_transactions_to_bobs_cafe"
alt="Transaction d&#39;Alice au Bob&#39;s Café" />
<figcaption aria-hidden="true">Transaction d'Alice au Bob's
Café</figcaption>
</figure>

## Transactions: Dans les coulisses

<span class="indexterm"></span> <span class="indexterm"></span> Dans les
coulisses, une transaction réelle est très différente d'une transaction
fournie par un explorateur de blocs typique. En fait, la plupart des
constructions de haut niveau que nous voyons dans les différentes
interfaces utilisateur des applications bitcoin *n'existent pas
réellement* dans le système Bitcoin.

Nous pouvons utiliser l'interface de ligne de commande de Bitcoin Core
(`getrawtransaction` et `decoderawtransaction`) pour récupérer la
transaction "brute" d'Alice, la décoder et voir ce qu'elle contient. Le
résultat ressemble à ceci :

**La transaction d’Alice décodée**

    {
      "version": 1,
      "locktime": 0,
      "vin": [
        {
          "txid": "7957a35fe64f80d234d76d83a2a8f1a0d8149a41d81de548f0a65a8a999f6f18",
          "vout": 0,
          "scriptSig" : "3045022100884d142d86652a3f47ba4746ec719bbfbd040a570b1deccbb6498c75c4ae24cb02204b9f039ff08df09cbe9f6addac960298cad530a863ea8f53982c09db8f6e3813[ALL] 0484ecc0d46f1918b30928fa0e4ed99f16a0fb4fde0735e7ade8416ab9fe423cc5412336376789d172787ec3457eee41c04f4938de5cc17b4a10fa336a8d752adf",
          "sequence": 4294967295
        }
      ],
      "vout": [
        {
          "value": 0.01500000,
          "scriptPubKey": "OP_DUP OP_HASH160 ab68025513c3dbd2f7b92a94e0581f5d50f654e7 OP_EQUALVERIFY OP_CHECKSIG"
        },
        {
          "value": 0.08450000,
          "scriptPubKey": "OP_DUP OP_HASH160 7f9b1a7fb68d60c536c2fd8aeaa53a8f3cc025a8 OP_EQUALVERIFY OP_CHECKSIG",
        }
      ]
    }

Vous remarquerez peut-être certaines choses à propos de cette
transaction, principalement les choses qui manquent ! Où est l'adresse
d'Alice ? Où est l'adresse de Bob ? Où est l'entrée 0.1 "envoyée" par
Alice ? En bitcoin, il n'y a pas de pièces, pas d'expéditeurs, pas de
destinataires, pas de soldes, pas de comptes et pas d'adresses. Toutes
ces choses sont construites à un niveau supérieur pour le bénéfice de
l'utilisateur, pour rendre les choses plus faciles à comprendre.

Vous pouvez également remarquer de nombreux champs étranges et
indéchiffrables et des chaînes hexadécimales. Ne vous inquiétez pas,
nous expliquerons en détail chaque champ affiché ici dans ce chapitre.

# Sorties et entrées de transaction

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>La base fondamentale d'une transaction bitcoin
est une *sortie de transaction*. Les sorties de transaction sont des
morceaux indivisibles de monnaie bitcoin, enregistrés sur la chaîne de
blocs et reconnus comme valides par l'ensemble du réseau. Les nœuds
complets Bitcoin suivent toutes les sorties disponibles et utilisables,
appelées *sorties de transaction non dépensées*, ou *UTXO*. La
collection de tous les UTXO est connue sous le nom d'*ensemble UTXO* et
compte actuellement des millions d'UTXO. L'ensemble UTXO augmente à
mesure que de nouveaux UTXO sont créés et diminue lorsque UTXO est
consommé. Chaque transaction représente un changement (transition
d'état) dans l'ensemble UTXO.

<span class="indexterm"></span>Lorsque nous disons que le portefeuille
d'un utilisateur a "reçu" du bitcoin, nous voulons dire que le
portefeuille a détecté sur la chaîne de blocs un UTXO pouvant être
dépensé avec l'une des clés contrôlées par ce portefeuille. Ainsi, le
"solde" de bitcoins d'un utilisateur est la somme de tous les UTXO que
le portefeuille de l'utilisateur peut dépenser et qui peuvent être
dispersés parmi des centaines de transactions et des centaines de blocs.
Le concept de solde est créé par l'application de portefeuille. Le
portefeuille calcule le solde de l'utilisateur en scannant la chaîne de
blocs et en agrégeant la valeur de tout UTXO que le portefeuille peut
dépenser avec les clés qu'il contrôle. La plupart des portefeuilles
maintiennent une base de données ou utilisent un service de base de
données pour stocker un ensemble de référence rapide de tous les UTXO
qu'ils peuvent dépenser avec les clés qu'ils contrôlent.

<span class="indexterm"></span>[figure\_title](#utxo-stxo) affiche la
chaîne de blocs à trois moments différents, alors que la chaîne de
transaction de Joe à Gopesh est en cours de construction. Remarquez
comment chaque transaction dépense un UTXO qui a été créé dans une
transaction précédente, le transformant en une *sortie de transaction
dépensée*, ou *STXO*. Puisque la transaction \#1 (de Joe à Alice)
dépense un seul UTXO (de Joe) et crée un seul UTXO (à Alice), elle ne
modifie pas la taille de l'ensemble UTXO. D'autre part, les transactions
\#2 et \#3 créent toutes deux des sorties de change à l'expéditeur,
dépensant un seul UTXO et créant deux UTXO (le paiement et la sortie de
change). Par conséquent, chacun d'eux augmente la taille de l'ensemble
UTXO de 1.

<figure>
<img src="images/mbc2_0609.png" id="utxo-stxo"
alt="Chaîne de transaction de Joe à Gopesh en cours de construction sur la chaîne de blocs" />
<figcaption aria-hidden="true">Chaîne de transaction de Joe à Gopesh en
cours de construction sur la chaîne de blocs</figcaption>
</figure>

<span class="indexterm"></span>Une sortie de transaction peut avoir une
valeur arbitraire (entière) libellée comme un multiple de satoshis. Tout
comme les dollars peuvent être divisés jusqu'à deux décimales sous forme
de cents, le bitcoin peut être divisé jusqu'à huit décimales sous forme
de satoshis. Bien qu'une sortie puisse avoir n'importe quelle valeur
arbitraire, une fois créée, elle est indivisible. Il s'agit d'une
caractéristique importante des sorties qui doit être soulignée : les
sorties sont des unités de valeur *discrètes* et *indivisibles*,
libellées en satoshis entiers. Une production non dépensée ne peut être
consommée dans son intégralité que par une transaction.

<span class="indexterm"></span> <span class="indexterm"></span>Si un
UTXO est supérieur à la valeur souhaitée d'une transaction, il doit
toujours être consommé dans son intégralité et le changement doit être
généré dans la transaction. En d'autres termes, si vous avez un UTXO
d'une valeur de 20 bitcoins et que vous souhaitez payer seulement 1
bitcoin, votre transaction doit consommer l'intégralité de l'UTXO de 20
bitcoins et produire deux sorties : une payant 1 bitcoin au destinataire
souhaité et une autre payant 19 bitcoin en échange. retour dans votre
portefeuille. En raison de la nature indivisible des sorties de
transaction, la plupart des transactions bitcoin devront générer du
change.

Imaginez une cliente qui achète une boisson à 1,50 $, puise dans son
portefeuille et essaie de trouver une combinaison de pièces et de
billets de banque pour couvrir le coût de 1,50 $. L'acheteur choisira la
monnaie exacte si disponible, par exemple un billet d'un dollar et deux
quarts (un quart vaut 0,25 $), ou une combinaison de coupures plus
petites (six quarts), ou si nécessaire, une unité plus grande comme un
billet de 5 $. Si elle remet trop d'argent, disons 5 $, au propriétaire
du magasin, elle s'attendra à 3,50 $ de monnaie, qu'elle remettra dans
son portefeuille et qu'elle disposera pour de futures transactions.

De même, une transaction bitcoin doit être créée à partir de l'UTXO d'un
utilisateur dans toutes les dénominations disponibles pour cet
utilisateur. Les utilisateurs ne peuvent pas couper un UTXO en deux, pas
plus qu'ils ne peuvent couper un billet d'un dollar en deux et
l'utiliser comme monnaie. L'application de portefeuille de l'utilisateur
sélectionne généralement à partir de l'UTXO disponible de l'utilisateur
pour composer un montant supérieur ou égal au montant de transaction
souhaité.

Comme dans la vraie vie, l'application bitcoin peut utiliser plusieurs
stratégies pour satisfaire le montant de l'achat : combiner plusieurs
unités plus petites, trouver la monnaie exacte ou utiliser une seule
unité supérieure à la valeur de la transaction et rendre la monnaie.
Tout cet assemblage complexe d'UTXO dépensables est effectué
automatiquement par le portefeuille de l'utilisateur et est invisible
pour les utilisateurs. Cela n'est pertinent que si vous construisez par
programme des transactions brutes à partir d'UTXO.

Une transaction consomme des sorties de transaction non dépensées
précédemment enregistrées et crée de nouvelles sorties de transaction
qui peuvent être consommées par une transaction future. De cette façon,
des morceaux de valeur bitcoin passent d'un propriétaire à l'autre dans
une chaîne de transactions consommant et créant des UTXO.

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>L'exception à la chaîne de sortie et d'entrée
est une type spécial de transaction appelé transaction *coinbase*, qui
est la première transaction de chaque bloc. Cette transaction y est
placée par le mineur "gagnant" et crée un tout nouveau bitcoin payable à
ce mineur en récompense de l'exploitation minière. Cette transaction
coinbase spéciale ne consomme pas d'UTXO ; à la place, il a un type
spécial d'entrée appelé "coinbase". C'est ainsi que la masse monétaire
du bitcoin est créée pendant le processus de minage, comme nous le
verrons dans [???](#mining).

Qu'est-ce qui vient en premier ? Entrées ou sorties, la poule ou l'œuf ?
Strictement parlant, les sorties viennent en premier parce que les
transactions coinbase, qui génèrent de nouveaux bitcoins, n'ont pas
d'entrées et créent des sorties à partir de rien.

## Sorties des transactions

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>Chaque transaction bitcoin crée des sorties,
qui sont enregistrées sur le grand livre bitcoin. Presque toutes ces
sorties, à une exception près (voir [Sortie d'enregistrement de données
(RETOUR)](#op_return)) créent des morceaux de bitcoin utilisables
appelés UTXO, qui sont ensuite reconnus par l'ensemble du réseau et
disponibles pour que le propriétaire les dépense lors d'une future
transaction.

Les UTXO sont suivis par chaque client Bitcoin à nœud complet dans
l'ensemble UTXO. Les nouvelles transactions consomment (dépensent) une
ou plusieurs de ces sorties de l'ensemble UTXO.

Les sorties de transaction se composent de deux parties :

-   Un montant de bitcoin, libellé en *satoshis*, la plus petite unité
    de bitcoin

-   Un puzzle cryptographique qui détermine les conditions requises pour
    passer la sortie

<span class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span><span
class="indexterm"></span>Le puzzle cryptographique est également connu
sous le nom de *script de verrouillage*, un *script de témoin* ou un
`scriptPubKey`.

Le langage de script de transaction, utilisé dans le script de
verrouillage mentionné précédemment, est décrit en détail dans [Scripts
de transaction et langage de script](#tx_script).

Maintenant, regardons la transaction d'Alice (montrée précédemment dans
[Transactions: Dans les coulisses](#transactions_behind_the_scenes)) et
voir si nous pouvons identifier les sorties. Dans l'encodage JSON, les
sorties sont dans un tableau (liste) nommé `vout` :

    "vout": [
      {
        "value": 0.01500000,
        "scriptPubKey": "OP_DUP OP_HASH160 ab68025513c3dbd2f7b92a94e0581f5d50f654e7 OP_EQUALVERIFY
        OP_CHECKSIG"
      },
      {
        "value": 0.08450000,
        "scriptPubKey": "OP_DUP OP_HASH160 7f9b1a7fb68d60c536c2fd8aeaa53a8f3cc025a8 OP_EQUALVERIFY OP_CHECKSIG",
      }
    ]

Comme vous pouvez le voir, la transaction contient deux sorties. Chaque
sortie est définie par une valeur et un puzzle cryptographique. Dans
l'encodage indiqué par Bitcoin Core, la valeur est indiquée en bitcoin,
mais dans la transaction elle-même, elle est enregistrée sous la forme
d'un entier libellé en satoshis. La deuxième partie de chaque sortie est
le puzzle cryptographique qui fixe les conditions de dépenses. Bitcoin
Core le montre comme `scriptPubKey` et nous montre une représentation
lisible par l'homme du script.

Le sujet du verrouillage et du déverrouillage de l'UTXO sera abordé plus
tard, dans [Construction du script (Verrouiller +
Déverrouiller)](#tx_lock_unlock). Le langage de script utilisé pour le
script dans `scriptPubKey` est décrit dans [Scripts de transaction et
langage de script](#tx_script). Mais avant d'approfondir ces sujets,
nous devons comprendre la structure globale des entrées et sorties des
transactions.

### Sérialisation des transactions: sorties

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>Lorsque les transactions sont transmises sur le
réseau ou échangées entre applications, elles sont *sérialisées*. La
sérialisation est le processus de conversion de la représentation
interne d'une structure de données dans un format qui peut être transmis
un octet à la fois, également appelé flux d'octets. La sérialisation est
le plus souvent utilisée pour coder des structures de données à
transmettre sur un réseau ou à stocker dans un fichier. Le format de
sérialisation d'une sortie de transaction est affiché dans
[table\_title](#tx_out_structure).

<table>
<caption>Sérialisation des sorties de transaction</caption>
<colgroup>
<col style="width: 33%" />
<col style="width: 33%" />
<col style="width: 33%" />
</colgroup>
<thead>
<tr class="header">
<th style="text-align: left;">Taille</th>
<th style="text-align: left;">Champ</th>
<th style="text-align: left;">Description</th>
</tr>
</thead>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p>8 octets (petit-boutiste)</p></td>
<td style="text-align: left;"><p>Montant</p></td>
<td style="text-align: left;"><p>Valeur du bitcoin en satoshis
(10<sup>-8</sup> bitcoin)</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>1–9 octets (VarInt)</p></td>
<td style="text-align: left;"><p>Taille du script de
verrouillage</p></td>
<td style="text-align: left;"><p>Longueur du script de verrouillage en
octets, à suivre</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>Variable</p></td>
<td style="text-align: left;"><p>Script de verrouillage</p></td>
<td style="text-align: left;"><p>Un script définissant les conditions
nécessaires pour dépenser la sortie</p></td>
</tr>
</tbody>
</table>

Sérialisation des sorties de transaction

La plupart des bibliothèques et frameworks bitcoin ne stockent pas les
transactions en interne sous forme de flux d'octets, car cela
nécessiterait une analyse complexe chaque fois que vous auriez besoin
d'accéder à un seul champ. Pour plus de commodité et de lisibilité, les
bibliothèques bitcoin stockent les transactions en interne dans des
structures de données (généralement des structures orientées objet).

<span class="indexterm"></span><span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span>Le processus de
conversion de la représentation de flux d'octets d'une transaction en
données de représentation interne d'une bibliothèque est appelée
*désérialisation* ou *analyse des transactions*. Le processus de
reconversion en un flux d'octets pour la transmission sur le réseau,
pour le hachage ou pour le stockage sur disque est appelé
*sérialisation*. La plupart des bibliothèques bitcoin ont des fonctions
intégrées pour la sérialisation et la désérialisation des transactions.

Voyez si vous pouvez décoder manuellement la transaction d'Alice à
partir de la forme hexadécimale sérialisée, en trouvant certains des
éléments que nous avons vus précédemment. La section contenant les deux
sorties est mise en surbrillance dans [example\_title](#example_6_1)
pour vous aider :

`0100000001186f9f998a5aa6f048e51dd8419a14d8a0f1a8a2836dd73`
`4d2804fe65fa35779000000008b483045022100884d142d86652a3f47`
`ba4746ec719bbfbd040a570b1deccbb6498c75c4ae24cb02204b9f039`
`ff08df09cbe9f6addac960298cad530a863ea8f53982c09db8f6e3813`
`01410484ecc0d46f1918b30928fa0e4ed99f16a0fb4fde0735e7ade84`
`16ab9fe423cc5412336376789d172787ec3457eee41c04f4938de5cc1`
`7b4a10fa336a8d752adfffffffff02`**`60e31600000000001976a914ab6`**
**`8025513c3dbd2f7b92a94e0581f5d50f654e788acd0ef800000000000`**
**`1976a9147f9b1a7fb68d60c536c2fd8aeaa53a8f3cc025a888ac`** `00000000`

Voici quelques conseils :

-   Il y a deux sorties dans la section en surbrillance, chacune
    sérialisée comme indiqué dans [table\_title](#tx_out_structure).

-   La valeur de 0,015 bitcoin est de 1 500 000 satoshis. C'est
    `16 e3 60` en hexadécimal.

-   Dans la transaction sérialisée, la valeur `16 e3 60` est encodée
    dans l'ordre d’octets petit-boutiste (octet le moins significatif en
    premier), elle ressemble donc à `60 e3 16`.

-   La longueur de `scriptPubKey` est de 25 octets, soit `19` en
    hexadécimal.

## Entrées de transactions

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>Les entrées de transaction identifient (par
référence) quel UTXO sera consommé et fournissent une preuve de
propriété via un script de déverrouillage.

Pour construire une transaction, un portefeuille sélectionne parmi
l'UTXO qu'il contrôle, l'UTXO avec une valeur suffisante pour effectuer
le paiement demandé. Parfois un UTXO suffit, d'autres fois plus d'un est
nécessaire. Pour chaque UTXO qui sera consommé pour effectuer ce
paiement, le portefeuille crée une entrée pointant vers l'UTXO et le
déverrouille avec un script de déverrouillage.

Examinons plus en détail les composants d'une entrée. La première partie
d'une entrée est un pointeur vers un UTXO par référence au hachage de
transaction et à un index de sortie, qui identifie l'UTXO spécifique
dans cette transaction. La deuxième partie est un script de
déverrouillage, que le portefeuille construit afin de satisfaire aux
conditions de dépenses définies dans l'UTXO. Le plus souvent, le script
de déverrouillage est une signature numérique et une clé publique
prouvant la propriété du bitcoin. Cependant, ce ne sont pas tous les
scripts de déverrouillage qui contiennent une signature. La troisième
partie est un numéro de séquence, qui sera discuté plus tard.

Considérez notre exemple dans [Transactions: Dans les
coulisses](#transactions_behind_the_scenes). Les entrées de transaction
sont un tableau (liste) appelé `vin` :

**Les entrées de transaction dans la transaction d'Alice**

    "vin": [
      {
        "txid": "7957a35fe64f80d234d76d83a2a8f1a0d8149a41d81de548f0a65a8a999f6f18",
        "vout": 0,
        "scriptSig" : "3045022100884d142d86652a3f47ba4746ec719bbfbd040a570b1deccbb6498c75c4ae24cb02204b9f039ff08df09cbe9f6addac960298cad530a863ea8f53982c09db8f6e3813[ALL] 0484ecc0d46f1918b30928fa0e4ed99f16a0fb4fde0735e7ade8416ab9fe423cc5412336376789d172787ec3457eee41c04f4938de5cc17b4a10fa336a8d752adf",
        "sequence": 4294967295
      }
    ]

Comme vous pouvez le voir, il n'y a qu'une seule entrée dans la liste
(car un UTXO contenait une valeur suffisante pour effectuer ce
paiement). L'entrée contient quatre éléments :

-   Un <span class="indexterm"></span>ID de transaction, faisant
    référence à la transaction qui contient l'UTXO dépensé

-   Un index de sortie (`vout`), identifiant quel UTXO de cette
    transaction est référencé (le premier est zéro)

-   Un `scriptSig`, qui satisfait aux conditions imposées à l'UTXO, le
    déverrouillant pour les dépenses

-   Un numéro de séquence (à discuter plus tard)

Dans la transaction d'Alice, l'entrée pointe vers l'ID de transaction :

    7957a35fe64f80d234d76d83a2a8f1a0d8149a41d81de548f0a65a8a999f6f18

et l'indice de sortie `0` (c'est-à-dire le premier UTXO créé par cette
transaction). Le script de déverrouillage est construit par le
portefeuille d'Alice en récupérant d'abord l'UTXO référencé, en
examinant son script de verrouillage, puis en l'utilisant pour créer le
script de déverrouillage nécessaire pour le satisfaire.

En regardant simplement l'entrée, vous avez peut-être remarqué que nous
ne savons rien de cet UTXO, à part une référence à la transaction parent
qui le contient. Nous ne connaissons pas sa valeur (montant en satoshi),
et nous ne connaissons pas le script de verrouillage qui fixe les
conditions pour le dépenser. Pour retrouver ces informations, il faut
récupérer l'UTXO référencé en récupérant la transaction mère qui le
contient. Notez que parce que la valeur de l'entrée n'est pas
explicitement indiquée, nous devons également utiliser l'UTXO référencé
afin de calculer les frais qui seront payés dans cette transaction (voir
[Frais de transaction](#tx_fees)).

Ce n'est pas seulement le portefeuille d'Alice qui doit récupérer l'UTXO
référencé dans les entrées. Une fois cette transaction diffusée sur le
réseau, chaque nœud de validation devra également récupérer l'UTXO
référencé dans les entrées de transaction afin de valider la
transaction.

Les transactions en elles-mêmes semblent incomplètes car elles manquent
de contexte. Elles référencent l’UTXO dans leurs entrées mais sans
récupérer cet UTXO on ne peut pas connaître la valeur des entrées ni
leurs conditions de verrouillage. Lors de l'écriture d'un logiciel
bitcoin, chaque fois que vous décodez une transaction dans le but de la
valider ou de compter les frais ou de vérifier le script de
déverrouillage, votre code devra d'abord récupérer l'UTXO référencé de
la blockchain afin de construire le contexte implicite mais non présent
dans les références UTXO des entrées. Par exemple, pour calculer le
montant payé en frais, vous devez connaître la somme des valeurs des
entrées et des sorties. Mais sans récupérer les UTXO référencés dans les
entrées, vous ne connaissez pas leur valeur. Ainsi, une opération
apparemment simple comme le comptage des frais dans une seule
transaction implique en fait plusieurs étapes et des données provenant
de plusieurs transactions.

Nous pouvons utiliser la même séquence de commandes avec Bitcoin Core
que celle que nous avons utilisée lors de la récupération de la
transaction d'Alice (`getrawtransaction` et `decoderawtransaction`).
Avec cela, nous pouvons obtenir l'UTXO référencé dans l'entrée de la
transaction d'Alice et jeter un œil :

**UTXO de la transaction précédente, référencé dans l'entrée de la
transaction d'Alice**

    "vout": [
       {
         "value": 0.10000000,
         "scriptPubKey": "OP_DUP OP_HASH160 7f9b1a7fb68d60c536c2fd8aeaa53a8f3cc025a8 OP_EQUALVERIFY OP_CHECKSIG"
       }
     ]

On voit que cet UTXO a une valeur de 0.1 BTC et qu'il a un script de
verrouillage (`scriptPubKey`) qui contient "OP\_DUP OP\_HASH160…".

Pour bien comprendre la transaction d'Alice, nous avons dû récupérer la
transaction précédente référencée en entrée. Une fonction qui récupère
les transactions précédentes et les sorties de transaction non dépensées
est très courante et existe dans presque toutes les bibliothèques et API
Bitcoin.

### Sérialisation des transactions: entrées

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>Lorsque les transactions sont sérialisées pour
être transmises sur le réseau, leurs entrées sont codées dans un flux
d'octets comme indiqué dans [table\_title](#tx_in_structure).

<table>
<caption>Sérialisation des entrées de transaction</caption>
<colgroup>
<col style="width: 33%" />
<col style="width: 33%" />
<col style="width: 33%" />
</colgroup>
<thead>
<tr class="header">
<th style="text-align: left;">Taille</th>
<th style="text-align: left;">Champ</th>
<th style="text-align: left;">Description</th>
</tr>
</thead>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p>32 octets</p></td>
<td style="text-align: left;"><p>Hachage de transaction</p></td>
<td style="text-align: left;"><p>Pointeur vers la transaction contenant
l'UTXO à dépenser</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>4 octets</p></td>
<td style="text-align: left;"><p>Indice de sortie</p></td>
<td style="text-align: left;"><p>Le numéro d'index de l'UTXO à
dépenser ; le premier est 0</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>1–9 octets (VarInt)</p></td>
<td style="text-align: left;"><p>Taille du script de
déverrouillage</p></td>
<td style="text-align: left;"><p>Longueur du script de déverrouillage en
octets à suivre</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>variables</p></td>
<td style="text-align: left;"><p>Déverrouillage-Script</p></td>
<td style="text-align: left;"><p>Un script remplissant les conditions du
script de verrouillage UTXO</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>4 octets</p></td>
<td style="text-align: left;"><p>Numéro de séquence</p></td>
<td style="text-align: left;"><p>Utilisé pour le temps de verrouillage
ou désactivé (0xFFFFFFFF)</p></td>
</tr>
</tbody>
</table>

Sérialisation des entrées de transaction

Comme pour les sorties, voyons si nous pouvons trouver les entrées de la
transaction d'Alice au format sérialisé. Tout d'abord, les entrées
décodées :

    "vin": [
      {
        "txid": "7957a35fe64f80d234d76d83a2a8f1a0d8149a41d81de548f0a65a8a999f6f18",
        "vout": 0,
        "scriptSig" : "3045022100884d142d86652a3f47ba4746ec719bbfbd040a570b1deccbb6498c75c4ae24cb02204b9f039ff08df09cbe9f6addac960298cad530a863ea8f53982c09db8f6e3813[ALL] 0484ecc0d46f1918b30928fa0e4ed99f16a0fb4fde0735e7ade8416ab9fe423cc5412336376789d172787ec3457eee41c04f4938de5cc17b4a10fa336a8d752adf",
        "sequence": 4294967295
      }
    ],

Voyons maintenant si nous pouvons identifier ces champs dans le codage
hexadécimal sérialisé dans [example\_title](#example_6_2) :

`0100000001`**`186f9f998a5aa6f048e51dd8419a14d8a0f1a8a2836dd73`**
**`4d2804fe65fa35779000000008b483045022100884d142d86652a3f47`**
**`ba4746ec719bbfbd040a570b1deccbb6498c75c4ae24cb02204b9f039`**
**`ff08df09cbe9f6addac960298cad530a863ea8f53982c09db8f6e3813`**
**`01410484ecc0d46f1918b30928fa0e4ed99f16a0fb4fde0735e7ade84`**
**`16ab9fe423cc5412336376789d172787ec3457eee41c04f4938de5cc1`**
**`7b4a10fa336a8d752adfffffffff`**`0260e31600000000001976a914ab6`
`8025513c3dbd2f7b92a94e0581f5d50f654e788acd0ef800000000000`
`1976a9147f9b1a7fb68d60c536c2fd8aeaa53a8f3cc025a888ac00000` `000`

Astuces:

-   L'ID de transaction est sérialisé dans l'ordre inverse des octets,
    il commence donc par (hex) `18` et se termine par `79`

-   L'index de sortie est un groupe de zéros de 4 octets, facile à
    identifier

-   La longueur du `scriptSig` est de 139 octets, soit `8b` en
    hexadécimal

-   Le numéro de séquence est défini sur `FFFFFFFF`, encore une fois
    facile à identifier<span class="indexterm"></span> <span
    class="indexterm"></span>

ScriptSig est un type spécifique de script de déverrouillage qui,
lorsqu'il est sérialisé pour être transmis sur le réseau, les entrées
sont codées dans un flux d'octets, comme indiqué dans
[table\_title](#scriptsig_in_structure). La sérialisation du champ
signature est détaillée dans [Sérialisation des signatures
(DER)](#seralization_of_signatures_der). Le champ de signature comprend
également un type de hachage de signature (SIGHASH), qui est détaillé
dans [Types de hachage de signature (SIGHASH)](#sighash_types).

<table>
<caption>Sérialisation des entrées ScriptSig</caption>
<colgroup>
<col style="width: 33%" />
<col style="width: 33%" />
<col style="width: 33%" />
</colgroup>
<thead>
<tr class="header">
<th style="text-align: left;">Taille</th>
<th style="text-align: left;">Champ</th>
<th style="text-align: left;">Description</th>
</tr>
</thead>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p>1–9 octets (VarInt)</p></td>
<td style="text-align: left;"><p>Taille signature</p></td>
<td style="text-align: left;"><p>Longueur de la signature en octets à
suivre</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>variables</p></td>
<td style="text-align: left;"><p>signature</p></td>
<td style="text-align: left;"><p>Une signature produite par le
portefeuille de l'utilisateur à partir de sa clé privée, qui comprend un
SIGHASH</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>1–9 octets (VarInt)</p></td>
<td style="text-align: left;"><p>Taille de la clé publique</p></td>
<td style="text-align: left;"><p>Longueur de la clé publique en octets à
suivre</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>variables</p></td>
<td style="text-align: left;"><p>Clé publique</p></td>
<td style="text-align: left;"><p>La clé publique, non hachée</p></td>
</tr>
</tbody>
</table>

Sérialisation des entrées ScriptSig

## Frais de transaction

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>La plupart des transactions incluent des frais
de transaction, qui rémunèrent les mineurs de bitcoins pour la
sécurisation du réseau. Les frais servent également de mécanisme de
sécurité eux-mêmes, en rendant économiquement impossible pour les
attaquants d'inonder le réseau de transactions. L'exploitation minière
et les frais et récompenses perçus par les mineurs sont discutés plus en
détail dans [???](#mining).

Cette section examine comment les frais de transaction sont inclus dans
une transaction typique. La plupart des portefeuilles calculent et
incluent automatiquement les frais de transaction. Toutefois, si vous
créez des transactions par programmation ou à l'aide d'une interface de
ligne de commande, vous devez comptabiliser et inclure manuellement ces
frais.

Les frais de transaction servent d'incitation à inclure (exploiter) une
transaction dans le bloc suivant et également de dissuasion contre les
abus du système en imposant un petit coût sur chaque transaction. Les
frais de transaction sont perçus par le mineur qui exploite le bloc qui
enregistre la transaction sur la chaîne de blocs.

Les frais de transaction sont calculés en fonction de la taille de la
transaction en kilo-octets, et non de la valeur de la transaction en
bitcoin. Dans l'ensemble, les frais de transaction sont fixés en
fonction des forces du marché au sein du réseau Bitcoin. Les mineurs
hiérarchisent les transactions en fonction de nombreux critères
différents, y compris les frais, et peuvent même traiter les
transactions gratuitement dans certaines circonstances. Les frais de
transaction affectent la priorité de traitement, ce qui signifie qu'une
transaction avec des frais suffisants est susceptible d'être incluse
dans le prochain bloc miné, alors qu'une transaction avec des frais
insuffisants ou nuls peut être retardée, traitée au mieux après quelques
blocs, ou pas traité du tout. Les frais de transaction ne sont pas
obligatoires et les transactions sans frais peuvent éventuellement être
traitées ; cependant, l'inclusion des frais de transaction encourage le
traitement prioritaire.

Au fil du temps, la façon dont les frais de transaction sont calculés et
leur effet sur la hiérarchisation des transactions ont évolué. Au
départ, les frais de transaction étaient fixes et constants sur
l'ensemble du réseau. Progressivement, la structure tarifaire s'est
assouplie et peut être influencée par les forces du marché, en fonction
de la capacité du réseau et du volume des transactions. Depuis au moins
le début de 2016, les limites de capacité en bitcoin ont créé une
concurrence entre les transactions, entraînant des frais plus élevés et
faisant des transactions gratuites une chose du passé. Les transactions
sans frais ou à très faibles frais sont rarement minées et parfois ne
seront même pas propagées sur le réseau.

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span>Dans Bitcoin Core, les politiques de relais des
frais sont définies par l'option `minrelaytxfee`. Le `minrelaytxfee` par
défaut actuel est de 0,00001 bitcoin ou un centième de millibitcoin par
kilooctet. Par conséquent, par défaut, les transactions dont les frais
sont inférieurs à 0,00001 bitcoin sont traitées comme gratuites et ne
sont relayées que s'il y a de la place dans le mempool ; sinon, ils sont
supprimés. Les nœuds Bitcoin peuvent remplacer la politique de relais de
frais par défaut en ajustant la valeur de `minrelaytxfee`.

<span class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>Tout service bitcoin qui crée des transactions,
y compris les portefeuilles, les échanges, les applications de vente au
détail, etc., *doit* implémenter des frais dynamiques. Les frais
dynamiques peuvent être mis en œuvre via un service tiers d'estimation
des frais ou avec un algorithme d'estimation des frais intégré. Si vous
n'êtes pas sûr, commencez par un service tiers et, à mesure que vous
acquérez de l'expérience, concevez et implémentez votre propre
algorithme si vous souhaitez supprimer la dépendance tierce.

Les algorithmes d'estimation des frais calculent les frais appropriés,
en fonction de la capacité et des frais offerts par les transactions «
concurrentes ». Ces algorithmes vont du simple (frais moyens ou médians
dans le dernier bloc) au sophistiqué (analyse statistique). Ils estiment
les frais nécessaires (en satoshis par octet) qui donneront à une
transaction une forte probabilité d'être sélectionnée et incluse dans un
certain nombre de blocs. La plupart des services offrent aux
utilisateurs la possibilité de choisir des frais de priorité élevés,
moyens ou faibles. Une priorité élevée signifie que les utilisateurs
paient des frais plus élevés, mais la transaction est susceptible d'être
incluse dans le bloc suivant. Une priorité moyenne et faible signifie
que les utilisateurs paient des frais de transaction moins élevés, mais
que la confirmation des transactions peut prendre beaucoup plus de
temps.

<span class="indexterm"></span> De nombreuses applications de
portefeuille utilisent des services tiers pour le calcul des frais. Un
service populaire est
[*https://bitcoinfees.earn.com/*](https://bitcoinfees.earn.com/), qui
fournit une API et un graphique visuel montrant les frais en
satoshi/octet pour différentes priorités.

<span class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>Les frais statiques ne sont plus viables sur le
réseau Bitcoin. Les portefeuilles qui fixent des frais statiques
produiront une mauvaise expérience utilisateur car les transactions
seront souvent "bloquées" et resteront non confirmées. Les utilisateurs
qui ne comprennent pas les transactions et les frais en bitcoins sont
consternés par les transactions "bloquées" car ils pensent avoir perdu
leur argent.

Le graphique en [figure\_title](#bitcoinfeesearncom) affiche
l'estimation en temps réel des frais par incréments de 10 satoshi/octet
et le temps de confirmation attendu (en minutes et en nombre de blocs)
pour les transactions avec des frais dans chaque plage. Pour chaque
fourchette de frais (par exemple, 61 à 70 satoshi/octet), deux barres
horizontales indiquent le nombre de transactions non confirmées (1 405)
et le nombre total de transactions au cours des dernières 24 heures
(102 975), avec des frais compris dans cette fourchette. Sur la base du
graphique, les frais de haute priorité recommandés à ce moment étaient
de 80 satoshi/octet, des frais susceptibles d'entraîner l'inclusion de
la transaction dans le bloc suivant (délai de bloc nul). Pour la
perspective, la taille médiane des transactions est de 226 octets, donc
les frais recommandés pour cette taille de transaction seraient de 18
080 satoshis (0,00018080 BTC).

Les données d'estimation des frais peuvent être récupérées via une
simple API HTTP REST, à l'adresse
<https://bitcoinfees.earn.com/api/v1/fees/recommended> . Par exemple,
sur la ligne de commande en utilisant la commande `curl` :

**Utilisation de l'API d'estimation des frais**

    $ curl https://bitcoinfees.earn.com/api/v1/fees/recommended

    {"fastestFee":80,"halfHourFee":80,"hourFee":60}

L'API renvoie un objet JSON avec l'estimation actuelle des frais pour la
confirmation la plus rapide (`fastestFee`), la confirmation dans les
trois blocs (`halfHourFee`) et six blocs (`hourFee`), en satoshi par
octet.

<figure>
<img src="images/mbc2_0602.png" id="bitcoinfeesearncom"
alt="Service d&#39;estimation des frais bitcoinfees.earn.com" />
<figcaption aria-hidden="true">Service d'estimation des frais
bitcoinfees.earn.com</figcaption>
</figure>

## Ajout de frais aux transactions

La structure de données des transactions n'a pas de champ pour les
frais. Au lieu de cela, les frais sont implicites comme la différence
entre la somme des entrées et la somme des sorties. Tout montant
excédentaire qui reste après que toutes les sorties ont été déduites de
toutes les entrées est la redevance perçue par les mineurs :

**Les frais de transaction sont implicites, comme l'excédent des
intrants moins les extrants :**

    Frais = Somme(intrants) - Somme(extrants)

Il s'agit d'un élément quelque peu déroutant des transactions et d'un
point important à comprendre, car si vous construisez vos propres
transactions, vous devez vous assurer de ne pas inclure par inadvertance
des frais très importants en sous-dépensant les intrants. Cela signifie
que vous devez comptabiliser toutes les entrées, si nécessaire en créant
du change, ou vous finirez par donner un très gros pourboire aux
mineurs !

Par exemple, si vous consommez un UTXO de 20 bitcoins pour effectuer un
paiement de 1 bitcoin, vous devez inclure une sortie de modification de
19 bitcoins dans votre portefeuille. Sinon, le "reste" de 19 bitcoins
sera compté comme des frais de transaction et sera collecté par le
mineur qui exploite votre transaction dans un bloc. Bien que vous
receviez un traitement prioritaire et rendiez un mineur très heureux, ce
n'est probablement pas ce que vous vouliez.

<span class="indexterm"></span> <span class="indexterm"></span> Si vous
oubliez d'ajouter une sortie de modification dans une transaction
construite manuellement, vous paierez la modification en tant que frais
de transaction. Dire "Gardez la monnaie !" au mineur n'est peut-être pas
ce que vous vouliez vraiment.

<span class="indexterm"></span> <span class="indexterm"></span> Voyons
comment cela fonctionne en pratique, en examinant à nouveau l'achat de
café d'Alice. Alice veut dépenser 0,015 bitcoin pour payer son café.
Pour s'assurer que cette transaction est traitée rapidement, elle voudra
inclure des frais de transaction, disons 0,0005. Cela signifie que le
coût total de la transaction sera de 0,0155. Son portefeuille doit donc
se procurer un ensemble d'UTXO qui totalise 0,0155 bitcoin ou plus et,
si nécessaire, créer de la monnaie. Disons que son portefeuille dispose
d'un UTXO de 0,1 bitcoin. Elle devra donc consommer cet UTXO, créer une
sortie pour le comptoir à café de Bob pour 0,015, et une seconde sortie
avec 0,0845 bitcoin en retour vers son propre portefeuille, laissant
0,0005 bitcoin non alloué, comme frais implicites pour la transaction.

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span>Regardons maintenant un scénario différent.
Eugenia, directrice de notre association caritative pour enfants aux
Philippines, a organisé une collecte de fonds pour acheter des manuels
scolaires pour les enfants. Elle a reçu plusieurs milliers de petits
dons de personnes du monde entier, totalisant 50 bitcoins, donc son
portefeuille est plein de très petits paiements (UTXO). Maintenant, elle
veut acheter des centaines de manuels scolaires auprès d'un éditeur
local, en payant en bitcoins.

Alors que l'application de portefeuille d'Eugenia tente de construire
une seule transaction de paiement plus importante, elle doit
s'approvisionner à partir de l'ensemble UTXO disponible, qui est composé
de nombreux montants plus petits. Cela signifie que la transaction
résultante proviendra de plus d'une centaine d'UTXO de petite valeur en
tant qu'entrées et d'une seule sortie, payant l'éditeur du livre. Une
transaction avec autant d'entrées sera supérieure à un kilo-octet,
peut-être plusieurs kilo-octets. En conséquence, cela nécessitera des
frais beaucoup plus élevés que la transaction de taille médiane.

L'application de portefeuille d'Eugenia calculera les frais appropriés
en mesurant la taille de la transaction et en la multipliant par les
frais par kilo-octet. De nombreux portefeuilles surpayeront les frais
pour les transactions plus importantes afin de s'assurer que la
transaction est traitée rapidement. Les frais plus élevés ne sont pas
dus au fait qu'Eugenia dépense plus d'argent, mais au fait que sa
transaction est plus complexe et plus volumineuse - les frais sont
indépendants de la valeur en bitcoins de la transaction.<span
class="indexterm"></span> <span class="indexterm"></span>

# Scripts de transaction et langage de script

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span> <span class="indexterm"></span>Le langage de
script de transaction bitcoin, appelé *Script* , est un langage
d'exécution basé sur une pile de notation polonaise inversée (RPN) de
type Forth. Si cela ressemble à du charabia, vous n'avez probablement
pas étudié les langages de programmation des années 1960, mais ce n'est
pas grave, nous vous expliquerons tout dans ce chapitre. Le script de
verrouillage placé sur un UTXO et le script de déverrouillage sont
écrits dans ce langage de script. Lorsqu'une transaction est validée, le
script de déverrouillage de chaque entrée est exécuté parallèlement au
script de verrouillage correspondant pour voir s'il satisfait à la
condition de dépense.

Script est un langage très simple qui a été conçu pour être limité dans
sa portée et être exécutable sur une gamme de matériel et peut être
aussi simple qu'un périphérique intégré. Il nécessite un traitement
minimal et ne peut pas faire la plupart des choses fantaisistes que les
langages de programmation modernes peuvent faire. Pour son utilisation
dans la validation de monnaie programmable, il s'agit d'une fonction de
sécurité délibérée.

<span class="indexterm"></span>Aujourd'hui, la plupart des transactions
traitées via le réseau Bitcoin ont la forme "Paiement à l'adresse
Bitcoin de Bob" et sont basées sur un script appelé Pay-to-Script
Public-Key-Hash. Cependant, les transactions bitcoin ne se limitent pas
au script "Paiement à l'adresse Bitcoin de Bob". En fait, les scripts de
verrouillage peuvent être écrits pour exprimer une grande variété de
conditions complexes. Afin de comprendre ces scripts plus complexes,
nous devons d'abord comprendre les bases des scripts de transaction et
du langage de script.

Dans cette section, nous démontrerons les composants de base du langage
de script de transaction bitcoin et montrerons comment il peut être
utilisé pour exprimer des conditions simples de dépenses et comment ces
conditions peuvent être satisfaites en déverrouillant des scripts.

<span class="indexterm"></span>La validation des transactions Bitcoin
n'est pas basée sur un modèle statique, mais est plutôt obtenue grâce à
l'exécution d'un langage de script. Ce langage permet d'exprimer une
variété presque infinie de conditions. C'est ainsi que le bitcoin
obtient le pouvoir de "l'argent programmable".

## Incomplétude de Turing

<span class="indexterm"></span>Le langage de script de transaction
bitcoin contient de nombreux opérateurs, mais est délibérément limité
d'une manière importante : il n'y a pas de boucles ou de capacités de
contrôle de flux complexes autres que le contrôle de flux conditionnel.
Cela garantit que le langage n'est pas *Turing complet*, ce qui signifie
que les scripts ont une complexité limitée et des temps d'exécution
prévisibles. Le script n'est pas un langage universel. <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>Ces limitations garantissent que le langage ne
peut pas être utilisé pour créer une boucle infinie ou une autre forme
de "bombe logique" qui pourrait être intégrée dans une transaction de
manière à provoquer une attaque par déni de service contre le réseau
Bitcoin. N'oubliez pas que chaque transaction est validée par chaque
nœud complet du réseau Bitcoin. Un langage limité empêche le mécanisme
de validation des transactions d'être utilisé comme une vulnérabilité.

## Vérification sans état

<span class="indexterm"></span>Le langage de script de transaction
bitcoin est sans état, en ce sens qu'il n'y a pas d'état avant
l'exécution du script, ou d'état enregistré après l'exécution du script.
Par conséquent, toutes les informations nécessaires à l'exécution d'un
script sont contenues dans le script. Un script s'exécutera de manière
prévisible de la même manière sur n'importe quel système. Si votre
système vérifie un script, vous pouvez être sûr que tous les autres
systèmes du réseau Bitcoin vérifieront également le script, ce qui
signifie qu'une transaction valide est valide pour tout le monde et tout
le monde le sait. Cette prévisibilité des résultats est un avantage
essentiel du système Bitcoin.

## Construction du script (Verrouiller + Déverrouiller)

Le moteur de validation des transactions de Bitcoin s'appuie sur deux
types de scripts pour valider les transactions : un script de
verrouillage et un script de déverrouillage.

<span class="indexterm"></span><span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span>Un script de
verrouillage est une condition de dépense placée sur une sortie : il
spécifie les conditions qui doivent être remplies pour dépenser la
production à l'avenir. <span class="indexterm"></span>Historiquement, le
script de verrouillage était appelé *scriptPubKey*, car il contenait
généralement une clé publique ou une adresse Bitcoin (hachage de clé
publique). Dans ce livre, nous l'appelons un "script de verrouillage"
pour reconnaître l'éventail de possibilités beaucoup plus large de cette
technologie de script. Dans la plupart des applications bitcoin, ce que
nous appelons un script de verrouillage apparaîtra dans le code source
sous la forme `scriptPubKey`. <span class="indexterm"></span><span
class="indexterm"></span>Vous verrez également le script de verrouillage
appelé *script de témoin* (voir [Témoin séparé](#segwit)) ou plus
généralement comme un *casse-tête cryptographique*. Ces termes
signifient tous la même chose, à différents niveaux d'abstraction.

Un script de déverrouillage est un script qui « résout », ou satisfait,
les conditions placées sur une sortie par un script de verrouillage et
permet à la sortie d'être dépensée. Les scripts de déverrouillage font
partie de chaque entrée de transaction. Ils contiennent la plupart du
temps une signature numérique produite par le portefeuille de
l'utilisateur à partir de sa clé privée. <span
class="indexterm"></span>Historiquement, le script de déverrouillage
s'appelait *scriptSig*, car il contenait généralement une signature
numérique. Dans la plupart des applications bitcoin, le code source fait
référence au script de déverrouillage sous la forme `scriptSig`. Vous
verrez également le script de déverrouillage appelé *témoin* (voir
[Témoin séparé](#segwit)). Dans ce livre, nous l'appelons un "script de
déverrouillage" pour reconnaître la gamme beaucoup plus large
d'exigences de script de verrouillage, car ce n’est pas tous les scripts
de déverrouillage qui doivent contenir des signatures.

Chaque nœud de validation Bitcoin validera les transactions en exécutant
les scripts de verrouillage et de déverrouillage ensemble. Chaque entrée
contient un script de déverrouillage et fait référence à un UTXO
existant précédemment. Le logiciel de validation copiera le script de
déverrouillage, récupérera l'UTXO référencé par l'entrée et copiera le
script de verrouillage à partir de cet UTXO. Les scripts de
déverrouillage et de verrouillage sont ensuite exécutés en séquence.
L'entrée est valide si le script de déverrouillage satisfait les
conditions du script de verrouillage (voir [Exécution séparée des
scripts de déverrouillage et de verrouillage](#script_exec)). Toutes les
entrées sont validées indépendamment, dans le cadre de la validation
globale de la transaction.

Notez que l'UTXO est enregistré en permanence dans la blockchain, et est
donc invariable et n'est pas affecté par les tentatives infructueuses de
le dépenser par référence dans une nouvelle transaction. Seule une
transaction valide qui satisfait correctement les conditions de la
sortie entraîne que la sortie est considérée comme "dépensée" et retirée
de l'ensemble des sorties de transaction non dépensées (ensemble UTXO).

[figure\_title](#scriptSig_and_scriptPubKey) est un exemple des scripts
de déverrouillage et de verrouillage pour le type de transaction bitcoin
le plus courant (un paiement à un hachage de clé publique), montrant le
script combiné résultant de la concaténation des scripts de
déverrouillage et de verrouillage avant la validation du script.

<figure>
<img src="images/mbc2_0603.png" id="scriptSig_and_scriptPubKey"
alt="Combiner scriptSig et scriptPubKey pour évaluer un script de transaction" />
<figcaption aria-hidden="true">Combiner scriptSig et scriptPubKey pour
évaluer un script de transaction</figcaption>
</figure>

### La pile d'exécution de script

Le langage de script de Bitcoin est appelé un langage basé sur la pile
car il utilise une structure de données appelée *pile*. Une pile est une
structure de données très simple qui peut être visualisée comme une pile
de cartes. Une pile permet deux opérations : push et pop. Push ajoute un
élément au sommet de la pile. Pop supprime l'élément du haut de la pile.
Les opérations sur une pile ne peuvent agir que sur l'élément le plus
haut de la pile. Une structure de données de pile est également appelée
file d'attente Last-In-First-Out (dernier entré, premier sorti), ou
"LIFO".

Le langage de script exécute le script en traitant chaque élément de
gauche à droite. Les nombres (constantes de données) sont poussés sur la
pile. Les opérateurs poussent ou sortent un ou plusieurs paramètres de
la pile, agissent sur eux et peuvent pousser un résultat sur la pile.
Par exemple, `OP_ADD` fera sortir deux éléments de la pile, les ajoutera
et poussera la somme résultante sur la pile.

Les opérateurs conditionnels évaluent une condition, produisant un
résultat booléen VRAI (TRUE) ou FAUX (FALSE). Par exemple, `OP_EQUAL`
dépile deux éléments de la pile et pousse TRUE (TRUE est représenté par
le nombre 1) s'ils sont égaux ou FALSE (représenté par zéro) s'ils ne
sont pas égaux. Les scripts de transaction Bitcoin contiennent
généralement un opérateur conditionnel, afin qu'ils puissent produire le
résultat VRAI qui signifie une transaction valide.

### Un script simple

Appliquons maintenant ce que nous avons appris sur les scripts et les
piles à quelques exemples simples.

Dans [figure\_title](#simplemath_script), le script
`2 3 OP_ADD 5 OP_EQUAL` démontre l'opérateur d'addition arithmétique
`OP_ADD`, additionnant deux nombres et mettant le résultat sur la pile,
suivi de l'opérateur conditionnel `OP_EQUAL`, qui vérifie que la somme
résultante est égale à `5`. Par souci de brièveté, le préfixe `OP_` est
omis dans l'exemple étape par étape. Pour plus de détails sur les
opérateurs de script et les fonctions disponibles, voir
[???](#tx_script_ops).

Bien que la plupart des scripts de verrouillage se réfèrent à un hachage
de clé publique (essentiellement, une adresse Bitcoin), nécessitant
ainsi une preuve de propriété pour dépenser les fonds, le script n'a pas
besoin d'être aussi complexe. Toute combinaison de scripts de
verrouillage et de déverrouillage donnant une valeur TRUE est valide.
L'arithmétique simple que nous avons utilisée comme exemple de langage
de script est également un script de verrouillage valide qui peut être
utilisé pour verrouiller une sortie de transaction.

Utilisez une partie de l'exemple de script arithmétique comme script de
verrouillage :

    3 OP_ADD 5 OP_EQUAL

qui peut être satisfaite par une transaction contenant une entrée avec
le script de déverrouillage :

    2

Le logiciel de validation combine les scripts de verrouillage et de
déverrouillage et le script résultant est :

    2 3 OP_ADD 5 OP_EQUAL

Comme nous l'avons vu dans l'exemple étape par étape dans
[figure\_title](#simplemath_script), lorsque ce script est exécuté, le
résultat est `OP_TRUE`, rendant la transaction valide. Non seulement il
s'agit d'un script de verrouillage de sortie de transaction valide, mais
l'UTXO résultant pourrait être dépensé par toute personne ayant les
compétences en arithmétique pour savoir que le nombre 2 satisfait le
script.

<figure>
<img src="images/mbc2_0604.png" id="simplemath_script"
alt="La validation du script Bitcoin en calculs simples" />
<figcaption aria-hidden="true">La validation du script Bitcoin en
calculs simples</figcaption>
</figure>

Ce qui suit est un script légèrement plus complexe, qui calcule
`2 + 7 - 3 + 1`. Notez que lorsque le script contient plusieurs
opérateurs à la suite, la pile permet aux résultats d'un opérateur
d'être appliqués par l'opérateur suivant :

    2 7 OP_ADD 3 OP_SUB 1 OP_ADD 7 OP_EQUAL

Essayez de valider vous-même le script précédent à l'aide d'un crayon et
de papier. Lorsque l'exécution du script se termine, vous devriez vous
retrouver avec la valeur `TRUE` sur la pile.

### Exécution séparée des scripts de déverrouillage et de verrouillage

<span class="indexterm"></span> <span class="indexterm"></span>Dans le
client Bitcoin d'origine, les scripts de déverrouillage et de
verrouillage étaient concaténés et exécutés en séquence. Pour des
raisons de sécurité, cela a été modifié en 2010, en raison d'une
vulnérabilité qui permettait à un script de déverrouillage malformé de
pousser des données sur la pile et de corrompre le script de
verrouillage. Dans l'implémentation actuelle, les scripts sont exécutés
séparément avec la pile transférée entre les deux exécutions, comme
décrit ci-après.

Tout d'abord, le script de déverrouillage est exécuté à l'aide du moteur
d'exécution de la pile. Si le script de déverrouillage est exécuté sans
erreur (par exemple, s'il ne reste plus de pointeurs " pendants"), la
pile principale est copiée et le script de verrouillage est exécuté. Si
le résultat de l'exécution du script de verrouillage avec les données de
la pile copiées à partir du script de déverrouillage est "TRUE", le
script de déverrouillage a réussi à résoudre les conditions imposées par
le script de verrouillage et, par conséquent, l'entrée est une
autorisation valide de dépenser l'UTXO. S'il reste un résultat autre que
"TRUE" après l'exécution du script combiné, l'entrée est invalide car
elle n'a pas satisfait aux conditions de dépenses placées sur l'UTXO.

## Pay-to-Public-Key-Hash (P2PKH)

<span class="indexterm"></span>La grande majorité des transactions
traitées sur le réseau Bitcoin dépensent des sorties verrouillées avec
un script Pay-to-Public-Key-Hash ou "P2PKH". Ces sorties contiennent un
script de verrouillage qui verrouille la sortie sur un hachage de clé
publique, plus communément appelé adresse Bitcoin. Une sortie
verrouillée par un script P2PKH peut être déverrouillée (passée) en
présentant une clé publique et une signature numérique créée par la clé
privée correspondante (voir [Signatures numériques
(ECDSA)](#digital_sigs)).

<span class="indexterm"></span> <span class="indexterm"></span>Par
exemple, regardons à nouveau le paiement d'Alice au comptoir à café de
Bob. Alice a effectué un paiement de 0,015 bitcoin à l'adresse Bitcoin
du comptoir. Cette sortie de transaction aurait un script de
verrouillage de la forme :

    OP_DUP OP_HASH160 <Cafe Public Key Hash> OP_EQUALVERIFY OP_CHECKSIG

Le `Cafe Public Key Hash` équivaut à l'adresse Bitcoin du café, sans
l'encodage Base58Check. La plupart des applications afficheraient le
*hachage de la clé publique* en codage hexadécimal et non le format
familier de l'adresse Bitcoin Base58Check qui commence par un "1".

Le script de verrouillage précédent peut se contenter d'un script de
déverrouillage de la forme :

    <Cafe Signature> <Cafe Public Key>

Les deux scripts ensemble formeraient le script de validation combiné
suivant :

    <Cafe Signature> <Cafe Public Key> OP_DUP OP_HASH160
    <Cafe Public Key Hash> OP_EQUALVERIFY OP_CHECKSIG

Lorsqu'il est exécuté, ce script combiné sera évalué à TRUE si, et
seulement si, le script de déverrouillage correspond aux conditions
définies par le script de verrouillage. En d'autres termes, le résultat
sera VRAI si le script de déverrouillage a une signature valide de la
clé privée du comptoir qui correspond au hachage de la clé publique
défini comme encombrement.

Les figures \#P2PubKHash1 et \#P2PubKHash2 montrent (en deux parties)
une exécution pas à pas du script combiné, qui prouvera qu'il s'agit
d'une transaction valide.<span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>

<figure>
<img src="images/mbc2_0605.png" id="P2PubKHash1"
alt="Évaluer un script pour une transaction P2PKH (partie 1 sur 2)" />
<figcaption aria-hidden="true">Évaluer un script pour une transaction
P2PKH (partie 1 sur 2)</figcaption>
</figure>

<figure>
<img src="images/mbc2_0606.png" id="P2PubKHash2"
alt="Évaluer un script pour une transaction P2PKH (partie 2 sur 2)" />
<figcaption aria-hidden="true">Évaluer un script pour une transaction
P2PKH (partie 2 sur 2)</figcaption>
</figure>

# Signatures numériques (ECDSA)

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span>Jusqu'à présent, nous n'avons approfondi aucun
détail sur les "signatures numériques". Dans cette section, nous
examinons le fonctionnement des signatures numériques et comment elles
peuvent présenter la preuve de la propriété d'une clé privée sans
révéler cette clé privée.

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span>L'algorithme de signature numérique utilisé
dans le bitcoin est l'\_Elliptic Curve Digital Signature Algorithm\_, ou
*ECDSA*. ECDSA est l'algorithme utilisé pour les signatures numériques
basées sur des paires de clés privées/publiques à courbe elliptique,
comme décrit dans [La cryptographie à courbe elliptique
expliquée](#elliptic_curve). ECDSA est utilisé par les fonctions de
script `OP_CHECKSIG`, `OP_CHECKSIGVERIFY`, `OP_CHECKMULTISIG` et
`OP_CHECKMULTISIGVERIFY`. Chaque fois que vous les voyez dans un script
de verrouillage, le script de déverrouillage doit contenir une signature
ECDSA.

<span class="indexterm"></span> <span class="indexterm"></span> Une
signature numérique a trois objectifs en bitcoin. Premièrement, la
signature prouve que le propriétaire de la clé privée, qui est
implicitement le propriétaire des fonds, a *autorisé* la dépense de ces
fonds. Deuxièmement, la preuve de l'autorisation est *indéniable*
(non-répudiable). Troisièmement, la signature prouve que la transaction
(ou des parties spécifiques de la transaction) n'a pas et *ne peut pas
être modifiée* par qui que ce soit après avoir été signée.

Notez que chaque entrée de transaction est signée indépendamment. Ceci
est essentiel, car ni les signatures ni les entrées ne doivent
appartenir ou être appliquées par les mêmes "propriétaires". En fait, un
schéma de transaction spécifique appelé "CoinJoin" utilise ce fait pour
créer des transactions multipartites pour la confidentialité.

Chaque entrée de transaction et toute signature qu'elle peut contenir
est *complètement* indépendante de toute autre entrée ou signature.
Plusieurs parties peuvent collaborer pour construire des transactions et
signer une seule entrée chacune.

<span class="indexterm"></span> <span class="indexterm"></span>Une
signature numérique est un schéma mathématique permettant de démontrer
l'authenticité d'un message ou de documents numériques. Une signature
numérique valide donne au destinataire des raisons de croire que le
message a été créé par un expéditeur connu (authentification), que
l'expéditeur ne peut pas nier avoir envoyé le message (non-répudiable)
et que le message n'a pas été altéré en transit (intégrité).

*Source: <https://en.wikipedia.org/wiki/Digital_signature>*

## Comment fonctionnent les signatures numériques

<span class="indexterm"></span> <span class="indexterm"></span>Une
signature numérique est un *schéma mathématique* qui se compose de deux
parties. La première partie est un algorithme de création d'une
signature, à l'aide d'une clé privée (la clé de signature), à partir
d'un message (la transaction). La deuxième partie est un algorithme qui
permet à quiconque de vérifier la signature, étant donné également le
message et une clé publique.

### Création d'une signature numérique

Dans l'implémentation de l'algorithme ECDSA par bitcoin, le "message"
signé est la transaction, ou plus précisément un hachage d'un
sous-ensemble spécifique des données de la transaction (voir [Types de
hachage de signature (SIGHASH)](#sighash_types)). La clé de signature
est la clé privée de l'utilisateur. Le résultat est la signature :

où:

-   *dA* est la clé privée de signature

-   *m* est la transaction (ou une partie de celle-ci)

-   *F*<sub>*hash*</sub> est la fonction de hachage

-   *F*<sub>*sig*</sub> est l'algorithme de signature

-   *Sig* est la signature résultante

Plus de détails sur les mathématiques d'ECDSA peuvent être trouvés dans
[Mathématiques ECDSA](#ecdsa_math).

La fonction *F*<sub>*sig*</sub> produit une signature `Sig` composée de
deux valeurs, communément appelées `R` et `S` :

    Sig = (R, S)

<span class="indexterm"></span> Maintenant que les deux valeurs `R` et
`S` ont été calculées, elles sont sérialisées en un flux d'octets à
l'aide d'un schéma de codage standard international appelé
*Distinguished Encoding Rules*, ou *DER* (ou règles d’encodage
distingués).

### Sérialisation des signatures (DER)

Regardons la transaction Alice <span class="indexterm"></span> <span
class="indexterm"></span> <span class="indexterm"></span>créée à
nouveau. Dans l'entrée de transaction, il y a un script de
déverrouillage qui contient la signature encodée DER suivante du
portefeuille d'Alice :

    3045022100884d142d86652a3f47ba4746ec719bbfbd040a570b1deccbb6498c75c4ae24cb02204b9f039ff08df09cbe9f6addac960298cad530a863ea8f53982c09db8f6e38133

Cette signature est un flux d'octets sérialisé des valeurs `R` et `S`
produites par le portefeuille d'Alice pour prouver qu'elle possède la
clé privée autorisée à dépenser cette sortie. Le format de sérialisation
se compose de neuf éléments comme suit :

-   `0x30`—indiquant le début d'une séquence DER

-   `0x45`—la longueur de la séquence (69 octets)

-   `0x02`—une valeur entière suit

-   `0x21`—la longueur de l'entier (33 octets)

-   `R`—`00884d142d86652a3f47ba4746ec719bbfbd040a570b1deccbb6498c75c4ae24cb`

-   `0x02`—un autre entier suit

-   `0x20`—la longueur de l'entier (32 octets)

-   `S`—`4b9f039ff08df09cbe9f6addac960298cad530a863ea8f53982c09db8f6e3813`

-   Un suffixe (`0x01`) indiquant le type de hachage utilisé
    (`SIGHASH_ALL`)

Voyez si vous pouvez décoder la signature sérialisée (encodée en DER)
d'Alice en utilisant cette liste. Les nombres importants sont `R` et
`S` ; le reste des données fait partie du schéma de codage DER.

## Vérification de la signature

<span class="indexterm"></span> <span class="indexterm"></span>Pour
vérifier la signature, il faut avoir la signature (`R` et `S`), la
transaction sérialisée, et la clé publique (qui correspond à la clé
privée utilisée pour créer la signature). Essentiellement, la
vérification d'une signature signifie "Seul le propriétaire de la clé
privée qui a généré cette clé publique pourrait avoir produit cette
signature sur cette transaction."

L'algorithme de vérification de signature prend le message (un hachage
de la transaction ou de parties de celui-ci), la clé publique du
signataire et la signature (+ valeurs R+ et `S`), et renvoie TRUE si la
signature est valide pour ce message et cette clé publique.

## Types de hachage de signature (SIGHASH)

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span>Les signatures numériques sont appliquées aux
messages, qui dans le cas du bitcoin, sont les transactions elles-mêmes.
La signature implique un *engagement* du signataire sur des données de
transaction spécifiques. Dans sa forme la plus simple, la signature
s'applique à l'ensemble de la transaction, engageant ainsi toutes les
entrées, sorties et autres champs de transaction. Cependant, une
signature ne peut s'engager que sur un sous-ensemble des données d'une
transaction, ce qui est utile pour un certain nombre de scénarios, comme
nous le verrons dans cette section.

<span class="indexterm"></span>Les signatures Bitcoin ont un moyen
d'indiquer quelle partie des données d'une transaction est incluse dans
le hachage signé par la clé privée à l'aide d'un drapeau `SIGHASH`. Le
drapeau `SIGHASH` est un octet unique ajouté à la signature. Chaque
signature a un drapeau `SIGHASH` et le drapeau peut être différent d'une
entrée à l'autre. Une transaction avec trois entrées signées peut avoir
trois signatures avec des drapeaux `SIGHASH` différents, chaque
signature signant (committant) différentes parties de la transaction.

N'oubliez pas que chaque entrée peut contenir une signature dans son
script de déverrouillage. Par conséquent, une transaction qui contient
plusieurs entrées peut avoir des signatures avec différents indicateurs
`SIGHASH` qui valident différentes parties de la transaction dans
chacune des entrées. Notez également que les transactions bitcoin
peuvent contenir des entrées de différents "propriétaires", qui ne
peuvent signer qu'une seule entrée dans une transaction partiellement
construite (et invalide), collaborant avec d'autres pour rassembler
toutes les signatures nécessaires pour effectuer une transaction valide.
De nombreux types d'indicateurs `SIGHASH` n'ont de sens que si vous
pensez à plusieurs participants collaborant en dehors du réseau Bitcoin
et mettant à jour une transaction partiellement signée.

Il existe trois indicateurs `SIGHASH` : `ALL`, `NONE` et `SINGLE`, comme
indiqué dans [table\_title](#sighash_types_and_their).

<table>
<caption>Types SIGHASH et leurs significations</caption>
<colgroup>
<col style="width: 33%" />
<col style="width: 33%" />
<col style="width: 33%" />
</colgroup>
<thead>
<tr class="header">
<th style="text-align: left;">Drapeau <code>SIGHASH</code></th>
<th style="text-align: left;">Valeur</th>
<th style="text-align: left;">Description</th>
</tr>
</thead>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p><code>TOUS</code></p></td>
<td style="text-align: left;"><p>0x01</p></td>
<td style="text-align: left;"><p>La signature s'applique à toutes les
entrées et sorties</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><code>AUCUN</code></p></td>
<td style="text-align: left;"><p>0x02</p></td>
<td style="text-align: left;"><p>La signature s'applique à toutes les
entrées, aucune des sorties</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><code>SIMPLE</code></p></td>
<td style="text-align: left;"><p>0x03</p></td>
<td style="text-align: left;"><p>La signature s'applique à toutes les
entrées mais uniquement à la sortie avec le même numéro d'index que
l'entrée signée</p></td>
</tr>
</tbody>
</table>

Types SIGHASH et leurs significations

De plus, il existe un drapeau modificateur `SIGHASH_ANYONECANPAY`, qui
peut être combiné avec chacun des drapeaux précédents. Lorsque
`ANYONECANPAY` est défini, une seule entrée est signée, laissant le
reste (et leurs numéros de séquence) ouverts pour modification. Le
`ANYONECANPAY` a la valeur `0x80` et est appliqué par OR au niveau du
bit, ce qui donne les drapeaux combinés comme indiqué dans
[table\_title](#sighash_types_with_modifiers).

<table>
<caption>Types SIGHASH avec modificateurs et leurs
significations</caption>
<colgroup>
<col style="width: 33%" />
<col style="width: 33%" />
<col style="width: 33%" />
</colgroup>
<thead>
<tr class="header">
<th style="text-align: left;">Drapeau SIGHASH</th>
<th style="text-align: left;">Valeur</th>
<th style="text-align: left;">Description</th>
</tr>
</thead>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p>ALL|ANYONECANPAY</p></td>
<td style="text-align: left;"><p>0x81</p></td>
<td style="text-align: left;"><p>La signature s'applique à une entrée et
à toutes les sorties</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>NONE|ANYONECANPAY</p></td>
<td style="text-align: left;"><p>0x82</p></td>
<td style="text-align: left;"><p>La signature s'applique à une entrée,
aucune des sorties</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>SINGLE|ANYONECANPAY</p></td>
<td style="text-align: left;"><p>0x83</p></td>
<td style="text-align: left;"><p>La signature s'applique à une entrée et
à la sortie avec le même numéro d'index</p></td>
</tr>
</tbody>
</table>

Types SIGHASH avec modificateurs et leurs significations

Ces combinaisons de drapeaux sont résumées dans
[figure\_title](#sighash_combinations).

<figure>
<img src="images/sighash_combinations.png" id="sighash_combinations"
alt="Résumé des différentes combinaisons de sighash" />
<figcaption aria-hidden="true">Résumé des différentes combinaisons de
sighash</figcaption>
</figure>

La façon dont les drapeaux `SIGHASH` sont appliqués lors de la signature
et de la vérification est qu'une copie de la transaction est faite et
que certains champs à l'intérieur sont tronqués (mis à zéro et vidés).
La transaction résultante est sérialisée. Le drapeau `SIGHASH` est
ajouté à la fin de la transaction sérialisée et le résultat est haché.
Le hachage lui-même est le "message" qui est signé. Selon l'indicateur
`SIGHASH` utilisé, différentes parties de la transaction sont tronquées.
Le hachage résultant dépend de différents sous-ensembles de données dans
la transaction. En incluant le `SIGHASH` comme dernière étape avant le
hachage, la signature valide également le type `SIGHASH`, de sorte qu'il
ne peut pas être modifié (par exemple, par un mineur).

Tous les types `SIGHASH` signent le champ `nLocktime` de la transaction
(voir [Temps de verrouillage des transactions
(nLocktime)](#transaction_locktime_nlocktime)). De plus, le type
`SIGHASH` lui-même est ajouté à la transaction avant sa signature, de
sorte qu'il ne peut pas être modifié une fois signé.

Dans l'exemple de la transaction d'Alice (voir la liste dans
[Sérialisation des signatures (DER)](#seralization_of_signatures_der)),
nous avons vu que la dernière partie de la signature codée en DER était
`01`, qui est le drapeau `SIGHASH_ALL`. Cela verrouille les données de
transaction, de sorte que la signature d'Alice valide l'état de toutes
les entrées et sorties. C'est la forme de signature la plus courante.

Examinons quelques-uns des autres types de `SIGHASH` et comment ils
peuvent être utilisés dans la pratique :

`ALL|ANYONECANPAY`  
<span class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>Cette construction peut être utilisée pour
effectuer une transaction de type "financement participatif". les fonds
peuvent construire une transaction avec une seule sortie. La sortie
unique paie le montant "objectif" à la collecte de fonds. Une telle
transaction n'est évidemment pas valide, car elle n'a pas d'entrées.
Cependant, d'autres peuvent maintenant la modifier en ajoutant une
entrée de leur propre, en tant que don. Ils signent leur propre entrée
avec `ALL|ANYONECANPAY`. À moins que suffisamment d'entrées ne soient
rassemblées pour atteindre la valeur de la sortie, la transaction n'est
pas valide. Chaque don est un "engagement", qui ne peut pas être
collecté par le collecteur de fonds jusqu'à ce que le montant total de
l'objectif soit atteint.

`NONE`  
Cette construction peut être utilisée pour créer un "chèque au porteur"
ou un "chèque en blanc" d'un montant spécifique. Il s'engage sur
l'entrée, mais permet de modifier le script de verrouillage de sortie.
N'importe qui peut écrire sa propre adresse Bitcoin dans le script de
verrouillage de sortie et racheter la transaction. Cependant, la valeur
de sortie elle-même est verrouillée par la signature.

`NONE|ANYONECANPAY`  
Cette construction peut être utilisée pour construire un "collecteur de
poussière". Les utilisateurs qui ont de minuscules UTXO dans leur
portefeuille ne peuvent pas les dépenser car le coût des frais dépasse
la valeur de la poussière. Avec ce type de signature, la poussière UTXO
peut être donnée à quiconque pour l'agréger et la dépenser quand il le
souhaite.

<span class="indexterm"></span> Il y a quelques propositions pour
modifier ou étendre le système `SIGHASH`. L'une de ces propositions est
*Bitmask Sighash Modes* de Glenn Willen de Blockstream, dans le cadre du
projet Elements. Cela vise à créer un remplacement flexible pour les
types `SIGHASH` qui permet "des masques de bits arbitraires et
réinscriptibles par des mineurs d'entrées et de sorties" qui peuvent
exprimer "des schémas de pré-engagement contractuels plus complexes,
tels que des offres signées avec changement dans un échange d'actifs
distribué".

Vous ne verrez pas les drapeaux `SIGHASH` présentés comme une option
dans l'application de portefeuille d'un utilisateur. À quelques
exceptions près, les portefeuilles construisent des scripts P2PKH et
signent avec les drapeaux `SIGHASH_ALL`. Pour utiliser un indicateur
`SIGHASH` différent, vous devrez écrire un logiciel pour construire et
signer des transactions. Plus important encore, les drapeaux `SIGHASH`
peuvent être utilisés par des applications bitcoin à usage spécial qui
permettent de nouvelles utilisations.

## Mathématiques ECDSA

<span class="indexterm"></span>Comme mentionné précédemment, les
signatures sont créées par une fonction mathématique *F*<sub>*sig*</sub>
qui produit une signature composée de deux valeurs *R* et *S*. Dans
cette section, nous examinons la fonction *F*<sub>*sig*</sub> plus en
détail.

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span>L'algorithme de signature génère d'abord une
paire de clés publiques privées *éphémères* (temporaires). Cette paire
de clés temporaire est utilisée dans le calcul des valeurs *R* et *S*,
après une transformation impliquant la clé privée de signature et le
hachage de la transaction.

La paire de clés temporaire est basée sur un nombre aléatoire *k*, qui
est utilisé comme clé privée temporaire. À partir de *k*, nous générons
la clé publique temporaire correspondante *P* (calculée comme *P =
k\*G*, de la même manière que les clés publiques bitcoin sont dérivées ;
voir [Clés publiques](#pubkey)). La valeur *R* de la signature numérique
est alors la coordonnée x de la clé publique éphémère *P*.

A partir de là, l'algorithme calcule la valeur *S* de la signature,
telle que :

*S* = *k*<sup>-1</sup> (*Hash*(*m*) + *dA* \* *R*) *mod n*

où:

-   *k* est la clé privée éphémère

-   *R* est la coordonnée x de la clé publique éphémère

-   *dA* est la clé privée de signature

-   *m* est les données de transaction

-   *n* est l'ordre premier de la courbe elliptique

La vérification est l'inverse de la fonction de génération de signature,
utilisant les valeurs *R*, *S* et la clé publique pour calculer une
valeur *P*, qui est un point sur la courbe elliptique (la clé publique
éphémère utilisée dans la création de signature) :

*P* = *S*<sup>-1</sup> \* *Hash*(*m*) \* *G* + *S*<sup>-1</sup> \* *R*
\* *Qa*

où:

-   *R* et *S* sont les valeurs de signature

-   *Qa* est la clé publique d'Alice

-   *m* est les données de transaction qui ont été signées

-   *G* est le point générateur de la courbe elliptique

Si la coordonnée x du point calculé *P* est égale à *R*, alors le
vérificateur peut conclure que la signature est valide.

Notez qu'en vérifiant la signature, la clé privée n'est ni connue ni
révélée.

ECDSA est nécessairement un calcul assez compliqué; une explication
complète est au-delà de la portée de ce livre. Un certain nombre
d'excellents guides en ligne vous guident étape par étape : recherchez
"ECDSA expliqué" ou essayez celui-ci : <https://bit.ly/2r0HhGB>.

## L'importance du caractère aléatoire dans les signatures

<span class="indexterm"></span> <span class="indexterm"></span>Comme
nous l'avons vu dans [Mathématiques ECDSA](#ecdsa_math), l'algorithme de
génération de signature utilise une clé aléatoire *k*, comme base d'un
couple clé privée/publique éphémère. La valeur de *k* n'est pas
importante, *tant qu'elle est aléatoire*. Si la même valeur *k* est
utilisée pour produire deux signatures sur différents messages
(transactions), alors la signature *clé privée* peut être calculée par
n'importe qui. La réutilisation de la même valeur pour *k* dans un
algorithme de signature conduit à l'exposition de la clé privée !

<span class="indexterm"></span> <span class="indexterm"></span>Si la
même valeur *k* est utilisée dans l'algorithme de signature sur deux
transactions différentes, la clé privée peut être calculée et exposée au
monde !

Ce n'est pas seulement une possibilité théorique. Nous avons vu ce
problème conduire à l'exposition de clés privées dans quelques
implémentations différentes d'algorithmes de signature de transaction en
bitcoin. Des personnes se sont fait voler des fonds en raison de la
réutilisation par inadvertance d'une valeur *k*. La raison la plus
courante de réutilisation d'une valeur *k* est un générateur de nombres
aléatoires mal initialisé.

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span>Pour éviter cette vulnérabilité, la meilleure
pratique de l'industrie est de ne pas générer *k* avec un générateur de
nombres aléatoires semé d'entropie, mais plutôt d'utiliser un processus
déterministe-aléatoire semé avec les données de transaction elles-mêmes.
Cela garantit que chaque transaction produit un *k* différent.
L'algorithme standard de l'industrie pour l'initialisation déterministe
de *k* est défini dans [RFC 6979](https://tools.ietf.org/html/rfc6979),
publié par l'Internet Engineering Task Force.

Si vous implémentez un algorithme pour signer des transactions en
bitcoin, vous *devez* utiliser la RFC 6979 ou un algorithme
déterministe-aléatoire similaire pour vous assurer de générer un *k*
différent pour chaque transaction.<span class="indexterm"></span> <span
class="indexterm"></span>

# Adresses Bitcoin, soldes et autres abstractions

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span>Nous avons commencé ce chapitre avec la
découverte que les transactions sont très différentes "dans les
coulisses" de la façon dont elles sont présentées dans les
portefeuilles, les explorateurs de chaîne de blocs, et d'autres
applications destinées aux utilisateurs. De nombreux concepts simplistes
et familiers des chapitres précédents, tels que les adresses et les
soldes Bitcoin, semblent être absents de la structure de transaction.
Nous avons vu que les transactions ne contiennent pas d'adresses Bitcoin
en soi, mais fonctionnent plutôt via des scripts qui verrouillent et
déverrouillent des valeurs discrètes de bitcoin. Les soldes ne sont
présents nulle part dans ce système et pourtant, chaque application de
portefeuille affiche bien en évidence le solde du portefeuille de
l'utilisateur.

Maintenant que nous avons exploré ce qui est réellement inclus dans une
transaction bitcoin, nous pouvons examiner comment les abstractions de
niveau supérieur sont dérivées des composants apparemment primitifs de
la transaction.

Regardons à nouveau comment la transaction d'Alice a été présentée sur
un explorateur de blocs populaire
([figure\_title](#alice_transaction_to_bobs_cafe)).

<figure>
<img src="images/mbc2_0208.png" id="alice_transaction_to_bobs_cafe"
alt="Transaction d&#39;Alice au Bob&#39;s Café" />
<figcaption aria-hidden="true">Transaction d'Alice au Bob's
Café</figcaption>
</figure>

Sur le côté gauche de la transaction, l'explorateur de explorateur de
chaîne de blocs affiche l'adresse Bitcoin d'Alice comme "expéditeur". En
fait, cette information n'est pas dans la transaction elle-même. Lorsque
l'explorateur de blockchain fait référence à la transaction, il fait
également référence à la transaction précédente associée à l'entrée et
extrait la première sortie de cette transaction plus ancienne. Dans
cette sortie se trouve un script de verrouillage qui verrouille l'UTXO
sur le hachage de la clé publique d'Alice (un script P2PKH).
L'explorateur de blockchain a extrait le hachage de la clé publique et
l'a encodé à l'aide de l'encodage Base58Check pour produire et afficher
l'adresse Bitcoin qui représente cette clé publique.

De même, sur le côté droit, l'explorateur de blockchain affiche les deux
sorties ; le premier à l'adresse Bitcoin de Bob et le second à l'adresse
Bitcoin d'Alice (comme change). Encore une fois, pour créer ces adresses
Bitcoin, l'explorateur de blockchain a extrait le script de verrouillage
de chaque sortie, l'a reconnu comme un script P2PKH et a extrait le
hachage de clé publique de l'intérieur. Enfin, l'explorateur de
blockchain a réencodé chaque hachage de clé publique avec Base58Check
pour produire et afficher les adresses Bitcoin.

Si vous deviez cliquer sur l'adresse Bitcoin de Bob, l'explorateur de
blockchain vous montrerait la vue dans
[figure\_title](#the_balance_of_bobs_bitcoin_address).

<figure>
<img src="images/mbc2_0608.png" id="the_balance_of_bobs_bitcoin_address"
alt="Le solde de l&#39;adresse Bitcoin de Bob" />
<figcaption aria-hidden="true">Le solde de l'adresse Bitcoin de
Bob</figcaption>
</figure>

L'explorateur de la chaîne de blocs affiche le solde de l'adresse
Bitcoin de Bob. Mais nulle part dans le système Bitcoin il n'y a un
concept de "solde". Au lieu de cela, les valeurs affichées ici sont
construites par l'explorateur de explorateur de chaîne de blocs comme
suit.

Pour construire le montant "Total reçu", l'explorateur de explorateur de
la chaîne de blocs décodera d'abord l'encodage Base58Check de l'adresse
Bitcoin pour récupérer le hachage 160 bits de la clé publique de Bob qui
est encodé dans l'adresse. Ensuite, l'explorateur de blockchain
recherchera dans la base de données des transactions, à la recherche de
sorties avec des scripts de verrouillage P2PKH contenant le hachage de
la clé publique de Bob. En additionnant la valeur de toutes les sorties,
l'explorateur de la chaîne de blocs peut produire la valeur totale
reçue.

Construire le solde actuel (affiché comme "Solde final") nécessite un
peu plus de travail. L'explorateur de la chaîne de blocs conserve une
base de données distincte des sorties actuellement non dépensées,
l'ensemble UTXO. Pour maintenir cette base de données, l'explorateur de
la chaîne de blocs doit surveiller le réseau Bitcoin, ajouter les UTXO
nouvellement créés et supprimer les UTXO dépensés, en temps réel, tels
qu'ils apparaissent dans les transactions non confirmées. Il s'agit d'un
processus compliqué qui dépend du suivi des transactions au fur et à
mesure qu'elles se propagent, ainsi que du maintien d'un consensus avec
le réseau Bitcoin pour s'assurer que la chaîne correcte est suivie.
Parfois, l'explorateur de la chaîne de blocs est désynchronisé et sa
perspective de l'ensemble UTXO est incomplète ou incorrecte.

À partir de l'ensemble UTXO, l'explorateur de la chaîne de blocs résume
la valeur de toutes les sorties non dépensées faisant référence au
hachage de la clé publique de Bob et produit le numéro "Solde final"
affiché à l'utilisateur.

Afin de produire cette image unique, avec ces deux "soldes",
l'explorateur de la chaîne de blocs doit indexer et rechercher parmi des
dizaines, des centaines, voire des centaines de milliers de
transactions.

En résumé, les informations présentées aux utilisateurs via les
applications de portefeuille, les explorateurs de chaînes de blocs et
d'autres interfaces utilisateur Bitcoin sont souvent composées
d'abstractions de niveau supérieur qui sont dérivées en recherchant de
nombreuses transactions différentes, en inspectant leur contenu et en
manipulant les données qu'elles contiennent. En présentant cette vision
simpliste des transactions bitcoin qui ressemblent à des chèques
bancaires d'un expéditeur à un destinataire, ces applications doivent
extraire de nombreux détails sous-jacents. Ils se concentrent
principalement sur les types de transactions courants : P2PKH avec des
signatures SIGHASH\_ALL sur chaque entrée. Ainsi, alors que les
applications bitcoin peuvent présenter plus de 80% de toutes les
transactions de manière facile à lire, elles sont parfois bloquées par
des transactions qui s'écartent de la norme. Les transactions qui
contiennent des scripts de verrouillage plus complexes, ou différents
indicateurs SIGHASH, ou de nombreuses entrées et sorties, démontrent la
simplicité et la faiblesse de ces abstractions.

Chaque jour, des centaines de transactions qui ne contiennent pas de
sorties P2PKH sont confirmées sur la chaîne de blocs. Les explorateurs
de chaîne de blocs les présentent souvent avec des messages
d'avertissement rouges indiquant qu'ils ne peuvent pas décoder une
adresse.

Comme nous le verrons au chapitre suivant, il ne s'agit pas
nécessairement de transactions étranges. Ce sont des transactions qui
contiennent des scripts de verrouillage plus complexes que le P2PKH
commun. Nous apprendrons ensuite à décoder et à comprendre des scripts
plus complexes et les applications qu'ils prennent en charge.<span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span>

# Transactions et scripts avancés

# Présentation

Dans le chapitre précédent, nous avons présenté les éléments de base des
transactions bitcoin et examiné le type de script de transaction le plus
courant, le script P2PKH. Dans ce chapitre, nous examinerons des scripts
plus avancés et comment nous pouvons les utiliser pour créer des
transactions avec des conditions complexes.

Tout d'abord, nous examinerons les scripts *multisignature*. Ensuite,
nous examinerons le deuxième script de transaction le plus courant,
*Pay-to-Script-Hash*, qui ouvre tout un monde de scripts complexes.
Ensuite, nous examinerons de nouveaux opérateurs de script qui ajoutent
une dimension temporelle au bitcoin, via *timelocks*. Enfin, nous
examinerons *Segregated Witness*, une modification architecturale de la
structure des transactions.

# Multisignature

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span>Les scripts
multisignatures définissent une condition dans laquelle N clés publiques
sont enregistrées dans le script et au moins M d'entre elles doivent
fournir des signatures pour débloquer les fonds. Ceci est également
connu sous le nom de schéma M-sur-N, où N est le nombre total de clés et
M est le seuil de signatures requises pour la validation. Par exemple,
une multisignature 2 sur 3 est celle où trois clés publiques sont
répertoriées comme signataires potentiels et au moins deux d'entre elles
doivent être utilisées pour créer des signatures pour une transaction
valide afin de dépenser les fonds.

À l'heure actuelle, les scripts multisignatures *standard* sont limités
à un maximum de 3 clés publiques répertoriées, ce qui signifie que vous
pouvez faire n'importe quoi d'une multisignature 1 sur 1 à 3 sur 3 ou
toute combinaison dans cette plage. La limitation à 3 clés répertoriées
pourrait être levée au moment de la publication de ce livre, alors
vérifiez la fonction `IsStandard()` pour voir ce qui est actuellement
accepté par le réseau. Notez que la limite de 3 clés s'applique
uniquement aux scripts multisignatures standard (également appelés
"nus"), et non aux scripts multisignatures enveloppés dans un script
Pay-to-Script-Hash (P2SH). Les scripts multisignatures P2SH sont limités
à 15 clés, permettant jusqu'à 15 multisignatures sur 15. Cette
limitation est également imposée par la fonction `IsStandard()`. Nous en
apprendrons davantage sur P2SH dans &lt;&lt;p2sh&gt; &gt;.

La forme générale d'un script de verrouillage définissant une condition
multisignature M-de-N est :

    M<Public Key 1><Public Key 2> ...<Public Key N> N CHECKMULTISIG

où N est le nombre total de clés publiques répertoriées et M est le
seuil de signatures requises pour dépenser la sortie.

Un script de verrouillage définissant une condition multisignature 2 sur
3 ressemble à ceci :

    2<Public Key A><Public Key B><Public Key C> 3 CONTRÔLE MULTISIG

Le script de verrouillage précédent peut se contenter d'un script de
déverrouillage contenant n'importe quelle combinaison de deux signatures
issues des clés privées correspondant aux trois clés publiques listées :

    <Signature B> <Signature C>

Les deux scripts ensemble formeraient le script de validation combiné :

    <Signature B><Signature C>2<Public Key A><Public Key B><Public Key C> 3 CONTRÔLE MULTISIG

Lorsqu'il est exécuté, ce script combiné sera évalué à TRUE si, et
seulement si, le script de déverrouillage correspond aux conditions
définies par le script de verrouillage. Dans ce cas, la condition est de
savoir si le script de déverrouillage possède une signature valide à
partir des deux clés privées qui correspondent à deux des trois clés
publiques définies comme une charge.

## Un bogue dans l'exécution de CHECKMULTISIG

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span>Il y a un bug
dans l'exécution de `CHECKMULTISIG` qui nécessite une légère solution de
contournement. Lorsque `CHECKMULTISIG` s'exécute, il doit consommer
M+N+2 éléments sur la pile en tant que paramètres. Cependant, en raison
du bogue, `CHECKMULTISIG` affichera une valeur supplémentaire ou une
valeur de plus que prévu.

Examinons cela plus en détail à l'aide de l'exemple de validation
précédent :

    <Signature B><Signature C>2<Public Key A><Public Key B><Public Key C> 3 CONTRÔLE MULTISIG

Tout d'abord, `CHECKMULTISIG` affiche l'élément supérieur, qui est `N`
(dans cet exemple "3"). Ensuite, il affiche `N` éléments, qui sont les
clés publiques pouvant signer. Dans cet exemple, les clés publiques A, B
et C. Ensuite, un élément apparaît, qui est + M
`, le quorum (combien de signatures sont nécessaires). Ici M = 2. À ce stade, +CHECKMULTISIG`
devrait faire apparaître les éléments finaux `M`, qui sont les
signatures, et voir s'ils sont valides. Cependant, malheureusement, un
bogue dans l'implémentation fait que `CHECKMULTISIG` affiche un élément
de plus (M+1 total) qu'il ne le devrait. L'élément supplémentaire n'est
pas pris en compte lors de la vérification des signatures, il n'a donc
aucun effet direct sur `CHECKMULTISIG` lui-même. Cependant, une valeur
supplémentaire doit être présente car si elle n'est pas présente,
lorsque `CHECKMULTISIG` tente d'apparaître sur une pile vide, cela
provoquera une erreur de pile et un échec du script (marquant la
transaction comme invalide). Comme l'élément supplémentaire n'est pas
pris en compte, il peut s'agir de n'importe quoi, mais habituellement
`0` est utilisé.

Parce que ce bogue est devenu une partie des règles de consensus, il
doit maintenant être répliqué pour toujours. Par conséquent, la
validation correcte du script ressemblerait à ceci :

    0<Signature B><Signature C> 2<Public Key A><Public Key B><Public Key C> 3 CONTRÔLE MULTISIG

Ainsi le script de déverrouillage réellement utilisé en multisig n'est
pas :

    <Signature B> <Signature C>

mais à la place c'est :

    0<Signature B><Signature C>

À partir de maintenant, si vous voyez un script de déverrouillage
multisig, vous devriez vous attendre à voir un `0` supplémentaire au
début, dont le seul but est de contourner un bogue qui est
accidentellement devenu une règle de consensus.<span
class="indexterm"></span> <span class="indexterm"></span>

# Pay-to-Script-Hash (P2SH)

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span> <span class="indexterm"></span>Pay-
to-Script-Hash (P2SH) a été introduit en 2012 en tant que nouveau type
de transaction puissant qui simplifie grandement l'utilisation de
scripts de transaction complexes. Pour expliquer le besoin de P2SH,
regardons un exemple pratique.

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span> <span class="indexterm"></span>((
("Pay-to-Script-Hash (P2SH)", "exemple d'import/export")))In
&lt;&lt;ch01\_intro\_what\_is\_bitcoin&gt; &gt; nous avons présenté
Mohammed, un importateur d'électronique basé à Dubaï. La société de
Mohammed utilise largement la fonction multisignature de Bitcoin pour
ses comptes d'entreprise. Les scripts multisignatures sont l'une des
utilisations les plus courantes des capacités de script avancées de
Bitcoin et constituent une fonctionnalité très puissante. <span
class="indexterm"></span>La société de Mohammed utilise un script
multisignature pour tous les paiements des clients, connu en termes
comptables sous le nom de "comptes débiteurs" ou AR. Avec le schéma
multisignature, tous les paiements effectués par les clients sont
verrouillés de telle manière qu'ils nécessitent au moins deux signatures
pour être libérés, de Mohammed et de l'un de ses partenaires ou de son
avocat qui dispose d'une clé de secours. Un système multisignature comme
celui-ci offre des contrôles de gouvernance d'entreprise et protège
contre le vol, le détournement de fonds ou la perte.

Le script résultant est assez long et ressemble à ceci :

    2 <Mohammed's Public Key><Partner1 Public Key><Partner2 Public Key><Partner3 Public Key><Attorney Public Key> 5 CONTRÔLE MULTISIG

Bien que les scripts multisignatures soient une fonctionnalité
puissante, ils sont lourds à utiliser. Compte tenu du script précédent,
Mohammed devrait communiquer ce script à chaque client avant le
paiement. Chaque client devrait utiliser un logiciel spécial de
portefeuille bitcoin avec la possibilité de créer des scripts de
transaction personnalisés, et chaque client devrait comprendre comment
créer une transaction à l'aide de scripts personnalisés. De plus, la
transaction résultante serait environ cinq fois plus importante qu'une
simple transaction de paiement, car ce script contient des clés
publiques très longues. Le fardeau de cette transaction extra-large
serait supporté par le client sous la forme de frais. Enfin, un gros
script de transaction comme celui-ci serait transporté dans l'UTXO
défini dans la RAM de chaque nœud complet, jusqu'à ce qu'il soit
dépensé. Tous ces problèmes rendent difficile l'utilisation de scripts
de verrouillage complexes dans la pratique.

P2SH a été développé pour résoudre ces difficultés pratiques et rendre
l'utilisation de scripts complexes aussi simple qu'un paiement à une
adresse Bitcoin. Avec les paiements P2SH, le script de verrouillage
complexe est remplacé par son empreinte numérique, un hachage
cryptographique. Lorsqu'une transaction tentant de dépenser l'UTXO est
présentée ultérieurement, elle doit contenir le script correspondant au
hachage, en plus du script de déverrouillage. En termes simples, P2SH
signifie "payer à un script correspondant à ce hachage, un script qui
sera présenté plus tard lorsque cette sortie sera dépensée".

<span class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>Dans les transactions P2SH, le script de
verrouillage qui est remplacé par un hachage est appelé *redeem script*
car il est présenté au système au moment du rachat plutôt que comme un
script de verrouillage. &lt;&lt;without\_p2sh&gt; &gt; affiche le script
sans P2SH et &lt;&lt;with\_p2sh&gt; &gt; montre le même script encodé
avec P2SH.

<table>
<caption>Script complexe sans P2SH</caption>
<colgroup>
<col style="width: 50%" />
<col style="width: 50%" />
</colgroup>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p>Script de verrouillage</p></td>
<td style="text-align: left;"><p>2 PubKey1 PubKey2 PubKey3 PubKey4
PubKey5 5 CHECKMULTISIG</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>Script de déverrouillage</p></td>
<td style="text-align: left;"><p>0 Sig1 Sig2</p></td>
</tr>
</tbody>
</table>

Script complexe sans P2SH

<table>
<caption>Script complexe comme P2SH</caption>
<colgroup>
<col style="width: 50%" />
<col style="width: 50%" />
</colgroup>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p>Utiliser le script</p></td>
<td style="text-align: left;"><p>2 PubKey1 PubKey2 PubKey3 PubKey4
PubKey5 5 CHECKMULTISIG</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>Script de verrouillage</p></td>
<td style="text-align: left;"><p>HASH160 &lt;hachage de 20 octets du
script de rachat&gt; EQUAL</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>Script de déverrouillage</p></td>
<td style="text-align: left;"><p>0 Sig1 Sig2&lt;redeem
script&gt;</p></td>
</tr>
</tbody>
</table>

Script complexe comme P2SH

Comme vous pouvez le voir dans les tableaux, avec P2SH, le script
complexe qui détaille les conditions de dépense de la sortie (script de
rachat) n'est pas présenté dans le script de verrouillage. Au lieu de
cela, seul un hachage de celui-ci se trouve dans le script de
verrouillage et le script de rachat lui-même est présenté plus tard,
dans le cadre du script de déverrouillage lorsque la sortie est
dépensée. Cela déplace le fardeau des frais et de la complexité de
l'expéditeur (qui crée la transaction) vers le destinataire (qui
déverrouille et dépense la transaction).

Examinons la société de Mohammed, le script multisignature complexe et
les scripts P2SH qui en résultent.

Tout d'abord, le script multisignature que la société de Mohammed
utilise pour tous les paiements entrants des clients :

    2 <Mohammed's Public Key><Partner1 Public Key><Partner2 Public Key><Partner3 Public Key><Attorney Public Key> 5 CONTRÔLE MULTISIG

Si les espaces réservés sont remplacés par des clés publiques réelles
(affichées ici sous forme de nombres de 520 bits commençant par 04),
vous pouvez voir que ce script devient très long :

    2
    5 CONTRÔLE MULTISIG

Ce script entier peut à la place être représenté par un hachage
cryptographique de 20 octets, en appliquant d'abord l'algorithme de
hachage SHA256, puis en appliquant l'algorithme RIPEMD160 sur le
résultat.

Nous utilisons `libbitcoin-explorer` (`bx`) sur la ligne de commande
pour produire le hachage du script, comme suit :

    écho \
    2 \
    \
    \
    \
    \
    \
    5 CONTRÔLE MULTISIG \
    | bx script-encoder | bx sha256 | bx mûrmd160
    54c557e07dde5bb6cb791c7a540e0a4796f5e97e

La série de commandes ci-dessus encode d'abord le script de rachat
multisig de Mohammed en tant que script bitcoin sérialisé encodé en
hexadécimal. La commande `bx` suivante calcule le hachage SHA256 de
cela. La prochaine commande `bx` hache à nouveau avec RIPEMD160,
produisant le hachage de script final :

Le hachage de 20 octets du script de rachat de Mohammed est :

    54c557e07dde5bb6cb791c7a540e0a4796f5e97e

Une transaction P2SH verrouille la sortie sur ce hachage au lieu du
script de rachat plus long, en utilisant le script de verrouillage :

    HASH160 54c557e07dde5bb6cb791c7a540e0a4796f5e97e ÉGAL

qui, comme vous pouvez le voir, est beaucoup plus courte. Au lieu de
"payer à ce script multisignature à 5 clés", la transaction équivalente
à P2SH est "payer à un script avec ce hachage". Un client effectuant un
paiement à la société de Mohammed n'a qu'à inclure ce script de
verrouillage beaucoup plus court dans son paiement. Lorsque Mohammed et
ses partenaires veulent dépenser cet UTXO, ils doivent présenter le
script de rachat original (celui dont le hachage a verrouillé l'UTXO) et
les signatures nécessaires pour le déverrouiller, comme ceci :

    <Sig1><Sig2>&lt;2 PK1 PK2 PK3 PK4 PK5 5 CHECKMULTISIG&gt;

Les deux scripts sont combinés en deux étapes. Tout d'abord, le script
de rachat est vérifié par rapport au script de verrouillage pour
s'assurer que le hachage correspond :

    &lt;2 PK1 PK2 PK3 PK4 PK5 5 CHECKMULTISIG&gt; HASH160<redeem scriptHash> ÉGAL

Si le hachage du script de rachat correspond, le script de
déverrouillage est exécuté de lui-même pour déverrouiller le script de
rachat :

    <Sig1><Sig2>2 PK1 PK2 PK3 PK4 PK5 5 CHECKMULTISIG

Presque tous les scripts décrits dans ce chapitre ne peuvent être
implémentés qu'en tant que scripts P2SH. Par exemple, un script de
verrouillage multisignature standard 2 sur 5 ne peut pas être utilisé
directement dans le script de verrouillage d'un UTXO, car `IsStandard()`
invaliderait la transaction. Pour se conformer, un script de
verrouillage P2SH peut être utilisé à la place, comme vu ci-dessus. Une
transaction qui comprend alors un script de déverrouillage P2SH peut
être utilisée pour racheter cet UTXO et sera valide tant qu'elle ne
contient pas plus de 15 clés publiques. <span class="indexterm"></span>
<span class="indexterm"></span>

N'oubliez pas qu'en raison de la politique définie par la fonction +
IsStandard () + au moment de la rédaction de cet article, les scripts
multisignatures standard sont limités à 3 clés publiques répertoriées au
maximum, tandis que les scripts P2SH sont limités à 15 clés publiques
répertoriées au maximum. Les scripts multisignatures standard peuvent
invalider les transactions au moyen de leur script de verrouillage *ou*
de déverrouillage, tandis que les scripts P2SH peuvent invalider les
transactions au moyen de leur script de déverrouillage *uniquement*. En
effet, `IsStandard()` n'a aucun moyen de savoir si un hachage d'un
script de rachat dans un script de verrouillage inclut plus de
signatures que la limite de taille actuellement imposée, il ne peut donc
observer que les scripts de déverrouillage dans les entrées de
transaction.

## Adresses P2SH

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span> Une autre partie importante de la
fonctionnalité P2SH est la possibilité d'encoder un hachage de script en
tant qu'adresse, comme défini dans BIP-13. Les adresses P2SH sont des
encodages Base58Check du hachage de 20 octets d'un script, tout comme
les adresses Bitcoin sont des encodages Base58Check du hachage de 20
octets d'une clé publique. Les adresses P2SH utilisent le préfixe de
version "5", ce qui donne des adresses encodées en Base58Check qui
commencent par un "3".

Par exemple, le script complexe de Mohammed, haché et encodé en
Base58Check comme une adresse P2SH, devient
`39RF6JqABiHdYHkfChV6USGMe6Nsr66Gzw`. Nous pouvons le confirmer avec la
commande `bx` :

    écho \
    &#39;54c557e07dde5bb6cb791c7a540e0a4796f5e97e&#39;\
     | bx address-encode -v 5
    39RF6JqABiHdYHkfChV6USGMe6Nsr66Gzw

Maintenant, Mohammed peut donner cette "adresse" à ses clients et ils
peuvent utiliser presque n'importe quel portefeuille bitcoin pour
effectuer un paiement simple, comme s'il s'agissait d'une adresse
Bitcoin. Le préfixe 3 leur donne un indice qu'il s'agit d'un type
d'adresse spécial, celui correspondant à un script au lieu d'une clé
publique, mais sinon cela fonctionne exactement de la même manière qu'un
paiement à une adresse Bitcoin.

Les adresses P2SH cachent toute la complexité, de sorte que la personne
effectuant un paiement ne voit pas le script.

## Avantages du P2SH

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>La fonction P2SH offre les avantages suivants
par rapport à l'utilisation directe de scripts complexes dans le
verrouillage des sorties :

-   Les scripts complexes sont remplacés par des empreintes digitales
    plus courtes dans la sortie de la transaction, ce qui réduit la
    taille de la transaction.

-   Les scripts peuvent être codés comme une adresse, de sorte que
    l'expéditeur et le portefeuille de l'expéditeur n'ont pas besoin
    d'ingénierie complexe pour implémenter P2SH.

-   P2SH transfère le fardeau de la construction du script au
    destinataire, pas à l'expéditeur.

-   P2SH déplace la charge de stockage des données pour le script long
    de la sortie (qui en plus d'être stockée sur la blockchain est dans
    l'ensemble UTXO) vers l'entrée (uniquement stockée sur la
    blockchain).

-   P2SH déplace la charge de stockage des données pour le script long
    du moment présent (paiement) à un moment futur (lorsqu'il est
    dépensé).

-   P2SH transfère les frais de transaction plus élevés d'un long script
    de l'expéditeur au destinataire, qui doit inclure le long script
    d'échange pour le dépenser.

## Utiliser le script et la validation

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span>Avant la version
0.9.2 du client Bitcoin Core, Pay-to-Script-Hash était limité aux types
standard de scripts de transaction bitcoin, par la fonction
`EstStandard()`. Cela signifie que le script d'échange présenté dans la
transaction de dépenses ne peut être que l'un des types standard : P2PK,
P2PKH ou multisig.

Depuis la version 0.9.2 du client Bitcoin Core, les transactions P2SH
peuvent contenir n'importe quel script valide, ce qui rend la norme P2SH
beaucoup plus flexible et permet d'expérimenter de nombreux types de
transactions nouveaux et complexes.

Vous ne pouvez pas mettre un P2SH dans un script de remboursement P2SH,
car la spécification P2SH n'est pas récursive. Aussi, bien qu'il soit
techniquement possible d'inclure `RETURN` (voir &lt;&lt;op\_return&gt;
&gt;) dans un script de rachat, comme rien dans les règles ne vous
empêche de le faire, cela n'a aucune utilité pratique car l'exécution de
`RETURN` lors de la validation entraînera le marquage de la transaction
comme invalide.

Notez que, comme le script de rachat n'est pas présenté au réseau tant
que vous n'essayez pas de dépenser une sortie P2SH, si vous verrouillez
une sortie avec le hachage d'un script de rachat invalide, elle sera
traitée malgré tout. L'UTXO sera verrouillé avec succès. Cependant, vous
ne pourrez pas le dépenser car la transaction de dépense, qui inclut le
script d'échange, ne sera pas acceptée car il s'agit d'un script
invalide. Cela crée un risque, car vous pouvez verrouiller des bitcoins
dans un P2SH qui ne pourra pas être dépensé plus tard. Le réseau
acceptera le script de verrouillage P2SH même s'il correspond à un
script de rachat invalide, car le hachage du script ne donne aucune
indication sur le script qu'il représente.<span
class="indexterm"></span> <span class="indexterm"></span>

<span class="indexterm"></span> <span class="indexterm"></span>Les
scripts de verrouillage P2SH contiennent le hachage d'un script de
rachat, qui ne donne aucun indice quant au contenu du script de rachat
lui-même. La transaction P2SH sera considérée comme valide et acceptée
même si le script de rachat est invalide. Vous pourriez accidentellement
verrouiller le bitcoin de telle sorte qu'il ne puisse plus être dépensé.

# Sortie d'enregistrement de données (RETOUR)

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span><span
class="indexterm"></span><span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span>Les bitcoins sont distribués et Le grand livre
horodaté, la blockchain, a des utilisations potentielles bien au-delà
des paiements. De nombreux développeurs ont essayé d'utiliser le langage
de script de transaction pour tirer parti de la sécurité et de la
résilience du système pour des applications telles que les services de
notaire numérique, les certificats d'actions et les contrats
intelligents. Les premières tentatives d'utilisation du langage de
script de bitcoin à ces fins impliquaient la création de sorties de
transaction qui enregistraient des données sur la blockchain ; par
exemple, pour enregistrer une empreinte digitale d'un fichier de manière
à ce que n'importe qui puisse établir la preuve de l'existence de ce
fichier à une date précise par référence à cette transaction.

<span class="indexterm"></span><span class="indexterm"></span><span
class="indexterm"></span><span class="indexterm"></span>L'utilisation de
la blockchain de bitcoin pour stocker les données non liées aux
paiements en bitcoins sont un sujet controversé. De nombreux
développeurs considèrent cette utilisation abusive et veulent la
décourager. D'autres y voient une démonstration des puissantes capacités
de la technologie blockchain et souhaitent encourager une telle
expérimentation. Ceux qui s'opposent à l'inclusion de données de
non-paiement soutiennent que cela provoque un "gonflement de la
blockchain", ce qui impose à ceux qui exécutent des nœuds Bitcoin
complets de supporter le coût du stockage sur disque pour les données
que la blockchain n'était pas destinée à transporter. De plus, de telles
transactions créent des UTXO qui ne peuvent pas être dépensés, en
utilisant l'adresse Bitcoin de destination comme un champ libre de 20
octets. Parce que l'adresse est utilisée pour les données, elle ne
correspond pas à une clé privée et l'UTXO résultant ne peut *jamais*
être dépensé ; c'est un faux paiement. Ces transactions qui ne peuvent
jamais être dépensées ne sont donc jamais supprimées de l'ensemble UTXO
et entraînent une augmentation permanente de la taille de la base de
données UTXO, ou "gonflement".

Dans la version 0.9 du client Bitcoin Core, un compromis a été trouvé
avec l'introduction de l'opérateur `RETURN`. `RETURN` permet aux
développeurs d'ajouter 80 octets de données de non-paiement à une sortie
de transaction. Cependant, contrairement à l'utilisation de "faux" UTXO,
l'opérateur `RETURN` crée une sortie explicitement *provably
unspendable*, qui n'a pas besoin d'être stockée dans l'ensemble UTXO.
Les sorties `RETURN` sont enregistrées sur la blockchain, elles
consomment donc de l'espace disque et contribuent à l'augmentation de la
taille de la blockchain, mais elles ne sont pas stockées dans l'ensemble
UTXO et ne gonflent donc pas le pool de mémoire UTXO et ne surchargent
pas les nœuds complets avec le coût de RAM plus chère.

Les scripts `RETURN` ressemblent à ceci :

    RETOURNER<data>

<span class="indexterm"></span><span class="indexterm"></span>La portion
de données est limitée à 80 octets et représente le plus souvent un
hachage, comme la sortie de l'algorithme SHA256 (32 octets). De
nombreuses applications mettent un préfixe devant les données pour aider
à identifier l'application. Par exemple, le service de notarisation
numérique [Preuve d'existence](https://proofofexistence.com) utilise le
préfixe de 8 octets `DOCPROOF`, qui est encodé en ASCII sous la forme
`44 4f 43 50 52 4f 4f 46` en hexadécimal.

Gardez à l'esprit qu'il n'y a pas de "script de déverrouillage"
correspondant à `RETURN` qui pourrait éventuellement être utilisé pour
"passer" une sortie `RETURN`. L'intérêt de `RETURN` est que vous ne
pouvez pas dépenser l'argent bloqué dans cette sortie, et donc il n'a
pas besoin d'être conservé dans l'ensemble UTXO comme potentiellement
dépensable - `RETURN` est *provably unspendable*. `RETURN` est
généralement une sortie avec un montant de zéro bitcoin, car tout
bitcoin attribué à une telle sortie est effectivement perdu à jamais. Si
un `RETURN` est référencé comme entrée dans une transaction, le moteur
de validation de script arrêtera l'exécution du script de validation et
marquera la transaction comme invalide. L'exécution de `RETURN` provoque
essentiellement le script "RETURN" avec un `FALSE` et s'arrête. Ainsi,
si vous référencez accidentellement une sortie `RETURN` comme entrée
dans une transaction, cette transaction n'est pas valide.

Une transaction standard (c'est-à-dire conforme aux vérifications
`IsStandard()`) ne peut avoir qu'une seule sortie `RETURN`. Cependant,
une seule sortie `RETURN` peut être combinée dans une transaction avec
des sorties de tout autre type.

Deux nouvelles options de ligne de commande ont été ajoutées dans
Bitcoin Core à partir de la version 0.10. L'option `datacarrier`
contrôle le relais et l'exploration des transactions `RETURN`, avec la
valeur par défaut définie sur "1" pour les autoriser. L'option
`datacarriersize` prend un argument numérique spécifiant la taille
maximale en octets du script `RETURN`, 83 octets par défaut, ce qui
permet un maximum de 80 octets de données `RETURN` plus un octet
d'opcode `RETURN` et deux octets de + Opcode PUSHDATA+.

`RETURN` a été initialement proposé avec une limite de 80 octets, mais
la limite a été réduite à 40 octets lorsque la fonctionnalité a été
publiée. En février 2015, dans la version 0.10 de Bitcoin Core, la
limite a été relevée à 80 octets. Les nœuds peuvent choisir de ne pas
relayer ou exploiter `RETURN`, ou uniquement de relayer et d'exploiter
`RETURN` contenant moins de 80 octets de données.

# Verrous horaires

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span>Les timelocks
sont des restrictions sur les transactions ou les sorties qui ne
permettent de dépenser qu'après un certain temps. Bitcoin a eu une
fonction de verrouillage du temps au niveau de la transaction depuis le
début. Il est implémenté par le champ `nLocktime` dans une transaction.
Deux nouvelles fonctionnalités de timelock ont été introduites fin 2015
et mi-2016 qui offrent des timelocks de niveau UTXO. Ce sont
`CHECKLOCKTIMEVERIFY` et `CHECKSEQUENCEVERIFY`.

Les blocages horaires sont utiles pour postdater les transactions et
verrouiller les fonds à une date future. Plus important encore, les
timelocks étendent les scripts bitcoin dans la dimension du temps,
ouvrant la porte à des contrats intelligents complexes en plusieurs
étapes.

## Temps de verrouillage des transactions (nLocktime)

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>Depuis le début, bitcoin a eu une fonction de
timelock au niveau de la transaction. L'heure de verrouillage de la
transaction est un paramètre au niveau de la transaction (un champ dans
la structure des données de la transaction) qui définit la première
heure à laquelle une transaction est valide et peut être relayée sur le
réseau ou ajoutée à la blockchain. Locktime est également connu sous le
nom de `nLocktime` à partir du nom de variable utilisé dans la base de
code Bitcoin Core. Il est défini sur zéro dans la plupart des
transactions pour indiquer une propagation et une exécution immédiates.
Si `nLocktime` est différent de zéro et inférieur à 500 millions, il est
interprété comme une hauteur de bloc, ce qui signifie que la transaction
n'est pas valide et n'est pas relayée ou incluse dans la blockchain
avant la hauteur de bloc spécifiée. S'il est supérieur ou égal à 500
millions, il est interprété comme un horodatage Unix Epoch (secondes
depuis le 1er janvier 1970) et la transaction n'est pas valide avant
l'heure spécifiée. Les transactions avec `nLocktime` spécifiant un bloc
ou une heure future doivent être conservées par le système d'origine et
transmises au réseau Bitcoin uniquement après leur validité. Si une
transaction est transmise au réseau avant le `nLocktime` spécifié, la
transaction sera rejetée par le premier nœud comme invalide et ne sera
pas relayée vers les autres nœuds. L'utilisation de `nLocktime` équivaut
à postdater un chèque papier.

### Limitations du temps de verrouillage des transactions

`nLocktime` a la limitation que s'il permet de dépenser certaines
sorties dans le futur, il ne rend pas impossible de les dépenser jusqu'à
ce moment-là. Expliquons cela avec l'exemple suivant.

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span>Alice signe une transaction en dépensant l'une
de ses sorties à l'adresse de Bob, et fixe la transaction `nLocktime` à
3 mois dans le futur. Alice envoie cette transaction à Bob pour la
conserver. Avec cette transaction, Alice et Bob savent que :

-   Bob ne peut pas transmettre la transaction pour racheter les fonds
    avant que 3 mois ne se soient écoulés.

-   Bob peut transmettre la transaction après 3 mois.

Toutefois:

-   Alice peut créer une autre transaction, en dépensant deux fois les
    mêmes entrées sans temps de verrouillage. Ainsi, Alice peut passer
    le même UTXO avant que les 3 mois ne se soient écoulés.

-   Bob n'a aucune garantie qu'Alice ne le fera pas.

Il est important de comprendre les limites de la transaction
`nLocktime`. La seule garantie est que Bob ne pourra pas l'échanger
avant que 3 mois ne se soient écoulés. Il n'y a aucune garantie que Bob
obtiendra les fonds. Pour obtenir une telle garantie, la restriction de
verrouillage temporel doit être placée sur l'UTXO lui-même et faire
partie du script de verrouillage, plutôt que sur la transaction. Ceci
est réalisé par la forme suivante de timelock, appelée Check Lock Time
Verify.

## Vérifier l'heure de verrouillage (CLTV)

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>En décembre 2015, une nouvelle forme de
timelock a été introduite dans le bitcoin en tant que soft fork
améliorer. Basé sur une spécification dans BIP-65, un nouvel opérateur
de script appelé *CHECKLOCKTIMEVERIFY* (*CLTV*) a été ajouté au langage
de script. `CLTV` est un timelock par sortie, plutôt qu'un timelock par
transaction comme c'est le cas avec `nLocktime`. Cela permet une plus
grande flexibilité dans la manière dont les timelocks sont appliqués.

En termes simples, en ajoutant l'opcode `CLTV` dans le script de rachat
d'une sortie, cela restreint la sortie, de sorte qu'elle ne peut être
dépensée qu'une fois le temps spécifié écoulé.

Alors que `nLocktime` est un timelock au niveau de la transaction,
`CLTV` est un timelock basé sur la sortie.

`CLTV` ne remplace pas `nLocktime`, mais restreint plutôt des UTXO
spécifiques de sorte qu'ils ne peuvent être dépensés que dans une future
transaction avec `nLocktime` défini sur une valeur supérieure ou égale.

L'opcode `CLTV` prend un paramètre en entrée, exprimé sous la forme d'un
nombre au même format que `nLocktime` (soit une hauteur de bloc, soit un
temps d'époque Unix). Comme indiqué par le suffixe `VERIFY`, `CLTV` est
le type d'opcode qui arrête l'exécution du script si le résultat est
`FALSE`. Si le résultat est TRUE, l'exécution continue.

Pour verrouiller une sortie avec `CLTV`, vous l'insérez dans le script
de rachat de la sortie dans la transaction qui crée la sortie. Par
exemple, si Alice paie l'adresse de Bob, la sortie contiendra
normalement un script P2PKH comme celui-ci :

    DUP HASH160<Bob's Public Key Hash> EQUALVERIFIER CHECKSIG

Pour le verrouiller à un moment, disons dans 3 mois, la transaction
serait une transaction P2SH avec un script de rachat comme celui-ci :

    <now + 3 months>CHECKLOCKTIMEVERIFY DROP DUP HASH160<Bob's Public Key Hash> EQUALVERIFIER CHECKSIG

où
`<now + 3 months> + est une hauteur de bloc ou une valeur temporelle estimée à 3 mois à partir du moment où la transaction est extraite : hauteur de bloc actuelle + 12 960 (blocs) ou heure d'époque Unix actuelle + 7 760 000 (secondes). Pour l'instant, ne vous inquiétez pas de l'opcode +DROP`
qui suit `CHECKLOCKTIMEVERIFY` ; cela sera expliqué sous peu.

Lorsque Bob essaie de dépenser cet UTXO, il construit une transaction
qui fait référence à l'UTXO comme entrée. Il utilise sa signature et sa
clé publique dans le script de déverrouillage de cette entrée et définit
la transaction `nLocktime` pour qu'elle soit égale ou supérieure au
verrouillage temporel dans l'ensemble `CHECKLOCKTIMEVERIFY` Alice. Bob
diffuse ensuite la transaction sur le réseau Bitcoin.

La transaction de Bob est évaluée comme suit. Si le paramètre
`CHECKLOCKTIMEVERIFY` défini par Alice est inférieur ou égal au
`nLocktime` de la transaction dépensière, l'exécution du script continue
(agit comme si un opcode "no operation" ou NOP était exécuté). Sinon,
l'exécution du script s'arrête et la transaction est considérée comme
invalide.

Plus précisément, `CHECKLOCKTIMEVERIFY` échoue et arrête l'exécution,
marquant la transaction invalide si (source : BIP-65) :

1.  la pile est vide ; ou

2.  l'élément du haut de la pile est inférieur à 0 ; ou

3.  le type de timelock (hauteur versus horodatage) de l'élément de la
    pile supérieure et le champ `nLocktime` ne sont pas les mêmes ; ou

4.  l'élément supérieur de la pile est supérieur au champ `nLocktime` de
    la transaction ; ou

5.  le champ `nSequence` de l'entrée est 0xffffffff.

`CLTV` et `nLocktime` utilisent le même format pour décrire les
timelocks, soit une hauteur de bloc, soit le temps écoulé en secondes
depuis l'époque Unix. De manière critique, lorsqu'ils sont utilisés
ensemble, le format de `nLocktime` doit correspondre à celui de `CLTV`
dans les sorties - ils doivent tous deux référencer soit la hauteur de
bloc, soit le temps en secondes.

Après l'exécution, si `CLTV` est satisfait, le paramètre de temps qui
l'a précédé reste l'élément supérieur de la pile et peut devoir être
supprimé, avec `DROP`, pour une exécution correcte des opcodes de script
suivants. Vous verrez souvent `CHECKLOCKTIMEVERIFY` suivi de `DROP` dans
les scripts pour cette raison.

En utilisant `nLocktime` conjointement avec `CLTV`, le scénario décrit
dans &lt;&lt;locktime\_limitations&gt; &gt; changements. Alice ne peut
plus dépenser l'argent (car il est verrouillé avec la clé de Bob) et Bob
ne peut pas le dépenser avant l'expiration du temps de verrouillage de 3
mois.<span class="indexterm"></span> <span class="indexterm"></span>

En introduisant la fonctionnalité timelock directement dans le langage
de script, `CLTV` nous permet de développer des scripts complexes très
intéressants.<span class="indexterm"></span> <span
class="indexterm"></span>

La norme est définie dans [BIP-65
(CHECKLOCKTIMEVERIFY)](https://github.com/bitcoin/bips/blob/master/bip-0065.mediawiki).

## Timelocks relatifs

`nLocktime` et `CLTV` sont <span class="indexterm"></span> <span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span> les deux *timelocks absolus* en ce sens qu'ils
spécifient un point absolu dans le temps. Les deux prochaines
fonctionnalités de timelock que nous examinerons sont des *relative
timelocks* en ce sens qu'elles spécifient, comme condition de dépense
d'une sortie, un temps écoulé depuis la confirmation de la sortie dans
la blockchain.

Les verrous temporels relatifs sont utiles car ils permettent de bloquer
une chaîne de deux transactions interdépendantes ou plus, tout en
imposant une contrainte de temps sur une transaction qui dépend du temps
écoulé depuis la confirmation d'une transaction précédente. En d'autres
termes, l'horloge ne commence pas à compter tant que l'UTXO n'est pas
enregistré sur la blockchain. Cette fonctionnalité est particulièrement
utile dans les canaux d'état bidirectionnels et les réseaux Lightning,
comme nous le verrons dans &lt;&lt;state\_channels&gt; &gt;.

Les timelocks relatifs, comme les timelocks absolus, sont implémentés à
la fois avec une fonctionnalité au niveau de la transaction et un opcode
au niveau du script. Le verrouillage temporel relatif au niveau de la
transaction est implémenté comme une règle de consensus sur la valeur de
`nSequence`, un champ de transaction qui est défini dans chaque entrée
de transaction. Les timelocks relatifs au niveau du script sont
implémentés avec l'opcode `CHECKSEQUENCEVERIFY` (CSV).

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span>Relative les
timelocks sont implémentés conformément aux spécifications de [BIP-68,
Relative lock-time using consensus-enforced sequence
numbers](https://github.com/bitcoin/bips/blob/master/bip-0068.mediawiki)
et https://
github.com/bitcoin/bips/blob/master/bip-0112.mediawiki\[BIP-112,
CHECKSEQUENCEVERIFY\].

BIP-68 et BIP-112 ont été activés en mai 2016 en tant que mise à niveau
soft fork des règles de consensus.

## Timelocks relatifs avec nSequence

<span class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span> <span class="indexterm"></span>Des timelocks
relatifs peuvent être définis sur chaque entrée d'une transaction, en
définissant le champ `nSequence` dans chaque contribution.

### Signification originale de nSequence

Le champ `nSequence` était à l'origine destiné (mais jamais correctement
implémenté) à permettre la modification des transactions dans le
mempool. Dans cette utilisation, une transaction contenant des entrées
avec une valeur `nSequence` inférieure à 2<sup>32</sup> - 1 (0xFFFFFFFF)
indiquait une transaction qui n'était pas encore "finalisée". Une telle
transaction serait conservée dans le mempool jusqu'à ce qu'elle soit
remplacée par une autre transaction dépensant les mêmes entrées avec une
valeur `nSequence` plus élevée. Une fois qu'une transaction a été reçue
dont les entrées avaient une valeur `nSequence` de 0xFFFFFFFF, elle
serait considérée comme "finalisée" et minée.

La signification originale de `nSequence` n'a jamais été correctement
implémentée et la valeur de `nSequence` est habituellement définie sur
0xFFFFFFFF dans les transactions qui n'utilisent pas de timelocks. Pour
les transactions avec `nLocktime` ou `CHECKLOCKTIMEVERIFY`, la valeur
`nSequence` doit être inférieure à 2<sup>31</sup> pour que les gardes de
verrouillage temporel aient un effet, comme expliqué ci-dessous.

### nSequence comme un timelock relatif imposé par consensus

Depuis l'activation de BIP-68, de nouvelles règles de consensus
s'appliquent pour toute transaction contenant une entrée dont la valeur
`nSequence` est inférieure à 2<sup>31</sup> (le bit 1&lt;&lt;31 n'est
pas défini). Par programmation, cela signifie que si le bit le plus
significatif (bit 1&lt;&lt;31) n'est pas défini, c'est un indicateur qui
signifie "temps de verrouillage relatif". Sinon (bit 1&lt;&lt;31
défini), la valeur `nSequence` est réservée à d'autres utilisations
telles que l'activation de `CHECKLOCKTIMEVERIFY`, `nLocktime`,
Opt-In-Replace-By-Fee et d'autres développements futurs.

Les entrées de transaction avec des valeurs `nSequence` inférieures à
2<sup>31</sup> sont interprétées comme ayant un timelock relatif. Une
telle transaction n'est valide qu'une fois que l'entrée a vieilli du
montant relatif du timelock. Par exemple, une transaction avec une
entrée avec un timelock relatif `nSequence` de 30 blocs n'est valide que
lorsqu'au moins 30 blocs se sont écoulés depuis le moment où l'UTXO
référencé dans l'entrée a été extrait. Étant donné que `nSequence` est
un champ par entrée, une transaction peut contenir n'importe quel nombre
d'entrées verrouillées dans le temps, qui doivent toutes avoir
suffisamment vieilli pour que la transaction soit valide. Une
transaction peut inclure à la fois des entrées à verrouillage temporel
(`nSequence` &lt; 2<sup>31</sup>) et des entrées sans verrouillage
temporel relatif (`nSequence` &gt;= 2<sup>31</sup>).

La valeur `nSequence` est spécifiée en blocs ou en secondes, mais dans
un format légèrement différent de celui que nous avons vu utilisé dans
`nLocktime`. Un indicateur de type est utilisé pour différencier les
valeurs comptant les blocs et les valeurs comptant le temps en secondes.
Le drapeau de type est défini dans le 23e bit le moins significatif
(c'est-à-dire la valeur 1&lt;&lt;22). Si le type-flag est défini, alors
la valeur `nSequence` est interprétée comme un multiple de 512 secondes.
Si le drapeau de type n'est pas défini, la valeur `nSequence` est
interprétée comme un nombre de blocs.

Lors de l'interprétation de `nSequence` comme un timelock relatif, seuls
les 16 bits les moins significatifs sont pris en compte. Une fois que
les drapeaux (bits 32 et 23) sont évalués, la valeur `nSequence` est
généralement "masquée" avec un masque de 16 bits (par exemple,
`nSequence` & 0x0000FFFF).

&lt;&lt;bip\_68\_def\_of\_nseq&gt; &gt; montre la disposition binaire de
la valeur `nSequence`, telle que définie par BIP-68.

Définition .BIP-68 du codage nSequence (Source : BIP-68) !["Définition
BIP-68 du codage nSequence"](:images/mbc2_0701.png)

Les verrous temporels relatifs basés sur l'application consensuelle de
la valeur `nSequence` sont définis dans BIP-68.

La norme est définie dans [BIP-68, Relative lock-time using
consensus-enforced sequence
numbers](https://github.com/bitcoin/bips/blob/master/bip-0068.mediawiki).

## Timelocks relatifs avec CSV

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span>Tout comme CLTV
et `nLocktime`, il existe un opcode de script pour les timelocks
relatifs qui exploite le Valeur `nSequence` dans les scripts. Cet opcode
est `CHECKSEQUENCEVERIFY`, communément appelé `CSV` en abrégé.

L'opcode `CSV`, lorsqu'il est évalué dans le script de remboursement
d'un UTXO, permet de dépenser uniquement dans une transaction dont la
valeur d'entrée `nSequence` est supérieure ou égale au paramètre `CSV`.
Essentiellement, cela limite la dépense de l'UTXO jusqu'à ce qu'un
certain nombre de blocs ou de secondes se soient écoulés par rapport au
moment où l'UTXO a été miné.

Comme pour CLTV, la valeur dans `CSV` doit correspondre au format de la
valeur `nSequence` correspondante. Si `CSV` est spécifié en termes de
blocs, il doit en être de même pour `nSequence`. Si `CSV` est spécifié
en termes de secondes, alors `nSequence` doit également l'être.

Les timelocks relatifs avec `CSV` sont particulièrement utiles lorsque
plusieurs transactions (chaînées) sont créées et signées, mais non
propagées, lorsqu'elles sont conservées "hors chaîne". Une transaction
enfant ne peut pas être utilisée tant que la transaction parent n'a pas
été propagée, extraite et vieillie au moment spécifié dans le timelock
relatif. Une application de ce cas d'utilisation peut être vue dans
&lt;&lt;state\_channels&gt; &gt; et &lt;&lt;lightning\_network&gt;
&gt;.<span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>

`CSV` est défini en détail dans [BIP-112,
CHECKSEQUENCEVERIFY](https://github.com/bitcoin/bips/blob/master/bip-0112.mediawiki).

## Temps médian passé

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span>((("timelocks",
"Median-Tme-Past")) ) Dans le cadre de l'activation des timelocks
relatifs, il y a également eu un changement dans la façon dont le
"temps" est calculé pour les timelocks (à la fois absolus et relatifs).
Dans le bitcoin, il existe une différence subtile, mais très
significative, entre le temps du mur et le temps du consensus. Bitcoin
est un réseau décentralisé, ce qui signifie que chaque participant a sa
propre vision du temps. Les événements sur le réseau ne se produisent
pas instantanément partout. La latence du réseau doit être prise en
compte dans la perspective de chaque nœud. Finalement, tout est
synchronisé pour créer un grand livre commun. Bitcoin atteint un
consensus toutes les 10 minutes sur l'état du grand livre tel qu'il
existait dans le passé.

Les horodatages définis dans les en-têtes de bloc sont définis par les
mineurs. Il existe un certain degré de latitude autorisé par les règles
de consensus pour tenir compte des différences de précision d'horloge
entre les nœuds décentralisés. Cependant, cela crée une incitation
malheureuse pour les mineurs à mentir sur le temps passé dans un bloc
afin de gagner des frais supplémentaires en incluant des transactions
verrouillées dans le temps qui ne sont pas encore matures. Voir la
section suivante pour plus d'informations.

Pour supprimer l'incitation au mensonge et renforcer la sécurité des
timelocks, un BIP a été proposé et activé en même temps que les BIP des
timelocks relatifs. Il s'agit de BIP-113, qui définit une nouvelle
mesure consensuelle du temps appelée *Median-Time-Past*.

Median-Time-Past est calculé en prenant les horodatages des 11 derniers
blocs et en trouvant la médiane. Ce temps médian devient alors le temps
de consensus et est utilisé pour tous les calculs de timelock. En
prenant le point médian d'environ deux heures dans le passé, l'influence
de l'horodatage de n'importe quel bloc est réduite. En incorporant 11
blocs, aucun mineur ne peut influencer les horodatages afin de gagner
des frais sur les transactions avec un timelock qui n'est pas encore
arrivé à échéance.

Median-Time-Past modifie l'implémentation des calculs de temps pour
`nLocktime`, `CLTV`, `nSequence` et `CSV`. L'heure de consensus calculée
par Median-Time-Past est toujours d'environ une heure en retard sur
l'heure de l'horloge murale. Si vous créez des transactions timelock,
vous devez en tenir compte lors de l'estimation de la valeur souhaitée à
encoder dans `nLocktime`, `nSequence`, `CLTV` et `CSV`.

Median-Time-Past est spécifié dans
[BIP-113](https://github.com/bitcoin/bips/blob/master/bip-0113.mediawiki).

## Défense Timelock contre le sniping

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span>Le sniping est un scénario d'attaque théorique,
où les mineurs tentant de réécrire des blocs passés "snipe" des frais
plus élevés transactions des futurs blocs pour maximiser leur
rentabilité.

Par exemple, disons que le bloc le plus élevé existant est le bloc \#100
000. Si au lieu d'essayer d'exploiter le bloc \#100 001 pour étendre la
chaîne, certains mineurs tentent de réexploiter \#100 000. Ces mineurs
peuvent choisir d'inclure toute transaction valide (qui n'a pas encore
été exploitée) dans leur bloc candidat \#100 000. Ils n'ont pas à
reminer le bloc avec les mêmes transactions. En fait, ils sont incités à
sélectionner les transactions les plus rentables (frais les plus élevés
par Ko) à inclure dans leur bloc. Ils peuvent inclure toutes les
transactions qui se trouvaient dans "l'ancien" bloc \#100 000, ainsi que
toutes les transactions du mempool actuel. Essentiellement, ils ont la
possibilité d'extraire des transactions du "présent" vers le "passé"
réécrit lorsqu'ils recréent le bloc \#100 000.

Aujourd'hui, cette attaque n'est pas très lucrative, car la récompense
de bloc est bien supérieure au total des frais par bloc. Mais à un
moment donné dans le futur, les frais de transaction représenteront la
majorité de la récompense minière (ou même l'intégralité de la
récompense minière). A ce moment-là, ce scénario devient inévitable.

Pour éviter le "fee sniping", lorsque Bitcoin Core crée des
transactions, il utilise `nLocktime` pour les limiter au "bloc suivant",
par défaut. Dans notre scénario, Bitcoin Core définirait `nLocktime` sur
100 001 sur toute transaction créée. Dans des circonstances normales, ce
`nLocktime` n'a aucun effet - les transactions ne peuvent être incluses
que dans le bloc \#100 001 de toute façon ; c'est le bloc suivant.

Mais dans le cadre d'une attaque blockchain/double dépense, les mineurs
ne seraient pas en mesure d'extraire des transactions à frais élevés du
mempool, car toutes ces transactions seraient bloquées dans le temps
pour bloquer \#100 001. Ils ne peuvent reminer que \#100 000 avec les
transactions valides à ce moment-là, ne gagnant essentiellement aucun
nouveau frais.

Pour ce faire, Bitcoin Core définit le `nLocktime` sur toutes les
nouvelles transactions à&lt;current block \# + 1&gt; et définit la
`nSequence` sur toutes les entrées à 0xFFFFFFFE pour activer
`nLocktime`.<span class="indexterm"></span> <span
class="indexterm"></span>

# Scripts avec contrôle de flux (clauses conditionnelles)

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span>L'une des
fonctionnalités les plus puissantes de Bitcoin Script est le contrôle de
flux, également connu sous le nom de clauses conditionnelles. Vous êtes
probablement familiarisé avec le contrôle de flux dans divers langages
de programmation qui utilisent la construction `IF…THEN…ELSE`. Les
clauses conditionnelles Bitcoin semblent un peu différentes, mais sont
essentiellement la même construction.

À un niveau de base, les opcodes conditionnels bitcoin nous permettent
de construire un script de rachat qui a deux façons d'être déverrouillé,
en fonction d'un résultat `TRUE`/`FALSE` d'évaluation d'une condition
logique. Par exemple, si x est `TRUE`, le script de rachat est A et le
script de rachat ELSE est B.

De plus, les expressions conditionnelles Bitcoin peuvent être
"imbriquées" indéfiniment, ce qui signifie qu'une clause conditionnelle
peut en contenir une autre, qui en contient une autre, etc. Le contrôle
de flux Bitcoin Script peut être utilisé pour construire des scripts
très complexes avec des centaines voire des milliers de chemins
d'exécution possibles. . Il n'y a pas de limite à l'imbrication, mais
les règles de consensus imposent une limite à la taille maximale, en
octets, d'un script.

Bitcoin implémente le contrôle de flux à l'aide des opcodes `IF`,
`ELSE`, `ENDIF` et `NOTIF`. De plus, les expressions conditionnelles
peuvent contenir des opérateurs booléens tels que `BOOLAND`, `BOOLOR` et
`NOT`.

À première vue, vous pouvez trouver les scripts de contrôle de flux du
bitcoin déroutants. En effet, Bitcoin Script est un langage de pile. De
la même manière que `1 + 1` semble "en arrière" lorsqu'il est exprimé
comme `1 1 ADD`, les clauses de contrôle de flux dans bitcoin regardent
également "en arrière".

Dans la plupart des langages de programmation traditionnels
(procéduraux), le contrôle de flux ressemble à ceci :

**Pseudocode de contrôle de flux dans la plupart des langages de
programmation**

    si (état):
      code à exécuter lorsque la condition est vraie
    autre:
      code à exécuter lorsque la condition est fausse
    code à exécuter dans les deux cas

Dans un langage basé sur la pile comme Bitcoin Script, la condition
logique vient avant le `IF`, ce qui le fait apparaître "en arrière",
comme ceci :

Contrôle de flux .Bitcoin Script

    état
    SI
      code à exécuter lorsque la condition est vraie
    AUTRE
      code à exécuter lorsque la condition est fausse
    FIN SI
    code à exécuter dans les deux cas

Lors de la lecture du script Bitcoin, rappelez-vous que la condition
évaluée vient *avant* l'opcode `IF`.

## Clauses conditionnelles avec les opcodes VERIFY

<span class="indexterm"></span><span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span>Une autre forme
de conditionnel dans Bitcoin Script est tout opcode qui se termine par
`VERIFY`. Le suffixe `VERIFY` signifie que si la condition évaluée n'est
pas `TRUE`, l'exécution du script se termine immédiatement et la
transaction est considérée comme invalide.

<span class="indexterm"></span>Contrairement à une clause `IF`, qui
offre des chemins d'exécution alternatifs, le suffixe `VERIFY` agit
comme une *clause de garde*, ne continuant que si une condition
préalable est remplie.

Par exemple, le script suivant nécessite la signature de Bob et une
pré-image (secret) qui produit un hachage spécifique. Les deux
conditions doivent être remplies pour le déverrouiller :

**Un script de rachat avec une clause de garde `EQUALVERIFY`.**

    HASH160<expected hash> EQUALVERIFIER<Bob's Pubkey> CHECKSIG

Pour racheter cela, Bob doit construire un script de déverrouillage qui
présente une pré-image valide et une signature :

**Un script de déverrouillage pour satisfaire le script de rachat
ci-dessus**

    <Bob's Sig> <hash pre-image>

Sans présenter la pré-image, Bob ne peut pas accéder à la partie du
script qui vérifie sa signature.

Ce script peut être écrit avec un `IF` à la place :

**Un script de rachat avec une clause de garde `IF`**

    HASH160<expected hash> ÉGAL
    SI
       <Bob's Pubkey>CHECKSIG
    FIN SI

Le script de déverrouillage de Bob est identique :

**Un script de déverrouillage pour satisfaire le script de rachat
ci-dessus**

    <Bob's Sig> <hash pre-image>

Le script avec `IF` fait la même chose que d'utiliser un opcode avec un
suffixe `VERIFY` ; elles fonctionnent toutes deux comme des clauses de
garde. Cependant, la construction `VERIFY` est plus efficace, utilisant
deux opcodes de moins.

Alors, quand utilisons-nous `VERIFY` et quand utilisons-nous `IF` ? Si
tout ce que nous essayons de faire est d'attacher une condition
préalable (clause de garde), alors `VERIFY` est préférable. Si,
toutefois, nous voulons avoir plus d'un chemin d'exécution (contrôle de
flux), nous avons besoin d'une clause de contrôle de flux `IF…ELSE`.

<span class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span>Un opcode tel
que `EQUAL` poussera le résultat (`TRUE`/`FALSE`) sur la pile, le
laissant là pour évaluation par les opcodes suivants. En revanche, le
suffixe de l'opcode `EQUALVERIFY` ne laisse rien sur la pile. Les
opcodes qui se terminent par `VERIFY` ne laissent pas le résultat sur la
pile.

## Utilisation du contrôle de flux dans les scripts

Une utilisation très courante du contrôle de flux dans Bitcoin Script
consiste à construire un script de rachat qui offre plusieurs chemins
d'exécution, chacun une manière différente de racheter l'UTXO.

<span class="indexterm"></span> <span class="indexterm"></span>Regardons
un exemple simple, où nous avons deux signataires, Alice et Bob, et l'un
ou l'autre est en mesure de racheter. Avec multisig, cela serait exprimé
sous la forme d'un script multisig 1 sur 2. Pour des raisons de
démonstration, nous ferons la même chose avec une clause `IF` :

    SI
     <Alice's Pubkey>CHECKSIG
    AUTRE
     <Bob's Pubkey>CHECKSIG
    FIN SI

En regardant ce script de rachat, vous vous demandez peut-être : "Où est
la condition ? Il n'y a rien qui précède la clause `IF` !"

La condition ne fait pas partie du script de rachat. Au lieu de cela, la
condition sera proposée dans le script de déverrouillage, permettant à
Alice et Bob de "choisir" le chemin d'exécution qu'ils souhaitent.

Alice rachète cela avec le script de déverrouillage :

    <Alice's Sig>1

Le `1` à la fin sert de condition (`TRUE`) qui fera que la clause `IF`
exécutera le premier chemin de rachat pour lequel Alice a une signature.

Pour que Bob puisse racheter cela, il devrait choisir le deuxième chemin
d'exécution en donnant une valeur `FALSE` à la clause `IF` :

    <Bob's Sig>0

Le script de déverrouillage de Bob place un `0` sur la pile, ce qui
oblige la clause `IF` à exécuter le deuxième script (`ELSE`), qui
nécessite la signature de Bob.

Puisque les clauses `IF` peuvent être imbriquées, nous pouvons créer un
"labyrinthe" de chemins d'exécution. Le script de déverrouillage peut
fournir une "carte" sélectionnant le chemin d'exécution réellement
exécuté :

    SI
      scénario A
    AUTRE
      SI
        scénario B
      AUTRE
        scénario C
      FIN SI
    FIN SI

Dans ce scénario, il existe trois chemins d'exécution (`script A`,
`script B` et `script C`). Le script de déverrouillage fournit un chemin
sous la forme d'une séquence de valeurs `TRUE` ou `FALSE`. Pour
sélectionner le chemin `script B`, par exemple, le script de
déverrouillage doit se terminer par `1 0` (`TRUE`, `FALSE`). Ces valeurs
seront poussées sur la pile, de sorte que la deuxième valeur (`FALSE`)
se retrouve en haut de la pile. La clause `IF` externe extrait la valeur
`FALSE` et exécute la première clause `ELSE`. Ensuite, la valeur `TRUE`
se déplace vers le haut de la pile et est évaluée par le `IF` interne
(imbriqué), en sélectionnant le chemin d'exécution `B`.

En utilisant cette construction, nous pouvons créer des scripts de
rachat avec des dizaines ou des centaines de chemins d'exécution, chacun
offrant une manière différente de racheter l'UTXO. Pour dépenser, nous
construisons un script de déverrouillage qui navigue dans le chemin
d'exécution en plaçant les valeurs `TRUE` et `FALSE` appropriées sur la
pile à chaque point de contrôle de flux.<span class="indexterm"></span>
<span class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>

# Exemple de script complexe

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span> <span class="indexterm"></span>Dans cette
section, nous combinons de nombreux concepts de ce chapitre en un seul
exemple.

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span>Notre exemple utilise l'histoire de Mohammed,
le propriétaire d'une entreprise à Dubaï qui exploite une entreprise
d'import/export.

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span>Dans Dans cet exemple, Mohammed souhaite
construire un compte de capital d'entreprise avec des règles flexibles.
Le schéma qu'il crée nécessite différents niveaux d'autorisation en
fonction des timelocks. Les participants au programme multisig sont
Mohammed, ses deux partenaires Saeed et Zaira, et leur avocat Abdul. Les
trois partenaires prennent des décisions basées sur une règle de
majorité, donc deux des trois doivent être d'accord. Cependant, en cas
de problème avec leurs clés, ils souhaitent que leur avocat puisse
récupérer les fonds avec l'une des trois signatures d'associés. Enfin,
si tous les associés sont indisponibles ou inaptes pendant un certain
temps, ils souhaitent que l'avocat puisse gérer directement le compte.

Voici le script de rachat que Mohammed conçoit pour y parvenir (préfixe
de numéro de ligne en tant que XX) :

**Variable Multi-Signature avec Timelock**

    01 SI
    02 SI
    03 2
    04 AUTREMENT
    05 &lt;30 jours&gt; CHECKSEQUENCEVERIFY DROP
    06<Abdul the Lawyer's Pubkey> VÉRIFIER VÉRIFIER
    07 1
    08 ENDIF
    09<Mohammed's Pubkey><Saeed's Pubkey><Zaira's Pubkey> 3 CONTRÔLE MULTISIG
    10 AUTREMENT
    11 &lt;90 jours&gt; VÉRIFIER LA SÉQUENCE VÉRIFIER LA CHUTE
    12<Abdul the Lawyer's Pubkey> CHECKSIG
    13 ENDIF

Le script de Mohammed implémente trois chemins d'exécution à l'aide de
clauses de contrôle de flux imbriquées `IF…ELSE`.

Dans le premier chemin d'exécution, ce script fonctionne comme un simple
multisig 2 sur 3 avec les trois partenaires. Ce chemin d'exécution se
compose des lignes 3 et 9. La ligne 3 définit le quorum du multisig à
`2` (2-of-3). Ce chemin d'exécution peut être sélectionné en mettant
`TRUE TRUE` à la fin du script de déverrouillage :

**Script de déverrouillage pour le premier chemin d'exécution (2-of-3
multisig)**

    0<Mohammed's Sig><Zaira's Sig> VRAI VRAI

Le `0` au début de ce script de déverrouillage est dû à un bogue dans
`CHECKMULTISIG` qui extrait une valeur supplémentaire de la pile. La
valeur supplémentaire est ignorée par le `CHECKMULTISIG`, mais elle doit
être présente ou le script échoue. Pousser `0` (habituellement) est une
solution de contournement au bogue, comme décrit dans
&lt;&lt;multisig\_bug&gt; &gt;.

Le deuxième chemin d'exécution ne peut être utilisé qu'après 30 jours à
compter de la création de l'UTXO. À ce moment-là, il faut la signature
d'Abdul l'avocat et de l'un des trois partenaires (un multisig 1 sur 3).
Ceci est réalisé par la ligne 7, qui fixe le quorum pour le multisig à
`1`. Pour sélectionner ce chemin d'exécution, le script de
déverrouillage se terminerait par `FALSE TRUE` :

**Script de déverrouillage pour le deuxième chemin d'exécution (Avocat +
1 sur 3)**

    0<Abdul the Lawyer's Sig><Saeed's Sig> FAUX VRAI

Pourquoi `FAUX VRAI` ? N'est-ce pas à l'envers ? Parce que les deux
valeurs sont poussées sur la pile, avec `FALSE` poussé en premier, puis
`TRUE` poussé en second. `TRUE` est donc dépilé *first* par le premier
opcode `IF`.

Enfin, la troisième voie d'exécution permet à Abdul l'avocat de dépenser
les fonds seul, mais seulement après 90 jours. Pour sélectionner ce
chemin d'exécution, le script de déverrouillage doit se terminer par
`FALSE` :

**Script de déverrouillage pour le troisième chemin d'exécution (avocat
uniquement)**

    <Abdul the Lawyer's Sig>FAUX

Essayez d'exécuter le script sur papier pour voir comment il se comporte
sur la pile.

Quelques éléments supplémentaires à prendre en compte lors de la lecture
de cet exemple. Voyez si vous pouvez trouver les réponses :

-   Pourquoi l'avocat ne peut-il pas racheter le troisième chemin
    d'exécution à tout moment en le sélectionnant avec `FALSE` sur le
    script de déverrouillage ?

-   Combien de chemins d'exécution peuvent être utilisés 5, 35 et 105
    jours, respectivement, après le minage de l'UTXO ?

-   Les fonds sont-ils perdus si l'avocat perd sa clé ? Votre réponse
    change-t-elle si 91 jours se sont écoulés ?

-   Comment les associés « remettent-ils à zéro » l'horloge tous les 29
    ou 89 jours pour empêcher l'avocat d'accéder aux fonds ?

-   Pourquoi certains opcodes `CHECKSIG` dans ce script ont-ils le
    suffixe `VERIFY` alors que d'autres non ?<span
    class="indexterm"></span> <span class="indexterm"></span><span
    class="indexterm"></span> <span class="indexterm"></span>

# Témoin séparé

<span class="indexterm"></span> <span
class="indexterm"></span>Segregated Witness (segwit) est une mise à
niveau des règles de consensus bitcoin et du protocole réseau, proposée
et mise en œuvre en tant que soft-fork BIP-9 qui a été activé sur le
réseau principal de bitcoin le 1er août 2017.

En cryptographie, le terme « témoin » est utilisé pour décrire une
solution à un puzzle cryptographique. En termes de bitcoin, le témoin
satisfait une condition cryptographique placée sur une sortie de
transaction non dépensée (UTXO).

Dans le contexte du bitcoin, une signature numérique est *un type de
témoin*, mais un témoin est plus largement toute solution qui peut
satisfaire les conditions imposées à un UTXO et débloquer cet UTXO pour
les dépenses. Le terme "témoin" est un terme plus général pour un
"script de déverrouillage" ou "scriptSig".

Avant l'introduction de segwit, chaque entrée d'une transaction était
suivie des données témoins qui la déverrouillaient. Les données témoins
ont été intégrées à la transaction dans le cadre de chaque entrée. Le
terme *témoin séparé*, ou *segwit* en abrégé, signifie simplement
séparer la signature ou le script de déverrouillage d'une sortie
spécifique. Pensez "scriptSig séparé" ou "signature séparée" dans sa
forme la plus simple.

Segregated Witness est donc une modification architecturale du bitcoin
qui vise à déplacer les données témoins du champ `scriptSig` (script de
déverrouillage) d'une transaction vers une structure de données
*witness* distincte qui accompagne une transaction. Les clients peuvent
demander des données de transaction avec ou sans les données de témoin
qui les accompagnent.

Dans cette section, nous examinerons certains des avantages de
Segregated Witness, décrirons le mécanisme utilisé pour déployer et
mettre en œuvre ce changement d'architecture et démontrerons
l'utilisation de Segregated Witness dans les transactions et les
adresses.

Le témoin séparé est défini par les BIP suivants :

[BIP-141](https://github.com/bitcoin/bips/blob/master/bip-0141.mediawiki)  
La principale définition du témoin séparé.

[BIP-143](https://github.com/bitcoin/bips/blob/master/bip-0143.mediawiki)  
Vérification de la signature des transactions pour le programme témoin
de la version 0

[BIP-144](https://github.com/bitcoin/bips/blob/master/bip-0144.mediawiki)  
Peer Services—Nouveaux messages réseau et formats de sérialisation

[BIP-145](https://github.com/bitcoin/bips/blob/master/bip-0145.mediawiki)  
getblocktemplate Updates for Segregated Witness (for mining)

[BIP-173](https://github.com/bitcoin/bips/blob/master/bip-0173.mediawiki)  
Format d'adresse Base32 pour les sorties témoins natives v0-16

## Pourquoi un témoin séparé ?

Segregated Witness est un changement architectural qui a plusieurs
effets sur l'évolutivité, la sécurité, les incitations économiques et
les performances du bitcoin :

Malléabilité de transaction  
En déplaçant le témoin en dehors des données de transaction, le hachage
de transaction utilisé comme identifiant n'inclut plus les données de
témoin. Étant donné que les données témoins sont la seule partie de la
transaction qui peut être modifiée par un tiers (voir
&lt;&lt;segwit\_txid&gt; &gt;), sa suppression supprime également la
possibilité d'attaques de malléabilité des transactions. Avec Segregated
Witness, les hachages de transaction deviennent immuables par toute
personne autre que le créateur de la transaction, ce qui améliore
considérablement la mise en œuvre de nombreux autres protocoles qui
reposent sur la construction avancée de transactions bitcoin, tels que
les canaux de paiement, les transactions chaînées et les réseaux
Lightning.

Gestion des versions de script  
Avec l'introduction des scripts Segregated Witness, chaque script de
verrouillage est précédé d'un numéro de *version de script*, similaire à
la façon dont les transactions et les blocs ont des numéros de version.
L'ajout d'un numéro de version de script permet au langage de script
d'être mis à niveau de manière rétrocompatible (c'est-à-dire en
utilisant des mises à niveau de soft fork) pour introduire de nouveaux
opérandes de script, syntaxe ou sémantique. La possibilité de mettre à
niveau le langage de script de manière non perturbatrice accélérera
considérablement le taux d'innovation dans le bitcoin.

Mise à l'échelle du réseau et du stockage  
Les données témoins contribuent souvent de manière importante à la
taille totale d'une transaction. Les scripts plus complexes tels que
ceux utilisés pour les canaux multisig ou de paiement sont très
volumineux. Dans certains cas, ces scripts représentent la majorité
(plus de 75 %) des données d'une transaction. En déplaçant les données
témoins en dehors des données de transaction, Segregated Witness
améliore l'évolutivité de Bitcoin. Les nœuds peuvent élaguer les données
témoins après avoir validé les signatures, ou les ignorer complètement
lors de la vérification simplifiée des paiements. Les données témoins
n'ont pas besoin d'être transmises à tous les nœuds et n'ont pas besoin
d'être stockées sur disque par tous les nœuds.

Optimisation de la vérification de signature  
Segregated Witness met à niveau les fonctions de signature (`CHECKSIG`,
`CHECKMULTISIG`, etc.) pour réduire la complexité de calcul de
l'algorithme. Avant segwit, l'algorithme utilisé pour produire une
signature nécessitait un nombre d'opérations de hachage proportionnel à
la taille de la transaction. Les calculs de hachage de données ont
augmenté en O(n<sup>2</sup>) par rapport au nombre d'opérations de
signature, introduisant une charge de calcul substantielle sur tous les
nœuds vérifiant la signature. Avec segwit, l'algorithme est modifié pour
réduire la complexité à O(n).

Amélioration de la signature hors ligne  
Les signatures de témoins séparés incorporent la valeur (montant)
référencée par chaque entrée dans le hachage qui est signé. Auparavant,
un dispositif de signature hors ligne, tel qu'un portefeuille matériel,
devait vérifier le montant de chaque entrée avant de signer une
transaction. Cela était généralement accompli en diffusant une grande
quantité de données sur les transactions précédentes référencées en tant
qu'entrées. Étant donné que le montant fait désormais partie du hachage
d'engagement qui est signé, un appareil hors ligne n'a pas besoin des
transactions précédentes. Si les montants ne correspondent pas (sont mal
représentés par un système en ligne compromis), la signature sera
invalide.

## Comment fonctionne le témoignage séparé

À première vue, Segregated Witness semble être un changement dans la
façon dont les transactions sont construites et donc une fonctionnalité
au niveau de la transaction, mais ce n'est pas le cas. Au lieu de cela,
Segregated Witness est un changement dans la façon dont les UTXO
individuels sont dépensés et est donc une fonctionnalité par sortie.

Une transaction peut dépenser des sorties de témoin séparé ou des
sorties traditionnelles (témoin en ligne) ou les deux. Par conséquent,
cela n'a pas beaucoup de sens de se référer à une transaction comme une
"transaction de témoin séparé". Nous devrions plutôt faire référence à
des sorties de transaction spécifiques en tant que "sorties de témoins
séparés".

Lorsqu'une transaction passe un UTXO, elle doit fournir un témoin. Dans
un UTXO traditionnel, le script de verrouillage nécessite que les
données témoins soient fournies *inline* dans la partie d'entrée de la
transaction qui dépense l'UTXO. Un UTXO de témoin séparé, cependant,
spécifie un script de verrouillage qui peut être satisfait avec des
données de témoin en dehors de l'entrée (séparées).

## Soft Fork (rétrocompatibilité)

Le témoin séparé est un changement significatif dans la manière dont les
sorties et les transactions sont architecturées. Un tel changement
nécessiterait normalement un changement simultané de chaque nœud et
portefeuille Bitcoin pour modifier les règles de consensus, ce que l'on
appelle un hard fork. Au lieu de cela, un témoin séparé est introduit
avec un changement beaucoup moins perturbateur, qui est rétrocompatible,
connu sous le nom de soft fork. Ce type de mise à niveau permet aux
logiciels non mis à niveau d'ignorer les modifications et de continuer à
fonctionner sans aucune interruption.

Les sorties de témoins séparés sont construites de manière à ce que les
systèmes plus anciens qui ne sont pas sensibles au segwit puissent
toujours les valider. Pour un ancien portefeuille ou nœud, une sortie de
témoin séparé ressemble à une sortie que *n'importe qui peut dépenser*.
De telles sorties peuvent être dépensées avec une signature vide, donc
le fait qu'il n'y ait pas de signature à l'intérieur de la transaction
(elle est séparée) n'invalide pas la transaction. Cependant, les
portefeuilles et les nœuds de minage plus récents voient la sortie du
témoin séparé et s'attendent à trouver un témoin valide pour celle-ci
dans les données de témoin de la transaction.

==== Exemples de témoins séparés et exemples de transactions

Examinons quelques-uns de nos exemples de transactions et voyons comment
ils changeraient avec Segregated Witness. Nous verrons d'abord comment
un paiement Pay-to-Public-Key-Hash (P2PKH) est transformé avec le
programme Segregated Witness. Ensuite, nous examinerons l'équivalent de
Segregated Witness pour les scripts Pay-to-Script-Hash (P2SH). Enfin,
nous verrons comment les deux programmes Segregated Witness précédents
peuvent être intégrés dans un script P2SH.

### Pay-to-Witness-Public-Key-Hash (P2WPKH)

Dans &lt;&lt;cup\_of\_coffee&gt; &gt;, <span class="indexterm"></span>
<span class="indexterm"></span> <span class="indexterm"></span>Alice a
créé une transaction pour payer Bob pour une tasse de café. Cette
transaction a créé une sortie P2PKH d'une valeur de 0,015 BTC pouvant
être dépensée par Bob. Le script de sortie ressemble à ceci :

**Exemple de script de sortie P2PKH**

    DUP HASH160 ab68025513c3dbd2f7b92a94e0581f5d50f654e7 EQUALVERIFY CHECKSIG

Avec Segregated Witness, Alice créerait un script
Pay-to-Witness-Public-Key-Hash (P2WPKH), qui ressemble à ceci :

**Exemple de script de sortie P2WPKH**

    0 ab68025513c3dbd2f7b92a94e0581f5d50f654e7

Comme vous pouvez le voir, le script de verrouillage d'une sortie
Segregated Witness est beaucoup plus simple qu'une sortie
traditionnelle. Il se compose de deux valeurs qui sont transmises à la
pile d'évaluation du script. Pour un ancien client Bitcoin (non
conscient de la technologie), les deux poussées ressembleraient à une
sortie que n'importe qui peut dépenser et ne nécessite pas de signature
(ou plutôt, peut être dépensée avec une signature vide). Pour un client
segwit plus récent, le premier chiffre (0) est interprété comme un
numéro de version (la *version témoin*) et la seconde partie (20 octets)
est l'équivalent d'un script de verrouillage connu sous le nom de
*programme témoin*. Le programme témoin de 20 octets est simplement le
hachage de la clé publique, comme dans un script P2PKH.

Examinons maintenant la transaction correspondante que Bob utilise pour
dépenser cette sortie. Pour le script d'origine (nonsegwit), la
transaction de Bob devrait inclure une signature dans l'entrée de
transaction :

**Transaction décodée montrant une sortie P2PKH dépensée avec une
signature**

    [...]
    « Vin » : [
    &quot;txid&quot;: &quot;0627052b6f28912f2703066a912ea577f2ce4da4caa5a5fbd8a57286c345c2f2&quot;,
    &quot;vout&quot;: 0,
             &quot;scriptSig&quot;: &quot;<Bob’s scriptSig> ”,
    ]
    [...]

Cependant, pour passer la sortie Segregated Witness, la transaction n'a
pas de signature dans la partie d'entrée. Au lieu de cela, la
transaction de Bob a un `scriptSig` vide dans les données de transaction
(la première partie d'une transaction, qui inclut la partie d'entrée) et
inclut sa signature dans les données témoins (la deuxième partie d'une
transaction, qui est séparée des données de transaction ):

**Transaction décodée montrant une sortie P2WPKH dépensée avec des
données témoins séparées**

    [...]
    « Vin » : [
    &quot;txid&quot;: &quot;0627052b6f28912f2703066a912ea577f2ce4da4caa5a5fbd8a57286c345c2f2&quot;,
    &quot;vout&quot;: 0,
             &quot;scriptSig&quot;: &quot;&quot;,
    ]
    [...]
    &quot;témoin&quot;: &quot;<Bob’s witness data> ”
    [...]

### Construction de portefeuille de P2WPKH

Il est extrêmement important de noter que P2WPKH ne doit être créé que
par le bénéficiaire (destinataire) et non converti par l'expéditeur à
partir d'une clé publique connue, d'un script P2PKH ou d'une adresse. Le
destinataire n'a aucun moyen de savoir si le portefeuille de
l'expéditeur a la capacité de construire des transactions segwit et de
dépenser les sorties P2WPKH.

De plus, les sorties P2WPKH doivent être construites à partir du hachage
d'une clé publique *compressée*. Les clés publiques non compressées ne
sont pas standard dans segwit et peuvent être explicitement désactivées
par un futur soft fork. Si le hachage utilisé dans le P2WPKH provient
d'une clé publique non compressée, il peut être inutilisable et vous
risquez de perdre des fonds. Les sorties P2WPKH doivent être créées par
le portefeuille du bénéficiaire en dérivant une clé publique compressée
à partir de sa clé privée.

P2WPKH doit être construit par le bénéficiaire (destinataire) en
convertissant une clé publique compressée en un hachage P2WPKH. Vous ne
devez jamais transformer un script P2PKH, une adresse Bitcoin ou une clé
publique non compressée en un script témoin P2WPKH.

### Pay-to-Witness-Script-Hash (P2WSH)

Le <span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span>deuxième type de programme témoin correspond à
un script Pay-to-Script-Hash (P2SH). Nous avons vu ce type de script
dans &lt;&lt;p2sh&gt; &gt;. Dans cet exemple, P2SH a été utilisé par la
société de Mohammed pour exprimer un script multisignature. Les
paiements à l'entreprise de Mohammed étaient encodés avec un script de
verrouillage comme celui-ci :

**Exemple de script de sortie P2SH**

    HASH160 54c557e07dde5bb6cb791c7a540e0a4796f5e97e ÉGAL

Ce script P2SH fait référence au hachage d'un *script d'échange* qui
définit une exigence multisignature 2 sur 5 pour dépenser des fonds.
Pour dépenser cette sortie, la société de Mohammed présenterait le
script de rachat (dont le hachage correspond au hachage du script dans
la sortie P2SH) et les signatures nécessaires pour satisfaire ce script
de rachat, le tout dans l'entrée de transaction :

**Transaction décodée montrant qu'une sortie P2SH est dépensée**

    [...]
    « Vin » : [
    &quot;txid&quot;: &quot;abcdef12345...&quot;,
    &quot;vout&quot;: 0,
             &quot;scriptSig&quot;: &quot;<SigA><SigB> &lt;2 PubA PubB PubC PubD PubE 5 CHECKMULTISIG&gt; »,
    ]

Maintenant, regardons comment cet exemple entier serait mis à niveau
vers segwit. Si les clients de Mohammed utilisaient un portefeuille
compatible segwit, ils effectueraient un paiement, créant une sortie
Pay-to-Witness-Script-Hash (P2WSH) qui ressemblerait à ceci :

**Exemple de script de sortie P2WSH**

    0 a9b7b38d972cabc7961dbfbcb841ad4508d133c47ba87457b4a0e8aae86dbb89

Encore une fois, comme dans l'exemple de P2WPKH, vous pouvez voir que le
script équivalent Segregated Witness est beaucoup plus simple et omet
les différents opérandes de script que vous voyez dans les scripts P2SH.
Au lieu de cela, le programme Segregated Witness se compose de deux
valeurs poussées vers la pile : une version témoin (0) et le hachage
SHA256 de 32 octets du script de rachat.

La société de Mohammed peut dépenser la sortie P2WSH en présentant le
bon script de rachat et suffisamment de signatures pour le satisfaire.
Le script de rachat et les signatures seraient séparés *en dehors* des
données de transaction de dépenses dans le cadre des données de témoin.
Dans l'entrée de transaction, le portefeuille de Mohammed <span
class="indexterm"></span> <span class="indexterm"></span>portefeuille
mettrait un `scriptSig` vide :

**Transaction décodée montrant une sortie P2WSH dépensée avec des
données témoins séparées**

    [...]
    « Vin » : [
    &quot;txid&quot;: &quot;abcdef12345...&quot;,
    &quot;vout&quot;: 0,
             &quot;scriptSig&quot;: &quot;&quot;,
    ]
    [...]
    &quot;témoin&quot;: &quot;<SigA><SigB> &lt;2 PubA PubB PubC PubD PubE 5 CHECKMULTISIG&gt; »
    [...]

Alors que P2SH utilise le hachage `RIPEMD160(SHA256(script))` de 20
octets, le programme témoin P2WSH utilise un hachage `SHA256(script)` de
32 octets. Cette différence dans le choix de l'algorithme de hachage est
délibérée et offre une sécurité renforcée à P2WSH (128 bits de sécurité
dans P2WSH contre 80 bits de sécurité dans P2SH). Il est également
utilisé pour différencier les deux types de programmes témoins (P2WPKH
et P2WSH) en utilisant la longueur du hachage (voir ci-dessous).

### Différenciation entre P2WPKH et P2WSH

Dans les deux sections précédentes, nous avons présenté deux types de
programmes de témoins : &lt;&lt;p2wpkh&gt; &gt; et &lt;&lt;p2wsh&gt;
&gt;. Les deux types de programmes témoins se composent d'un numéro de
version à un seul octet suivi d'un hachage plus long. Ils se ressemblent
beaucoup, mais sont interprétés très différemment : l'un est interprété
comme un hachage de clé publique, qui est satisfait par une signature et
l'autre comme un hachage de script, qui est satisfait par un script de
rachat. La différence critique entre eux est la longueur du hachage :

-   Le hachage de clé publique dans P2WPKH est de 20 octets

-   Le hachage du script dans P2WSH est de 32 octets

C'est la seule différence qui permet à un portefeuille de différencier
les deux types de programmes de témoins. En examinant la longueur du
hachage, un portefeuille peut déterminer de quel type de programme
témoin il s'agit, P2WPKH ou P2WSH.

## Mise à niveau vers un témoin séparé

Comme nous pouvons le voir dans les exemples précédents, la mise à
niveau vers Segregated Witness est un processus en deux étapes. Tout
d'abord, les portefeuilles doivent créer des sorties spéciales de type
segwit. Ensuite, ces sorties peuvent être dépensées par des
portefeuilles qui savent comment construire des transactions de témoin
séparé. Dans les exemples, le portefeuille d'Alice était sensible au
segwit et capable de créer des sorties spéciales avec des scripts
Segregated Witness. Le portefeuille de Bob est également sensible au
segwit et capable de dépenser ces sorties. Ce qui n'est peut-être pas
évident à partir de l'exemple, c'est qu'en pratique, le portefeuille
d'Alice doit *savoir* que Bob utilise un portefeuille sensible au segwit
et peut dépenser ces sorties. Sinon, si le portefeuille de Bob n'est pas
mis à niveau et qu'Alice essaie d'effectuer des paiements en segwit à
Bob, le portefeuille de Bob ne pourra pas détecter ces paiements.

Pour les types de paiement P2WPKH et P2WSH, les portefeuilles de
l'expéditeur et du destinataire doivent être mis à niveau pour pouvoir
utiliser segwit. De plus, le portefeuille de l'expéditeur doit savoir
que le portefeuille du destinataire est sensible au segwit.

Le témoin séparé ne sera pas mis en œuvre simultanément sur l'ensemble
du réseau. Au lieu de cela, Segregated Witness est implémenté comme une
mise à niveau rétrocompatible, où *les anciens et les nouveaux clients
peuvent coexister*. Les développeurs de portefeuille mettront
indépendamment à niveau le logiciel de portefeuille pour ajouter des
fonctionnalités segwit. Les types de paiement P2WPKH et P2WSH sont
utilisés lorsque l'expéditeur et le destinataire sont conscients de
segwit. Les P2PKH et P2SH traditionnels continueront de fonctionner pour
les portefeuilles non mis à niveau. Cela laisse deux scénarios
importants, qui sont abordés dans la section suivante :

-   Capacité du portefeuille d'un expéditeur qui n'est pas conscient de
    segwit à effectuer un paiement sur le portefeuille d'un destinataire
    qui peut traiter des transactions segwit

-   Capacité du portefeuille d'un expéditeur qui est conscient de segwit
    à reconnaître et à distinguer les destinataires qui sont conscients
    de segwit et ceux qui ne le sont pas, par leurs *adresses*.

### Intégration d'un témoin séparé dans P2SH

Supposons, par exemple, que le portefeuille d'Alice n'est pas mis à
niveau vers segwit, mais que le portefeuille de Bob est mis à niveau et
peut gérer les transactions segwit. Alice et Bob peuvent utiliser les
"anciennes" transactions non-segwit. Mais Bob voudrait probablement
utiliser segwit pour réduire les frais de transaction, en profitant de
la remise qui s'applique aux données des témoins.

Dans ce cas, le portefeuille de Bob peut construire une adresse P2SH qui
contient un script segwit à l'intérieur. Le portefeuille d'Alice
considère cela comme une adresse P2SH "normale" et peut y effectuer des
paiements sans aucune connaissance de segwit. Le portefeuille de Bob
peut ensuite dépenser ce paiement avec une transaction segwit, tirant
pleinement parti de segwit et réduisant les frais de transaction.

Les deux formes de scripts témoins, P2WPKH et P2WSH, peuvent être
intégrées dans une adresse P2SH. Le premier est noté P2SH(P2WPKH) et le
second est noté P2SH(P2WSH).

### Pay-to-Witness-Public-Key-Hash dans Pay-to-Script-Hash

La première forme de script témoin que nous examinerons est
P2SH(P2WPKH). Il s'agit d'un programme témoin
Pay-to-Witness-Public-Key-Hash, intégré dans un script
Pay-to-Script-Hash, afin qu'il puisse être utilisé par un portefeuille
qui n'est pas conscient de segwit.

Le portefeuille de Bob construit un programme témoin P2WPKH avec la clé
publique de Bob. Ce programme témoin est ensuite haché et le hachage
résultant est encodé sous la forme d'un script P2SH. Le script P2SH est
converti en une adresse Bitcoin, celle qui commence par un "3", comme
nous l'avons vu dans le &lt;&lt;p2sh&gt; &gt; rubrique.

Le portefeuille de Bob commence par le programme témoin P2WPKH que nous
avons vu plus tôt :

Programme de témoins P2WPKH de .Bob

    0 ab68025513c3dbd2f7b92a94e0581f5d50f654e7

Le programme témoin P2WPKH se compose de la version témoin et du hachage
de clé publique de 20 octets de Bob.

Le portefeuille de Bob hache ensuite le programme témoin précédent,
d'abord avec SHA256, puis avec RIPEMD160, produisant un autre hachage de
20 octets.

Utilisons `bx` sur la ligne de commande pour répliquer cela :

**HASH160 du programme témoin P2WPKH**

    écho \
    &#39;0 [ab68025513c3dbd2f7b92a94e0581f5d50f654e7]&#39;\
     | bx script-encoder | bx sha256 | bx mûrmd160
    3e0547268b3b19288b3adef9719ec8659f4b2b0b

Ensuite, le hachage du script de rachat est converti en une adresse
Bitcoin. Utilisons à nouveau `bx` sur la ligne de commande :

Adresse .P2SH

    écho \
    &#39;3e0547268b3b19288b3adef9719ec8659f4b2b0b&#39; \
    | bx address-encode -v 5
    37Lx99uaGn5avKBxiW26HjedQE3LrDCZru

Maintenant, Bob peut afficher cette adresse pour que les clients paient
leur café. Le portefeuille d'Alice peut effectuer un paiement au
`37Lx99uaGn5avKBxiW26HjedQE3LrDCZru`, comme il le ferait avec n'importe
quelle autre adresse Bitcoin.

Pour payer Bob, le portefeuille d'Alice verrouillerait la sortie avec un
script P2SH :

    HASH160 3e0547268b3b19288b3adef9719ec8659f4b2b0b ÉGAL

Même si le portefeuille d'Alice ne prend pas en charge segwit, le
paiement qu'il crée peut être dépensé par Bob avec une transaction
segwit.<span class="indexterm"></span> <span class="indexterm"></span>

### Pay-to-Witness-Script-Hash dans Pay-to-Script-Hash

De même, un programme témoin P2WSH pour un script multisig ou un autre
script compliqué peut être intégré dans un script et une adresse P2SH,
permettant à n'importe quel portefeuille d'effectuer des paiements
compatibles avec segwit.

Comme nous l'avons vu dans &lt;&lt;p2wsh&gt; &gt;, la société de
Mohammed <span class="indexterm"></span> <span class="indexterm"></span>
utilise des paiements de témoins séparés avec des scripts
multisignatures. Pour permettre à tout client de payer son entreprise,
que ses portefeuilles soient ou non mis à niveau pour segwit, le
portefeuille de Mohammed peut intégrer le programme témoin P2WSH dans un
script P2SH.

Tout d'abord, le portefeuille de Mohammed hache le script de rachat avec
SHA256 (une seule fois). Utilisons `bx` pour faire cela sur la ligne de
commande :

Le portefeuille de .Mohammed crée un programme témoin P2WSH

    écho \
    2 \ [04C16B8698A9ABF84250A7C3EA7EEDEF9897D1C8C6ADF47F06CF73370D74DCCA01CDCA79DCC5C395D7EEC6984D83F1F50C900A24DD47F569FD4193AF5DE762C587] \
    \
    \
    \
    \
    5 CONTRÔLE MULTISIG \
    | bx script-encoder | bx sha256
    9592d601848d04b172905e0ddb0adde59f1590f1e553ffc81ddc4b0ed927dd73

Ensuite, le script de rachat haché est transformé en un programme témoin
P2WSH :

    0 9592d601848d04b172905e0ddb0adde59f1590f1e553ffc81ddc4b0ed927dd73

Ensuite, le programme témoin lui-même est haché avec SHA256 et
RIPEMD160, produisant un nouveau hachage de 20 octets, tel qu'utilisé
dans le P2SH traditionnel. Utilisons `bx` sur la ligne de commande pour
faire cela :

**Le HASH160 du programme témoin P2WSH**

     écho \
    &#39;0 [9592d601848d04b172905e0ddb0adde59f1590f1e553ffc81ddc4b0ed927dd73]&#39;\
     | bx script-encoder | bx sha256 | bx mûrmd160
    86762607e8fe87c0c37740cddee880988b9455b2

Ensuite, le portefeuille construit une adresse Bitcoin P2SH à partir de
ce hachage. Encore une fois, nous utilisons `bx` pour calculer sur la
ligne de commande :

**P2SH Adresse bitcoin**

    écho \
    &#39;86762607e8fe87c0c37740cddee880988b9455b2&#39;\
     | bx address-encode -v 5
    3Dwz1MXhM6EfFoJChHCxh1jWHb8GQqRenG

Désormais, les clients de Mohammed peuvent effectuer des paiements à
cette adresse sans avoir besoin de prendre en charge segwit. Pour
envoyer un paiement à Mohammed, un portefeuille verrouillerait la sortie
avec le script P2SH suivant :

Script .P2SH utilisé pour verrouiller les paiements sur le multisig de
Mohammed

    HASH160 86762607e8fe87c0c37740cddee880988b9455b2 ÉGAL

La société de Mohammed peut alors construire des transactions segwit
pour dépenser ces paiements, en tirant parti des fonctionnalités segwit,
notamment des frais de transaction moins élevés.

### Adresses de témoins séparés

Même après l'activation de segwit, il faudra un certain temps avant que
la plupart des portefeuilles soient mis à niveau. Dans un premier temps,
segwit sera intégré à P2SH, comme nous l'avons vu dans la section
précédente, pour faciliter la compatibilité entre les portefeuilles
prenant en charge et ignorants de segwit.

Cependant, une fois que les portefeuilles prennent largement en charge
segwit, il est logique d'encoder les scripts témoins directement dans un
format d'adresse natif conçu pour segwit, plutôt que de l'intégrer dans
P2SH.

Le format d'adresse segwit natif est défini dans BIP-173 :

[BIP-173](https://github.com/bitcoin/bips/blob/master/bip-0173.mediawiki)  
Format d'adresse Base32 pour les sorties témoins natives v0-16

BIP-173 encode uniquement les scripts témoins (P2WPKH et P2WSH). Il
n'est pas compatible avec les scripts P2PKH ou P2SH non-segwit. BIP-173
est un encodage Base32 à somme de contrôle, par rapport à l'encodage
Base58 d'une adresse Bitcoin "traditionnelle". Les adresses BIP-173 sont
également appelées adresses *bech32*, prononcées "beh-ch trente-deux",
faisant allusion à l'utilisation d'un algorithme de détection d'erreur
"BCH" et d'un ensemble de codage à 32 caractères.

Les adresses BIP-173 utilisent un jeu de 32 caractères alphanumériques
en minuscules uniquement, soigneusement sélectionnés pour réduire les
erreurs de lecture ou de frappe. En choisissant un jeu de caractères en
minuscules uniquement, bech32 est plus facile à lire, à parler et 45 %
plus efficace pour encoder dans les codes QR.

L'algorithme de détection d'erreurs BCH est une grande amélioration par
rapport à l'algorithme de somme de contrôle précédent (de Base58Check),
permettant non seulement la détection mais aussi la *correction* des
erreurs. Les interfaces de saisie d'adresse (telles que les champs de
texte dans les formulaires) peuvent détecter et mettre en évidence le
caractère le plus susceptible d'être mal saisi lorsqu'elles détectent
une erreur.

De la spécification BIP-173, voici quelques exemples d'adresses bech32 :

Réseau principal P2WPKH  
bc1qw508d6qejxtdg4y5r3zarvary0c5xw7kv8f3t4

Testnet P2WPKH  
tb1qw508d6qejxtdg4y5r3zarvary0c5xw7kxpjzsx

Réseau principal P2WSH  
bc1qrp33g0q5c5txsp9arysrx4k6zdkfs4nce4xj0gdcccefvpysxf3qccfmv3

Testnet P2WSH  
tb1qrp33g0q5c5txsp9arysrx4k6zdkfs4nce4xj0gdcccefvpysxf3q0sl5k7

Comme vous pouvez le voir dans ces exemples, une chaîne segwit bech32
contient jusqu'à 90 caractères et se compose de trois parties :

La partie lisible par l'homme  
Ce préfixe "bc" ou "tb" identifiant mainnet ou testnet

Le séparateur  
Le chiffre "1", qui ne fait pas partie du jeu de codage à 32 caractères
et ne peut apparaître qu'à cette position en tant que séparateur

La partie données  
Un minimum de 6 caractères alphanumériques, le script témoin encodé par
somme de contrôle

À l'heure actuelle, seuls quelques portefeuilles acceptent ou produisent
des adresses segwit bech32 natives, mais à mesure que l'adoption de
segwit augmente, vous les verrez de plus en plus souvent.

&lt;&lt;segwit\_addresses&gt; &gt; affiche les adresses bitcoin
non-segwit (héritées) et segwit.

<table>
<caption>Bitcoin non-segwit (hérité) et adresses segwit</caption>
<colgroup>
<col style="width: 33%" />
<col style="width: 33%" />
<col style="width: 33%" />
</colgroup>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p>Type</p></td>
<td style="text-align: left;"><p>Encodage</p></td>
<td style="text-align: left;"><p>Préfixe</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>Adresse P2PKH héritée</p></td>
<td style="text-align: left;"><p>Base58</p></td>
<td style="text-align: left;"><p>1</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>Ancienne adresse Testnet P2PKH</p></td>
<td style="text-align: left;"><p>Base58</p></td>
<td style="text-align: left;"><p>m ou n</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>Ancienne adresse P2SH</p></td>
<td style="text-align: left;"><p>Base58</p></td>
<td style="text-align: left;"><p>3</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>Ancienne adresse Testnet P2SH</p></td>
<td style="text-align: left;"><p>Base58</p></td>
<td style="text-align: left;"><p>2</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>Adresse Segwit P2SH(P2WPKH) imbriquée
(intégrée)</p></td>
<td style="text-align: left;"><p>Base58</p></td>
<td style="text-align: left;"><p>3</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>Adresse Segwit P2SH(P2WSH) imbriquée
(intégrée)</p></td>
<td style="text-align: left;"><p>Base58</p></td>
<td style="text-align: left;"><p>3</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>Adresse natif Segwit P2WPKH</p></td>
<td style="text-align: left;"><p>Bech32</p></td>
<td style="text-align: left;"><p>bc1</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>Adresse natif Segwit Testnet
P2WPKH</p></td>
<td style="text-align: left;"><p>Bech32</p></td>
<td style="text-align: left;"><p>tb1</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>Adresse natif Segwit P2WSH</p></td>
<td style="text-align: left;"><p>Bech32</p></td>
<td style="text-align: left;"><p>bc1</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>Adresse natif Segwit Testnet
P2WSH</p></td>
<td style="text-align: left;"><p>Bech32</p></td>
<td style="text-align: left;"><p>tb1</p></td>
</tr>
</tbody>
</table>

Bitcoin non-segwit (hérité) et adresses segwit

### Identifiants de transaction

<span class="indexterm"></span>L'un des plus grands avantages de
Segregated Witness est qu'il élimine la malléabilité des transactions
tierces.

Avant segwit, les transactions pouvaient voir leurs signatures
subtilement modifiées par des tiers, changeant leur ID de transaction
(hachage) sans changer aucune propriété fondamentale (entrées, sorties,
montants). Cela a créé des opportunités d'attaques par déni de service
ainsi que des attaques contre des logiciels de portefeuille mal écrits
qui supposaient que les hachages de transaction non confirmés étaient
immuables.

Avec l'introduction de Segregated Witness, les transactions ont deux
identifiants, `txid` et `wtxid`. L'ID de transaction traditionnel `txid`
est le hachage double SHA256 de la transaction sérialisée, sans les
données témoins. Une transaction `wtxid` est le hachage double SHA256 du
nouveau format de sérialisation de la transaction avec des données
témoins.

Le `txid` traditionnel est calculé exactement de la même manière qu'avec
une transaction non segwit. Cependant, étant donné qu'une transaction
segwit pure (une transaction qui ne contient que des entrées segwit) a
des `scriptSig` vides dans chaque entrée, aucune partie de la
transaction ne peut être modifiée par un tiers. Par conséquent, dans une
transaction segwit pure, le `txid` est immuable par un tiers, même
lorsque la transaction n'est pas confirmée.

Le `wtxid` est comme un ID "étendu", en ce que le hachage incorpore
également les données du témoin. Si une transaction est transmise sans
données témoins, alors le `wtxid` et le `txid` sont identiques. Notez
que puisque le `wtxid` inclut des données témoins (signatures) et que
les données témoins peuvent être malléables, le `wtxid` doit être
considéré comme malléable jusqu'à ce que la transaction soit confirmée.
Seul le `txid` d'une pure transaction segwit peut être considéré comme
immuable par des tiers.

Les transactions de témoin séparé ont deux identifiants : `txid` et
`wtxid`. Le `txid` est le hachage de la transaction sans les données
témoins et le `wtxid` est le hachage incluant les données témoins.
Seules les transactions segwit pures (transactions qui ne contiennent
que des entrées segwit) ont un `txid` qui n'est pas sensible à la
malléabilité des transactions tierces.

## Nouvel algorithme de signature des témoins séparés

Segregated Witness modifie la sémantique des quatre fonctions de
vérification de signature (`CHECKSIG`, `CHECKSIGVERIFY`, `CHECKMULTISIG`
et `CHECKMULTISIGVERIFY`), changeant la façon dont un hachage
d'engagement de transaction est calculé.

Les signatures dans les transactions bitcoin sont appliquées sur un
*hachage d'engagement*, qui est calculé à partir des données de
transaction, verrouillant des parties spécifiques des données indiquant
l'engagement du signataire envers ces valeurs. Par exemple, dans une
signature de type `SIGHASH_ALL` simple, le hachage d'engagement inclut
toutes les entrées et sorties.

Malheureusement, la façon dont le hachage d'engagement a été calculé a
introduit la possibilité qu'un nœud vérifiant la signature puisse être
forcé d'effectuer un nombre important de calculs de hachage. Plus
précisément, les opérations de hachage augmentent en O(n<sup>2</sup>)
par rapport au nombre d'opérations de signature dans la transaction. Un
attaquant pourrait donc créer une transaction avec un très grand nombre
d'opérations de signature, obligeant l'ensemble du réseau Bitcoin à
effectuer des centaines ou des milliers d'opérations de hachage pour
vérifier la transaction.

Segwit représentait une opportunité de résoudre ce problème en modifiant
la façon dont le hachage d'engagement est calculé. Pour les programmes
témoins segwit version 0, la vérification de la signature se produit à
l'aide d'un algorithme de hachage d'engagement amélioré, comme spécifié
dans BIP-143.

Le nouvel algorithme atteint deux objectifs importants. Premièrement, le
nombre d'opérations de hachage augmente d'un O(n) beaucoup plus graduel
au nombre d'opérations de signature, réduisant la possibilité de créer
des attaques par déni de service avec des transactions trop complexes.
Deuxièmement, le hachage d'engagement inclut désormais également la
valeur (montants) de chaque entrée dans le cadre de l'engagement. Cela
signifie qu'un signataire peut s'engager sur une valeur d'entrée
spécifique sans avoir besoin de "récupérer" et de vérifier la
transaction précédente référencée par l'entrée. Dans le cas d'appareils
hors ligne, tels que les portefeuilles matériels, cela simplifie
grandement la communication entre l'hôte et le portefeuille matériel,
supprimant la nécessité de diffuser les transactions précédentes pour
validation. Un portefeuille matériel peut accepter la valeur d'entrée
"telle qu'elle est indiquée" par un hôte non approuvé. Étant donné que
la signature n'est pas valide si cette valeur d'entrée n'est pas
correcte, le portefeuille matériel n'a pas besoin de valider la valeur
avant de signer l'entrée.

## Incitations économiques pour les témoins isolés

Les nœuds miniers Bitcoin et les nœuds complets entraînent des coûts
pour les ressources utilisées pour prendre en charge le réseau Bitcoin
et la blockchain. À mesure que le volume de transactions bitcoin
augmente, le coût des ressources (CPU, bande passante réseau, espace
disque, mémoire) augmente également. Les mineurs sont indemnisés pour
ces coûts par des frais proportionnels à la taille (en octets) de chaque
transaction. Les nœuds complets non miniers ne sont pas rémunérés, ils
encourent donc ces coûts parce qu'ils ont besoin d'exécuter un nœud
d'index complet faisant autorité, peut-être parce qu'ils utilisent le
nœud pour exploiter une entreprise bitcoin.

Sans frais de transaction, la croissance des données bitcoin
augmenterait sans doute de façon spectaculaire. Les frais sont destinés
à aligner les besoins des utilisateurs de bitcoins sur le fardeau que
leurs transactions imposent au réseau, grâce à un mécanisme de
découverte des prix basé sur le marché.

Le calcul des frais en fonction de la taille de la transaction traite
toutes les données de la transaction comme ayant un coût égal. Mais du
point de vue des nœuds complets et des mineurs, certaines parties d'une
transaction entraînent des coûts beaucoup plus élevés. Chaque
transaction ajoutée au réseau Bitcoin affecte la consommation de quatre
ressources sur les nœuds :

Espace disque  
Chaque transaction est stockée dans la blockchain, ajoutant à la taille
totale de la blockchain. La blockchain est stockée sur disque, mais le
stockage peut être optimisé en « élaguant » (supprimant) les anciennes
transactions.

CPU  
Chaque transaction doit être validée, ce qui nécessite du temps CPU.

Bande passante  
Chaque transaction est transmise (par propagation d'inondation) sur le
réseau au moins une fois. Sans aucune optimisation du protocole de
propagation de bloc, les transactions sont à nouveau transmises dans le
cadre d'un bloc, ce qui double l'impact sur la capacité du réseau.

Mémoire  
Les nœuds qui valident les transactions conservent l'index UTXO ou
l'intégralité de l'ensemble UTXO en mémoire pour accélérer la
validation. Étant donné que la mémoire est au moins un ordre de grandeur
plus chère que le disque, la croissance de l'ensemble UTXO contribue de
manière disproportionnée au coût d'exécution d'un nœud.

Comme vous pouvez le voir dans la liste, toutes les parties d'une
transaction n'ont pas le même impact sur le coût d'exécution d'un nœud
ou sur la capacité du bitcoin à évoluer pour prendre en charge davantage
de transactions. La partie la plus coûteuse d'une transaction sont les
sorties nouvellement créées, car elles sont ajoutées à l'ensemble UTXO
en mémoire. En comparaison, les signatures (c'est-à-dire les données
témoins) ajoutent le moins de charge au réseau et au coût d'exécution
d'un nœud, car les données témoins ne sont validées qu'une seule fois et
ne sont jamais réutilisées. De plus, immédiatement après avoir reçu une
nouvelle transaction et validé les données témoins, les nœuds peuvent
supprimer ces données témoins. Si les frais sont calculés en fonction de
la taille de la transaction, sans faire de distinction entre ces deux
types de données, les incitations du marché en matière de frais ne sont
pas alignées sur les coûts réels imposés par une transaction. En fait,
la structure tarifaire actuelle encourage en fait le comportement
inverse, car les données des témoins constituent la plus grande partie
d'une transaction.

Les incitations créées par les frais sont importantes car elles
affectent le comportement des portefeuilles. Tous les portefeuilles
doivent mettre en œuvre une stratégie pour assembler les transactions
qui prend en considération un certain nombre de facteurs, tels que la
confidentialité (réduction de la réutilisation des adresses), la
fragmentation (faire beaucoup de monnaie) et les frais. Si les frais
motivent massivement les portefeuilles à utiliser le moins d'entrées
possible dans les transactions, cela peut conduire à la sélection d'UTXO
et à la modification des stratégies d'adresse qui gonflent par
inadvertance l'ensemble UTXO.

Les transactions consomment UTXO dans leurs entrées et créent de
nouveaux UTXO avec leurs sorties. Par conséquent, une transaction qui a
plus d'entrées que de sorties entraînera une diminution de l'ensemble
UTXO, tandis qu'une transaction qui a plus de sorties que d'entrées
entraînera une augmentation de l'ensemble UTXO. Considérons la
*difference* entre les entrées et les sorties et appelons cela le
"Net-new-UTXO". Il s'agit d'une mesure importante, car elle nous indique
l'impact qu'une transaction aura sur la ressource la plus chère à
l'échelle du réseau, l'ensemble UTXO en mémoire. Une transaction avec
Net-new-UTXO positif ajoute à ce fardeau. Une transaction avec un
Net-new-UTXO négatif réduit la charge. Nous voudrions donc encourager
les transactions qui sont soit Net-new-UTXO négatives, soit neutres avec
zéro Net-new-UTXO.

Examinons un exemple des incitations créées par le calcul des frais de
transaction, avec et sans témoin séparé. Nous examinerons deux
transactions différentes. La transaction A est une transaction à 3
entrées et 2 sorties, qui a une métrique Net-new-UTXO de -1, ce qui
signifie qu'elle consomme un UTXO de plus qu'elle n'en crée, ce qui
réduit l'UTXO défini d'un. La transaction B est une transaction à 2
entrées et 3 sorties, qui a une métrique Net-new-UTXO de 1, ce qui
signifie qu'elle ajoute un UTXO à l'ensemble UTXO, imposant un coût
supplémentaire à l'ensemble du réseau Bitcoin. Les deux transactions
utilisent des scripts multisignatures (2 sur 3) pour démontrer comment
des scripts complexes augmentent l'impact d'un témoin séparé sur les
frais. Supposons un taux de transaction de 30 satoshi par octet et une
remise de 75 % sur les données des témoins :

Sans témoin séparé

Frais de transaction A : 28 590 satoshi

Frais de transaction B : 20 760 satoshi

Avec témoin séparé

Frais de transaction A : 12 255 satoshi

Frais de transaction B : 10 425 satoshi

Les deux transactions sont moins coûteuses lorsque le témoin séparé est
mis en œuvre. En comparant les coûts entre les deux transactions, nous
voyons qu'avant Segregated Witness, la transaction avec le Net-new-UTXO
positif permet de réaliser d'importantes économies. Avec Segregated
Witness, la différence de coût diminue considérablement en termes
absolus et relatifs. Bien qu'il faudrait que les intrants deviennent
moins chers que les extrants pour inciter à la consolidation de
l'ensemble UTXO, cette remise réduit l'incitation à créer de nouveaux
UTXO afin d'éviter d'utiliser plus d'intrants.

Segregated Witness a donc deux effets principaux sur les frais payés par
les utilisateurs de bitcoin. Premièrement, segwit réduit le coût global
des transactions en actualisant les données des témoins et en augmentant
la capacité de la blockchain Bitcoin. Deuxièmement, la remise de segwit
sur les données des témoins atténue partiellement un désalignement des
incitations qui peut avoir créé par inadvertance plus de ballonnement
dans l'ensemble UTXO.<span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>

[1] "Bitcoin: A Peer-to-Peer Electronic Cash System," Satoshi Nakamoto
(<https://bitcoin.org/bitcoin.pdf>).
