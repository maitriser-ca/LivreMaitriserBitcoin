# Bitcoin Improvement Proposals (ou Propositions d’améliorations du Bitcoin)

<span class="indexterm"></span> <span class="indexterm"></span>Les
Bitcoin Improvement Proposals (ou Propositions d’améliorations du
Bitcoin) sont des documents de conception fournissant des informations à
la communauté bitcoin ou décrivant une nouvelle fonctionnalité pour
bitcoin ou ses processus ou son environnement.

Conformément à BIP-01 *BIP Purpose and Guidelines*, il existe trois
types de BIP :

*Standard* BIP  
Décrit tout changement qui affecte la plupart ou toutes les
implémentations de bitcoin, comme un changement du protocole réseau, un
changement des règles de validité de bloc ou de transaction, ou tout
changement ou ajout qui affecte l'interopérabilité des applications
utilisant bitcoin.

*Informational* BIP  
Décrit un problème de conception de bitcoin, ou fournit des directives
générales ou des informations à la communauté bitcoin, mais ne propose
pas de nouvelle fonctionnalité. Les BIP informationnels ne représentent
pas nécessairement un consensus ou une recommandation de la communauté
bitcoin, de sorte que les utilisateurs et les implémenteurs peuvent
ignorer les BIP informationnels ou suivre leurs conseils.

*Process* BIP  
Décrit un processus bitcoin ou propose une modification (ou un événement
dans) un processus. Les BIP de processus ressemblent aux BIP standard
mais s'appliquent à des domaines autres que le protocole Bitcoin
lui-même. Ils pourraient proposer une implémentation, mais pas à la base
de code de Bitcoin ; elles nécessitent souvent un consensus
communautaire ; et contrairement aux BIP informatifs, ils sont plus que
des recommandations, et les utilisateurs ne sont généralement pas libres
de les ignorer. Les exemples incluent les procédures, les directives,
les modifications du processus de prise de décision et les modifications
des outils ou de l'environnement utilisés dans le développement de
Bitcoin. Tout méta-BIP est également considéré comme un processus BIP.

<span class="indexterm"></span> <span class="indexterm"></span>Les BIP
sont enregistrés dans un référentiel versionné sur GitHub :
<https://github.com/bitcoin/bips> . [table\_title](#table_d-1) montre un
instantané des BIP en avril 2017. Consultez le référentiel faisant
autorité pour obtenir des informations à jour sur les BIP existants et
leur contenu.((("propositions de progressions Bitcoin", "copie de",
id="BIPsnap15")) )

<table>
<caption>Liste des BIPs</caption>
<colgroup>
<col style="width: 20%" />
<col style="width: 20%" />
<col style="width: 20%" />
<col style="width: 20%" />
<col style="width: 20%" />
</colgroup>
<thead>
<tr class="header">
<th style="text-align: left;">BIP#</th>
<th style="text-align: left;">Titre</th>
<th style="text-align: left;">Propriétaire</th>
<th style="text-align: left;">Type</th>
<th style="text-align: left;">Statut</th>
</tr>
</thead>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-1"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0001.mediawiki">BIP-1</a></p></td>
<td style="text-align: left;"><p>BIP Purpose and Guidelines</p></td>
<td style="text-align: left;"><p>Amir Taaki</p></td>
<td style="text-align: left;"><p>Process</p></td>
<td style="text-align: left;"><p>Replaced</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-2"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0002.mediawiki">BIP-2</a></p></td>
<td style="text-align: left;"><p>BIP process, revised</p></td>
<td style="text-align: left;"><p>Luke Dashjr</p></td>
<td style="text-align: left;"><p>Process</p></td>
<td style="text-align: left;"><p>Active</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-8"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0008.mediawiki">BIP-8</a></p></td>
<td style="text-align: left;"><p>Version bits with guaranteed
lock-in</p></td>
<td style="text-align: left;"><p>Shaolin Fry</p></td>
<td style="text-align: left;"><p>Informational</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-9"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0009.mediawiki">BIP-9</a></p></td>
<td style="text-align: left;"><p>Version bits with timeout and
delay</p></td>
<td style="text-align: left;"><p>Pieter Wuille, Peter Todd, Greg
Maxwell, Rusty Russell</p></td>
<td style="text-align: left;"><p>Informational</p></td>
<td style="text-align: left;"><p>Final</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-10"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0010.mediawiki">BIP-10</a></p></td>
<td style="text-align: left;"><p>Multi-Sig Transaction
Distribution</p></td>
<td style="text-align: left;"><p>Alan Reiner</p></td>
<td style="text-align: left;"><p>Informational</p></td>
<td style="text-align: left;"><p>Withdrawn</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-11"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0011.mediawiki">BIP-11</a></p></td>
<td style="text-align: left;"><p>M-of-N Standard Transactions</p></td>
<td style="text-align: left;"><p>Gavin Andresen</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Final</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-12"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0012.mediawiki">BIP-12</a></p></td>
<td style="text-align: left;"><p>OP_EVAL</p></td>
<td style="text-align: left;"><p>Gavin Andresen</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Withdrawn</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-13"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0013.mediawiki">BIP-13</a></p></td>
<td style="text-align: left;"><p>Address Format for
pay-to-script-hash</p></td>
<td style="text-align: left;"><p>Gavin Andresen</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Final</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-14"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0014.mediawiki">BIP-14</a></p></td>
<td style="text-align: left;"><p>Protocol Version and User
Agent</p></td>
<td style="text-align: left;"><p>Amir Taaki, Patrick Strateman</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Final</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-15"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0015.mediawiki">BIP-15</a></p></td>
<td style="text-align: left;"><p>Aliases</p></td>
<td style="text-align: left;"><p>Amir Taaki</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Deferred</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-16"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0016.mediawiki">BIP-16</a></p></td>
<td style="text-align: left;"><p>Pay to Script Hash</p></td>
<td style="text-align: left;"><p>Gavin Andresen</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Final</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-17"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0017.mediawiki">BIP-17</a></p></td>
<td style="text-align: left;"><p>OP_CHECKHASHVERIFY (CHV)</p></td>
<td style="text-align: left;"><p>Luke Dashjr</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Withdrawn</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-18"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0018.mediawiki">BIP-18</a></p></td>
<td style="text-align: left;"><p>hashScriptCheck</p></td>
<td style="text-align: left;"><p>Luke Dashjr</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Proposed</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-19"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0019.mediawiki">BIP-19</a></p></td>
<td style="text-align: left;"><p>M-of-N Standard Transactions (Low
SigOp)</p></td>
<td style="text-align: left;"><p>Luke Dashjr</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-20"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0020.mediawiki">BIP-20</a></p></td>
<td style="text-align: left;"><p>URI Scheme</p></td>
<td style="text-align: left;"><p>Luke Dashjr</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Replaced</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-21"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0021.mediawiki">BIP-21</a></p></td>
<td style="text-align: left;"><p>URI Scheme</p></td>
<td style="text-align: left;"><p>Nils Schneider, Matt Corallo</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Final</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-22"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0022.mediawiki">BIP-22</a></p></td>
<td style="text-align: left;"><p>getblocktemplate -
Fundamentals</p></td>
<td style="text-align: left;"><p>Luke Dashjr</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Final</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-23"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0023.mediawiki">BIP-23</a></p></td>
<td style="text-align: left;"><p>getblocktemplate - Pooled
Mining</p></td>
<td style="text-align: left;"><p>Luke Dashjr</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Final</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-30"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0030.mediawiki">BIP-30</a></p></td>
<td style="text-align: left;"><p>Duplicate transactions</p></td>
<td style="text-align: left;"><p>Pieter Wuille</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Final</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-31"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0031.mediawiki">BIP-31</a></p></td>
<td style="text-align: left;"><p>Pong message</p></td>
<td style="text-align: left;"><p>Mike Hearn</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Final</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-32"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0032.mediawiki">BIP-32</a></p></td>
<td style="text-align: left;"><p>Hierarchical Deterministic
Wallets</p></td>
<td style="text-align: left;"><p>Pieter Wuille</p></td>
<td style="text-align: left;"><p>Informational</p></td>
<td style="text-align: left;"><p>Final</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-33"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0033.mediawiki">BIP-33</a></p></td>
<td style="text-align: left;"><p>Stratized Nodes</p></td>
<td style="text-align: left;"><p>Amir Taaki</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-34"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0034.mediawiki">BIP-34</a></p></td>
<td style="text-align: left;"><p>Block v2, Height in Coinbase</p></td>
<td style="text-align: left;"><p>Gavin Andresen</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Final</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-35"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0035.mediawiki">BIP-35</a></p></td>
<td style="text-align: left;"><p>mempool message</p></td>
<td style="text-align: left;"><p>Jeff Garzik</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Final</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-36"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0036.mediawiki">BIP-36</a></p></td>
<td style="text-align: left;"><p>Custom Services</p></td>
<td style="text-align: left;"><p>Stefan Thomas</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-37"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0037.mediawiki">BIP-37</a></p></td>
<td style="text-align: left;"><p>Connection Bloom filtering</p></td>
<td style="text-align: left;"><p>Mike Hearn, Matt Corallo</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Final</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-39"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0039.mediawiki">BIP-39</a></p></td>
<td style="text-align: left;"><p>Mnemonic code for generating
deterministic keys</p></td>
<td style="text-align: left;"><p>Marek Palatinus, Pavol Rusnak, Aaron
Voisine, Sean Bowe</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Proposed</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-40"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0040.mediawiki">BIP-40</a></p></td>
<td style="text-align: left;"><p>Stratum wire protocol</p></td>
<td style="text-align: left;"><p>Marek Palatinus</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>BIP number allocated</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-41"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0041.mediawiki">BIP-41</a></p></td>
<td style="text-align: left;"><p>Stratum mining protocol</p></td>
<td style="text-align: left;"><p>Marek Palatinus</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>BIP number allocated</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-42"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0042.mediawiki">BIP-42</a></p></td>
<td style="text-align: left;"><p>A finite monetary supply for
Bitcoin</p></td>
<td style="text-align: left;"><p>Pieter Wuille</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-43"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0043.mediawiki">BIP-43</a></p></td>
<td style="text-align: left;"><p>Purpose Field for Deterministic
Wallets</p></td>
<td style="text-align: left;"><p>Marek Palatinus, Pavol Rusnak</p></td>
<td style="text-align: left;"><p>Informational</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-44"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0044.mediawiki">BIP-44</a></p></td>
<td style="text-align: left;"><p>Multi-Account Hierarchy for
Deterministic Wallets</p></td>
<td style="text-align: left;"><p>Marek Palatinus, Pavol Rusnak</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Proposed</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-45"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0045.mediawiki">BIP-45</a></p></td>
<td style="text-align: left;"><p>Structure for Deterministic P2SH
Multisignature Wallets</p></td>
<td style="text-align: left;"><p>Manuel Araoz, Ryan X. Charles, Matias
Alejo Garcia</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Proposed</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-47"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0047.mediawiki">BIP-47</a></p></td>
<td style="text-align: left;"><p>Reusable Payment Codes for Hierarchical
Deterministic Wallets</p></td>
<td style="text-align: left;"><p>Justus Ranvier</p></td>
<td style="text-align: left;"><p>Informational</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-49"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0049.mediawiki">BIP-49</a></p></td>
<td style="text-align: left;"><p>Derivation scheme for
P2WPKH-nested-in-P2SH based accounts</p></td>
<td style="text-align: left;"><p>Daniel Weigl</p></td>
<td style="text-align: left;"><p>Informational</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-50"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0050.mediawiki">BIP-50</a></p></td>
<td style="text-align: left;"><p>March 2013 Chain Fork
Post-Mortem</p></td>
<td style="text-align: left;"><p>Gavin Andresen</p></td>
<td style="text-align: left;"><p>Informational</p></td>
<td style="text-align: left;"><p>Final</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-60"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0060.mediawiki">BIP-60</a></p></td>
<td style="text-align: left;"><p>Fixed Length "version" Message
(Relay-Transactions Field)</p></td>
<td style="text-align: left;"><p>Amir Taaki</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-61"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0061.mediawiki">BIP-61</a></p></td>
<td style="text-align: left;"><p>Reject P2P message</p></td>
<td style="text-align: left;"><p>Gavin Andresen</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Final</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-62"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0062.mediawiki">BIP-62</a></p></td>
<td style="text-align: left;"><p>Dealing with malleability</p></td>
<td style="text-align: left;"><p>Pieter Wuille</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Withdrawn</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-63"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0063.mediawiki">BIP-63</a></p></td>
<td style="text-align: left;"><p>Stealth Addresses</p></td>
<td style="text-align: left;"><p>Peter Todd</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>BIP number allocated</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-64"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0064.mediawiki">BIP-64</a></p></td>
<td style="text-align: left;"><p>getutxo message</p></td>
<td style="text-align: left;"><p>Mike Hearn</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-65"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0065.mediawiki">BIP-65</a></p></td>
<td style="text-align: left;"><p>OP_CHECKLOCKTIMEVERIFY</p></td>
<td style="text-align: left;"><p>Peter Todd</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Final</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-66"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0066.mediawiki">BIP-66</a></p></td>
<td style="text-align: left;"><p>Strict DER signatures</p></td>
<td style="text-align: left;"><p>Pieter Wuille</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Final</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-67"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0067.mediawiki">BIP-67</a></p></td>
<td style="text-align: left;"><p>Deterministic Pay-to-script-hash
multi-signature addresses through public key sorting</p></td>
<td style="text-align: left;"><p>Thomas Kerin, Jean-Pierre Rupp, Ruben
de Vries</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Proposed</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-68"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0068.mediawiki">BIP-68</a></p></td>
<td style="text-align: left;"><p>Relative lock-time using
consensus-enforced sequence numbers</p></td>
<td style="text-align: left;"><p>Mark Friedenbach, BtcDrak, Nicolas
Dorier, kinoshitajona</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Final</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-69"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0069.mediawiki">BIP-69</a></p></td>
<td style="text-align: left;"><p>Lexicographical Indexing of Transaction
Inputs and Outputs</p></td>
<td style="text-align: left;"><p>Kristov Atlas</p></td>
<td style="text-align: left;"><p>Informational</p></td>
<td style="text-align: left;"><p>Proposed</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-70"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0070.mediawiki">BIP-70</a></p></td>
<td style="text-align: left;"><p>Payment Protocol</p></td>
<td style="text-align: left;"><p>Gavin Andresen, Mike Hearn</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Final</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-71"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0071.mediawiki">BIP-71</a></p></td>
<td style="text-align: left;"><p>Payment Protocol MIME types</p></td>
<td style="text-align: left;"><p>Gavin Andresen</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Final</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-72"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0072.mediawiki">BIP-72</a></p></td>
<td style="text-align: left;"><p>bitcoin: uri extensions for Payment
Protocol</p></td>
<td style="text-align: left;"><p>Gavin Andresen</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Final</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-73"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0073.mediawiki">BIP-73</a></p></td>
<td style="text-align: left;"><p>Use "Accept" header for response type
negotiation with Payment Request URLs</p></td>
<td style="text-align: left;"><p>Stephen Pair</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Final</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-74"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0074.mediawiki">BIP-74</a></p></td>
<td style="text-align: left;"><p>Allow zero value OP_RETURN in Payment
Protocol</p></td>
<td style="text-align: left;"><p>Toby Padilla</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-75"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0075.mediawiki">BIP-75</a></p></td>
<td style="text-align: left;"><p>Out of Band Address Exchange using
Payment Protocol Encryption</p></td>
<td style="text-align: left;"><p>Justin Newton, Matt David, Aaron
Voisine, James MacWhyte</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-80"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0080.mediawiki">BIP-80</a></p></td>
<td style="text-align: left;"><p>Hierarchy for Non-Colored Voting Pool
Deterministic Multisig Wallets</p></td>
<td style="text-align: left;"><p>Justus Ranvier, Jimmy Song</p></td>
<td style="text-align: left;"><p>Informational</p></td>
<td style="text-align: left;"><p>Deferred</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-81"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0081.mediawiki">BIP-81</a></p></td>
<td style="text-align: left;"><p>Hierarchy for Colored Voting Pool
Deterministic Multisig Wallets</p></td>
<td style="text-align: left;"><p>Justus Ranvier, Jimmy Song</p></td>
<td style="text-align: left;"><p>Informational</p></td>
<td style="text-align: left;"><p>Deferred</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-83"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0083.mediawiki">BIP-83</a></p></td>
<td style="text-align: left;"><p>Dynamic Hierarchical Deterministic Key
Trees</p></td>
<td style="text-align: left;"><p>Eric Lombrozo</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-90"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0090.mediawiki">BIP-90</a></p></td>
<td style="text-align: left;"><p>Buried Deployments</p></td>
<td style="text-align: left;"><p>Suhas Daftuar</p></td>
<td style="text-align: left;"><p>Informational</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-99"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0099.mediawiki">BIP-99</a></p></td>
<td style="text-align: left;"><p>Motivation and deployment of consensus
rule changes ([soft/hard]forks)</p></td>
<td style="text-align: left;"><p>Jorge Timón</p></td>
<td style="text-align: left;"><p>Informational</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-101"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0101.mediawiki">BIP-101</a></p></td>
<td style="text-align: left;"><p>Increase maximum block size</p></td>
<td style="text-align: left;"><p>Gavin Andresen</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Withdrawn</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-102"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0102.mediawiki">BIP-102</a></p></td>
<td style="text-align: left;"><p>Block size increase to 2MB</p></td>
<td style="text-align: left;"><p>Jeff Garzik</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-103"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0103.mediawiki">BIP-103</a></p></td>
<td style="text-align: left;"><p>Block size following technological
growth</p></td>
<td style="text-align: left;"><p>Pieter Wuille</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-104"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0104.mediawiki">BIP-104</a></p></td>
<td style="text-align: left;"><p><em>Block75</em> - Max block size like
difficulty</p></td>
<td style="text-align: left;"><p>t.khan</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-105"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0105.mediawiki">BIP-105</a></p></td>
<td style="text-align: left;"><p>Consensus based block size retargeting
algorithm</p></td>
<td style="text-align: left;"><p>BtcDrak</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-106"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0106.mediawiki">BIP-106</a></p></td>
<td style="text-align: left;"><p>Dynamically Controlled Bitcoin Block
Size Max Cap</p></td>
<td style="text-align: left;"><p>Upal Chakraborty</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-107"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0107.mediawiki">BIP-107</a></p></td>
<td style="text-align: left;"><p>Dynamic limit on the block
size</p></td>
<td style="text-align: left;"><p>Washington Y. Sanchez</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-109"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0109.mediawiki">BIP-109</a></p></td>
<td style="text-align: left;"><p>Two million byte size limit with sigop
and sighash limits</p></td>
<td style="text-align: left;"><p>Gavin Andresen</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Rejected</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-111"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0111.mediawiki">BIP-111</a></p></td>
<td style="text-align: left;"><p>NODE_BLOOM service bit</p></td>
<td style="text-align: left;"><p>Matt Corallo, Peter Todd</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Proposed</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-112"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0112.mediawiki">BIP-112</a></p></td>
<td style="text-align: left;"><p>CHECKSEQUENCEVERIFY</p></td>
<td style="text-align: left;"><p>BtcDrak, Mark Friedenbach, Eric
Lombrozo</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Final</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-113"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0113.mediawiki">BIP-113</a></p></td>
<td style="text-align: left;"><p>Median time-past as endpoint for
lock-time calculations</p></td>
<td style="text-align: left;"><p>Thomas Kerin, Mark Friedenbach</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Final</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-114"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0114.mediawiki">BIP-114</a></p></td>
<td style="text-align: left;"><p>Merkelized Abstract Syntax
Tree</p></td>
<td style="text-align: left;"><p>Johnson Lau</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-120"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0120.mediawiki">BIP-120</a></p></td>
<td style="text-align: left;"><p>Proof of Payment</p></td>
<td style="text-align: left;"><p>Kalle Rosenbaum</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-121"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0121.mediawiki">BIP-121</a></p></td>
<td style="text-align: left;"><p>Proof of Payment URI scheme</p></td>
<td style="text-align: left;"><p>Kalle Rosenbaum</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-122"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0122.mediawiki">BIP-122</a></p></td>
<td style="text-align: left;"><p>URI scheme for Blockchain references /
exploration</p></td>
<td style="text-align: left;"><p>Marco Pontello</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-123"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0123.mediawiki">BIP-123</a></p></td>
<td style="text-align: left;"><p>BIP Classification</p></td>
<td style="text-align: left;"><p>Eric Lombrozo</p></td>
<td style="text-align: left;"><p>Process</p></td>
<td style="text-align: left;"><p>Active</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-124"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0124.mediawiki">BIP-124</a></p></td>
<td style="text-align: left;"><p>Hierarchical Deterministic Script
Templates</p></td>
<td style="text-align: left;"><p>Eric Lombrozo, William Swanson</p></td>
<td style="text-align: left;"><p>Informational</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-125"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0125.mediawiki">BIP-125</a></p></td>
<td style="text-align: left;"><p>Opt-in Full Replace-by-Fee
Signaling</p></td>
<td style="text-align: left;"><p>David A. Harding, Peter Todd</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Proposed</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-126"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0126.mediawiki">BIP-126</a></p></td>
<td style="text-align: left;"><p>Best Practices for Heterogeneous Input
Script Transactions</p></td>
<td style="text-align: left;"><p>Kristov Atlas</p></td>
<td style="text-align: left;"><p>Informational</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-130"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0130.mediawiki">BIP-130</a></p></td>
<td style="text-align: left;"><p>sendheaders message</p></td>
<td style="text-align: left;"><p>Suhas Daftuar</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Proposed</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-131"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0131.mediawiki">BIP-131</a></p></td>
<td style="text-align: left;"><p>"Coalescing Transaction" Specification
(wildcard inputs)</p></td>
<td style="text-align: left;"><p>Chris Priest</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-132"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0132.mediawiki">BIP-132</a></p></td>
<td style="text-align: left;"><p>Committee-based BIP Acceptance
Process</p></td>
<td style="text-align: left;"><p>Andy Chase</p></td>
<td style="text-align: left;"><p>Process</p></td>
<td style="text-align: left;"><p>Withdrawn</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-133"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0133.mediawiki">BIP-133</a></p></td>
<td style="text-align: left;"><p>feefilter message</p></td>
<td style="text-align: left;"><p>Alex Morcos</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-134"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0134.mediawiki">BIP-134</a></p></td>
<td style="text-align: left;"><p>Flexible Transactions</p></td>
<td style="text-align: left;"><p>Tom Zander</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-140"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0140.mediawiki">BIP-140</a></p></td>
<td style="text-align: left;"><p>Normalized TXID</p></td>
<td style="text-align: left;"><p>Christian Decker</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-141"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0141.mediawiki">BIP-141</a></p></td>
<td style="text-align: left;"><p>Segregated Witness (Consensus
layer)</p></td>
<td style="text-align: left;"><p>Eric Lombrozo, Johnson Lau, Pieter
Wuille</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-142"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0142.mediawiki">BIP-142</a></p></td>
<td style="text-align: left;"><p>Address Format for Segregated
Witness</p></td>
<td style="text-align: left;"><p>Johnson Lau</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Deferred</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-143"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0143.mediawiki">BIP-143</a></p></td>
<td style="text-align: left;"><p>Transaction Signature Verification for
Version 0 Witness Program</p></td>
<td style="text-align: left;"><p>Johnson Lau, Pieter Wuille</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-144"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0144.mediawiki">BIP-144</a></p></td>
<td style="text-align: left;"><p>Segregated Witness (Peer
Services)</p></td>
<td style="text-align: left;"><p>Eric Lombrozo, Pieter Wuille</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-145"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0145.mediawiki">BIP-145</a></p></td>
<td style="text-align: left;"><p>getblocktemplate Updates for Segregated
Witness</p></td>
<td style="text-align: left;"><p>Luke Dashjr</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-146"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0146.mediawiki">BIP-146</a></p></td>
<td style="text-align: left;"><p>Dealing with signature encoding
malleability</p></td>
<td style="text-align: left;"><p>Johnson Lau, Pieter Wuille</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-147"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0147.mediawiki">BIP-147</a></p></td>
<td style="text-align: left;"><p>Dealing with dummy stack element
malleability</p></td>
<td style="text-align: left;"><p>Johnson Lau</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-148"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0148.mediawiki">BIP-148</a></p></td>
<td style="text-align: left;"><p>Mandatory activation of segwit
deployment</p></td>
<td style="text-align: left;"><p>Shaolin Fry</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-150"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0150.mediawiki">BIP-150</a></p></td>
<td style="text-align: left;"><p>Peer Authentication</p></td>
<td style="text-align: left;"><p>Jonas Schnelli</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-151"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0151.mediawiki">BIP-151</a></p></td>
<td style="text-align: left;"><p>Peer-to-Peer Communication
Encryption</p></td>
<td style="text-align: left;"><p>Jonas Schnelli</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-152"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0152.mediawiki">BIP-152</a></p></td>
<td style="text-align: left;"><p>Compact Block Relay</p></td>
<td style="text-align: left;"><p>Matt Corallo</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-171"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0171.mediawiki">BIP-171</a></p></td>
<td style="text-align: left;"><p>Currency/exchange rate information
API</p></td>
<td style="text-align: left;"><p>Luke Dashjr</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><span id="bip-180"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0180.mediawiki">BIP-180</a></p></td>
<td style="text-align: left;"><p>Block size/weight fraud proof</p></td>
<td style="text-align: left;"><p>Luke Dashjr</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><span id="bip-199"></span><a
href="https://github.com/bitcoin/bips/blob/master/bip-0199.mediawiki">BIP-199</a></p></td>
<td style="text-align: left;"><p>Hashed Time-Locked Contract
transactions</p></td>
<td style="text-align: left;"><p>Sean Bowe, Daira Hopwood</p></td>
<td style="text-align: left;"><p>Standard</p></td>
<td style="text-align: left;"><p>Draft<span
class="indexterm"></span></p></td>
</tr>
</tbody>
</table>

Liste des BIPs
