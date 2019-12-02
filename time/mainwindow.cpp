#include "mainwindow.h"
#include "ui_mainwindow.h"


Atleta atleta;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionCarregar_triggered()
{

    QString filename;
    filename = QFileDialog::getOpenFileName(this, "Abrir Arquivo","","*.csv");

    equipe.carregarDados(filename);

    for(int i=0;i<equipe.size();i++){
        ui->tabela->insertRow(i);
        inserirNaTabela(equipe[i],i);
    }

}
void MainWindow::on_actionSalvar_triggered()
{
    QString filename;
    filename = QFileDialog::getSaveFileName(this,"Salvar Arquivo","","*.csv");
    equipe.salvarDados(filename);
}
void MainWindow::on_btnCadastrar_clicked()
{    
    QString temp = ui->inputNome->text();
    if(ui->inputNome->text() !="" and ui->inputIdade->text() != ""){
        atleta.setnome(temp);
        atleta.setidade(ui->inputIdade->text().toDouble());
        int quantidade_linhas = ui->tabela->rowCount();
        if(equipe.atletaExiste(ui->inputNome->text()) == 0){
            equipe.inserirAluno(atleta);
            ui->tabela->insertRow(quantidade_linhas);
            inserirNaTabela(atleta,quantidade_linhas);
            ui->inputNome->clear();
            ui->inputIdade->clear();
        }
        else QMessageBox::warning(this,"ERRO","O atleta já está cadastrado");
        atualizarEstatisticas();
    }else QMessageBox::critical(this,"ERRO","Parâmetro vazio.");
}
void MainWindow::on_btnIdade_clicked()
{
    equipe.ordenarPorIdade();
    ui->tabela->clearContents();
    for(int i = 0; i<equipe.size();i++){
        inserirNaTabela(equipe[i],i);
    }
}

void MainWindow::on_btnNome_clicked()
{
    equipe.ordenarPorNome();
    ui->tabela->clearContents();
    for(int i=0; i<equipe.size();i++){
        inserirNaTabela(equipe[i],i);
    }
}
void MainWindow::atualizarEstatisticas()
{
    ui->outMaiorIdade->setText(QString::number(equipe.getMaioridade()));
    ui->outMenorIdade->setText(QString::number(equipe.getMenoridade()));
    ui->outMediaIdade->setText(QString::number(equipe.getMedia()));
}
void MainWindow::inserirNaTabela(Atleta a, int linha)
{
    ui->tabela->setItem(linha,0,new QTableWidgetItem(a.getnome()));
    ui->tabela->setItem(linha,1,new QTableWidgetItem(QString::number(a.getidade())));
    ui->tabela->setItem(linha,2,new QTableWidgetItem(a.getcategoria()));
}

void MainWindow::on_Sortear_clicked()
{
    ui->tabela->clearContents();
    equipe.Sortear();
    for(int i = 0; i<equipe.size();i++){
        inserirNaTabela(equipe[i],i);
    }
}

void MainWindow::on_actionLimpar_Tabela_triggered()
{
    int qtdeLinhas = ui->tabela->rowCount();
    for(int i = 0; i < qtdeLinhas ; i++)
        ui->tabela->removeRow(0);
}

void MainWindow::on_tabela_cellDoubleClicked(int row, int column)
{
    if(column == 0){
           QMessageBox::StandardButton resp = QMessageBox::question(this, "Editar Item", "Você deseja editar este item?");
           if(resp == QMessageBox::Yes){
               bool ok;
               QString txt = QInputDialog::getText(this, "Alterar Objeto", "Digite o novo objeto", QLineEdit::Normal,"",&ok);
               if(ok and !txt.isEmpty()){
                   atleta.setnome(txt);
                   atleta.setidade(equipe[row].getidade());
                   equipe.eraseNome(txt);
                   equipe.inserirAluno(atleta);
                   ui->tabela->clearContents();
                   for(int i = 0; i < equipe.size(); i++){
                       inserirNaTabela(equipe[i],i);
                   }
               }else{
                   QMessageBox::critical(this, "Erro", "A edição está vazia.");
               }
           }
        }
       if(column == 1){
           QMessageBox::StandardButton resp = QMessageBox::question(this, "Editar Itens", "Você deseja editar este item?");
           if(resp == QMessageBox::Yes){
               bool ok;
               QString txt = QInputDialog::getText(this, "Alterar Idade", "Digite a nova Idade", QLineEdit::Normal,"",&ok);
               if(ok and !txt.isEmpty()){
                   atleta.setidade(txt.toDouble());
                   QString tmp = equipe[row].getnome();
                   atleta.setnome(tmp);
                   equipe.eraseIdade(txt);
                   equipe.inserirAluno(atleta);
                   ui->tabela->clearContents();
                   for(int i = 0; i < equipe.size(); i++){
                       inserirNaTabela(equipe[i],i);
                   }
               }else{
                   QMessageBox::critical(this, "Erro", "O objeto a ser editado está vazio.");
               }
           }
       }
}
