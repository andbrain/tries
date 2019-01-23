cmake_minimum_required(VERSION 3.5.0)
project(trie)
include_directories(include)

#Can manually add the sources using the set command as follows:
set(SOURCES main.cpp )
list(APPEND SOURCES cpp/trie.cpp)
list(APPEND SOURCES cpp/node.cpp)
# list(APPEND SOURCES cpp/cluster.cpp)
# list(APPEND SOURCES cpp/kmeans.cpp)


#However, the file(GLOB...) allows for wildcard additions:
#file(GLOB_RECURSE SOURCES "cpp/*.cpp")

add_executable(tries ${SOURCES})
target_compile_features(tries PRIVATE cxx_range_for)
