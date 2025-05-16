#include <iostream>
#include <string>
using namespace std;

struct Livro {
    string titulo;
    string autor;
    int anoPublicacao;
};

int main() {
    Livro livro1 = {"O Senhor dos Anéis", "J.R.R. Tolkien", 1954};
    Livro livro2 = {"1984", "George Orwell", 1949};

    cout << "Livro 1:\n";
    cout << "Título: " << livro1.titulo << "\nAutor: " << livro1.autor << "\nAno: " << livro1.anoPublicacao << endl;

    cout << "\nLivro 2:\n";
    cout << "Título: " << livro2.titulo << "\nAutor: " << livro2.autor << "\nAno: " << livro2.anoPublicacao << endl;

    return 0;
}
