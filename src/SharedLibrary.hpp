/*
 * Copyright 2020, Samuel Brand
 */

#pragma once

#include <boost/dll.hpp>

namespace demo {

class SharedLibrary {
public:
    explicit SharedLibrary(const std::string& name);

    ~SharedLibrary() = default;

    SharedLibrary(const SharedLibrary&) = delete;
    SharedLibrary(SharedLibrary&&) = delete;

    SharedLibrary& operator=(const SharedLibrary&) = delete;
    SharedLibrary& operator=(SharedLibrary&) = delete;

private:

    using MyFunction_t = std::function<void()>;
    boost::dll::shared_library m_sharedLibrary;
    MyFunction_t m_function;

    template<typename Function_t>
    Function_t load(const std::string& name) {
        return m_sharedLibrary.get<Function_t>(name);
    }
};

}  // namespace demo
