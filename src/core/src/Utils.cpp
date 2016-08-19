/*
 * Copyright (C) 2015 Fondazione Istituto Italiano di Tecnologia
 * Authors: Silvio Traversaro
 * CopyPolicy: Released under the terms of the LGPLv2.1 or later, see LGPL.TXT
 *
 */

#include <iDynTree/Core/Utils.h>

#include <iostream>

#include <cassert>
#include <cmath>

namespace iDynTree
{
    int UNKNOWN = -1;

    double DEFAULT_TOL = 1e-10;

    const double IDYNTREE_PI=M_PI;
    const double IDYNTREE_RAD2DEG=180.0/M_PI;
    const double IDYNTREE_DEG2RAD=M_PI/180.0;

    bool checkEqualOrUnknown(const int op1, const int op2)
    {
        return (op1 == op2) ||
               (op1  <   0) ||
               (op2  <   0);
    }

    void assertWoAbort(const char* semCheck, const char* file, const char* func, int line)
    {
        std::cerr << file << ": " << func << ": " << line << ": Failed assertion '" << semCheck << "'.\n";
    }

    bool checkEqualAndNotUnknown(const int op1, const int op2)
    {
        return (op1 == op2) &&
               (op1 >=   0) &&
               (op2 >=   0);
    }

    void reportError(const char* className, const char* methodName, const char* errorMessage)
    {
        std::cerr << "[ERROR] " << className << " :: " << methodName << " : " << errorMessage <<  "\n";
    }

    bool reportErrorIf(bool condition, const char* className_methodName, const char* errorMessage)
    {
        if(condition)
        {
            std::cerr << "[ERROR] " << className_methodName << " : " << errorMessage <<  "\n";
        }
        return !condition;
    }

    void reportWarning(const char* className, const char* methodName, const char* errorMessage)
    {
        std::cerr << "[WARNING] " << className << " :: " << methodName << " : " << errorMessage <<  "\n";
    }

    double deg2rad(const double valueInDeg)
    {
        return IDYNTREE_DEG2RAD*valueInDeg;
    }


    double rad2deg(const double valueInRad)
    {
        return IDYNTREE_RAD2DEG*valueInRad;
    }

    bool IndexRange::isValid() const 
    {
        return (offset >= 0) && (size >= 0);
    }

    IndexRange IndexRange::InvalidRange()
    {
        IndexRange ret;
        ret.offset = ret.size = -1;
        return ret;
    }


}
