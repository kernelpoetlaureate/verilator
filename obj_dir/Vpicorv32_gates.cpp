// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpicorv32_gates__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vpicorv32_gates::Vpicorv32_gates(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpicorv32_gates__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , resetn{vlSymsp->TOP.resetn}
    , trap{vlSymsp->TOP.trap}
    , mem_valid{vlSymsp->TOP.mem_valid}
    , mem_instr{vlSymsp->TOP.mem_instr}
    , mem_ready{vlSymsp->TOP.mem_ready}
    , mem_wstrb{vlSymsp->TOP.mem_wstrb}
    , mem_la_read{vlSymsp->TOP.mem_la_read}
    , mem_la_write{vlSymsp->TOP.mem_la_write}
    , mem_la_wstrb{vlSymsp->TOP.mem_la_wstrb}
    , pcpi_valid{vlSymsp->TOP.pcpi_valid}
    , pcpi_wr{vlSymsp->TOP.pcpi_wr}
    , pcpi_wait{vlSymsp->TOP.pcpi_wait}
    , pcpi_ready{vlSymsp->TOP.pcpi_ready}
    , trace_valid{vlSymsp->TOP.trace_valid}
    , mem_addr{vlSymsp->TOP.mem_addr}
    , mem_wdata{vlSymsp->TOP.mem_wdata}
    , mem_rdata{vlSymsp->TOP.mem_rdata}
    , mem_la_addr{vlSymsp->TOP.mem_la_addr}
    , mem_la_wdata{vlSymsp->TOP.mem_la_wdata}
    , pcpi_insn{vlSymsp->TOP.pcpi_insn}
    , pcpi_rs1{vlSymsp->TOP.pcpi_rs1}
    , pcpi_rs2{vlSymsp->TOP.pcpi_rs2}
    , pcpi_rd{vlSymsp->TOP.pcpi_rd}
    , irq{vlSymsp->TOP.irq}
    , eoi{vlSymsp->TOP.eoi}
    , trace_data{vlSymsp->TOP.trace_data}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vpicorv32_gates::Vpicorv32_gates(const char* _vcname__)
    : Vpicorv32_gates(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpicorv32_gates::~Vpicorv32_gates() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vpicorv32_gates___024root___eval_debug_assertions(Vpicorv32_gates___024root* vlSelf);
#endif  // VL_DEBUG
void Vpicorv32_gates___024root___eval_static(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___eval_initial(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___eval_settle(Vpicorv32_gates___024root* vlSelf);
void Vpicorv32_gates___024root___eval(Vpicorv32_gates___024root* vlSelf);

void Vpicorv32_gates::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpicorv32_gates::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpicorv32_gates___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vpicorv32_gates___024root___eval_static(&(vlSymsp->TOP));
        Vpicorv32_gates___024root___eval_initial(&(vlSymsp->TOP));
        Vpicorv32_gates___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vpicorv32_gates___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vpicorv32_gates::eventsPending() { return false; }

uint64_t Vpicorv32_gates::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vpicorv32_gates::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vpicorv32_gates___024root___eval_final(Vpicorv32_gates___024root* vlSelf);

VL_ATTR_COLD void Vpicorv32_gates::final() {
    Vpicorv32_gates___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpicorv32_gates::hierName() const { return vlSymsp->name(); }
const char* Vpicorv32_gates::modelName() const { return "Vpicorv32_gates"; }
unsigned Vpicorv32_gates::threads() const { return 1; }
void Vpicorv32_gates::prepareClone() const { contextp()->prepareClone(); }
void Vpicorv32_gates::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vpicorv32_gates::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vpicorv32_gates___024root__trace_decl_types(VerilatedVcd* tracep);

void Vpicorv32_gates___024root__trace_init_top(Vpicorv32_gates___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vpicorv32_gates___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpicorv32_gates___024root*>(voidSelf);
    Vpicorv32_gates__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vpicorv32_gates___024root__trace_decl_types(tracep);
    Vpicorv32_gates___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vpicorv32_gates___024root__trace_register(Vpicorv32_gates___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vpicorv32_gates::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vpicorv32_gates::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vpicorv32_gates___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
