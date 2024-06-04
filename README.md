# ESSA É A MINHA JORNADA C++ 🇧🇷 // THIS IS MY C++ JOURNEY! 🇺🇸

<details>
<summary>C++ Journey 1/7 ✔️</summary>

## Para rodar o jogo da advinhação 🇧🇷 // To run the guessing game! 🇺🇸 ▶️
```
g++ Step1_knowing_the_language/guessingGame/guessingGame.cpp -o  Step1_knowing_the_language/guessingGame/guessingGame && ./Step1_knowing_the_language/guessingGame/guessingGame
```

## Para rodar o jogo da forca 🇧🇷 // To run the hangman game! 🇺🇸 ▶️
```
make ./Step1_knowing_the_language/hangmanGame/hangman && ./Step1_knowing_the_language/hangmanGame/hangman
```

<details>
<summary>C++: CONHECENDO A LINGUAGEM E A STL 🇧🇷</summary> 
  Parabéns! Finalizamos dois projetos do curso de Introdução à Linguagem C++!
  
  Faremos uma rápida revisão. O primeiro projeto foi o Jogo da Adivinhação; aprendemos a ler valores com `cin` e imprimi-los com `cout`, além de inserir quebra de linha com `endl;`.
  
  Também vimos alguns tipos novos de C++ que não tínhamos em C, como o `bool` e as constantes `const`, usadas para marcar as variáveis como inalteráveis. Tivemos a oportunidade de revisar algumas funções como setar a semente dos números aleatórios de `srand()`  e recebê-los com `rand()`. Usamos também `abs()` que retorna um valor absoluto do número.
  
  Revimos também a utilização de números reais em contas, usando variáveis do tipo `double` para resolver problemas da pontuação no jogo, modificando a saída de C++ para imprimi-lo com duas casas decimais após a vírgula com `precision()` e `fixed`.
  
  Já no segundo projeto, o Jogo da Forca, nos aprofundamos muito nos novos tipos de C++ ao usar `string`, que são valores como palavras ou frases que nos ajudam a lidar com essa categoria de dados. Ainda, utilizamos o `map` para exercer função de dicionário, permitindo-nos guardas as variáveis chutadas e não chutadas como caracteres ao invés de números.
  
  Vimos inclusive o vetor de alocação dinâmica vector, o qual também recebe uma variável genérica, como quando guardamos os chutes errados feitos pelo usuário, inserimos `char` dentro. Quando quisemos ler um arquivo e guardá-lo dentro de um vetor escrevendo vector,`string`>.
  
  Iteramos sob `string` ou vector em C++11 com laços de repetição diferenciados, o que torna a leitura do código mais fácil e sucinto. Ao invés de gerarmos um índice que passa por todas as posições de um vetor, reduzimos apenas para a variável a ser iterada direto na letra que é parte da `palavra-secreta`.
  
  Mais para o final do projeto, aprendemos a lidar com arquivos externos; como fazer a leitura destes com `ifstream` e sua escrita com `ofstream`, os quais são sintaxes bastante parecidas com `cin` e `cout` respectivamente.

</details>

<details>
<summary>C++: GETTING TO KNOW THE LANGUAGE AND THE STL 🇺🇸</summary> 
  Congratulations! We have completed two projects in the Introduction to C++ Language course!
  
  Let's do a quick review. The first project was the Guessing Game; we learned how to read values ​​with `cin` and print them with `cout`, as well as insert line breaks with `endl`.
  
  We also saw some new types in C++ that we didn't have in C, like `bool` and `const` constants, used to mark variables as unchangeable. We had the opportunity to review some functions like setting the seed of random numbers with `srand()` and receiving them with `rand()`. We also used `abs()` which returns the absolute value of a number.
  
  We also reviewed the use of real numbers in calculations, using variables of type `double` to solve problems with score in the game, modifying the output of C++ to print it with two decimal places after the comma with `precision()` and `fixed`.
  
  In the second project, Hangman, we delved deeply into the new types of C++ by using `string`, which are values ​​like words or phrases that help us deal with this category of data. We also used the `map` to serve as a dictionary, allowing us to store the guessed and unguessed variables as characters instead of numbers.
  
  We even saw the dynamic allocation vector vector, which also receives a generic variable, such as when we store the wrong guesses made by the user, we insert `char` inside. When we wanted to read a file and store it inside a vector, we wrote vector<`string`>.
  
  We iterated over `string` or vector in C++11 with different repetition loops, which makes reading the code easier and more concise. Instead of generating an index that goes through all the positions of a vector, we reduced it only to the variable to be iterated directly in the letter that is part of the secret word.
  
  Towards the end of the project, we learned how to deal with external files; how to read them with `ifstream` and write them with `ofstream`, which have syntaxes very similar to `cin` and `cout` respectively.

</details>

![image](https://github.com/parisi18/all-cpp/assets/66031419/4a199280-3e26-4f08-b83b-0ba4f5c8b132)

![image](https://github.com/parisi18/all-cpp/assets/66031419/f3565fff-dd00-43e2-9dda-ef7dfae5bfb7)

</details>

<details>
<summary>C++ Journey 2/7 ✔️</summary>

## Para rodar o jogo da forca 🇧🇷 // To run the hangman game! 🇺🇸 ▶️
```
g++ Step2_advancing_the_lang/hangmanGame/*.cpp -o hangman.out && ./hangman.out 
```

<details>
<summary>AVANÇANDO COM C++: ENTENDA MELHOR A LINGUAGEM 🇧🇷</summary> 
  Parabéns por terem finalizado esse treinamento de C++!  

  Primeiro nós vimos como trabalhar de forma mais profissional, invés de ter todos os arquivos aqui, todas as funções no mesmo arquivo, nós começamos a separar em arquivos diferentes. E nesse processo, nós entendemos o motivo para termos `arquivos de cabeçalho`, nós entendemos como funciona o processo de `compilação` e de `linking`, nós conhecemos algumas estrutura como `instruções` e `pré-processamento`.

  Nós utilizamos o `pragma once`, então nós começamos a entender por baixo dos panos como as coisas funcionam, só que para não precisar ter esse trabalho todo, nós começamos a utilizar uma `IDE`. No meu caso, utilizei a `CodeLite` no Ubuntu.

  Enfim, nós aprendemos a trabalhar de forma mais profissional e nós começamos a conhecer funcionalidades do C++, como `static` para manter um valor, um `símbolo dentro daquela unidade de tradução`, da `translation unit`.

  Nós aprendemos sobre referências, aprendemos sobre referências `constantes`, vimos sobre `namespaces`, `resolução de namespaces`, `gerenciamento de memória`.

</details>

<details>
<summary>MOVING FORWARD WITH C++: UNDERSTAND THE LANGUAGE BETTER 🇺🇸</summary> 
  Congratulations on completing this C++ training!  
  
  First, we learned how to work more professionally. Instead of having all the files here, all the functions in the same file, we started to separate them into different files. And in this process, we understood the reason for having `header files`, we understood how the `compilation` and `linking` process works, we got to know some structures like instructions and preprocessing.
  
  We used `pragma once`, so we started to understand how things work under the hood, but to avoid having all this work, we started using an `IDE`. In my case, I used `CodeLite` on Ubuntu.
  
  In the end, we learned to work more professionally and we started to get to know C++ features, like `static` to keep a value, a `symbol within that translation unit`.
  
  We learned about references, learned about `const` references, saw about `namespaces`, `namespace resolution`, `memory management`.
</details>

![image](https://github.com/parisi18/all-cpp/assets/66031419/da8b3283-97ac-479d-8848-c46fe33fa396)

![image](https://github.com/parisi18/all-cpp/assets/66031419/103ea98b-2c03-4460-a80f-8983dd8696aa)


</details>

<details>
<summary>C++ Journey 3/7 ✔️</summary>

## Crie sua conta no banco! 🇧🇷 // Create your bank account! 🇺🇸 ▶️
```
g++ Step3_oop/Bank/src/*.cpp -o Step3_oop/Bank/src/bank.o && ./Step3_oop/Bank/src/bank.o
```

⚠️ Adicionei por conta própria as classes `Atm` e `AccountManager`, para que os conceitos pudessem ser utilizados de forma mais dinâmica. Fique a vontade para testar. 🇧🇷

⚠️ I added the `Atm` and `AccountManager` classes on my own, so that the concepts could be used more dynamically. Feel free to test it out. 🇺🇸

<details>
<summary>ORIENTAÇÃO A OBJETOS COM C++: CLASSES, MÉTODOS E ATRIBUTOS 🇧🇷</summary> 
Parabéns por ter chegado ao final desse treinamento em que nós vimos sobre `programação orientada a objetos` usando C++!   

A `programação orientada a objetos` é um paradigma bastante completo e complexo. Mas, vamos recapitular o que nós vimos nesse treinamento. Nós começamos falando sobre um `cenário de um banco`, então nós precisávamos `criar uma conta`, e criando a conta, nós vimos diferenças entre `struct` e `class`, então nós começamos a utilizar `classes`.

Falamos sobre 2 de alguns dos pilares da orientação a objetos, sobre `abstração`, que basicamente consiste em `trazer algo do mundo real`, de forma mais abstrata, mais concisa, e trazer para o sistema. E também sobre `encapsulamento`, onde nós `limitamos acesso` as nossas propriedades, `aos nossos atributos`. Então, por exemplo, para alguém alterar o saldo, precisa sacar ou depositar.

Então nós começamos a entender esses conceitos, e para isso nós aprendemos o que são `atributos`, o que são `métodos`, como separar entre `membros privados e públicos`. Falando em membros, nós também aprendemos sobre `membros estáticos`, que não pertencem a instâncias, mas sim, a classe em si, como se fossem variáveis globais, mas de uma classe.

Então nós fomos evoluindo e falamos bastante sobre `construtores`, vimos como ter vários construtores, sobre construtor padrão, falamos sobre a `lista de inicialização`, depois nós voltamos a falar um pouco mais sobre outros tipos de métodos, como os métodos `destrutores`, qual é a sua utilidade, nós vimos um exemplo prático.

Nós falamos sobre `composição de objetos`, um pouco de performance, que é um assunto que eu gosto muito, conhecemos a `conversão implícita` e, inclusive, falamos sobre o `explicit` do construtor.

</details>

<details>
<summary>OBJECT-ORIENTED PROGRAMMING WITH C++: CLASSES, METHODS, AND ATTRIBUTES 🇺🇸</summary> 
Congratulations on completing this training where we learned about `object-oriented programming` using C++!  

`Object-oriented programming` is a quite comprehensive and complex paradigm. But, let's recap what we covered in this training. We started by discussing a `bank scenario`, then we needed to `create an account`, and in creating the account, we saw the differences between `struct` and `class`, so we started using `classes`.

We talked about 2 of the pillars of object orientation, about `abstraction`, which basically consists of `bringing something from the real world`, in a more abstract, concise way, and bringing it into the system. And also about `encapsulation`, where we `limit access` to our properties, `to our attributes`. So, for example, for someone to change the balance, they need to withdraw or deposit.

Then we started to understand these concepts, and for that, we learned what `attributes` are, what `methods` are, how to separate between `private and public members`. Speaking of members, we also learned about `static members`, which do not belong to instances, but rather to the class itself, as if they were global variables, but from a class.

So we evolved and talked a lot about `constructors`, saw how to have several constructors, about the default constructor, talked about the `initialization list`, then we returned to talk a little more about other types of methods, like `destructors`, what their usefulness is, we saw a practical example.

We talked about `object composition`, a bit about performance, which is a subject I really like, we learned about `implicit conversion`, and even talked about the `explicit` of the constructor.
</details>

![image](https://github.com/parisi18/all-cpp/assets/66031419/70d0d831-21c0-41ea-b36f-70eaa607702b)

![image](https://github.com/parisi18/all-cpp/assets/66031419/77acba12-2d45-46e4-ba82-b11de9939ce5)

</details>


<details>
<summary>C++ Journey 4/7 ✔️</summary>

## Use a Simulação de ATM! 🇧🇷 // Use the Fake ATM! 🇺🇸 ▶️
```
g++ Step4_oop_inheritance/src/*.cpp -o Step4_oop_inheritance/src/bank.o && ./Step4_oop_inheritance/src/bank.o
```

⚠️ Adicionei por conta própria os `namespaces`: `AccountType`, `AtmOption` e `Login`, para facilitar na compreensão de algumas decisões. Além disso, os ensinamentos do curso foram adaptados ao meu exemplo! 🇧🇷

⚠️ I added the `namespaces`: `AccountType`, `AtmOption`, and `Login` on my own, to facilitate the understanding of some decisions. Furthermore, the teachings of the course were adapted to my example! 🇺🇸

<details>
<summary>ORIENTAÇÃO A OBJETOS COM C++: TRABALHANDO COM HERANÇA 🇧🇷 </summary>  
Congratulations on completing this Object-Oriented Programming with C++ training.

We learned about `inheritance`. For example, we have a `SavingsAccount` that inherits from `Account`. We understood what inheritance is, what it is for, etc.

And of course, we learned the syntax, the `:public`, and the `name of the class we want to inherit from`. We talked about `virtual methods`, `override`, `final classes`, `Polymorphism`, thus covering the `four pillars of object orientation`. We talked about `multiple inheritance`, implemented multiple inheritance. For example, in the account holder, where it is a person and is also something authenticable. We talked about how to `manage resources through multiple inheritance`. In the end, we understood the real purpose of Polymorphism, where we can have someone who is authenticable; be it a client, a manager, regardless of anything, it will work. An account, being a checking or savings account, will work. We saw some `good programming practices` during development, especially of the account. It was here that we began to understand the idea of `pure virtual methods`, `abstract classes`.

</details>

<details>
<summary>OBJECT-ORIENTED PROGRAMMING WITH C++: WORKING WITH INHERITANCE  🇺🇸</summary>  
Parabéns por terem chegado ao final desse treinamento de Programação Orientada Objeto com C++.

Aprendemos sobre a tal `herança`. Então nós temos aqui, por exemplo, uma `ContaPopanca` que herda de `Conta`. Então nós entendemos o que é herança, para que serve, etc.

E é claro, aprendemos a sintaxe, esse `:public`, e o `nome da classe que queremos herdar`. Falamos sobre `métodos virtuais`, `override`, `classes finais`, `Polimorfismo`, então, fechamos os `quatro pilares da orientação objetos`. Falamos sobre `herança múltipla`, implementamos herança múltipla. Por exemplo, em titular, em que é uma pessoa e é algo autenticavel também. Falamos sobre como `gerenciar recursos através de herança múltipla`. No final das contas entendemos o real propósito do Polimorfismo, onde a gente pode ter alguém que seja autenticavel; seja cliente, seja gerente, independente de qualquer coisa, isso vai funcionar. Uma conta, sendo corrente ou poupança, vai funcionar. Vimos algumas `boas práticas de programação` durante o desenvolvimento, principalmente da conta. Foi aqui que começamos a entender a ideia de `métodos puramente virtuais`, `classes abstratas`.

</details>


![image](https://github.com/parisi18/all-cpp/assets/66031419/917f6a5a-07d5-4020-a595-a9034bd4a2c5)

![image](https://github.com/parisi18/all-cpp/assets/66031419/8da01464-6386-41a6-b870-8f0af8af3a26)

</details>

<details>
<summary>C++ Journey 5/7 ✔️</summary>

## Use a Simulação de ATM! 🇧🇷 // Use the Fake ATM! 🇺🇸 ▶️
```
g++ Step5_enum_template_and_more/src/*.cpp -o Step5_enum_template_and_more/src/atm.o && ./Step5_enum_template_and_more/src/atm.o
```

<details>
<summary>AVANÇANDO COM C++: ENUM, TEMPLATES E MAIS RECURSOS 🇧🇷</summary>  
  
Parabéns por chegar ao final deste treinamento, onde avançamos um pouco os nossos conhecimentos de C++! 

Nós começamos esse treinamento com a necessidade de representarmos o dia da semana de pagamento de um funcionário. Nós vimos algumas opções e conhecemos `enum`, `enum class`, falamos sobre escopo, etc.

Depois fomos adicionar algumas funcionalidades aqui na conta. Então permitimos que, por exemplo, utilizando um `operador de soma com atribuição` nós pudéssemos `depositar valores` nessa conta.

Com isso, nós aprendemos sobre a `sobrecarga de operadores`. Enquanto fazíamos isso, nós conhecemos também o conceito de `friend functions` e através desse avanço de conhecimento, nós conhecemos alguns tipos diferentes, como `variant`, `any`, `optional` e `pair`. Então aprendemos como lidar com alguns `tipos mais complexos do C++`.

Falando desses tipos mais complexos, nós entendemos essa sintaxe interessante aqui, que são `templates`. Nós aprendemos a criar uma `template function`, uma `template class`. Vimos como ter tipos como parâmetros e até valores na hora de pedirmos para o compilador gerar código para nós.

No final, vimos que isso pode acabar sendo um tiro no pé, pode ser um problema. Por exemplo: ao tornar a conta um template, eu precisaria fazer com que todas essas funções que recebem uma conta também fossem um template, então teríamos um grande problema. No nosso caso, vimos que não vale a pena, mas nós aprendemos a utilizar, nós vimos como utilizar.

Não só templates, mas C++ como uma linguagem em si, ainda tem muito mais coisa para estudarmos, tem muito mais coisa para aprendermos; mas eu espero que você tenha tirado um bom proveito desse treinamento.

</details>

<details>
<summary>MOVING FORWARD WITH C++: ENUM, TEMPLATES AND MORE RESOURCES 🇺🇸</summary>  

Congratulations on completing this training, where we advanced our C++ knowledge a bit! 

We started this training with the need to represent the payday of an employee. We saw some options and learned about `enum`, `enum class`, talked about scope, etc.

Then we added some functionalities to the account. So, for example, by using a `plus-equals operator`, we could `deposit values` into this account.

With that, we learned about `operator overloading`. While doing this, we also learned about the concept of `friend functions` and through this advancement of knowledge, we learned about some different types, such as `variant`, `any`, `optional`, and `pair`. So, we learned how to handle some `more complex C++ types`.

Speaking of these more complex types, we understood this interesting syntax here, which are `templates`. We learned to create a `template function`, a `template class`. We saw how to have types as parameters and even values when asking the compiler to generate code for us.

In the end, we saw that this can end up leading to complications. For example: by making the account a template, I would need to make all these functions that receive an account also templates, so we would have a big problem. In our case, we saw that it is not worth it, but we learned how to use it, we saw how to use it.

Not only templates, but C++ as a language itself, still has a lot more to study, a lot more to learn; but I hope you have taken good advantage of this training.

</details>

![image](https://github.com/parisi18/all-cpp/assets/66031419/b89d3b86-2c02-424f-a70a-7a2255fb3098)

![image](https://github.com/parisi18/all-cpp/assets/66031419/1b453964-8a41-460e-a658-6f24036a3757)

</details>

<details>
<summary>C++ Journey 6/7 ✔️</summary>

## Rode os testes com Catch2! 🇧🇷 // Run the tests using Catch2! 🇺🇸 ▶️

## Testes do Leilão 🇧🇷 // Auction tests 🇺🇸:  
```
g++ -I Step6_tdd_catch2/Auction/include/ Step6_tdd_catch2/Auction/src/* Step6_tdd_catch2/Auction/tests/main-test.cpp Step6_tdd_catch2/Auction/tests/test-auction.cpp -o Step6_tdd_catch2/Auction/tests/test-auction.o && ./Step6_tdd_catch2/Auction/tests/test-auction.o -s
```

## Testes do Avalaiador 🇧🇷 // Evaluator tests  🇺🇸:
```
g++ -I Step6_tdd_catch2/Auction/include/ Step6_tdd_catch2/Auction/src/* Step6_tdd_catch2/Auction/tests/main-test.cpp Step6_tdd_catch2/Auction/tests/test-evaluator.cpp -o Step6_tdd_catch2/Auction/tests/test-evaluator.o && ./Step6_tdd_catch2/Auction/tests/test-evaluator.o -s
```

## Testes do Usuário 🇧🇷 // User tests  🇺🇸:
```
g++ -I Step6_tdd_catch2/Auction/include/ Step6_tdd_catch2/Auction/src/* Step6_tdd_catch2/Auction/tests/main-test.cpp Step6_tdd_catch2/Auction/tests/test-user.cpp -o Step6_tdd_catch2/Auction/tests/test-user.o && ./Step6_tdd_catch2/Auction/tests/test-user.o -s
```

<details>
<summary>C++ E TDD: TESTES DE UNIDADE COM CATCH2 🇧🇷</summary>  
  
Parabéns por terem chegado ao final desse treinamento tão importante, que é o de testes automatizados usando o C++!

Nesse treinamento nós aprendemos bastante coisas, mas eu quero focar nessa imagem que durante o treinamento em si nem olhamos, só vimos na introdução. Nós praticamos durante esse treinamento `testes de unidade`.

![image](https://github.com/parisi18/all-cpp/assets/66031419/00d5d57c-a14e-4928-a90e-d19642c3296b)


O que significa um `teste de unidade`? É um teste que simplesmente `testa a menor unidade possível`. Por exemplo: o método para avaliar de um leilão, o método para recuperar primeiro nome de usuário, o método para receber lance de um leilão.

Ou seja, a menor unidade possível. Ele `testa o mínimo` sem escrever em arquivo, sem acessar banco de dados, sem juntar várias classes; o mínimo possível. Existem técnicas para garantirmos que não misturemos classes durante testes de unidade, mas isso pode ficar para um assunto futuro. O ponto é: praticamos aqui os testes de unidade.

E se você der uma olhada nesse exemplo aqui, nessa imagem, tem algumas coisas interessantes. Essa aqui é a famosa `pirâmide de testes`.
Na pirâmide de testes nós temos na base `testes de unidade` porque eles `são muito rápidos` e são `simples de escrever`, como vimos aqui, e eles `geram bastante valor`. Para quem conhece o desenho do Papa-Léguas e Coiote, nós temos aqui embaixo porque é rápido, conseguimos executar muitos testes de unidade em um pequeno espaço de tempo.

`Testes de integração` seriam testes onde batemos em um banco de dados, escrevemos em um arquivo, chamamos um API externo e chamamos um outro programa, ou alguma coisa do tipo. Ou seja, um teste onde nosso código se integra com outro.

Ele é um pouco mais difícil de escrever, é `um pouco mais demorado` porque `depende de coisas externas` e é `mais propenso à falha`. Porque se o banco de dados estiver fora do ar ou se o arquivo não puder ser escrito, o teste vai falhar.

Já um `teste end-to-end`, é o que é chamado de `teste ponta a ponta`. Se estamos criando uma aplicação desktop, por exemplo, um Word da vida, um teste end-to-end significa abrir essa aplicação pronta e testar, clicar nos botões, ver o que acontece. Ou seja, é um `teste na perspectiva do usuário`, de quem vai usar aquele programa. Além de ser `muito lento`, ele também é `muito propenso às falhas`. Se um botão mudar de lugar, o teste falha etc.

Por isso essa pirâmide é assim, você deve ter muitos testes de unidade, ter alguns teste de integração e testes end-to-end e testes de ponta a ponta só para os mais importantes para o seu sistema. Seja seu jogo, sua aplicação desktop etc.

Com isso, nós encerramos esse treinamento. De novo, vimos bastante coisas, falamos sobre testes em si e o que são. Falamos sobre a ferramenta `Catch2`, que é uma das inúmeras ferramentas de testes automatizados em C++. Falamos sobre como organizarmos nossos testes `generator`, `sections` e `test cases`.

Vimos como `otimizarmos a compilação do nosso teste` separando em arquivos separados. Aprendemos sobre a `técnica de TDD`, que consiste em `criarmos o teste antes do código`. Praticamos bastante isso tudo.

</details>

<details>
<summary>C++ AND TDD: UNIT TESTS WITH CATCH2  🇺🇸</summary>  

Congratulations on reaching the end of this important training on automated testing using C++!

In this training, we learned a lot, but I want to focus on this image that we didn't really look at during the training itself, only in the introduction. During this training, we practiced `unit tests`.

![image](https://github.com/parisi18/all-cpp/assets/66031419/00d5d57c-a14e-4928-a90e-d19642c3296b)

What does a `unit test` mean? It is a test that simply `tests the smallest possible unit`. For example: the method to evaluate an auction, the method to retrieve the first name of a user, the method to place a bid in an auction.

In other words, the smallest possible unit. It `tests the minimum` without writing to a file, without accessing a database, without combining multiple classes; the minimum possible. There are techniques to ensure that we do not mix classes during unit tests, but that can be a topic for the future. The point is: we practiced unit tests here.

And if you take a look at this example here, in this image, there are some interesting things. This here is the famous `testing pyramid`. 

In the testing pyramid, we have `unit tests` at the base because they are `very fast` and are `simple to write`, as we saw here, and they `generate a lot of value`. For those who know the Road Runner and Coyote cartoon, we have them at the bottom because it’s fast; we can run many unit tests in a short period of time.

`Integration tests` are tests where we hit a database, write to a file, call an external API, or call another program, or something like that. In other words, a test where our code integrates with another.

It is a bit more difficult to write, a `bit more time-consuming` because it `depends on external things` and is `more prone to failure`. Because if the database is down or if the file cannot be written, the test will fail.

An `end-to-end test`, also known as a `point-to-point test`, is when we are creating a desktop application, for example, something like Word, an end-to-end test means opening this finished application and testing it, clicking the buttons, seeing what happens. In other words, it is a `test from the user's perspective`, of who will use that program. Besides being `very slow`, it is also `very prone to failure`. If a button changes place, the test fails, etc.

That’s why this pyramid is like this: you should have many unit tests, some integration tests, and end-to-end tests only for the most important aspects of your system, whether it’s your game, your desktop application, etc.

With this, we conclude this training. Again, we covered a lot of things, we talked about tests themselves and what they are. We talked about the tool `Catch2`, which is one of the many automated testing tools in C++. We talked about how to organize our tests with `generators`, `sections`, and `test cases`.

We saw how to `optimize the compilation of our tests` by separating them into different files. We learned about the `TDD technique`, which consists of `creating the test before the code`. We practiced a lot of this.

---
</details>

![image](https://github.com/parisi18/all-cpp/assets/66031419/2161be77-efde-40c5-bd5e-ec69693f361b)

![image](https://github.com/parisi18/all-cpp/assets/66031419/26f0dd35-3978-4365-8264-d94f356f50ec)


</details>





