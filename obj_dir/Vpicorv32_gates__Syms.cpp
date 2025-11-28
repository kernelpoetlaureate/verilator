// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vpicorv32_gates__pch.h"
#include "Vpicorv32_gates.h"
#include "Vpicorv32_gates___024root.h"

// FUNCTIONS
Vpicorv32_gates__Syms::~Vpicorv32_gates__Syms()
{
}

Vpicorv32_gates__Syms::Vpicorv32_gates__Syms(VerilatedContext* contextp, const char* namep, Vpicorv32_gates* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(12981);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
