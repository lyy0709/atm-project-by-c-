#ifndef COMPCARD_H
#define COMPCARD_H

#include <QDialog>
#include "Debit.h"
#include "Credit.h"

class Compcard : public Debit, public Credit
{

};

#endif // COMPCARD_H
