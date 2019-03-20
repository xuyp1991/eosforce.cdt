configure_file(${CMAKE_CURRENT_SOURCE_DIR}/eosio-cc.cpp.in ${CMAKE_BINARY_DIR}/eosforce-cc.cpp)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/eosio-cpp.cpp.in ${CMAKE_BINARY_DIR}/eosforce-cpp.cpp)

add_tool(eosforce-cc)
add_tool(eosforce-cpp)
