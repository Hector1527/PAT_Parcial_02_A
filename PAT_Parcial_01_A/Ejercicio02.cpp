#include "Ejercicio02.h"

int Ejercicio02::countStudents(vector<char>* students, vector<char>* sandwiches)
{
    int result = students->size();
    vector<char> restantes(*students);

    for (char sandwich : *sandwiches)
    {
        if (restantes.empty())
        {
            break;
        }

        for (int i = 0; i < restantes.size(); i++)
        {
            if (restantes[i] == sandwich)
            {
                restantes.erase(restantes.begin() + i);
                result--;
                break; 
            }
        }
    }

    return result;
}

