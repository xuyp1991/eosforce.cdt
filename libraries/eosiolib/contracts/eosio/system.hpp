/**
 *  @file
 *  @copyright defined in eos/LICENSE
 */
#pragma once
#include "../../core/eosio/time.hpp"
#include "../../core/eosio/check.hpp"

namespace eosio {
  namespace internal_use_do_not_use {
    extern "C" {
      __attribute__((eosio_wasm_import, noreturn))
      void eosio_exit( int32_t code );
      __attribute__((eosio_wasm_import))
      uint32_t current_block_num();
      __attribute__((eosio_wasm_import))
      uint64_t current_time();
    }
  }

  /**
   *  @addtogroup system System
   *  @ingroup contracts
   *  @brief Defines time related functions and eosio_exit
   */

   /**
    *  This method will abort execution of wasm without failing the contract. This is used to bypass all cleanup / destructors that would normally be called.
    *
    *  @ingroup system
    *  @param code - the exit code
    *  Example:
    *
    *  @code
    *  eosio_exit(0);
    *  eosio_exit(1);
    *  eosio_exit(2);
    *  eosio_exit(3);
    *  @endcode
    */
   inline void eosio_exit( int32_t code ) {
     internal_use_do_not_use::eosio_exit(code);
   }

   /**
   *  Returns the time in microseconds from 1970 of the current block as a time_point
   *
   *  @ingroup system
   *  @return time in microseconds from 1970 of the current block as a time_point
   */
   time_point current_time_point();

   /**
   *  Returns the time in microseconds from 1970 of the current block as a block_timestamp
   *
   *  @ingroup system
   *  @return time in microseconds from 1970 of the current block as a block_timestamp
   */
   block_timestamp current_block_time();

   inline uint32_t current_block_num() {
      return internal_use_do_not_use::current_block_num();
   }

   /**
    *  Get time (rounded down to the nearest second) of the current block (i.e. the block including this action)
    *
    *  @return time in seconds from 1970 of the current block
    */
   //__attribute__((eosio_wasm_import))
   inline uint32_t  now() {
      return (uint32_t)( internal_use_do_not_use::current_time() / 1000000 );
   }
}
