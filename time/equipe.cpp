#include "equipe.h"
int myrandom (int i) { return std::rand()%i;}
Equipe::Equipe()
{

}

void Equipe::limparTabela()
{
    equipe.clear();
}
void Equipe::eraseNome(QString txt)
{
    for(int i=0; i< equipe.size();i++){
        if(equipe[i].getnome()==txt){
            equipe.erase((equipe.begin()+i));
        }
    }
}
void Equipe::eraseIdade(QString num)
{
    for(int i=0; i< equipe.size();i++){
        if(equipe[i].getidade()- num.toDouble()<0.1){
            equipe.erase((equipe.begin()+i));
        }
    }
}
void Equipe::Sortear()
{
    srand ( unsigned ( std::time(0) ) );
    std::random_shuffle ( equipe.begin(), equipe.end() );
    std::random_shuffle ( equipe.begin(), equipe.end(), myrandom);
}

void Equipe::ordenarPorIdade()
{
    std::sort(equipe.begin(),equipe.end(), [](Atleta a, Atleta b){
        return a.getidade()<b.getidade();});
}

double Equipe::getMaioridade()
{

    Atleta *a = std::max_element(equipe.begin(),equipe.end(),compararPorIdade);
    return a->getidade();

}

double Equipe::getMenoridade()
{
    Atleta *a = std::min_element(equipe.begin(),equipe.end(),compararPorIdade);
    return a->getidade();
}

double Equipe::getMedia()
{
    double media = 0;
    for(auto e : equipe){
        media+=e.getidade();
    }
    return media/equipe.size();
}

void Equipe::inserirAluno(Atleta a)
{
    equipe.push_back(a);
}

bool Equipe::atletaExiste(QString nome)
{
    if(equipe.size() >= 1){
        for(int i = 0; i < equipe.size(); i++){
            if(nome == equipe[i].getnome()){
                return 1;
            }
        }
    }
    return 0;
}
int Equipe::size()
{
    return equipe.size();
}

Atleta Equipe::operator[](int indice)
{
    return equipe[indice];
}

bool compararPorIdade(Atleta a, Atleta b)
{
    return a.getidade()<b.getidade();
}
void Equipe::ordenarPorNome()
{
    std::sort(equipe.begin(),equipe.end(), [](Atleta a, Atleta b){
        return a.getnome()<b.getnome();});

}
void Equipe::salvarDados(QString file)
{
    QFile arquivo(file);

    arquivo.open(QIODevice::WriteOnly);

    for(auto a:equipe){
        QString linha = a.getnome() + ";" + QString::number(a.getidade()) + "\n";
        arquivo.write(linha.toLocal8Bit());
    }
    arquivo.close();

}

void Equipe::carregarDados(QString file)
{


    QFile arquivo(file);
    arquivo.open(QIODevice::ReadOnly);

    QString linha;
    QStringList dados;
    while(!arquivo.atEnd()){
        Atleta temp;
        linha = arquivo.readLine();
        dados = linha.split(";");
        temp.setnome(dados[0]);
        temp.setidade(dados[1].toDouble());
        inserirAluno(temp);
    }
    arquivo.close();
}
