#pragma once
#include "Kindergarden.h"

class Employes : public Kindergarden {
private:
    const char* nameEmp;
    const char* mailEmp;
    const char* NumEmp;
public:
    void setNameEmp(const char* nameEmp);
    const char* getNameEmp();

    void setMailEmp(const char* mailEmp);
    const char* getMailEmp();

    void setNumEmp(const char* NumEmp);
    const char* getNumEmp();

};

class Personnel : public Employes {

};
class Managers : public Employes {

};
