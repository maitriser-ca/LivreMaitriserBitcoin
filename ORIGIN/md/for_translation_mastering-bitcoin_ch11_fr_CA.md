# Bitcoin Security

Securing bitcoin is challenging because bitcoin is not an abstract
reference to value, like a balance in a bank account. Bitcoin is very
much like digital cash or gold. You’ve probably heard the expression,
"Possession is nine-tenths of the law." Well, in bitcoin, possession is
ten-tenths of the law. Possession of the keys to unlock the bitcoin is
equivalent to possession of cash or a chunk of precious metal. You can
lose it, misplace it, have it stolen, or accidentally give the wrong
amount to someone. In every one of these cases, users have no recourse,
just as if they dropped cash on a public sidewalk.

However, bitcoin has capabilities that cash, gold, and bank accounts do
not. A bitcoin wallet, containing your keys, can be backed up like any
file. It can be stored in multiple copies, even printed on paper for
hard-copy backup. You can’t "back up" cash, gold, or bank accounts.
Bitcoin is different enough from anything that has come before that we
need to think about bitcoin security in a novel way too.

## Security Principles

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span>The core
principle in bitcoin is decentralization and it has important
implications for security. A centralized model, such as a traditional
bank or payment network, depends on access control and vetting to keep
bad actors out of the system. By comparison, a decentralized system like
bitcoin pushes the responsibility and control to the users. Because
security of the network is based on Proof-of-Work, not access control,
the network can be open and no encryption is required for bitcoin
traffic.

On a traditional payment network, such as a credit card system, the
payment is open-ended because it contains the user’s private identifier
(the credit card number). After the initial charge, anyone with access
to the identifier can "pull" funds and charge the owner again and again.
Thus, the payment network has to be secured end-to-end with encryption
and must ensure that no eavesdroppers or intermediaries can compromise
the payment traffic, in transit or when it is stored (at rest). If a bad
actor gains access to the system, he can compromise current transactions
*and* payment tokens that can be used to create new transactions. Worse,
when customer data is compromised, the customers are exposed to identity
theft and must take action to prevent fraudulent use of the compromised
accounts.

Bitcoin is dramatically different. A bitcoin transaction authorizes only
a specific value to a specific recipient and cannot be forged or
modified. It does not reveal any private information, such as the
identities of the parties, and cannot be used to authorize additional
payments. Therefore, a bitcoin payment network does not need to be
encrypted or protected from eavesdropping. In fact, you can broadcast
bitcoin transactions over an open public channel, such as unsecured WiFi
or Bluetooth, with no loss of security.

Bitcoin’s decentralized security model puts a lot of power in the hands
of the users. With that power comes responsibility for maintaining the
secrecy of the keys. For most users that is not easy to do, especially
on general-purpose computing devices such as internet-connected
smartphones or laptops. Although bitcoin’s decentralized model prevents
the type of mass compromise seen with credit cards, many users are not
able to adequately secure their keys and get hacked, one by one.

### Developing Bitcoin Systems Securely

<span class="indexterm"></span> <span class="indexterm"></span>The most
important principle for bitcoin developers is decentralization. Most
developers will be familiar with centralized security models and might
be tempted to apply these models to their bitcoin applications, with
disastrous results.

Bitcoin’s security relies on decentralized control over keys and on
independent transaction validation by miners. If you want to leverage
bitcoin’s security, you need to ensure that you remain within the
bitcoin security model. In simple terms: don’t take control of keys away
from users and don’t take transactions off the blockchain.

For example, many early bitcoin exchanges concentrated all user funds in
a single "hot" wallet with keys stored on a single server. Such a design
removes control from users and centralizes control over keys in a single
system. Many such systems have been hacked, with disastrous consequences
for their customers.

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span>Another common mistake is to take transactions
"off blockchain" in a misguided effort to reduce transaction fees or
accelerate transaction processing. An "off blockchain" system will
record transactions on an internal, centralized ledger and only
occasionally synchronize them to the Bitcoin blockchain. This practice,
again, substitutes decentralized bitcoin security with a proprietary and
centralized approach. When transactions are off blockchain, improperly
secured centralized ledgers can be falsified, diverting funds and
depleting reserves, unnoticed.

Unless you are prepared to invest heavily in operational security,
multiple layers of access control, and audits (as the traditional banks
do) you should think very carefully before taking funds outside of
bitcoin’s decentralized security context. Even if you have the funds and
discipline to implement a robust security model, such a design merely
replicates the fragile model of traditional financial networks, plagued
by identity theft, corruption, and embezzlement. To take advantage of
bitcoin’s unique decentralized security model, you have to avoid the
temptation of centralized architectures that might feel familiar but
ultimately subvert bitcoin’s security.

### The Root of Trust

<span class="indexterm"></span>Traditional security architecture is
based upon a concept called the *root of trust*, which is a trusted core
used as the foundation for the security of the overall system or
application. Security architecture is developed around the root of trust
as a series of concentric circles, like layers in an onion, extending
trust outward from the center. Each layer builds upon the more-trusted
inner layer using access controls, digital signatures, encryption, and
other security primitives. As software systems become more complex, they
are more likely to contain bugs, which make them vulnerable to security
compromise. As a result, the more complex a software system becomes, the
harder it is to secure. The root of trust concept ensures that most of
the trust is placed within the least complex part of the system, and
therefore least vulnerable, parts of the system, while more complex
software is layered around it. This security architecture is repeated at
different scales, first establishing a root of trust within the hardware
of a single system, then extending that root of trust through the
operating system to higher-level system services, and finally across
many servers layered in concentric circles of diminishing trust.

<span class="indexterm"></span> <span class="indexterm"></span>Bitcoin
security architecture is different. In bitcoin, the consensus system
creates a trusted public ledger that is completely decentralized. A
correctly validated blockchain uses the genesis block as the root of
trust, building a chain of trust up to the current block. Bitcoin
systems can and should use the blockchain as their root of trust. When
designing a complex bitcoin application that consists of services on
many different systems, you should carefully examine the security
architecture in order to ascertain where trust is being placed.
Ultimately, the only thing that should be explicitly trusted is a fully
validated blockchain. If your application explicitly or implicitly vests
trust in anything but the blockchain, that should be a source of concern
because it introduces vulnerability. A good method to evaluate the
security architecture of your application is to consider each individual
component and evaluate a hypothetical scenario where that component is
completely compromised and under the control of a malicious actor. Take
each component of your application, in turn, and assess the impacts on
the overall security if that component is compromised. If your
application is no longer secure when components are compromised, that
shows you have misplaced trust in those components. A bitcoin
application without vulnerabilities should be vulnerable only to a
compromise of the bitcoin consensus mechanism, meaning that its root of
trust is based on the strongest part of the bitcoin security
architecture.

The numerous examples of hacked bitcoin exchanges serve to underscore
this point because their security architecture and design fails even
under the most casual scrutiny. These centralized implementations had
invested trust explicitly in numerous components outside the Bitcoin
blockchain, such as hot wallets, centralized ledger databases,
vulnerable encryption keys, and similar schemes.<span
class="indexterm"></span>

## User Security Best Practices

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span>Humans have
used physical security controls for thousands of years. By comparison,
our experience with digital security is less than 50 years old. Modern
general-purpose operating systems are not very secure and not
particularly suited to storing digital money. Our computers are
constantly exposed to external threats via always-on internet
connections. They run thousands of software components from hundreds of
authors, often with unconstrained access to the user’s files. A single
piece of rogue software, among the many thousands installed on your
computer, can compromise your keyboard and files, stealing any bitcoin
stored in wallet applications. The level of computer maintenance
required to keep a computer virus-free and trojan-free is beyond the
skill level of all but a tiny minority of computer users.

Despite decades of research and advancements in information security,
digital assets are still woefully vulnerable to a determined adversary.
Even the most highly protected and restricted systems, in financial
services companies, intelligence agencies, and defense contractors, are
frequently breached. Bitcoin creates digital assets that have intrinsic
value and can be stolen and diverted to new owners instantly and
irrevocably. This creates a massive incentive for hackers. Until now,
hackers had to convert identity information or account tokens—such as
credit cards and bank accounts—into value after compromising them.
Despite the difficulty of fencing and laundering financial information,
we have seen ever-escalating thefts. Bitcoin escalates this problem
because it doesn’t need to be fenced or laundered; it is intrinsic value
within a digital asset.

Fortunately, bitcoin also creates the incentives to improve computer
security. Whereas previously the risk of computer compromise was vague
and indirect, bitcoin makes these risks clear and obvious. Holding
bitcoin on a computer serves to focus the user’s mind on the need for
improved computer security. As a direct result of the proliferation and
increased adoption of bitcoin and other digital currencies, we have seen
an escalation in both hacking techniques and security solutions. In
simple terms, hackers now have a very juicy target and users have a
clear incentive to defend themselves.

Over the past three years, as a direct result of bitcoin adoption, we
have seen tremendous innovation in the realm of information security in
the form of hardware encryption, key storage and hardware wallets,
multisignature technology, and digital escrow. In the following sections
we will examine various best practices for practical user security.

### Physical Bitcoin Storage

<span class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span>Because most users are far more comfortable
with physical security than information security, a very effective
method for protecting bitcoin is to convert them into physical form.
Bitcoin keys are nothing more than long numbers. This means that they
can be stored in a physical form, such as printed on paper or etched on
a metal coin. Securing the keys then becomes as simple as physically
securing the printed copy of the bitcoin keys. A set of bitcoin keys
that is printed on paper is called a "paper wallet," and there are many
free tools that can be used to create them. I personally keep the vast
majority of my bitcoin (99% or more) stored on paper wallets, encrypted
with BIP-38, with multiple copies locked in safes. <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>Keeping bitcoin offline is called *cold
storage* and it is one of the most effective security techniques. A cold
storage system is one where the keys are generated on an offline system
(one never connected to the internet) and stored offline either on paper
or on digital media, such as a USB memory stick.

### Hardware Wallets

<span class="indexterm"></span> <span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span>In the long
term, bitcoin security increasingly will take the form of hardware
tamper-proof wallets. Unlike a smartphone or desktop computer, a bitcoin
hardware wallet has just one purpose: to hold bitcoin securely. Without
general-purpose software to compromise and with limited interfaces,
hardware wallets can deliver an almost foolproof level of security to
nonexpert users. I expect to see hardware wallets become the predominant
method of bitcoin storage. For an example of such a hardware wallet, see
the [Trezor](https://trezor.io/).

### Balancing Risk

<span class="indexterm"></span>Although most users are rightly concerned
about bitcoin theft, there is an even bigger risk. Data files get lost
all the time. If they contain bitcoin, the loss is much more painful. In
the effort to secure their bitcoin wallets, users must be very careful
not to go too far and end up losing the bitcoin. In July 2011, a
well-known bitcoin awareness and education project lost almost 7,000
bitcoin. In their effort to prevent theft, the owners had implemented a
complex series of encrypted backups. In the end they accidentally lost
the encryption keys, making the backups worthless and losing a fortune.
Like hiding money by burying it in the desert, if you secure your
bitcoin too well you might not be able to find it again.

### Diversifying Risk

Would you carry your entire net worth in cash in your wallet? Most
people would consider that reckless, yet bitcoin users often keep all
their bitcoin in a single wallet. Instead, users should spread the risk
among multiple and diverse bitcoin wallets. Prudent users will keep only
a small fraction, perhaps less than 5%, of their bitcoin in an online or
mobile wallet as "pocket change." The rest should be split between a few
different storage mechanisms, such as a desktop wallet and offline (cold
storage).

### Multisig and Governance

<span class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>Whenever a company or individual stores large
amounts of bitcoin, they should consider using a multisignature Bitcoin
address. Multisignature addresses secure funds by requiring a minimum
number of signatures to make a payment. The signing keys should be
stored in a number of different locations and under the control of
different people. In a corporate environment, for example, the keys
should be generated independently and held by several company
executives, to ensure no single person can compromise the funds.
Multisignature addresses can also offer redundancy, where a single
person holds several keys that are stored in different locations.

### Survivability

<span class="indexterm"></span><span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span><span
class="indexterm"></span> <span class="indexterm"></span>One important
security consideration that is often overlooked is availability,
especially in the context of incapacity or death of the key holder.
Bitcoin users are told to use complex passwords and keep their keys
secure and private, not sharing them with anyone. Unfortunately, that
practice makes it almost impossible for the user’s family to recover any
funds if the user is not available to unlock them. In most cases, in
fact, the families of bitcoin users might be completely unaware of the
existence of the bitcoin funds.

If you have a lot of bitcoin, you should consider sharing access details
with a trusted relative or lawyer. A more complex survivability scheme
can be set up with multi-signature access and estate planning through a
lawyer specialized as a "digital asset executor."<span
class="indexterm"></span><span class="indexterm"></span>

## Conclusion

Bitcoin is a completely new, unprecedented, and complex technology. Over
time we will develop better security tools and practices that are easier
to use by nonexperts. For now, bitcoin users can use many of the tips
discussed here to enjoy a secure and trouble-free bitcoin experience.