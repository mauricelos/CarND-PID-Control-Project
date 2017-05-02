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
}

double PID::TotalError() {
    
    //return total error
    return -1*(Kp * p_error + Kd * d_error + Ki * i_error);
}

