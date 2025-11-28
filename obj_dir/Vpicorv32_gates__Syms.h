// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPICORV32_GATES__SYMS_H_
#define VERILATED_VPICORV32_GATES__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vpicorv32_gates.h"

// INCLUDE MODULE CLASSES
#include "Vpicorv32_gates___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vpicorv32_gates__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vpicorv32_gates* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vpicorv32_gates___024root      TOP;

    // CONSTRUCTORS
    Vpicorv32_gates__Syms(VerilatedContext* contextp, const char* namep, Vpicorv32_gates* modelp);
    ~Vpicorv32_gates__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
