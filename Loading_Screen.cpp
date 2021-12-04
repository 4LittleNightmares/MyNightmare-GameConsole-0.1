//
//  Loading_Screen.cpp
//  Teste 2
//
//  Created by Pedro Matos on 20/11/2021.
//

#include "Loading_Screen.hpp"
#include "Functions.h"
#include "Game.hpp"

#include <unistd.h>
#include <stdlib.h>

int loadingscreen(){
    
    int i = 0;
    char load [26];
    while (i<25) {

        load[i++] = '|';
        load [i] = '\0';
        
        printf("\n\nLOADING [%-25s]", load);
        cout<<" "<<endl;
        usleep(100000);
    }
    return 0;
}
