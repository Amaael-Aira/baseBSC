cmake_minimum_required(VERSION 3.16)
project(baseBSC)

set(CMAKE_CXX_STANDARD 14)

add_executable(baseBSC main.cpp baseList.cpp baseList.h Transmitter.cpp Transmitter.h Receiver.cpp Receiver.h Functions.cpp Functions.h mattest.cpp mattest.h)
include_directories(/Applications/MATLAB_R2020a.app/extern/include)
link_directories(/Applications/MATLAB_R2020a.app/bin/maci64/)
link_directories(/Applications/MATLAB_R2020a.app/sys/os/maci64/)
target_link_libraries(baseBSC /Applications/MATLAB_R2020a.app/bin/maci64/libmat.dylib)
target_link_libraries(baseBSC /Applications/MATLAB_R2020a.app/bin/maci64/libmx.dylib)