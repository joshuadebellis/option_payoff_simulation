//
//  main.cpp
//  option_payoff_simulation
//
//  Created by Joshua on 7/8/14.
//  Copyright (c) 2014 Joshua. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <algorithm>
#include "integration.h"


using namespace std ;







double MC_sim_factor(double x){
    
    return max(100 * exp(0.05-(0.2*0.2)*.5 + 0.2*x)-100,0.0) ;
}








int main(int argc, const char * argv[])
{

    integration integrate;
        double S = 100.0;  // Option price
        double K = 100.0;  // Strike price
        double r = 0.05;   // Risk-free rate (5%)
        double v = 0.2;    // Volatility of the underlying (20%)
        double T = 1.0;    // One year until expiry
        double t = 0 ;
        double n = 10000000 ;
    
    int a;
    int b;
    


        
        double (*my_pointer) ( double x) ;
        my_pointer = &MC_sim_factor ;
    
    
    cout << "Enter integration bounds \n " ;
    cin >> a ;
    cin >> b ;
    
    double result = exp(-r*T)* integrate.MC_crude(my_pointer,a,b ,n);
    cout << " The Answer is " << result <<endl;
    
    
    
    
    

    
    




}

