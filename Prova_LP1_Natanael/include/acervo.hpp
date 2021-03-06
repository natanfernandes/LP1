#ifndef ACERVO_H
#define ACERVO_H
#include "produto.hpp"
#include "livro.hpp"
#include "cd.hpp"
#include "dvd.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Acervo
{
  protected:
    std::vector<Produto *> vetor;
    int qtCD;
    int qtLivros;
    int qtDVD;

  public:
    Acervo();
    ~Acervo();
    void setQtLivros();
    void setQtLivros2();
    int getQtLivros();
    void setQtCD();
    void setQtCD2();
    int getQtCD();
    void setQtDVD();
    void setQtDVD2();
    int getQtDVD();
    void inserirMidiaLivro(Livro *item);
    void inserirMidiaCD(CD *item);
    void inserirMidiaDVD(DVD *item);
    void verAcervo();
    void removerItem(string nome, string tipo);
    void verEstatisticas();
    void editarItemLivro(string nome, string tipo,int atributo);
    void editarItemCD(string nome, string tipo,int atributo);
    void editarItemDVD(string nome, string tipo,int atributo);

    void verificarItem(Produto *item);
};

#endif