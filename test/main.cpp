#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale>

#include "Dados.h"
#include "Pagamentos.h"
#include "Aluno.h"
#include "SistemaAlunos.h"

using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");

    SistemaAlunos *manager = new SistemaAlunos();

    Aluno *a1 = new Aluno("Daniel Cassiano", "417596", "Borborema", "Rua Aderaldo Silveira de Souza", "998354294");
    a1->setPagamento(20,03,2020);
    a1->geraParcelas();

    Aluno *a2 = new Aluno("Ant�nio Cassiano", "456654", "Borborema", "Rua Aderaldo Silveira de Souza", "998354294");
    a2->setPagamento(31,03,2020);
    a2->geraParcelas();

    Aluno *a3 = new Aluno("Auric�lia Moura", "43212", "Serraria", "Rua Aderaldo Silveira de Souza", "998354294");
    a3->setPagamento(10,02,2020);
    a3->geraParcelas();

    manager->cadastraAluno(a1);
    manager->cadastraAluno(a2);
    manager->cadastraAluno(a3);

    manager->visualizarAlunos();
    manager->consultaAluno();

    manager->pagto();
    manager->consultaAluno();

    manager->cancelaPagto();

    manager->consultaAluno();

    cout << "Aperte ESC para sair.";

    return 0;
}
