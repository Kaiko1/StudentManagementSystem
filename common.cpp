#include "common.h"
#include "mainwindow.h"

bool verifyID(QString id)
{
    if (id.length() == 8){
        return true;
    }
    return false;
}
