# Alice, Bob and E-values

#### Time limit per test : 1 sec
#### Memory limit per test : 256 MB
#### Input : Standard input
#### Output : Standard output

---
##### NOTE-1 : The E-value of a number is the square of the number of natural numbers less than or equal to it which are <a href="https://en.wikipedia.org/wiki/Coprime_integers">Coprime</a> to it.
##### NOTE-2 : The E-sum of a number is the sum of E-values of all <a href="https://en.wikipedia.org/wiki/Square-free_integer">Square-free</a> divisors of the number.

Alice loves Square-free integers. Whenever someone gives her an integer, she immmediately calculates the sum of E-values of all the square free divisors of the number. To test her love for Square-free integers, Bob givers her an array <a href="https://www.codecogs.com/eqnedit.php?latex=A=\{a_1,a_2,...,a_n\}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?A=\{a_1,a_2,...,a_n\}" title="A=\{a_1,a_2,...,a_n\}" /></a> of positive integers such that <a href="https://www.codecogs.com/eqnedit.php?latex=a_i&space;>&space;1&space;,&space;\forall&space;i&space;\in&space;\{1,2,...,n\}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?a_i&space;>&space;1&space;,&space;\forall&space;i&space;\in&space;\{1,2,...,n\}" title="a_i > 1 , \forall i \in \{1,2,...,n\}" /></a> . 

He then makes <a href="https://www.codecogs.com/eqnedit.php?latex=k" target="_blank"><img src="https://latex.codecogs.com/gif.latex?q" title="q" /></a> queries described by two integers <a href="https://www.codecogs.com/eqnedit.php?latex=k" target="_blank"><img src="https://latex.codecogs.com/gif.latex?l" title="l" /></a> and <a href="https://www.codecogs.com/eqnedit.php?latex=k" target="_blank"><img src="https://latex.codecogs.com/gif.latex?r" title="r" /></a> and askes Alice to tell him the <a href="https://www.codecogs.com/eqnedit.php?latex=E-value" target="_blank"><img src="https://latex.codecogs.com/gif.latex?E-value" title="E-value" /></a> of the smallest number in the range <a href="https://www.codecogs.com/eqnedit.php?latex=\[l,r\]" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\[l,r\]" title="\[l,r\]" /></a> (both inclusive). But Alice is busy today, so  write a program to solve the problem for her.

#### Input

The first line contains an integer <a href="https://www.codecogs.com/eqnedit.php?latex=t(1\leq&space;t\leq&space;10^4)" target="_blank"><img src="https://latex.codecogs.com/gif.latex?t(1\leq&space;t\leq&space;10^4)" title="t(1\leq t\leq 10^4)" /></a> , the number of test cases. Then <a href="https://www.codecogs.com/eqnedit.php?latex=t" target="_blank"><img src="https://latex.codecogs.com/gif.latex?t" title="t" /></a> test cases follow.

The first line of each test case contains two space separated integers <a href="https://www.codecogs.com/eqnedit.php?latex=n(1\leq&space;n&space;\leq10^4)" target="_blank"><img src="https://latex.codecogs.com/gif.latex?n(1\leq&space;n&space;\leq10^4)" title="n(1\leq n \leq10^4)" /></a> , the size of the array and <a href="https://www.codecogs.com/eqnedit.php?latex=k(1\leq&space;k&space;\leq10^4)" target="_blank"><img src="https://latex.codecogs.com/gif.latex?k(1\leq&space;k&space;\leq10^4)" title="k(1\leq k \leq10^4)" /></a> , the number of queries. The next line contains <a href="https://www.codecogs.com/eqnedit.php?latex=n" target="_blank"><img src="https://latex.codecogs.com/gif.latex?n" title="n" /></a> space separated integers <a href="https://www.codecogs.com/eqnedit.php?latex=a_i(1\leq&space;i\leq&space;n&space;)&space;(2&space;\leq&space;a_i&space;\leq10^6)" target="_blank"><img src="https://latex.codecogs.com/gif.latex?a_i(1\leq&space;i\leq&space;n&space;)&space;(2&space;\leq&space;a_i&space;\leq10^6)" title="a_i(1\leq i\leq n ) (2 \leq a_i \leq10^6)" /></a> - the elements of the array <a href="https://www.codecogs.com/eqnedit.php?latex=A" target="_blank"><img src="https://latex.codecogs.com/gif.latex?A" title="A" /></a> . Each of the next <a href="https://www.codecogs.com/eqnedit.php?latex=q" target="_blank"><img src="https://latex.codecogs.com/gif.latex?q" title="q" /></a> lines contains two space seperated integers 
<a href="https://www.codecogs.com/eqnedit.php?latex=l" target="_blank"><img src="https://latex.codecogs.com/gif.latex?l" title="l" /></a> and <a href="https://www.codecogs.com/eqnedit.php?latex=l" target="_blank"><img src="https://latex.codecogs.com/gif.latex?r" title="r" /></a> with <a href="https://www.codecogs.com/eqnedit.php?latex=(1\leq&space;l&space;\leq&space;r&space;\leq&space;n)" target="_blank"><img src="https://latex.codecogs.com/gif.latex?(1\leq&space;l&space;\leq&space;r&space;\leq&space;n)" title="(1\leq l \leq r \leq n)" /></a> - the description of each query.

#### Output
The otput should contain <a href="https://www.codecogs.com/eqnedit.php?latex=q" target="_blank"><img src="https://latex.codecogs.com/gif.latex?q" title="q" /></a> lines. The <a href="https://www.codecogs.com/eqnedit.php?latex=i^{th}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?i^{th}" title="i^{th}" /></a> line should contain the answer to the <a href="https://www.codecogs.com/eqnedit.php?latex=i^{th}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?i^{th}" title="i^{th}" /></a> query.

#### Sample input
```
2
5 1
3 4 2 9 2

```
# Sample output
```

```
