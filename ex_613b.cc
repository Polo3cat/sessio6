#include "PilaEstudiants.hh"
#include "Estudiant.hh"


int main()
{
  cout << "Escribe la pila de Estudiants, -1 para parar: " << endl;
  stack<Estudiant> est;
  llegir_stack_estudiant(est);
  calcula_nota_mitja_stack_estudiant(est);
  escriure_stack_estudiant(est);
}