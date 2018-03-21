#include "engine.h"

namespace Vehicles {
    namespace Parts {


Engine::Engine(unsigned int capacity, unsigned int cilinders)   {

}
                
Engine::Engine(unsigned int capacity, unsigned int cilinders, std::string serial)   {
    this->capacity = capacity;
    this->cilinders = cilinders;
    set_serial("");
}

void Engine::set_serial(std::string serial) 
    : Engine(capacity, cilinders) {
    this->serial = serial;
}

unsigned int Engine::get_capacity(void) {
    return capacity;
}
    
unsigned int Engine::get_cilinders(void)    {
    return cilinders;
}

std::string Engine::get_serial(void)    {
    return serial;
}

          
        };

    };