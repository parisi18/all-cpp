ESSA É A MINHA JORNADA C++ 🇧🇷 // THIS IS MY C++ JOURNEY! 🇺🇸

<details>
<summary>C++ Journey 1/7 ✔️</summary>

Para rodar o jogo da advinhação 🇧🇷 // To run the guessing game! 🇺🇸 ▶️
```
g++ Step1_knowing_the_language/guessingGame/guessingGame.cpp -o  Step1_knowing_the_language/guessingGame/guessingGame && ./Step1_knowing_the_language/guessingGame/guessingGame
```

Para rodar o jogo da forca 🇧🇷 // To run the hangman game! 🇺🇸 ▶️
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

Para rodar o jogo da forca 🇧🇷 // To run the hangman game! 🇺🇸 ▶️
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

Crie sua conta no banco! 🇧🇷 // Create your bank account! 🇺🇸 ▶️
```
g++ Step3_oop/Bank/src/*.cpp -o Step3_oop/Bank/src/bank.o && ./Step3_oop/Bank/src/bank.o
```

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
