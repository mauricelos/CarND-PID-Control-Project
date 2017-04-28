#include "PID.h"
#include <math.h>

//using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double pidKp, double pidKi, double pidKd) {
    
    //initialize the hyperparameter
    Kp = pidKp;
    Ki = pidKi;
    Kd = pidKd;
}

void PID::UpdateError(double cte) {
    
    //calculate all errors
    p_error = cte;
    i_error += cte;
    d_error = cte - p_error;
    
    //calculate the absolute total error
    total_error += fabs(cte);
}

double PID::TotalError() {
    
    return total_error;
}

