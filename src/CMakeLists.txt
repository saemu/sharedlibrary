#
# Copyright 2020, Samuel Brand
#

add_executable( demo )
add_executable( demo::demo ALIAS demo )

target_sources( demo
                PRIVATE main.cpp SharedLibrary.cpp SharedLibrary.hpp )

target_link_libraries( demo
                       PRIVATE Boost::boost Boost::filesystem )

target_compile_features( demo PUBLIC cxx_std_17 )
