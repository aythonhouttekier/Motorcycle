#pragma once
#include <string>

namespace Vehicles {
    namespace Parts {

        class Engine {

            public:
                Engine(unsigned int capacity, unsigned int cilinders);
                
                Engine(unsigned int capacity, unsigned int cilinders,
                    std::string serial);

            public:
                void set_serial(std::string serial);

                unsigned int get_capacity(void);
                unsigned int get_cilinders(void);
                std::string get_serial(void);

            private:
                unsigned int capacity;
                unsigned int cilinders;
                std::string serial;


        };

    };
};