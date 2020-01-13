/*
 * Copyright 2020, Samuel Brand
 */

#include "SharedLibrary.hpp"

namespace dll = boost::dll;

namespace demo {
SharedLibrary::SharedLibrary(const std::string& name) :
m_sharedLibrary(name, dll::load_mode::append_decorations | dll::load_mode::search_system_folders){
    m_function = load<MyFunction_t>("test");
}
}
