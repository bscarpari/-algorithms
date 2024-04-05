#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*
    1. Crie uma estrutura chamada Pessoa contendo os campos nome, idade e altura.
    2. Declare uma variável do tipo Pessoa e atribua valores aos seus campos.
    3. Escreva uma função que receba uma variável do tipo Pessoa como parâmetro e imprima seus dados.
    4. Crie uma função que receba um vetor de Pessoa e retorne a media das idades.
    5. Defina uma estrutura chamada Livro contendo os campos título, autor, ano e preço.
    6. Declare um vetor de 5 elementos do tipo Livro e inicialize seus valores.
    7. Escreva uma função que receba um vetor de Livro e imprima todos os livros cujo preço seja maior que 50.
    8. Crie uma função que receba um vetor de Livro e retorne o livro mais caro.
    9. Implemente uma função que receba um vetor de Livro e retorne o total gasto na compra de todos os livros.
    10. Defina uma estrutura chamada Data contendo os campos dia, mês e ano.
    11. Declare uma função que compare duas datas e retorne verdadeiro se a primeira data for mais recente que a segunda.
    12. Escreva uma função que calcule a diferença em anos entre duas datas.
    13. Crie uma estrutura chamada Endereço contendo os campos rua, número, cidade e cep.
    14. Implemente uma função que compare dois endereços e retorne verdadeiro se forem iguais.
    15. Declare uma função que receba um endereço e imprima seus dados formatados.
    16. Defina uma estrutura chamada Aluno contendo os campos nome, matrícula, nota1, nota2 e nota3.
    17. Escreva uma função que calcule a média das notas de um aluno.
    18. Implemente uma função que receba um vetor de alunos e retorne o aluno com a maior média.
    19. Crie uma função que receba um vetor de alunos e retorne a média da turma.
*/

/* Structures */
struct Person {
    char name[60];
    int age;
    int weight;
};

struct Student {
    char name[60];
    char enrollment[24];
    double note1;
    double note2;
    double note3;    
};


struct Book {
    char title[255];
    char author[60];
    int year;
    double price;
};

struct Data {
    int day;
    int month;
    int year;
};

struct Address {
    char street[255];
    int number;
    char city[255];
    int zip;
};

/* Methods */
void printPerson(struct Person s) {
    printf("Person = { Name: %s, Age: %d, Weight: %d }\n", s.name, s.age, s.weight);
}

double calcAvgAgeFromPersons(struct Person persons[]) {
    int length = sizeof(persons) / sizeof(int); 
    int sum = 0;

    for(int i = 0; i < length; i++)  
        sum += persons[i].age;
    
    return (double) sum / length;
}

void printBooks(struct Book books[]) {
    int length = sizeof(books) / sizeof(books[0]);

    for(int i = 0; i < length; i++) {
        if(books[i].price > 50) 
            printf("Book = { Title: %s, Author: %s, Year: %d, Price: %.2lf } \n", books[i].title, books[i].author, books[i].year, books[i].price);
    }
}

void mostExpensiveBook(struct Book books[]) {
    int length = sizeof(books) / sizeof(books[0]);
    double max = 0;

    for(int i = 0; i < length; i++) {
        if(books[i].price > max) 
            max = books[i].price;
    }

    printf("O livro mais caro custa %.2lf\n", max);
}

void calcTheBoughtPrice(struct Book books[]) {
    int length = sizeof(books) / sizeof(books[0]);
    double price = 0;

    for(int i = 0; i < length; i++)
        price += books[i].price;
    
    printf("O preco de compra e de %.2lf\n", price);
}

bool compareBetweenDates(struct Data d1, struct Data d2) {
    return (d1.year > d2.year) || 
           (d1.year == d2.year && d1.month > d2.month) || 
           (d1.year == d2.year && d1.month == d2.month && d1.day > d2.day);
}

int diffBetweenDates(struct Data d1, struct Data d2) {
    int diff = d1.year - d2.year;

    if(d1.month < d2.month || (d1.month == d2.month && d1.day < d2.day))
        diff--;

    return diff;
}

bool compareBetweenAddresses(struct Address a1, struct Address a2) {
    return strcmp(a1.street, a2.street) == 0 && 
           a1.number == a2.number && 
           strcmp(a1.city, a2.city) == 0 && 
           a1.zip == a2.zip;
}

void printAddress(struct Address a) {
    printf("Address = { Street: %s, Number: %d, City: %s, Zip: %d }\n", a.street, a.number, a.city, a.zip);
}

double calcAvgNotesFromStudents(struct Student s) {
    return (s.note1 + s.note2 + s.note3) / 3;
}

struct Student bestStudent(struct Student students[]) {
    int length = sizeof(students) / sizeof(students[0]);
    struct Student best = students[0];

    for (int i = 0; i < length; i++) {
        if(calcAvgNotesFromStudents(students[i]) > calcAvgNotesFromStudents(best)) {
            best = students[i];
        }
    }

    return best;
}

double calcAvgClass(struct Student students[]) {
    int length = sizeof(students) / sizeof(students[0]);
    double sum = 0;

    for(int i = 0; i < length; i++) {
        sum += calcAvgNotesFromStudents(students[i]);
    }

    return sum / length;
}

int main() {
    struct Person p1;

    strcpy(p1.name, "Maria");
    p1.age = 21;
    p1.weight = 72;

    printPerson(p1);

    struct Book books[5];

    for(int i = 0; i < 5; i++) {
        strcpy(books[i].title, "Livro");
        strcpy(books[i].author, "Autor");
        books[i].year = 2020 + i;
        books[i].price = 10 + i * 10;
    }

    printBooks(books);
    mostExpensiveBook(books);
    calcTheBoughtPrice(books);

    struct Data d1, d2;

    d1.day = 10;
    d1.month = 10;
    d1.year = 2020;

    d2.day = 10;
    d2.month = 10;
    d2.year = 2021;
    
    printf("Primeira data e mais recente que a segunda? %d\n", compareBetweenDates(d1, d2));
    printf("A diferenca entre as datas e de: %d\n", diffBetweenDates(d1, d2));

    struct Address a1, a2;

    strcpy(a1.street, "Rua 1");
    a1.number = 10;
    strcpy(a1.city, "Cidade 1");
    a1.zip = 123456;

    strcpy(a2.street, "Rua 1");
    a2.number = 10;
    strcpy(a2.city, "Cidade 1");
    a2.zip = 123456;

    printf("Os enderecos sao iguais? %d\n", compareBetweenAddresses(a1, a2));
    printAddress(a1);

    struct Student s1, s2;

    strcpy(s1.name, "Bruno");
    strcpy(s1.enrollment, "20232GR.ADS0013");
    s1.note1 = 9;
    s1.note2 = 9;
    s1.note3 = 9;


    strcpy(s2.name, "Maria");
    strcpy(s2.enrollment, "20231GR.ADS0018");
    s2.note1 = 7;
    s2.note2 = 6;
    s2.note3 = 7;

    struct Student students[2] = {s1, s2};

    printf("A media do aluno %s e %.2lf\n", s1.name, calcAvgNotesFromStudents(s1));
    printf("O aluno com a maior media e %s\n", bestStudent(students).name);
    // printf("A media da turma e %.2lf\n", calcAvgClass(students)); // NÃO TÁ RENDERIZANDO A MÉDIA CORRETAMENTE
    double avgClass = calcAvgClass(students); // Assuming calcAvgClass function takes an array of students and its size as parameters
    printf("A media da turma e %.2lf\n", avgClass);

    return 0;
}

