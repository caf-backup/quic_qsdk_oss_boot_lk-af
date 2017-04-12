/*
 * * Copyright (c) 2011-2015, 2017 The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of The Linux Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef __PLATFORM_IPQ806X_CLOCK_H
#define __PLATFORM_IPQ806X_CLOCK_H

#define UART_DM_CLK_RX_TX_BIT_RATE 0xFF

#define REG(off)	(MSM_CLK_CTL_BASE + (off))
#define REG_GCC(off)	(MSM_APCS_GCC_BASE + (off))
#define REG_LPA(off)	(MSM_LPASS_CLK_CTL_BASE + (off))

/* Peripheral clock registers. */
#define GCC_RPU_CR				REG(0x0F80)
#define GCC_RPU_EAR				REG(0x0F84)
#define GCC_RPU_ESR				REG(0x0F88)
#define GCC_RPU_ESRRESTORE			REG(0x0F8C)
#define GCC_RPU_ESYNR0				REG(0x0F90)
#define GCC_RPU_ESYNR1				REG(0x0F94)
#define GCC_RPU_REV				REG(0x0FF4)
#define GCC_RPU_IDR				REG(0x0FF8)
#define GCC_RPU_RPU_ACR				REG(0x0FFC)
#define AFAB_CLK_SRC_ACR			REG(0x1000)
#define QDSS_STM_CLK_ACR			REG(0x100C)
#define AFAB_CORE_CLK_ACR			REG(0x1010)
#define SCSS_ACR				REG(0x1014)
#define AFAB_EBI1_S_ACLK_ACR			REG(0x1018)
#define AFAB_AXI_S_FCLK_ACR			REG(0x1020)
#define SFAB_CORE_CLK_ACR			REG(0x1024)
#define SFAB_AXI_S_FCLK_ACR			REG(0x1028)
#define SFAB_AHB_S_FCLK_ACR			REG(0x102C)
#define QDSS_AT_CLK_ACR				REG(0x1030)
#define QDSS_TRACECLKIN_CLK_ACR			REG(0x1034)
#define QDSS_TSCTR_CLK_ACR			REG(0x1038)
#define SFAB_ADM0_M_ACLK_ACR			REG(0x103C)
#define ADM0_ACR				REG(0x1040)
#define QDSS_RESETS_ACR				REG(0x104C)
#define IMEM0_ACLK_ACR				REG(0x1050)
#define QDSS_HCLK_ACR				REG(0x1054)
#define PCIE_ACR				REG(0x1058)
#define SFAB_CLK_SRC_ACR			REG(0x105C)
#define SFAB_LPASS_Q6_ACLK_ACR			REG(0x1074)
#define SFAB_AFAB_M_ACLK_ACR			REG(0x107C)
#define AFAB_SFAB_M_ACLK_ACR			REG(0x1084)
#define SFAB_SATA_S_HCLK_ACR			REG(0x1090)
#define DFAB_ACR				REG(0x1094)
#define SFAB_DFAB_M_ACLK_ACR			REG(0x10A0)
#define DFAB_SFAB_M_ACLK_ACR			REG(0x10A4)
#define DFAB_SWAY_ACR				REG(0x10A8)
#define DFAB_ARB_ACR				REG(0x10AC)
#define PPSS_ACR				REG(0x10B0)
#define PMEM_ACR				REG(0x10B4)
#define DMA_BAM_ACR				REG(0x10B8)
#define SIC_HCLK_ACR				REG(0x10BC)
#define SPS_TIC_HCLK_ACR			REG(0x10C0)
#define CFPB_ACR				REG(0x10C8)
#define SFAB_CFPB_M_HCLK_ACR			REG(0x10D0)
#define CFPB_MASTER_HCLK_ACR			REG(0x10D4)
#define SFAB_CFPB_S_HCLK_ACR			REG(0x10D8)
#define CFPB_SPLITTER_HCLK_ACR			REG(0x10DC)
#define TSIF_ACR				REG(0x10E0)
#define CE1_HCLK_ACR				REG(0x10E4)
#define CE2_HCLK_ACR				REG(0x10E8)
#define SFPB_HCLK_ACR				REG(0x10EC)
#define SFAB_SFPB_M_HCLK_ACR			REG(0x10F0)
#define SFAB_SFPB_S_HCLK_ACR			REG(0x10F4)
#define RPM_ACR					REG(0x10F8)
#define RPM_MSG_RAM_ACR				REG(0x10FC)
#define PMIC_ACR				REG(0x1100)
#define SDCn_ACR(n)				REG(0x1104+4*(n-1))
#define SDC1_ACR				REG(0x1104)
#define ACC_ACR					REG(0x111C)
#define USB_HS1_ACR				REG(0x1120)
#define USB_HSIC_ACR				REG(0x1124)
#define DIM_BUS_ACR				REG(0x1128)
#define USB_FS1_ACR				REG(0x112C)
#define GSBI_COMMON_SIM_CLK_ACR			REG(0x1134)
#define GSBIn_ACR(n)				REG(0x1138+4*(n-1))
#define GSBI1_ACR				REG(0x1138)
#define USB_HSIC_HSIC_CLK_CTL_ACR		REG(0x1168)
#define SPDM_ACR				REG(0x116C)
#define SEC_CTRL_ACR				REG(0x1170)
#define TLMM_ACR				REG(0x1174)
#define SATA_ACR				REG(0x1180)
#define SATA_ACLK_ACR				REG(0x1184)
#define SATA_PHY_CFG_ACR			REG(0x1188)
#define GSS_ACR					REG(0x118C)
#define TSSC_CLK_ACR				REG(0x1194)
#define PDM_ACR					REG(0x1198)
#define GPn_ACR(n)				REG(0x11A0+4*(n))
#define GP0_ACR					REG(0x11A0)
#define MPM_ACR					REG(0x11B4)
#define RINGOSC_ACR				REG(0x11B8)
#define EBI1_ACR				REG(0x11BC)
#define SFAB_SMPSS_S_HCLK_ACR			REG(0x11C0)
#define SCSS_DBG_STATUS_ACR			REG(0x11CC)
#define PRNG_ACR				REG(0x11D0)
#define PXO_SRC_CLK_CTL_ACR			REG(0x11D4)
#define LPASS_XO_SRC_CLK_CTL_ACR		REG(0x11D8)
#define GLOBAL_BUS_NS_ACR			REG(0x11DC)
#define PLL11_DIV_SRC_ACR			REG(0x11E4)
#define SPDM_CY_CLK_CTL_ACR			REG(0x11EC)
#define RESET_ACR				REG(0x11F0)
#define CLK_DBG_ACR				REG(0x11F4)
#define CLK_HALT_ACR				REG(0x11F8)
#define RPM_CLK_VOTE_ACR			REG(0x11FC)
#define LPA_Q6_CLK_VOTE_ACR			REG(0x1204)
#define APCS_CLK_VOTE_ACR			REG(0x1208)
#define SPARE_CLK_VOTE_ACR			REG(0x120C)
#define APCS_U_CLK_VOTE_ACR			REG(0x1210)
#define PLL0_ACR				REG(0x1218)
#define PLL5_ACR				REG(0x121C)
#define PLL8_ACR				REG(0x1228)
#define GPLL1_ACR				REG(0x122C)
#define EBI1_PLL_ACR				REG(0x1230)
#define PLL18_ACR				REG(0x1234)
#define PLL14_ACR				REG(0x1238)
#define SC_PLL0_ACR				REG(0x1240)
#define SC_PLL1_ACR				REG(0x1248)
#define SC_PLL2_ACR				REG(0x1250)
#define SC_PLL3_ACR				REG(0x1258)
#define SC_L2_PLL_ACR				REG(0x1260)
#define PLL_LOCK_DET_ACR			REG(0x1284)
#define PLL_ENA_SPARE_ACR			REG(0x128C)
#define PLL_ENA_GSS_ACR				REG(0x1290)
#define PLL_ENA_RPM_ACR				REG(0x1294)
#define PLL_ENA_APCS_ACR			REG(0x1298)
#define PLL_ENA_APCS_U_ACR			REG(0x129C)
#define PLL_ENA_RIVA_ACR			REG(0x12A0)
#define PLL_ENA_LPASS_DSP_ACR			REG(0x12A4)
#define PLL_ENA_SPS_ACR				REG(0x12A8)
#define FABS_RESET_ACR				REG(0x12AC)
#define RIVA_ACR				REG(0x12BC)
#define XPU_ACR					REG(0x12C0)
#define TSENS_ACR				REG(0x12C4)
#define TSENS_CONFIG_ACR			REG(0x12C8)
#define TSENS_STATUS_ACR			REG(0x12CC)
#define CE5_CORE_CLK_ACR			REG(0x12D8)
#define SFAB_AHB_S_FCLK2_ACR			REG(0x12DC)
#define USB_HS3_ACR				REG(0x12E0)
#define USB_HS4_ACR				REG(0x12E4)
#define GSS_CLK_VOTE_ACR			REG(0x12E8)
#define RIVA_CLK_VOTE_ACR			REG(0x12FC)
#define SPDM_CY_CLK_CTL2_ACR			REG(0x1300)
#define APCS_WDOG_EXPIRED_ENA_ACR		REG(0x1320)
#define RPM_WDOG_EXPIRED_ENA_ACR		REG(0x1340)
#define PCIE_ALT_REF_CLK_ACR			REG(0x1344)
#define SPARE0_ACR				REG(0x1348)
#define SPARE1_ACR				REG(0x134C)
#define PCIE_1_ACR				REG(0x1350)
#define PCIE_1_ALT_REF_CLK_ACR			REG(0x1354)
#define PCIE_2_ACR				REG(0x1358)
#define PCIE_2_ALT_REF_CLK_ACR			REG(0x135C)
#define EBI2_CLK_ACR				REG(0x1360)
#define USB30_CLK_ACR				REG(0x1364)
#define USB30_1_CLK_ACR				REG(0x1368)
#define NSS_RESET_ACR				REG(0x136C)
#define NSS_FAB0_CLK_SRC_ACR			REG(0x1370)
#define NSS_FB0_CLK_CTL_ACR			REG(0x1374)
#define NSS_FAB_GLOBAL_BUS_NS_ACR		REG(0x1378)
#define NSS_FAB1_CLK_SRC_ACR			REG(0x137C)
#define NSS_FB1_CLK_CTL_ACR			REG(0x1380)
#define CLK_HALT_1_ACR				REG(0x1384)
#define UBI32_MPT_CLK_CTL_ACR			REG(0x1388)
#define CE5_HCLK_ACR				REG(0x138C)
#define NSS_FPB_CLK_CTL_ACR			REG(0x1390)
#define GMAC_COREn_ACR(n)			REG(0x1394+4*(n-1))
#define GMAC_CORE1_ACR				REG(0x1394)
#define AFAB_CLK_SRC0_NS			REG(0x2000)
#define AFAB_CLK_SRC1_NS			REG(0x2004)
#define AFAB_CLK_SRC_CTL			REG(0x2008)
#define QDSS_STM_CLK_CTL			REG(0x2060)
#define QDSS_REQ_STATUS				REG(0x2064)
#define AFAB_CORE_CLK_CTL			REG(0x2080)
#define SCSS_ACLK_CTL				REG(0x20A0)
#define SCSS_HCLK_CTL				REG(0x20A4)
#define SCSS_XO_SRC_CLK_CTL			REG(0x20AC)
#define SCSS_AFAB_PORT_RESET			REG(0x20B8)
#define AFAB_EBI1_CH0_ACLK_CTL			REG(0x20C0)
#define AFAB_EBI1_CH1_ACLK_CTL			REG(0x20C4)
#define AFAB_AXI_S0_FCLK_CTL			REG(0x2100)
#define AFAB_AXI_S1_FCLK_CTL			REG(0x2104)
#define AFAB_AXI_S2_FCLK_CTL			REG(0x2108)
#define AFAB_AXI_S3_FCLK_CTL			REG(0x210C)
#define AFAB_AXI_S4_FCLK_CTL			REG(0x2110)
#define SFAB_CORE_CLK_CTL			REG(0x2120)
#define SFAB_AXI_S0_FCLK_CTL			REG(0x2140)
#define SFAB_AXI_S1_FCLK_CTL			REG(0x2144)
#define SFAB_AXI_S2_FCLK_CTL			REG(0x2148)
#define SFAB_AXI_S3_FCLK_CTL			REG(0x214C)
#define SFAB_AXI_S4_FCLK_CTL			REG(0x2150)
#define SFAB_AXI_S5_FCLK_CTL			REG(0x2154)
#define SFAB_AHB_S0_FCLK_CTL			REG(0x2160)
#define SFAB_AHB_S1_FCLK_CTL			REG(0x2164)
#define SFAB_AHB_S2_FCLK_CTL			REG(0x2168)
#define SFAB_AHB_S3_FCLK_CTL			REG(0x216C)
#define SFAB_AHB_S4_FCLK_CTL			REG(0x2170)
#define SFAB_AHB_S5_FCLK_CTL			REG(0x2174)
#define SFAB_AHB_S6_FCLK_CTL			REG(0x2178)
#define SFAB_AHB_S7_FCLK_CTL			REG(0x217C)
#define QDSS_AT_CLK_SRC0_NS			REG(0x2180)
#define QDSS_AT_CLK_SRC1_NS			REG(0x2184)
#define QDSS_AT_CLK_SRC_CTL			REG(0x2188)
#define QDSS_AT_CLK_NS				REG(0x218C)
#define QDSS_AT_CLK_FS				REG(0x2190)
#define QDSS_TRACECLKIN_CLK_SRC0_NS		REG(0x21A0)
#define QDSS_TRACECLKIN_CLK_SRC1_NS		REG(0x21A4)
#define QDSS_TRACECLKIN_CLK_SRC_CTL		REG(0x21A8)
#define QDSS_TRACECLKIN_CTL			REG(0x21AC)
#define QDSS_TSCTR_CLK_SRC0_NS			REG(0x21C0)
#define QDSS_TSCTR_CLK_SRC1_NS			REG(0x21C4)
#define QDSS_TSCTR_CLK_SRC_CTL			REG(0x21C8)
#define QDSS_TSCTR_CTL				REG(0x21CC)
#define SFAB_ADM0_M0_ACLK_CTL			REG(0x21E0)
#define SFAB_ADM0_M1_ACLK_CTL			REG(0x21E4)
#define SFAB_ADM0_M2_HCLK_CTL			REG(0x21E8)
#define ADM0_CLK_CTL				REG(0x2200)
#define ADM0_CLK_FS				REG(0x2204)
#define ADM0_PBUS_CLK_CTL_REG			REG(0x2208)
#define ADM0_RESET				REG(0x220C)
#define QDSS_RESETS				REG(0x2260)
#define IMEM0_ACLK_CTL				REG(0x2280)
#define IMEM0_ACLK_FS				REG(0x2284)
#define QDSS_HCLK_CTL				REG(0x22A0)
#define PCIE_ACLK_CTL_REG			REG(0x22C0)
#define PCIE_ACLK_FS				REG(0x22C4)
#define PCIE_AUX_CLK_CTL			REG(0x22C8)
#define PCIE_HCLK_CTL_REG			REG(0x22CC)
#define PCIE_PCLK_CTL_REG			REG(0x22D0)
#define PCIE_PCLK_FS				REG(0x22D4)
#define PCIE_SFAB_PORT_RESET			REG(0x22D8)
#define PCIE_RESET				REG(0x22DC)
#define SFAB_CLK_SRC0_NS			REG(0x22E0)
#define SFAB_CLK_SRC1_NS			REG(0x22E4)
#define SFAB_CLK_SRC_CTL			REG(0x22E8)
#define SFAB_LPASS_Q6_ACLK_CTL			REG(0x23A0)
#define SFAB_AFAB_M_ACLK_CTL			REG(0x23E0)
#define AFAB_SFAB_M0_ACLK_CTL			REG(0x2420)
#define AFAB_SFAB_M1_ACLK_CTL			REG(0x2424)
#define SFAB_SATA_S_HCLK_CTL_REG		REG(0x2480)
#define DFAB_CLK_SRC0_NS			REG(0x24A0)
#define DFAB_CLK_SRC1_NS			REG(0x24A4)
#define DFAB_CLK_SRC_CTL			REG(0x24A8)
#define DFAB_CORE_CLK_CTL			REG(0x24AC)
#define SFAB_DFAB_M_ACLK_CTL			REG(0x2500)
#define DFAB_SFAB_M_ACLK_CTL			REG(0x2520)
#define DFAB_SWAY0_HCLK_CTL			REG(0x2540)
#define DFAB_SWAY1_HCLK_CTL			REG(0x2544)
#define DFAB_ARB0_HCLK_CTL			REG(0x2560)
#define DFAB_ARB1_HCLK_CTL			REG(0x2564)
#define PPSS_HCLK_CTL				REG(0x2580)
#define PPSS_HCLK_FS				REG(0x2584)
#define PPSS_PROC_CLK_CTL			REG(0x2588)
#define PPSS_TIMER0_CLK_CTL			REG(0x258C)
#define PPSS_TIMER1_CLK_CTL			REG(0x2590)
#define PPSS_RESET				REG(0x2594)
#define PMEM_ACLK_CTL_REG			REG(0x25A0)
#define PMEM_ACLK_FS				REG(0x25A4)
#define DMA_BAM_HCLK_CTL			REG(0x25C0)
#define DMA_BAM_HCLK_FS				REG(0x25C4)
#define SIC_HCLK_CTL				REG(0x25E0)
#define SPS_TIC_HCLK_CTL			REG(0x2600)
#define CFPB_2X_CLK_SRC0_NS			REG(0x2640)
#define CFPB_2X_CLK_SRC1_NS			REG(0x2644)
#define CFPB_2X_CLK_SRC_CTL			REG(0x2648)
#define CFPB_CLK_NS				REG(0x264C)
#define CFPB0_HCLK_CTL				REG(0x2650)
#define CFPB1_HCLK_CTL				REG(0x2654)
#define CFPB2_HCLK_CTL				REG(0x2658)
#define SFAB_CFPB_M_HCLK_CTL			REG(0x2680)
#define CFPB_MASTER_HCLK_CTL			REG(0x26A0)
#define SFAB_CFPB_S_HCLK_CTL			REG(0x26C0)
#define CFPB_SPLITTER_HCLK_CTL			REG(0x26E0)
#define TSIF_HCLK_CTL_REG			REG(0x2700)
#define TSIF_HCLK_FS				REG(0x2704)
#define TSIF_INACTIVITY_TIMERS_CLK_CTL		REG(0x2708)
#define TSIF_REF_CLK_MD_REG			REG(0x270C)
#define TSIF_REF_CLK_NS_REG			REG(0x2710)
#define CE1_HCLK_CTL_REG			REG(0x2720)
#define CE1_CORE_CLK_CTL_REG			REG(0x2724)
#define CE1_SLEEP_CLK_CTL			REG(0x2728)
#define CE2_HCLK_CTL				REG(0x2740)
#define CE2_CORE_CLK_CTL			REG(0x2744)
#define SFPB_HCLK_SRC0_NS			REG(0x2760)
#define SFPB_HCLK_SRC1_NS			REG(0x2764)
#define SFPB_HCLK_SRC_CTL			REG(0x2768)
#define SFPB_HCLK_CTL				REG(0x276C)
#define SFAB_SFPB_M_HCLK_CTL			REG(0x2780)
#define SFAB_SFPB_S_HCLK_CTL			REG(0x27A0)
#define RPM_PROC_CLK_CTL			REG(0x27C0)
#define RPM_BUS_HCLK_CTL			REG(0x27C4)
#define RPM_BUS_HCLK_FS				REG(0x27C8)
#define RPM_SLEEP_CLK_CTL			REG(0x27CC)
#define RPM_TIMER_CLK_CTL			REG(0x27D0)
#define RPM_MSG_RAM_HCLK_CTL_REG		REG(0x27E0)
#define RPM_MSG_RAM_HCLK_FS			REG(0x27E4)
#define PMIC_ARB0_HCLK_CTL			REG(0x2800)
#define PMIC_ARB1_HCLK_CTL			REG(0x2804)
#define PMIC_ARB1_HCLK_FS			REG(0x2808)
#define PMIC_SSBI2_NS				REG(0x280C)
#define PMIC_SSBI2_CLK_FS			REG(0x280D)
#define SDCn_HCLK_CTL_REG(n)			REG(0x2820+32*(n-1))
#define SDC1_HCLK_CTL				REG(0x2820)
#define SDCn_HCLK_FS(n)				REG(0x2824+32*(n-1))
#define SDC1_HCLK_FS				REG(0x2824)
#define SDCn_APPS_CLK_MD_REG(n)			REG(0x2828+32*(n-1))
#define SDC1_APPS_CLK_MD			REG(0x2828)
#define SDCn_APPS_CLK_NS_REG(n)			REG(0x282C+32*(n-1))
#define SDC1_APPS_CLK_NS			REG(0x282C)
#define SDCn_RESET_REG(n)			REG(0x2830+32*(n-1))
#define SDC1_RESET				REG(0x2830)
#define SDCn_APPS_CLK_FS(n)			REG(0x2834+32*(n-1))
#define SDC1_APPS_CLK_FS			REG(0x2834)
#define QMC_ACC					REG(0x28E0)
#define ACC_HPIMEM_RF8441			REG(0x28E4)
#define ARR_STBY_N				REG(0x28E8)
#define USB_HS1_HCLK_CTL_REG			REG(0x2900)
#define USB_HS1_HCLK_FS_REG			REG(0x2904)
#define USB_HS1_XCVR_FS_CLK_MD_REG		REG(0x2908)
#define USB_HS1_XCVR_FS_CLK_NS_REG		REG(0x290C)
#define USB_HS1_RESET_REG			REG(0x2910)
#define USB_HSIC_HCLK_CTL_REG			REG(0x2920)
#define USB_HSIC_XCVR_FS_CLK_MD_REG		REG(0x2924)
#define USB_HSIC_XCVR_FS_CLK_NS_REG		REG(0x2928)
#define USB_HSIC_SYSTEM_CLK_CTL_REG		REG(0x292C)
#define USB_HSIC_SYSTEM_CLK_FS			REG(0x2930)
#define USB_HSIC_RESET_REG			REG(0x2934)
#define VDD_USB_HSIC_GFS_CTL			REG(0x2938)
#define VDD_USB_HSIC_GFS_CTL_STATUS		REG(0x293C)
#define CFPB0_C0_HCLK_CTL			REG(0x2940)
#define CFPB0_D0_HCLK_CTL			REG(0x2944)
#define CFPB0_C1_HCLK_CTL			REG(0x2948)
#define CFPB0_D1_HCLK_CTL			REG(0x294C)
#define USB_FS1_HCLK_CTL_REG			REG(0x2960)
#define USB_FS1_XCVR_FS_CLK_MD_REG		REG(0x2964)
#define USB_FS1_XCVR_FS_CLK_NS_REG		REG(0x2968)
#define USB_FS1_SYSTEM_CLK_CTL_REG		REG(0x296C)
#define USB_FS1_SYSTEM_CLK_FS_REG		REG(0x2970)
#define USB_FS1_RESET_REG			REG(0x2974)
#define GSBI_COMMON_SIM_CLK_NS			REG(0x29A0)
#define GSBIn_HCLK_CTL_REG(n)			REG(0x29C0+32*(n-1))
#define GSBI1_HCLK_CTL				REG(0x29C0)
#define GSBIn_HCLK_FS(n)			REG(0x29C4+32*(n-1))
#define GSBI1_HCLK_FS				REG(0x29C4)
#define GSBIn_QUP_APPS_MD_REG(n)		REG(0x29C8+32*(n-1))
#define GSBI1_QUP_APPS_MD			REG(0x29C8)
#define GSBIn_QUP_APPS_NS_REG(n)		REG(0x29CC+32*(n-1))
#define GSBI1_QUP_APPS_NS			REG(0x29CC)
#define GSBIn_UART_APPS_MD_REG(n)		REG(0x29D0+32*(n-1))
#define GSBI1_UART_APPS_MD			REG(0x29D0)
#define GSBIn_UART_APPS_NS_REG(n)		REG(0x29D4+32*(n-1))
#define GSBI1_UART_APPS_NS			REG(0x29D4)
#define GSBIn_SIM_CLK_CTL(n)			REG(0x29D8+32*(n-1))
#define GSBI1_SIM_CLK_CTL			REG(0x29D8)
#define GSBIn_RESET_REG(n)			REG(0x29DC+32*(n-1))
#define GSBI1_RESET				REG(0x29DC)
#define USB_HSIC_HSIC_CLK_SRC_CTL_REG		REG(0x2B40)
#define USB_HSIC_HSIC_CLK_CTL_REG		REG(0x2B44)
#define USB_HSIC_HSIO_CAL_CLK_CTL_REG		REG(0x2B48)
#define SPDM_CFG_HCLK_CTL			REG(0x2B60)
#define SPDM_MSTR_HCLK_CTL			REG(0x2B64)
#define SPDM_FF_CLK_CTL				REG(0x2B68)
#define SPDM_RESET				REG(0x2B6C)
#define SEC_CTRL_CLK_CTL			REG(0x2B80)
#define SEC_CTRL_CLK_FS				REG(0x2B84)
#define SEC_CTRL_ACC_CLK_SRC0_NS		REG(0x2B88)
#define SEC_CTRL_ACC_CLK_SRC1_NS		REG(0x2B8C)
#define SEC_CTRL_ACC_CLK_SRC_CTL		REG(0x2B90)
#define SEC_CTRL_ACC_CLK_CTL			REG(0x2B94)
#define SEC_CTRL_ACC_CLK_FS			REG(0x2B98)
#define TLMM_HCLK_CTL				REG(0x2BA0)
#define TLMM_CLK_CTL				REG(0x2BA4)
#define SATA_HCLK_CTL_REG			REG(0x2C00)
#define SATA_HCLK_FS				REG(0x2C04)
#define SATA_CLK_SRC_NS_REG			REG(0x2C08)
#define SATA_RXOOB_CLK_CTL_REG			REG(0x2C0C)
#define SATA_PMALIVE_CLK_CTL_REG		REG(0x2C10)
#define SATA_PHY_REF_CLK_CTL_REG		REG(0x2C14)
#define SATA_SFAB_M_PORT_RESET			REG(0x2C18)
#define SATA_RESET				REG(0x2C1C)
#define SATA_ACLK_CTL_REG			REG(0x2C20)
#define SATA_ACLK_FS				REG(0x2C24)
#define SATA_PHY_CFG_CLK_CTL_REG		REG(0x2C40)
#define GSS_SLP_CLK_CTL				REG(0x2C60)
#define GSS_RESET				REG(0x2C64)
#define GSS_CLAMP_ENA				REG(0x2C68)
#define GSS_CXO_SRC_CTL				REG(0x2C74)
#define TSSC_CLK_CTL_REG			REG(0x2CA0)
#define PDM_CLK_NS_REG				REG(0x2CC0)
#define GPn_MD_REG(n)				REG(0x2D00+32*(n))
#define GP0_MD					REG(0x2D00)
#define GPn_NS_REG(n)				REG(0x2D24+32*(n))
#define GP0_NS					REG(0x2D24)
#define MPM_CLK_CTL				REG(0x2DA0)
#define MPM_RESET				REG(0x2DA4)
#define RINGOSC_NS_REG				REG(0x2DC0)
#define RINGOSC_TCXO_CTL_REG			REG(0x2DC4)
#define RINGOSC_STATUS_REG			REG(0x2DCC)
#define EBI1_CLK_SRC0_NS			REG(0x2DE0)
#define EBI1_CLK_SRC1_NS			REG(0x2DE4)
#define EBI1_CLK_SRC_CTL			REG(0x2DE8)
#define EBI1_CLK_CTL				REG(0x2DEC)
#define EBI1_FRQSW_CTL				REG(0x2DF0)
#define EBI1_FRQSW_STATUS			REG(0x2DF4)
#define EBI1_FRQSW_REQ_ACK_TIMER		REG(0x2DF8)
#define EBI1_XO_SRC_CTL				REG(0x2DFC)
#define SFAB_SMPSS_S_HCLK_CTL			REG(0x2E00)
#define SCSS_DBG_STATUS_REQ			REG(0x2E60)
#define SCSS_DBG_STATUS_CORE_PWRDUP		REG(0x2E64)
#define USB_PHY0_RESET_REG			REG(0x2E20)	// This is not there in the flat file??
#define PRNG_CLK_NS_REG				REG(0x2E80)
#define PXO_SRC_CLK_CTL_REG			REG(0x2EA0)
#define LPASS_XO_SRC_CLK_CTL			REG(0x2EC0)
#define GLOBAL_BUS_NS				REG(0x2EE0)
#define PLL11_DIV_SRC_CTL			REG(0x2F20)
#define SPDM_CY_PORT0_CLK_CTL			REG(0x2F60)
#define SPDM_CY_PORT1_CLK_CTL			REG(0x2F64)
#define SPDM_CY_PORT2_CLK_CTL			REG(0x2F68)
#define SPDM_CY_PORT3_CLK_CTL			REG(0x2F6C)
#define SPDM_CY_PORT4_CLK_CTL			REG(0x2F70)
#define SPDM_CY_PORT5_CLK_CTL			REG(0x2F74)
#define SPDM_CY_PORT6_CLK_CTL			REG(0x2F78)
#define SPDM_CY_PORT7_CLK_CTL			REG(0x2F7C)
#define RESET_ALL				REG(0x2F80)
#define RESET_STATUS				REG(0x2F84)
#define PLLTEST_PAD_CFG_REG			REG(0x2FA4)
#define CLKTEST_PAD_CFG				REG(0x2FA8)
#define JITTER_PROBE				REG(0x2FAC)
#define JITTER_PROBE_VAL			REG(0x2FB0)
#define CLK_HALT_AFAB_SFAB_STATEA_REG		REG(0x2FC0)
#define CLK_HALT_AFAB_SFAB_STATEB_REG		REG(0x2FC4)
#define CLK_HALT_DFAB_STATE_REG			REG(0x2FC8)
#define CLK_HALT_CFPB_STATEA_REG		REG(0x2FCC)
#define CLK_HALT_CFPB_STATEB_REG		REG(0x2FD0)
#define CLK_HALT_CFPB_STATEC_REG		REG(0x2FD4)
#define CLK_HALT_SFPB_MISC_STATE_REG		REG(0x2FD8)
#define CLK_HALT_GSS_KPSS_MISC_STATE		REG(0x2FDC)
#define CLK_HALT_MSS_SMPSS_MISC_STATE_REG	CLK_HALT_GSS_KPSS_MISC_STATE
#define RPM_CLK_BRANCH_ENA_VOTE			REG(0x2FE0)
#define RPM_CLK_SLEEP_ENA_VOTE			REG(0x2FE4)
#define LPA_Q6_CLK_BRANCH_ENA_VOTE		REG(0x3020)
#define LPA_Q6_CLK_SLEEP_ENA_VOTE		REG(0x3024)
#define APCS_CLK_BRANCH_ENA_VOTE		REG(0x3040)
#define APCS_CLK_SLEEP_ENA_VOTE			REG(0x3044)
#define SPARE_CLK_BRANCH_ENA_VOTE		REG(0x3060)
#define SC0_U_CLK_BRANCH_ENA_VOTE_REG		REG(0x3080)
#define APCS_U_CLK_SLEEP_ENA_VOTE		REG(0x3084)
#define PLL0_MODE				REG(0x30C0)
#define PLL0_L_VAL				REG(0x30C4)
#define PLL0_M_VAL				REG(0x30C8)
#define PLL0_N_VAL				REG(0x30CC)
#define PLL0_TEST_CTL				REG(0x30D0)
#define PLL0_CONFIG				REG(0x30D4)
#define PLL0_STATUS				REG(0x30D8)
#define PLL5_MODE				REG(0x30E0)
#define PLL5_L_VAL				REG(0x30E4)
#define PLL5_M_VAL				REG(0x30E8)
#define PLL5_N_VAL				REG(0x30EC)
#define PLL5_TEST_CTL				REG(0x30F0)
#define PLL5_CONFIG				REG(0x30F4)
#define PLL5_STATUS				REG(0x30F8)
#define PLL8_MODE				REG(0x3140)
#define PLL8_L_VAL				REG(0x3144)
#define PLL8_M_VAL				REG(0x3148)
#define PLL8_N_VAL				REG(0x314C)
#define PLL8_TEST_CTL				REG(0x3150)
#define PLL8_CONFIG				REG(0x3154)
#define BB_PLL8_STATUS_REG			REG(0x3158)
#define GPLL1_MODE				REG(0x3160)
#define GPLL1_L_VAL				REG(0x3164)
#define GPLL1_M_VAL				REG(0x3168)
#define GPLL1_N_VAL				REG(0x316C)
#define GPLL1_TEST_CTL				REG(0x3170)
#define GPLL1_CONFIG				REG(0x3174)
#define GPLL1_STATUS				REG(0x3178)
#define EBI1_PLL_MODE				REG(0x3180)
#define EBI1_PLL_L_VAL				REG(0x3184)
#define EBI1_PLL_M_VAL				REG(0x3188)
#define EBI1_PLL_N_VAL				REG(0x318C)
#define EBI1_PLL_TEST_CTL			REG(0x3190)
#define EBI1_PLL_CONFIG				REG(0x3194)
#define EBI1_PLL_STATUS				REG(0x3198)
#define PLL18_MODE				REG(0x31A0)
#define PLL18_L_VAL				REG(0x31A4)
#define PLL18_M_VAL				REG(0x31A8)
#define PLL18_N_VAL				REG(0x31AC)
#define PLL18_TEST_CTL				REG(0x31B0)
#define PLL18_CONFIG				REG(0x31B4)
#define PLL18_STATUS				REG(0x31B8)
#define BB_PLL14_MODE_REG			REG(0x31C0)
#define BB_PLL14_L_VAL_REG			REG(0x31C4)
#define BB_PLL14_M_VAL_REG			REG(0x31C8)
#define BB_PLL14_N_VAL_REG			REG(0x31CC)
#define PLL14_TEST_CTL				REG(0x31D0)
#define BB_PLL14_CONFIG_REG			REG(0x31D4)
#define BB_PLL14_STATUS_REG			REG(0x31D8)
#define SC_PLL0_MODE				REG(0x3200)
#define SC_PLL0_CONFIG_CTL			REG(0x3204)
#define SC_PLL0_L_VAL				REG(0x3208)
#define SC_PLL0_M_VAL				REG(0x320C)
#define SC_PLL0_N_VAL				REG(0x3210)
#define SC_PLL0_DROOP_CTL			REG(0x3214)
#define SC_PLL0_TEST_CTL			REG(0x3218)
#define SC_PLL0_STATUS				REG(0x321C)
#define SC_PLL1_MODE				REG(0x3240)
#define SC_PLL1_CONFIG_CTL			REG(0x3244)
#define SC_PLL1_L_VAL				REG(0x3248)
#define SC_PLL1_M_VAL				REG(0x324C)
#define SC_PLL1_N_VAL				REG(0x3250)
#define SC_PLL1_DROOP_CTL			REG(0x3254)
#define SC_PLL1_TEST_CTL			REG(0x3258)
#define SC_PLL1_STATUS				REG(0x325C)
#define SC_PLL2_MODE				REG(0x3280)
#define SC_PLL2_CONFIG_CTL			REG(0x3284)
#define SC_PLL2_L_VAL				REG(0x3288)
#define SC_PLL2_M_VAL				REG(0x328C)
#define SC_PLL2_N_VAL				REG(0x3290)
#define SC_PLL2_DROOP_CTL			REG(0x3294)
#define SC_PLL2_TEST_CTL			REG(0x3298)
#define SC_PLL2_STATUS				REG(0x329C)
#define SC_PLL3_MODE				REG(0x32C0)
#define SC_PLL3_CONFIG_CTL			REG(0x32C4)
#define SC_PLL3_L_VAL				REG(0x32C8)
#define SC_PLL3_M_VAL				REG(0x32CC)
#define SC_PLL3_N_VAL				REG(0x32D0)
#define SC_PLL3_DROOP_CTL			REG(0x32D4)
#define SC_PLL3_TEST_CTL			REG(0x32D8)
#define SC_PLL3_STATUS				REG(0x32DC)
#define SC_L2_PLL_MODE				REG(0x3300)
#define SC_L2_PLL_CONFIG_CTL			REG(0x3304)
#define SC_L2_PLL_L_VAL				REG(0x3308)
#define SC_L2_PLL_M_VAL				REG(0x330C)
#define SC_L2_PLL_N_VAL				REG(0x3310)
#define SC_L2_PLL_DROOP_CTL			REG(0x3314)
#define SC_L2_PLL_TEST_CTL			REG(0x3318)
#define SC_L2_PLL_STATUS			REG(0x331C)
#define PLL_LOCK_DET_STATUS			REG(0x3420)
#define PLL_LOCK_DET_MASK			REG(0x3424)
#define PLL_ENA_SPARE				REG(0x3460)
#define PLL_ENA_GSS				REG(0x3480)
#define PLL_ENA_RPM				REG(0x34A0)
#define BB_PLL_ENA_SC0_REG			REG(0x34C0)
#define PLL_ENA_APCS_U				REG(0x34E0)
#define PLL_ENA_RIVA				REG(0x3500)
#define PLL_ENA_LPASS_DSP			REG(0x3520)
#define PLL_ENA_SPS				REG(0x3540)
#define FABS_RESET				REG(0x3560)
#define RIVA_RESET				REG(0x35E0)
#define XPU_RESET				REG(0x3600)
#define TSENS_CNTL				REG(0x3620)
#define TSENS_THRESHOLD				REG(0x3624)
#define TSENS_S0_STATUS				REG(0x3628)
#define TSENS_S1_STATUS				REG(0x362C)
#define TSENS_S2_STATUS				REG(0x3630)
#define TSENS_S3_STATUS				REG(0x3634)
#define TSENS_S4_STATUS				REG(0x3638)
#define TSENS_INT_STATUS			REG(0x363C)
#define TSENS_CONFIG				REG(0x3640)
#define TSENS_TEST_CNTL				REG(0x3644)
#define TSENS_STATUS_CNTL			REG(0x3660)
#define TSENS_S5_STATUS				REG(0x3664)
#define TSENS_S6_STATUS				REG(0x3668)
#define TSENS_S7_STATUS				REG(0x366C)
#define TSENS_S8_STATUS				REG(0x3670)
#define TSENS_S9_STATUS				REG(0x3674)
#define TSENS_S10_STATUS			REG(0x3678)
#define CE5_CORE_CLK_SRC_CTL			REG(0x36C0)
#define CE5_CORE_CLK_SRC0_NS			REG(0x36C4)
#define CE5_CLK_SRC_NS_REG			CE5_CORE_CLK_SRC0_NS
#define CE5_CORE_CLK_SRC1_NS			REG(0x36C8)
#define CE5_CORE_CLK_CTL_REG			REG(0x36CC)
#define CE5_CORE_CLK_FS				REG(0x36D0)
#define CE3_SLEEP_CLK_CTL			REG(0x36D0)
#define SFAB_AHB_S8_FCLK_CTL			REG(0x36E0)
#define USB_HS3_HCLK_CTL_REG			REG(0x3700)
#define USB_HS3_HCLK_FS_REG			REG(0x3704)
#define USB_HS3_XCVR_FS_CLK_MD_REG		REG(0x3708)
#define USB_HS3_XCVR_FS_CLK_NS_REG		REG(0x370C)
#define USB_HS3_RESET_REG			REG(0x3710)
#define USB_HS4_HCLK_CTL_REG			REG(0x3720)
#define USB_HS4_HCLK_FS_REG			REG(0x3724)
#define USB_HS4_XCVR_FS_CLK_MD_REG		REG(0x3728)
#define USB_HS4_XCVR_FS_CLK_NS_REG		REG(0x372C)
#define USB_HS4_RESET_REG			REG(0x3730)
#define GSS_CLK_BRANCH_ENA_VOTE			REG(0x3740)
#define GSS_CLK_SLEEP_ENA_VOTE			REG(0x3744)
#define RIVA_CLK_BRANCH_ENA_VOTE		REG(0x37E4)
#define SPDM_CY_PORT8_CLK_CTL			REG(0x3800)
#define APCS_WDT0_CPU0_WDOG_EXPIRED_ENABLE	REG(0x3820)
#define APCS_WDT1_CPU0_WDOG_EXPIRED_ENABLE	REG(0x3824)
#define APCS_WDT0_CPU1_WDOG_EXPIRED_ENABLE	REG(0x3828)
#define APCS_WDT1_CPU1_WDOG_EXPIRED_ENABLE	REG(0x382C)
#define APCS_WDT0_CPU2_WDOG_EXPIRED_ENABLE	REG(0x3830)
#define APCS_WDT1_CPU2_WDOG_EXPIRED_ENABLE	REG(0x3834)
#define APCS_WDT0_CPU3_WDOG_EXPIRED_ENABLE	REG(0x3838)
#define APCS_WDT1_CPU3_WDOG_EXPIRED_ENABLE	REG(0x383C)
#define RPM_WDOG_EXPIRED_ENABLE			REG(0x3840)
#define PCIE_ALT_REF_CLK_NS			REG(0x3860)
#define SPARE0					REG(0x3880)
#define SPARE1					REG(0x3884)
#define SPARE2					REG(0x3888)
#define SPARE3					REG(0x388C)
#define SPARE4					REG(0x38A0)
#define SPARE5					REG(0x38A4)
#define SPARE6					REG(0x38A8)
#define SPARE7					REG(0x38AC)
#define PCIE_1_ACLK_CTL_REG			REG(0x3A80)
#define PCIE_1_ACLK_FS				REG(0x3A84)
#define PCIE_1_AUX_CLK_CTL			REG(0x3A88)
#define PCIE_1_HCLK_CTL_REG			REG(0x3A8C)
#define PCIE_1_PCLK_CTL_REG			REG(0x3A90)
#define PCIE_1_PCLK_FS				REG(0x3A94)
#define PCIE_1_SFAB_PORT_RESET			REG(0x3A98)
#define PCIE_1_RESET				REG(0x3A9C)
#define PCIE_1_ALT_REF_CLK_NS			REG(0x3AA0)
#define PCIE_2_ACLK_CTL_REG			REG(0x3AC0)
#define PCIE_2_ACLK_FS				REG(0x3AC4)
#define PCIE_2_AUX_CLK_CTL			REG(0x3AC8)
#define PCIE_2_HCLK_CTL_REG			REG(0x3ACC)
#define PCIE_2_PCLK_CTL_REG			REG(0x3AD0)
#define PCIE_2_PCLK_FS				REG(0x3AD4)
#define PCIE_2_SFAB_PORT_RESET			REG(0x3AD8)
#define PCIE_2_RESET				REG(0x3ADC)
#define PCIE_2_ALT_REF_CLK_NS			REG(0x3AE0)
#define EBI2_CLK_CTL				REG(0x3B00)
#define EBI2_CLK_FS				REG(0x3B04)
#define USB30_0_ACLK_FS				REG(0x3B20)
#define USB30_0_MASTER_CLK_CTL			REG(0x3B24)
#define USB30_MASTER_CLK_MD			REG(0x3B28)
#define USB30_MASTER_CLK_NS			REG(0x3B2C)
#define USB30_1_ACLK_FS				REG(0x3B30)
#define USB30_1_MASTER_CLK_CTL			REG(0x3B34)
#define USB30_0_SLEEP_CLK_CTL			REG(0x3B38)
#define USB30_1_SLEEP_CLK_CTL			REG(0x3B3C)
#define USB30_MOC_UTMI_CLK_MD			REG(0x3B40)
#define USB30_MOC_UTMI_CLK_NS			REG(0x3B44)
#define USB30_0_MOC_UTMI_CLK_CTL		REG(0x3B48)
#define USB30_1_MOC_UTMI_CLK_CTL		REG(0x3B4C)
#define USB30_0_RESET				REG(0x3B50)
#define USB30_0_SFAB_PORT_RESET			REG(0x3B54)
#define USB30_1_RESET				REG(0x3B58)
#define USB30_1_SFAB_PORT_RESET			REG(0x3B5C)
#define NSS_RESET				REG(0x3B60)
#define NSS_RESET_SPARE				REG(0x3B64)
#define NSS_FB0_CLK_SRC_CTL			REG(0x3B80)
#define NSS_FAB0_CLK_SRC0_NS			REG(0x3B84)
#define NSS_FAB0_CLK_SRC1_NS			REG(0x3B88)
#define NSS_FB0_CLK_CTL				REG(0x3BA0)
#define NSS_FAB_GLOBAL_BUS_NS			REG(0x3BC0)
#define NSS_FB1_CLK_SRC_CTL			REG(0x3BE0)
#define NSS_FAB1_CLK_SRC0_NS			REG(0x3BE4)
#define NSS_FAB1_CLK_SRC1_NS			REG(0x3BE8)
#define NSS_FB1_CLK_CTL				REG(0x3C00)
#define CLK_HALT_NSS_FAB0_NSS_FAB1_STATEA_REG	REG(0x3C20)
#define UBI32_MPT_CLK_CTL			REG(0x3C40)
#define CE5_HCLK_SRC_CTL			REG(0x3C60)
#define CE5_HCLK_SRC0_NS			REG(0x3C64)
#define CE5_HCLK_SRC1_NS			REG(0x3C68)
#define CE5_HCLK_CTL_REG			REG(0x3C6C)
#define NSS_FPB_CLK_CTL				REG(0x3C80)
#define NSS_FPB_CLK_SRC_CTL			REG(0x3C84)
#define NSS_FPB_CLK_SRC0_NS			REG(0x3C88)
#define NSS_FPB_CLK_SRC1_NS			REG(0x3C88)
#define GMAC_COREn_CLK_SRC_CTL(n)		REG(0x3CA0+32*(n-1))
#define GMAC_CORE1_CLK_SRC_CTL			REG(0x3CA0)
#define GMAC_COREn_CLK_MD(n)			REG(0x3CA4+32*(n-1))
#define GMAC_CORE1_CLK_MD			REG(0x3CA4)
#define GMAC_COREn_DUAL_MN8_CRC_CTL(n)		REG(0x3CA8+32*(n-1))
#define GMAC_CORE1_DUAL_MN8_CRC_CTL		REG(0x3CA8)
#define GMAC_COREn_CLK_CTL(n)			REG(0x3CAC+32*(n-1))
#define GMAC_CORE1_CLK_CTL			REG(0x3CAC)
#define GMAC_COREn_CLK_FS(n)			REG(0x3CB0+32*(n-1))
#define GMAC_CORE1_CLK_FS			REG(0x3CB0)
#define UBI32_COREn_CLK_SRC_CTL(n)		REG(0x3D20+32*(n))
#define UBI32_CORE1_CLK_SRC_CTL			REG(0x3D20)
#define UBI32_COREn_CLK_SRC0_MD(n)		REG(0x3D24+32*(n))
#define UBI32_CORE1_CLK_SRC0_MD			REG(0x3D24)
#define UBI32_COREn_CLK_SRC1_MD(n)		REG(0x3D28+32*(n))
#define UBI32_CORE1_CLK_SRC1_MD			REG(0x3D28)
#define UBI32_COREn_CLK_SRC0_NS(n)		REG(0x3D2C+32*(n))
#define UBI32_CORE1_CLK_SRC0_NS			REG(0x3D2C)
#define UBI32_COREn_CLK_SRC1_NS(n)		REG(0x3D30+32*(n))
#define UBI32_CORE1_CLK_SRC1_NS			REG(0x3D30)
#define UBI32_COREn_CLK_CTL(n)			REG(0x3D34+32*(n))
#define UBI32_CORE1_CLK_CTL			REG(0x3D34)
#define UBI32_COREn_DUAL_MN8_CRC_CTL(n)		REG(0x3D28+32*(n-1))
#define UBI32_CORE1_DUAL_MN8_CRC_CTL		REG(0x3D28)
#define UBI32_COREn_CLK_FS(n)			REG(0x3D30+32*(n-1))
#define UBI32_CORE1_CLK_FS			REG(0x3D30)
#define NSS_250MHZ_CLK_SRC_CTL			REG(0x3D60)
#define NSS_250MHZ_CLK_SRC0_NS			REG(0x3D64)
#define NSS_250MHZ_CLK_SRC1_NS			REG(0x3D68)
#define NSS_250MHZ_CLK_CTL			REG(0x3D6C)
#define CE5_ACLK_SRC_CTL			REG(0x3D80)
#define CE5_ACLK_SRC0_NS			REG(0x3D84)
#define CE5_ACLK_SRC1_NS			REG(0x3D88)
#define CE5_ACLK_CTL				REG(0x3D8C)
#define PLL_ENA_NSS				REG(0x3DA0)
#define NSS_TCM_CLK_SRC_CTL			REG(0x3DC0)
#define NSS_TCM_CLK_SRC0_NS			REG(0x3DC4)
#define NSS_TCM_CLK_SRC1_NS			REG(0x3DC8)
#define NSS_TCM_CLK_FS				REG(0x3DCC)
#define NSS_TCM_CLK_CTL				REG(0x3DD0)
#define MVS_CNTRL				REG(0x3DF0)
#define CLK_TEST_REG				REG(0x2FA0)
#define GCC_APCS_CLK_DIAG			REG_GCC(0x001C)

/* LPASS CLOCK REGISTERS */
#define LCC_CLK_HS_DEBUG_CFG_REG		REG_LPA(0x00A4)
#define LCC_CLK_LS_DEBUG_CFG_REG		REG_LPA(0x00A8)
#define LCC_CODEC_I2S_MIC_MD_REG		REG_LPA(0x0064)
#define LCC_CODEC_I2S_MIC_NS_REG		REG_LPA(0x0060)
#define LCC_CODEC_I2S_MIC_STATUS_REG		REG_LPA(0x0068)
#define LCC_CODEC_I2S_SPKR_MD_REG		REG_LPA(0x0070)
#define LCC_CODEC_I2S_SPKR_NS_REG		REG_LPA(0x006C)
#define LCC_CODEC_I2S_SPKR_STATUS_REG		REG_LPA(0x0074)
#define LCC_MI2S_MD_REG				REG_LPA(0x004C)
#define LCC_MI2S_NS_REG				REG_LPA(0x0048)
#define LCC_MI2S_STATUS_REG			REG_LPA(0x0050)
#define LCC_PCM_MD_REG				REG_LPA(0x0058)
#define LCC_PCM_NS_REG				REG_LPA(0x0054)
#define LCC_PCM_STATUS_REG			REG_LPA(0x005C)
#define LCC_PLL0_MODE_REG			REG_LPA(0x0000)
#define LCC_PLL0_L_VAL_REG			REG_LPA(0x0004)
#define LCC_PLL0_M_VAL_REG			REG_LPA(0x0008)
#define LCC_PLL0_N_VAL_REG			REG_LPA(0x000C)
#define LCC_PLL0_CONFIG_REG			REG_LPA(0x0014)
#define LCC_PLL0_STATUS_REG			REG_LPA(0x0018)
#define LCC_SPARE_I2S_MIC_MD_REG		REG_LPA(0x007C)
#define LCC_SPARE_I2S_MIC_NS_REG		REG_LPA(0x0078)
#define LCC_SPARE_I2S_MIC_STATUS_REG		REG_LPA(0x0080)
#define LCC_SPARE_I2S_SPKR_MD_REG		REG_LPA(0x0088)
#define LCC_SPARE_I2S_SPKR_NS_REG		REG_LPA(0x0084)
#define LCC_SPARE_I2S_SPKR_STATUS_REG		REG_LPA(0x008C)
#define LCC_SLIMBUS_NS_REG			REG_LPA(0x00CC)
#define LCC_SLIMBUS_MD_REG			REG_LPA(0x00D0)
#define LCC_SLIMBUS_STATUS_REG			REG_LPA(0x00D4)
#define LCC_AHBEX_BRANCH_CTL_REG		REG_LPA(0x00E4)
#define LCC_PRI_PLL_CLK_CTL_REG			REG_LPA(0x00C4)
#define LCC_AHBIX_NS_REG			REG_LPA(0x0038)
#define LCC_AHBIX_MD_REG			REG_LPA(0x003C)
#define LCC_AHBIX_STATUS_REG			REG_LPA(0x0044)
#define LCC_PXO_SRC_CTL_REG			REG_LPA(0x00B4)
#define LCC_PRI_PLL_CLK_CTL			REG_LPA(0x00C4)
#define LCC_PLL0_MODE_MASK			(0)
#define LCC_PLL0_MODE_OUTCTRL			(1 << 0)
#define LCC_PLL0_MODE_BYPASSNL			(1 << 1)
#define LCC_PLL0_MODE_RESET_N			(1 << 2)
#define LCC_PXO_SRC_CTL_MASK			(0)
#define LCC_PXO_SRC_CTL_GFM_CXO_SRC_SEL		(1 << 0)
#define LCC_PRI_PLL_CLK_CTL_MASK		(0)
#define LCC_PRI_PLL_CLK_CTL_GFM_PRI_PLL_SRC_SEL	(1 << 0)


/* MUX source input identifiers. */
#define pxo_to_bb_mux		0
#define cxo_to_bb_mux		5
#define pll0_to_bb_mux		2
#define pll8_to_bb_mux		3
#define pll6_to_bb_mux		4
#define gnd_to_bb_mux		5
#define pll3_to_bb_mux		6
#define pxo_to_mm_mux		0
#define cxo_to_xo_mux		0
#define pxo_to_xo_mux		1
#define gnd_to_xo_mux		3
#define pxo_to_lpa_mux		0
#define pll4_to_lpa_mux		2
#define gnd_to_lpa_mux		6
#define pll3_to_pcie_mux	1
#define pxo_to_pcie_mux		1

/* Test Vector Macros */
#define TEST_TYPE_PER_LS	1
#define TEST_TYPE_PER_HS	2
#define TEST_TYPE_MM_LS		3
#define TEST_TYPE_MM_HS		4
#define TEST_TYPE_LPA		5
#define TEST_TYPE_CPUL2		6
#define TEST_TYPE_LPA_HS	7
#define TEST_TYPE_SHIFT		24
#define TEST_CLK_SEL_MASK	BM(23, 0)
#define TEST_VECTOR(s, t)	(((t) << TEST_TYPE_SHIFT) | BVAL(23, 0, (s)))
#define TEST_PER_LS(s)		TEST_VECTOR((s), TEST_TYPE_PER_LS)
#define TEST_PER_HS(s)		TEST_VECTOR((s), TEST_TYPE_PER_HS)
#define TEST_MM_LS(s)		TEST_VECTOR((s), TEST_TYPE_MM_LS)
#define TEST_LPA(s)		TEST_VECTOR((s), TEST_TYPE_LPA)
#define TEST_LPA_HS(s)		TEST_VECTOR((s), TEST_TYPE_LPA_HS)
#define TEST_CPUL2(s)		TEST_VECTOR((s), TEST_TYPE_CPUL2)

#define CLK_IPQ_AFAB_IDLE_FREQ		(133 * 1000 * 1000)
#define CLK_IPQ_AFAB_NOMINAL_FREQ	(400 * 1000 * 1000)
#define CLK_IPQ_AFAB_TURBO_FREQ		(533 * 1000 * 1000)
#define CLK_IPQ_SFAB_IDLE_FREQ		(80 * 1000 * 1000)
#define CLK_IPQ_SFAB_NOMINAL_FREQ	(133 * 1000 * 1000)
#define CLK_IPQ_SFAB_TURBO_FREQ		(177.667 * 1000 * 1000)
#define CLK_IPQ_DFAB_IDLE_FREQ		(32 * 1000 * 1000)
#define CLK_IPQ_DFAB_NOMINAL_FREQ	(64 * 1000 * 1000)
#define CLK_IPQ_DFAB_TURBO_FREQ		(64 * 1000 * 1000)
#define CLK_IPQ_SFPB_IDLE_FREQ		(32 * 1000 * 1000)
#define CLK_IPQ_SFPB_NOMINAL_FREQ	(64 * 1000 * 1000)
#define CLK_IPQ_SFPB_TURBO_FREQ		(64 * 1000 * 1000)
#define CLK_IPQ_CFPB_IDLE_FREQ		(32 * 1000 * 1000)
#define CLK_IPQ_CFPB_NOMINAL_FREQ	(64 * 1000 * 1000)
#define CLK_IPQ_CFPB_TURBO_FREQ		(64 * 1000 * 1000)

#define MN_MODE_DUAL_EDGE 0x2

/* MD Registers */
#define MD4(m_lsb, m, n_lsb, n) \
    (BVAL((m_lsb+3), m_lsb, m) | BVAL((n_lsb+3), n_lsb, ~(n)))

#define MD8(m_lsb, m, n_lsb, n) \
    (BVAL((m_lsb+7), m_lsb, m) | BVAL((n_lsb+7), n_lsb, ~(n)))

#define MD16(m, n) (BVAL(31, 16, m) | BVAL(15, 0, ~(n)))

/* NS Registers */
#define NS(n_msb, n_lsb, n, m, mde_lsb, d_msb, d_lsb, d, s_msb, s_lsb, s) \
    (BVAL(n_msb, n_lsb, ~(n-m)) \
     | (BVAL((mde_lsb+1), mde_lsb, MN_MODE_DUAL_EDGE) * !!(n)) \
     | BVAL(d_msb, d_lsb, (d-1)) | BVAL(s_msb, s_lsb, s))

#define NS_MM(n_msb, n_lsb, n, m, d_msb, d_lsb, d, s_msb, s_lsb, s) \
    (BVAL(n_msb, n_lsb, ~(n-m)) | BVAL(d_msb, d_lsb, (d-1)) \
     | BVAL(s_msb, s_lsb, s))

#define NS_DIVSRC(d_msb , d_lsb, d, s_msb, s_lsb, s) \
    (BVAL(d_msb, d_lsb, (d-1)) | BVAL(s_msb, s_lsb, s))

#define NS_DIV(d_msb , d_lsb, d) \
    BVAL(d_msb, d_lsb, (d-1))

#define NS_SRC_SEL(s_msb, s_lsb, s) \
    BVAL(s_msb, s_lsb, s)

#define NS_MND_BANKED4(n0_lsb, n1_lsb, n, m, s0_lsb, s1_lsb, s) \
    (BVAL((n0_lsb+3), n0_lsb, ~(n-m)) \
     | BVAL((n1_lsb+3), n1_lsb, ~(n-m)) \
     | BVAL((s0_lsb+2), s0_lsb, s) \
     | BVAL((s1_lsb+2), s1_lsb, s))

#define NS_MND_BANKED8(n0_lsb, n1_lsb, n, m, s0_lsb, s1_lsb, s) \
    (BVAL((n0_lsb+7), n0_lsb, ~(n-m)) \
     | BVAL((n1_lsb+7), n1_lsb, ~(n-m)) \
     | BVAL((s0_lsb+2), s0_lsb, s) \
     | BVAL((s1_lsb+2), s1_lsb, s))

#define NS_DIVSRC_BANKED(d0_msb, d0_lsb, d1_msb, d1_lsb, d, \
        s0_msb, s0_lsb, s1_msb, s1_lsb, s) \
(BVAL(d0_msb, d0_lsb, (d-1)) | BVAL(d1_msb, d1_lsb, (d-1)) \
 | BVAL(s0_msb, s0_lsb, s) \
 | BVAL(s1_msb, s1_lsb, s))

/* CC Registers */
#define CC(mde_lsb, n) (BVAL((mde_lsb+1), mde_lsb, MN_MODE_DUAL_EDGE) * !!(n))
#define CC_BANKED(mde0_lsb, mde1_lsb, n) \
    ((BVAL((mde0_lsb+1), mde0_lsb, MN_MODE_DUAL_EDGE) \
      | BVAL((mde1_lsb+1), mde1_lsb, MN_MODE_DUAL_EDGE)) \
     * !!(n))

struct pll_rate {
    const uint32_t    l_val;
    const uint32_t    m_val;
    const uint32_t    n_val;
    const uint32_t    vco;
    const uint32_t    post_div;
    const uint32_t    i_bits;
};
#define PLL_RATE(l, m, n, v, d, i) { l, m, n, v, (d>>1), i }
void clock_usb30_init(void);
void clock_config_uart_dm(uint8_t id);
void clock_config_mmc(uint32_t, uint32_t);
void clock_init_mmc(uint32_t id);
void ce_clock_init(void);
#endif
