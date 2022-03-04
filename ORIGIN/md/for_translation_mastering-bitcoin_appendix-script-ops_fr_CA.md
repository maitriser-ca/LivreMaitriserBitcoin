# Transaction Script Language Operators, Constants, and Symbols

Tables and descriptions sourced from
<https://en.bitcoin.it/wiki/Script>.

[table\_title](#tx_script_ops_table_pushdata) shows operators for
pushing values onto the stack.<span class="indexterm"></span> <span
class="indexterm"></span><span class="indexterm"></span> <span
class="indexterm"></span>

<table>
<caption>Push value onto stack</caption>
<colgroup>
<col style="width: 33%" />
<col style="width: 33%" />
<col style="width: 33%" />
</colgroup>
<thead>
<tr class="header">
<th style="text-align: left;">Symbol</th>
<th style="text-align: left;">Value (hex)</th>
<th style="text-align: left;">Description</th>
</tr>
</thead>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p>OP_0 or OP_FALSE</p></td>
<td style="text-align: left;"><p>0x00</p></td>
<td style="text-align: left;"><p>An empty array is pushed onto the
stack</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>1 to 75</p></td>
<td style="text-align: left;"><p>0x01 to 0x4b</p></td>
<td style="text-align: left;"><p>Push the next N bytes onto the stack,
where N is 1 to 75 bytes</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_PUSHDATA1</p></td>
<td style="text-align: left;"><p>0x4c</p></td>
<td style="text-align: left;"><p>The next script byte contains N, push
the following N bytes onto the stack</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_PUSHDATA2</p></td>
<td style="text-align: left;"><p>0x4d</p></td>
<td style="text-align: left;"><p>The next two script bytes contain N,
push the following N bytes onto the stack</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_PUSHDATA4</p></td>
<td style="text-align: left;"><p>0x4e</p></td>
<td style="text-align: left;"><p>The next four script bytes contain N,
push the following N bytes onto the stack</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_1NEGATE</p></td>
<td style="text-align: left;"><p>0x4f</p></td>
<td style="text-align: left;"><p>Push the value "–1" onto the
stack</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_RESERVED</p></td>
<td style="text-align: left;"><p>0x50</p></td>
<td style="text-align: left;"><p>Halt—Invalid transaction unless found
in an unexecuted OP_IF clause</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_1 or OP_TRUE</p></td>
<td style="text-align: left;"><p>0x51</p></td>
<td style="text-align: left;"><p>Push the value "1" onto the
stack</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_2 to OP_16</p></td>
<td style="text-align: left;"><p>0x52 to 0x60</p></td>
<td style="text-align: left;"><p>For OP_N, push the value "N" onto the
stack, e.g., OP_2 pushes "2"</p></td>
</tr>
</tbody>
</table>

Push value onto stack

[table\_title](#tx_script_ops_table_control) shows conditional flow
control operators.

<table>
<caption>Conditional flow control</caption>
<colgroup>
<col style="width: 33%" />
<col style="width: 33%" />
<col style="width: 33%" />
</colgroup>
<thead>
<tr class="header">
<th style="text-align: left;">Symbol</th>
<th style="text-align: left;">Value (hex)</th>
<th style="text-align: left;">Description</th>
</tr>
</thead>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p>OP_NOP</p></td>
<td style="text-align: left;"><p>0x61</p></td>
<td style="text-align: left;"><p>Do nothing</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_VER</p></td>
<td style="text-align: left;"><p>0x62</p></td>
<td style="text-align: left;"><p>Halt—Invalid transaction unless found
in an unexecuted OP_IF clause</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_IF</p></td>
<td style="text-align: left;"><p>0x63</p></td>
<td style="text-align: left;"><p>Execute the statements following if top
of stack is not 0</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_NOTIF</p></td>
<td style="text-align: left;"><p>0x64</p></td>
<td style="text-align: left;"><p>Execute the statements following if top
of stack is 0</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_VERIF</p></td>
<td style="text-align: left;"><p>0x65</p></td>
<td style="text-align: left;"><p>Halt—Invalid transaction</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_VERNOTIF</p></td>
<td style="text-align: left;"><p>0x66</p></td>
<td style="text-align: left;"><p>Halt—Invalid transaction</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_ELSE</p></td>
<td style="text-align: left;"><p>0x67</p></td>
<td style="text-align: left;"><p>Execute only if the previous statements
were not executed</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_ENDIF</p></td>
<td style="text-align: left;"><p>0x68</p></td>
<td style="text-align: left;"><p>End the OP_IF, OP_NOTIF, OP_ELSE
block</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_VERIFY</p></td>
<td style="text-align: left;"><p>0x69</p></td>
<td style="text-align: left;"><p>Check the top of the stack, halt and
invalidate transaction if not TRUE</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_RETURN</p></td>
<td style="text-align: left;"><p>0x6a</p></td>
<td style="text-align: left;"><p>Halt and invalidate
transaction</p></td>
</tr>
</tbody>
</table>

Conditional flow control

[table\_title](#tx_script_ops_table_timelock) shows operators used for
timelocks.

<table>
<caption>Timelock operations</caption>
<colgroup>
<col style="width: 33%" />
<col style="width: 33%" />
<col style="width: 33%" />
</colgroup>
<thead>
<tr class="header">
<th style="text-align: left;">Symbol</th>
<th style="text-align: left;">Value (hex)</th>
<th style="text-align: left;">Description</th>
</tr>
</thead>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p>OP_CHECKLOCKTIMEVERIFY (previously
OP_NOP2)</p></td>
<td style="text-align: left;"><p>0xb1</p></td>
<td style="text-align: left;"><p>Marks transaction as invalid if the top
stack item is greater than the transaction’s nLockTime field, otherwise
script evaluation continues as though an OP_NOP was executed.
Transaction is also invalid if 1. the stack is empty; or 2. the top
stack item is negative; or 3. the top stack item is greater than or
equal to 500000000 while the transaction’s nLockTime field is less than
500000000, or vice versa; or 4. the input’s nSequence field is equal to
0xffffffff. The precise semantics are described in BIP-65</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_CHECKSEQUENCEVERIFY (previously
OP_NOP3)</p></td>
<td style="text-align: left;"><p>0xb2</p></td>
<td style="text-align: left;"><p>Marks transaction as invalid if the
relative lock time of the input (enforced by BIP 0068 with nSequence) is
not equal to or longer than the value of the top stack item. The precise
semantics are described in BIP-112</p></td>
</tr>
</tbody>
</table>

Timelock operations

[table\_title](#tx_script_ops_table_stack) shows operators used to
manipulate the stack.

<table>
<caption>Stack operations</caption>
<colgroup>
<col style="width: 33%" />
<col style="width: 33%" />
<col style="width: 33%" />
</colgroup>
<thead>
<tr class="header">
<th style="text-align: left;">Symbol</th>
<th style="text-align: left;">Value (hex)</th>
<th style="text-align: left;">Description</th>
</tr>
</thead>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p>OP_TOALTSTACK</p></td>
<td style="text-align: left;"><p>0x6b</p></td>
<td style="text-align: left;"><p>Pop top item from stack and push to
alternative stack</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_FROMALTSTACK</p></td>
<td style="text-align: left;"><p>0x6c</p></td>
<td style="text-align: left;"><p>Pop top item from alternative stack and
push to stack</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_2DROP</p></td>
<td style="text-align: left;"><p>0x6d</p></td>
<td style="text-align: left;"><p>Pop top two stack items</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_2DUP</p></td>
<td style="text-align: left;"><p>0x6e</p></td>
<td style="text-align: left;"><p>Duplicate top two stack items</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_3DUP</p></td>
<td style="text-align: left;"><p>0x6f</p></td>
<td style="text-align: left;"><p>Duplicate top three stack
items</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_2OVER</p></td>
<td style="text-align: left;"><p>0x70</p></td>
<td style="text-align: left;"><p>Copy the third and fourth items in the
stack to the top</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_2ROT</p></td>
<td style="text-align: left;"><p>0x71</p></td>
<td style="text-align: left;"><p>Move the fifth and sixth items in the
stack to the top</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_2SWAP</p></td>
<td style="text-align: left;"><p>0x72</p></td>
<td style="text-align: left;"><p>Swap the two top pairs of items in the
stack</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_IFDUP</p></td>
<td style="text-align: left;"><p>0x73</p></td>
<td style="text-align: left;"><p>Duplicate the top item in the stack if
it is not 0</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_DEPTH</p></td>
<td style="text-align: left;"><p>0x74</p></td>
<td style="text-align: left;"><p>Count the items on the stack and push
the resulting count</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_DROP</p></td>
<td style="text-align: left;"><p>0x75</p></td>
<td style="text-align: left;"><p>Pop the top item in the stack</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_DUP</p></td>
<td style="text-align: left;"><p>0x76</p></td>
<td style="text-align: left;"><p>Duplicate the top item in the
stack</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_NIP</p></td>
<td style="text-align: left;"><p>0x77</p></td>
<td style="text-align: left;"><p>Pop the second item in the
stack</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_OVER</p></td>
<td style="text-align: left;"><p>0x78</p></td>
<td style="text-align: left;"><p>Copy the second item in the stack and
push it onto the top</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_PICK</p></td>
<td style="text-align: left;"><p>0x79</p></td>
<td style="text-align: left;"><p>Pop value N from top, then copy the Nth
item to the top of the stack</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_ROLL</p></td>
<td style="text-align: left;"><p>0x7a</p></td>
<td style="text-align: left;"><p>Pop value N from top, then move the Nth
item to the top of the stack</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_ROT</p></td>
<td style="text-align: left;"><p>0x7b</p></td>
<td style="text-align: left;"><p>Rotate the top three items in the
stack</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_SWAP</p></td>
<td style="text-align: left;"><p>0x7c</p></td>
<td style="text-align: left;"><p>Swap the top two items on the
stack</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_TUCK</p></td>
<td style="text-align: left;"><p>0x7d</p></td>
<td style="text-align: left;"><p>Copy the top item and insert it between
the top and second item</p></td>
</tr>
</tbody>
</table>

Stack operations

[table\_title](#tx_script_ops_table_splice) shows string operators.

<table>
<caption>String splice operations</caption>
<colgroup>
<col style="width: 33%" />
<col style="width: 33%" />
<col style="width: 33%" />
</colgroup>
<thead>
<tr class="header">
<th style="text-align: left;">Symbol</th>
<th style="text-align: left;">Value (hex)</th>
<th style="text-align: left;">Description</th>
</tr>
</thead>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p><em>OP_CAT</em></p></td>
<td style="text-align: left;"><p>0x7e</p></td>
<td style="text-align: left;"><p>Disabled (concatenates top two
items)</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><em>OP_SUBSTR</em></p></td>
<td style="text-align: left;"><p>0x7f</p></td>
<td style="text-align: left;"><p>Disabled (returns substring)</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><em>OP_LEFT</em></p></td>
<td style="text-align: left;"><p>0x80</p></td>
<td style="text-align: left;"><p>Disabled (returns left
substring)</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><em>OP_RIGHT</em></p></td>
<td style="text-align: left;"><p>0x81</p></td>
<td style="text-align: left;"><p>Disabled (returns right
substring)</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_SIZE</p></td>
<td style="text-align: left;"><p>0x82</p></td>
<td style="text-align: left;"><p>Calculate string length of top item and
push the result</p></td>
</tr>
</tbody>
</table>

String splice operations

[table\_title](#tx_script_ops_table_binmath) shows binary arithmetic and
boolean logic operators.

<table>
<caption>Binary arithmetic and conditionals</caption>
<colgroup>
<col style="width: 33%" />
<col style="width: 33%" />
<col style="width: 33%" />
</colgroup>
<thead>
<tr class="header">
<th style="text-align: left;">Symbol</th>
<th style="text-align: left;">Value (hex)</th>
<th style="text-align: left;">Description</th>
</tr>
</thead>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p><em>OP_INVERT</em></p></td>
<td style="text-align: left;"><p>0x83</p></td>
<td style="text-align: left;"><p>Disabled (Flip the bits of the top
item)</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><em>OP_AND</em></p></td>
<td style="text-align: left;"><p>0x84</p></td>
<td style="text-align: left;"><p>Disabled (Boolean AND of two top
items)</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><em>OP_OR</em></p></td>
<td style="text-align: left;"><p>0x85</p></td>
<td style="text-align: left;"><p>Disabled (Boolean OR of two top
items)</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><em>OP_XOR</em></p></td>
<td style="text-align: left;"><p>0x86</p></td>
<td style="text-align: left;"><p>Disabled (Boolean XOR of two top
items)</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_EQUAL</p></td>
<td style="text-align: left;"><p>0x87</p></td>
<td style="text-align: left;"><p>Push TRUE (1) if top two items are
exactly equal, push FALSE (0) otherwise</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_EQUALVERIFY</p></td>
<td style="text-align: left;"><p>0x88</p></td>
<td style="text-align: left;"><p>Same as OP_EQUAL, but run OP_VERIFY
after to halt if not TRUE</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_RESERVED1</p></td>
<td style="text-align: left;"><p>0x89</p></td>
<td style="text-align: left;"><p>Halt—Invalid transaction unless found
in an unexecuted OP_IF clause</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_RESERVED2</p></td>
<td style="text-align: left;"><p>0x8a</p></td>
<td style="text-align: left;"><p>Halt—Invalid transaction unless found
in an unexecuted OP_IF clause</p></td>
</tr>
</tbody>
</table>

Binary arithmetic and conditionals

[table\_title](#tx_script_ops_table_numbers) shows numeric (arithmetic)
operators.

<table>
<caption>Numeric operators</caption>
<colgroup>
<col style="width: 33%" />
<col style="width: 33%" />
<col style="width: 33%" />
</colgroup>
<thead>
<tr class="header">
<th style="text-align: left;">Symbol</th>
<th style="text-align: left;">Value (hex)</th>
<th style="text-align: left;">Description</th>
</tr>
</thead>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p>OP_1ADD</p></td>
<td style="text-align: left;"><p>0x8b</p></td>
<td style="text-align: left;"><p>Add 1 to the top item</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_1SUB</p></td>
<td style="text-align: left;"><p>0x8c</p></td>
<td style="text-align: left;"><p>Subtract 1 from the top item</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><em>OP_2MUL</em></p></td>
<td style="text-align: left;"><p>0x8d</p></td>
<td style="text-align: left;"><p>Disabled (multiply top item by
2)</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><em>OP_2DIV</em></p></td>
<td style="text-align: left;"><p>0x8e</p></td>
<td style="text-align: left;"><p>Disabled (divide top item by
2)</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_NEGATE</p></td>
<td style="text-align: left;"><p>0x8f</p></td>
<td style="text-align: left;"><p>Flip the sign of top item</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_ABS</p></td>
<td style="text-align: left;"><p>0x90</p></td>
<td style="text-align: left;"><p>Change the sign of the top item to
positive</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_NOT</p></td>
<td style="text-align: left;"><p>0x91</p></td>
<td style="text-align: left;"><p>If top item is 0 or 1 Boolean flip it,
otherwise return 0</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_0NOTEQUAL</p></td>
<td style="text-align: left;"><p>0x92</p></td>
<td style="text-align: left;"><p>If top item is 0 return 0, otherwise
return 1</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_ADD</p></td>
<td style="text-align: left;"><p>0x93</p></td>
<td style="text-align: left;"><p>Pop top two items, add them and push
result</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_SUB</p></td>
<td style="text-align: left;"><p>0x94</p></td>
<td style="text-align: left;"><p>Pop top two items, subtract first from
second, push result</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><em>OP_MUL</em></p></td>
<td style="text-align: left;"><p>0x95</p></td>
<td style="text-align: left;"><p>Disabled (multiply top two
items)</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><em>OP_DIV</em></p></td>
<td style="text-align: left;"><p>0x96</p></td>
<td style="text-align: left;"><p>Disabled (divide second item by first
item)</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><em>OP_MOD</em></p></td>
<td style="text-align: left;"><p>0x97</p></td>
<td style="text-align: left;"><p>Disabled (remainder divide second item
by first item)</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p><em>OP_LSHIFT</em></p></td>
<td style="text-align: left;"><p>0x98</p></td>
<td style="text-align: left;"><p>Disabled (shift second item left by
first item number of bits)</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p><em>OP_RSHIFT</em></p></td>
<td style="text-align: left;"><p>0x99</p></td>
<td style="text-align: left;"><p>Disabled (shift second item right by
first item number of bits)</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_BOOLAND</p></td>
<td style="text-align: left;"><p>0x9a</p></td>
<td style="text-align: left;"><p>Boolean AND of top two items</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_BOOLOR</p></td>
<td style="text-align: left;"><p>0x9b</p></td>
<td style="text-align: left;"><p>Boolean OR of top two items</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_NUMEQUAL</p></td>
<td style="text-align: left;"><p>0x9c</p></td>
<td style="text-align: left;"><p>Return TRUE if top two items are equal
numbers</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_NUMEQUALVERIFY</p></td>
<td style="text-align: left;"><p>0x9d</p></td>
<td style="text-align: left;"><p>Same as NUMEQUAL, then OP_VERIFY to
halt if not TRUE</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_NUMNOTEQUAL</p></td>
<td style="text-align: left;"><p>0x9e</p></td>
<td style="text-align: left;"><p>Return TRUE if top two items are not
equal numbers</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_LESSTHAN</p></td>
<td style="text-align: left;"><p>0x9f</p></td>
<td style="text-align: left;"><p>Return TRUE if second item is less than
top item</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_GREATERTHAN</p></td>
<td style="text-align: left;"><p>0xa0</p></td>
<td style="text-align: left;"><p>Return TRUE if second item is greater
than top item</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_LESSTHANOREQUAL</p></td>
<td style="text-align: left;"><p>0xa1</p></td>
<td style="text-align: left;"><p>Return TRUE if second item is less than
or equal to top item</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_GREATERTHANOREQUAL</p></td>
<td style="text-align: left;"><p>0xa2</p></td>
<td style="text-align: left;"><p>Return TRUE if second item is great
than or equal to top item</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_MIN</p></td>
<td style="text-align: left;"><p>0xa3</p></td>
<td style="text-align: left;"><p>Return the smaller of the two top
items</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_MAX</p></td>
<td style="text-align: left;"><p>0xa4</p></td>
<td style="text-align: left;"><p>Return the larger of the two top
items</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_WITHIN</p></td>
<td style="text-align: left;"><p>0xa5</p></td>
<td style="text-align: left;"><p>Return TRUE if the third item is
between the second item (or equal) and first item</p></td>
</tr>
</tbody>
</table>

Numeric operators

[table\_title](#tx_script_ops_table_crypto) shows cryptographic function
operators.

<table>
<caption>Cryptographic and hashing operations</caption>
<colgroup>
<col style="width: 33%" />
<col style="width: 33%" />
<col style="width: 33%" />
</colgroup>
<thead>
<tr class="header">
<th style="text-align: left;">Symbol</th>
<th style="text-align: left;">Value (hex)</th>
<th style="text-align: left;">Description</th>
</tr>
</thead>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p>OP_RIPEMD160</p></td>
<td style="text-align: left;"><p>0xa6</p></td>
<td style="text-align: left;"><p>Return RIPEMD160 hash of top
item</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_SHA1</p></td>
<td style="text-align: left;"><p>0xa7</p></td>
<td style="text-align: left;"><p>Return SHA1 hash of top item</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_SHA256</p></td>
<td style="text-align: left;"><p>0xa8</p></td>
<td style="text-align: left;"><p>Return SHA256 hash of top item</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_HASH160</p></td>
<td style="text-align: left;"><p>0xa9</p></td>
<td style="text-align: left;"><p>Return RIPEMD160(SHA256(x)) hash of top
item</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_HASH256</p></td>
<td style="text-align: left;"><p>0xaa</p></td>
<td style="text-align: left;"><p>Return SHA256(SHA256(x)) hash of top
item</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_CODESEPARATOR</p></td>
<td style="text-align: left;"><p>0xab</p></td>
<td style="text-align: left;"><p>Mark the beginning of signature-checked
data</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_CHECKSIG</p></td>
<td style="text-align: left;"><p>0xac</p></td>
<td style="text-align: left;"><p>Pop a public key and signature and
validate the signature for the transaction’s hashed data, return TRUE if
matching</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_CHECKSIGVERIFY</p></td>
<td style="text-align: left;"><p>0xad</p></td>
<td style="text-align: left;"><p>Same as CHECKSIG, then OP_VERIFY to
halt if not TRUE</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_CHECKMULTISIG</p></td>
<td style="text-align: left;"><p>0xae</p></td>
<td style="text-align: left;"><p>Run CHECKSIG for each pair of signature
and public key provided. All must match. Bug in implementation pops an
extra value, prefix with OP_0 as workaround</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_CHECKMULTISIGVERIFY</p></td>
<td style="text-align: left;"><p>0xaf</p></td>
<td style="text-align: left;"><p>Same as CHECKMULTISIG, then OP_VERIFY
to halt if not TRUE</p></td>
</tr>
</tbody>
</table>

Cryptographic and hashing operations

[table\_title](#tx_script_ops_table_nop) shows nonoperator symbols.

<table>
<caption>Nonoperators</caption>
<colgroup>
<col style="width: 33%" />
<col style="width: 33%" />
<col style="width: 33%" />
</colgroup>
<thead>
<tr class="header">
<th style="text-align: left;">Symbol</th>
<th style="text-align: left;">Value (hex)</th>
<th style="text-align: left;">Description</th>
</tr>
</thead>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p>OP_NOP1 to OP_NOP10</p></td>
<td style="text-align: left;"><p>0xb0 to 0xb9</p></td>
<td style="text-align: left;"><p>Does nothing, ignored</p></td>
</tr>
</tbody>
</table>

Nonoperators

[table\_title](#tx_script_ops_table_internal) shows operator codes
reserved for use by the internal script parser.<span
class="indexterm"></span><span class="indexterm"></span>

<table>
<caption>Reserved OP codes for internal use by the parser</caption>
<colgroup>
<col style="width: 33%" />
<col style="width: 33%" />
<col style="width: 33%" />
</colgroup>
<thead>
<tr class="header">
<th style="text-align: left;">Symbol</th>
<th style="text-align: left;">Value (hex)</th>
<th style="text-align: left;">Description</th>
</tr>
</thead>
<tbody>
<tr class="odd">
<td style="text-align: left;"><p>OP_SMALLDATA</p></td>
<td style="text-align: left;"><p>0xf9</p></td>
<td style="text-align: left;"><p>Represents small data field</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_SMALLINTEGER</p></td>
<td style="text-align: left;"><p>0xfa</p></td>
<td style="text-align: left;"><p>Represents small integer data
field</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_PUBKEYS</p></td>
<td style="text-align: left;"><p>0xfb</p></td>
<td style="text-align: left;"><p>Represents public key fields</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_PUBKEYHASH</p></td>
<td style="text-align: left;"><p>0xfd</p></td>
<td style="text-align: left;"><p>Represents a public key hash
field</p></td>
</tr>
<tr class="odd">
<td style="text-align: left;"><p>OP_PUBKEY</p></td>
<td style="text-align: left;"><p>0xfe</p></td>
<td style="text-align: left;"><p>Represents a public key field</p></td>
</tr>
<tr class="even">
<td style="text-align: left;"><p>OP_INVALIDOPCODE</p></td>
<td style="text-align: left;"><p>0xff</p></td>
<td style="text-align: left;"><p>Represents any OP code not currently
assigned</p></td>
</tr>
</tbody>
</table>

Reserved OP codes for internal use by the parser
