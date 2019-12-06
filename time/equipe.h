#ifndef EQUIPE_H
#define EQUIPE_H

#include "atleta.h"
#include <algorithm>
#include <QFile>
#include <QStringList>
#include <QDebug>
#include <QVector>
#include <iostream>
#include <ctime>
#include <cstdlib>

class Equipe
{
private:
    QVector<Atleta>equipe;
public:
    Equipe();
    void limparTabela();
    void eraseNome( QString txt);
    void eraseIdade( QString num);
    void Sortear();
    void ordenarPorIdade();
    double getMaioridade();
    double getMenoridade();
    double getMedia();
    void inserirAluno(Atleta a);
    bool atletaExiste (QString a);
    void ordenarPorNome();
    int size();
    Atleta operator[](int indice);
    void salvarDados(QString file);
    void carregarDados(QString file);
};
bool compararPorIdade(Atleta a, Atleta b);
bool compararPorIdade2(Atleta a, Atleta b);
bool compararPorNome(Atleta a, Atleta b);

#endif // EQUIPE_H
