// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPICORV32_WRAPPER__SYMS_H_
#define VERILATED_VPICORV32_WRAPPER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vpicorv32_wrapper.h"

// INCLUDE MODULE CLASSES
#include "Vpicorv32_wrapper___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vpicorv32_wrapper__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vpicorv32_wrapper* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vpicorv32_wrapper___024root    TOP;

    // CONSTRUCTORS
    Vpicorv32_wrapper__Syms(VerilatedContext* contextp, const char* namep, Vpicorv32_wrapper* modelp);
    ~Vpicorv32_wrapper__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
