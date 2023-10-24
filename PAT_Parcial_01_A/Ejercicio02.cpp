#include "Ejercicio02.h"

int Ejercicio02::countStudents(vector<char>* students, vector<char>* sandwiches)
{
    int studentsLeft = students->size();

    for (int i = 0; i < studentsLeft; i++)
    {
        if (sandwiches->empty())
        {
            break; 
        }

        char studentPreference = (*students)[i];

        while (true)
        {
            if (sandwiches->empty())
            {
                break; 
            }

            char nextSandwich = sandwiches->front();
            sandwiches->erase(sandwiches->begin());

            if (studentPreference == nextSandwich)
            {
                studentsLeft--;
                break;
            }
            else
            {
                students->push_back(studentPreference);
            }
        }
    }

    return studentsLeft;
}

