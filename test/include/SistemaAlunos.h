#ifndef SISTEMAALUNOS_H
#define SISTEMAALUNOS_H
#include "Aluno.h"

class SistemaAlunos : public Aluno
{
    public:
        SistemaAlunos();
        virtual ~SistemaAlunos();

        void visualizarAlunos();
        void consultaAluno();
        void cadastraAluno(Aluno *al);

    protected:

    private:
};

#endif // SISTEMAALUNOS_H
