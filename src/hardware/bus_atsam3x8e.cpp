/*
 *
 * Copyright Niels Post 2019.
 * Distributed under the Boost Software License, Version 1.0.
 * (See accompanying file LICENSE_1_0.txt or copy at
 * https://www.boost.org/LICENSE_1_0.txt)
 *
*/

#include <spi/hardware/bus_stm32f10xxx.hpp>
#include <cout_debug.hpp>

namespace spi {
    void bus_stm32f10xxx::write_read(size_t n, const uint8_t *data_out, uint8_t *data_in) {
    }


    bus_stm32f10xxx::bus_stm32f10xxx(const spi::spi_mode mode) : spi_base_bus(mode) {


    }

    void bus_stm32f10xxx::onStart(spi::spi_base_bus::spi_transaction &transaction) {
    }

    void bus_stm32f10xxx::onEnd(spi::spi_base_bus::spi_transaction &transaction) {
    }
}

