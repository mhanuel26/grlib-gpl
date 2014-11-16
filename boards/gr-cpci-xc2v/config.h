/*
 * Automatically generated C config: don't edit
 */
#define AUTOCONF_INCLUDED
#define CONFIG_MCTRL_RMW 1
/*
 * Synthesis 
 */
#undef  CONFIG_SYN_INFERRED
#undef  CONFIG_SYN_ATC18
#undef  CONFIG_SYN_PROASIC
#undef  CONFIG_SYN_AXCEL
#undef  CONFIG_SYN_VIRTEX
#define CONFIG_SYN_VIRTEX2 1
#undef  CONFIG_SYN_INFER_RAM
#undef  CONFIG_SYN_INFER_PADS
/*
 * Clock generation
 */
#undef  CONFIG_CLK_INFERRED
#undef  CONFIG_CLK_ALTDLL
#undef  CONFIG_CLK_CLKDLL
#define CONFIG_CLK_DCM 1
#undef  CONFIG_DCM_2_3
#undef  CONFIG_DCM_3_4
#undef  CONFIG_DCM_4_5
#undef  CONFIG_DCM_1_1
#define CONFIG_DCM_5_4 1
#undef  CONFIG_DCM_4_3
#undef  CONFIG_DCM_3_2
#undef  CONFIG_DCM_5_3
#undef  CONFIG_DCM_2_1
#undef  CONFIG_DCM_3_1
#undef  CONFIG_DCM_4_1
#undef  CONFIG_PCI_CLKDLL
#undef  CONFIG_PCI_SYSCLK
#define CONFIG_PROC_NUM (1)
/*
 * Processor            
 */
/*
 * Integer unit                                           
 */
#define CONFIG_IU_NWINDOWS (8)
#define CONFIG_IU_V8MULDIV 1
#undef  CONFIG_IU_MUL_LATENCY_4
#define CONFIG_IU_MUL_LATENCY_5 1
#undef  CONFIG_IU_MUL_MAC
#define CONFIG_IU_LDELAY (1)
#define CONFIG_IU_WATCHPOINTS (2)
#undef  CONFIG_PWD
/*
 * Floating-point unit
 */
#undef  CONFIG_FPU_ENABLE
/*
 * Cache system
 */
#define CONFIG_ICACHE_ENABLE 1
#undef  CONFIG_ICACHE_ASSO1
#define CONFIG_ICACHE_ASSO2 1
#undef  CONFIG_ICACHE_ASSO3
#undef  CONFIG_ICACHE_ASSO4
#undef  CONFIG_ICACHE_SZ1
#undef  CONFIG_ICACHE_SZ2
#undef  CONFIG_ICACHE_SZ4
#undef  CONFIG_ICACHE_SZ8
#define CONFIG_ICACHE_SZ16 1
#undef  CONFIG_ICACHE_SZ32
#undef  CONFIG_ICACHE_SZ64
#undef  CONFIG_ICACHE_LZ16
#define CONFIG_ICACHE_LZ32 1
#undef  CONFIG_ICACHE_ALGORND
#define CONFIG_ICACHE_ALGOLRR 1
#undef  CONFIG_ICACHE_ALGOLRU
#undef  CONFIG_ICACHE_LOCK
#undef  CONFIG_ICACHE_LRAM
#define CONFIG_DCACHE_ENABLE 1
#undef  CONFIG_DCACHE_ASSO1
#define CONFIG_DCACHE_ASSO2 1
#undef  CONFIG_DCACHE_ASSO3
#undef  CONFIG_DCACHE_ASSO4
#undef  CONFIG_DCACHE_SZ1
#undef  CONFIG_DCACHE_SZ2
#undef  CONFIG_DCACHE_SZ4
#undef  CONFIG_DCACHE_SZ8
#define CONFIG_DCACHE_SZ16 1
#undef  CONFIG_DCACHE_SZ32
#undef  CONFIG_DCACHE_SZ64
#undef  CONFIG_DCACHE_LZ16
#define CONFIG_DCACHE_LZ32 1
#undef  CONFIG_DCACHE_ALGORND
#define CONFIG_DCACHE_ALGOLRR 1
#undef  CONFIG_DCACHE_ALGOLRU
#undef  CONFIG_DCACHE_LOCK
#define CONFIG_DCACHE_SNOOP 1
#define CONFIG_DCACHE_SNOOP_SLOW 1
#undef  CONFIG_DCACHE_SNOOP_FAST
#undef  CONFIG_DCACHE_LRAM
/*
 * MMU
 */
#undef  CONFIG_MMU_ENABLE
/*
 * Debug Support Unit        
 */
#define CONFIG_DSU_ENABLE 1
#define CONFIG_DSU_ITRACE 1
#undef  CONFIG_DSU_ITRACESZ1
#define CONFIG_DSU_ITRACESZ2 1
#undef  CONFIG_DSU_ITRACESZ4
#undef  CONFIG_DSU_ITRACESZ8
#undef  CONFIG_DSU_ITRACESZ16
#define CONFIG_DSU_ATRACE 1
#undef  CONFIG_DSU_ATRACESZ1
#define CONFIG_DSU_ATRACESZ2 1
#undef  CONFIG_DSU_ATRACESZ4
#undef  CONFIG_DSU_ATRACESZ8
#undef  CONFIG_DSU_ATRACESZ16
/*
 * AMBA configuration
 */
#define CONFIG_AHB_DEFMST (0)
#define CONFIG_AHB_RROBIN 1
#undef  CONFIG_AHB_SPLIT
#define CONFIG_AHB_IOADDR FFF
#define CONFIG_APB_HADDR 800
/*
 * Debug Link           
 */
#define CONFIG_DSU_UART 1
#undef  CONFIG_DSU_ETH
/*
 * Peripherals             
 */
/*
 * Memory controllers             
 */
#undef  CONFIG_MCTRL_NONE
#undef  CONFIG_MCTRL_SMALL
#define CONFIG_MCTRL_LEON2 1
#undef  CONFIG_MCTRL_8BIT
#undef  CONFIG_MCTRL_16BIT
#undef  CONFIG_MCTRL_5CS
#define CONFIG_MCTRL_SDRAM 1
#undef  CONFIG_MCTRL_SDRAM_SEPBUS
#undef  CONFIG_MCTRL_SDRAM_INVCLK
#undef  CONFIG_MCTRL_SDRAM_BUS64
/*
 * On-chip RAM                     
 */
#undef  CONFIG_AHBRAM_ENABLE
/*
 * Ethernet                     
 */
#define CONFIG_ETH_ENABLE 1
#define CONFIG_ETH_START B00
/*
 * PCI              
 */
#define CONFIG_PCI_ENABLE 1
#define CONFIG_PCI_SIMPLE_TARGET 1
#undef  CONFIG_PCI_MASTER_TAGET
#undef  CONFIG_PCI_MASTER_TAGET_DMA
#define CONFIG_PCI_VENDORID 16E3
#define CONFIG_PCI_DEVICEID 0210
#undef  CONFIG_PCI_TRACE
/*
 * CAN                     
 */
#undef  CONFIG_CAN_ENABLE
/*
 * Various legacy modules              
 */
#define CONFIG_UART1_ENABLE 1
#define CONFIG_UA1_FIFO1 1
#undef  CONFIG_UA1_FIFO2
#undef  CONFIG_UA1_FIFO4
#undef  CONFIG_UA1_FIFO8
#undef  CONFIG_UA1_FIFO16
#undef  CONFIG_UA1_FIFO32
#define CONFIG_UART2_ENABLE 1
#define CONFIG_UA2_FIFO1 1
#undef  CONFIG_UA2_FIFO2
#undef  CONFIG_UA2_FIFO4
#undef  CONFIG_UA2_FIFO8
#undef  CONFIG_UA2_FIFO16
#undef  CONFIG_UA2_FIFO32
#define CONFIG_IRQ3_ENABLE 1
#define CONFIG_GPT_ENABLE 1
#define CONFIG_GPT_NTIM (2)
#define CONFIG_GPT_SW (8)
#define CONFIG_GPT_TW (32)
#define CONFIG_GPT_IRQ (8)
#define CONFIG_GPT_SEPIRQ 1
/*
 * VHDL Debugging        
 */
#define CONFIG_IU_DISAS 1
#define CONFIG_DEBUG_UART 1
#undef  CONFIG_DEBUG_PC32
