configure_file(${CMAKE_CURRENT_SOURCE_DIR}/eosio-abigen.cpp.in ${CMAKE_BINARY_DIR}/eosforce-abigen.cpp)

add_tool(eosforce-abigen)
