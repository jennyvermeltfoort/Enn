#ifndef __I2C_REG_H
#define __I2C_REG_H

#include "macro.h"

#define CR1_PE_MASK 0X01U
#define CR1_PE_SHIFT 0
#define CR1_SMBUS_MASK 0X01U
#define CR1_SMBUS_SHIFT 1
#define CR1_SMBTYPE_MASK 0X01U
#define CR1_SMBTYPE_SHIFT 3
#define CR1_ENARP_MASK 0X01U
#define CR1_ENARP_SHIFT 4
#define CR1_ENPEC_MASK 0X01U
#define CR1_ENPEC_SHIFT 5
#define CR1_ENGC_MASK 0X01U
#define CR1_ENGC_SHIFT 6
#define CR1_NOSTRETCH_MASK 0X01U
#define CR1_NOSTRETCH_SHIFT 7
#define CR1_START_MASK 0X01U
#define CR1_START_SHIFT 8
#define CR1_STOP_MASK 0X01U
#define CR1_STOP_SHIFT 9
#define CR1_ACK_MASK 0X01U
#define CR1_ACK_SHIFT 10
#define CR1_POS_MASK 0X01U
#define CR1_POS_SHIFT 11
#define CR1_PEC_MASK 0X01U
#define CR1_PEC_SHIFT 12
#define CR1_ALERT_MASK 0X01U
#define CR1_ALERT_SHIFT 13
#define CR1_SWRST_MASK 0X01U
#define CR1_SWRST_SHIFT 15

#define I2C_CR2_LAST_MASK 0X01U
#define I2C_CR2_LAST_SHIFT 12
#define I2C_CR2_DMAEN_MASK 0X01U
#define I2C_CR2_DMAEN_SHIFT 11
#define I2C_CR2_ITBUFEN_MASK 0X01U
#define I2C_CR2_ITBUFEN_SHIFT 10
#define I2C_CR2_ITEVTEN_MASK 0X01U
#define I2C_CR2_ITEVTEN_SHIFT 9
#define I2C_CR2_ITERREN_MASK 0X01U
#define I2C_CR2_ITERREN_SHIFT 8
#define I2C_CR2_FREQ_MASK 0X3FU
#define I2C_CR2_FREQ_SHIFT 0

#define I2C_OAR1_ADDMODE_MASK 0X01U
#define I2C_OAR1_ADDMODE_SHIFT 15
#define I2C_OAR1_ADD1_7BIT_MASK 0X7F
#define I2C_OAR1_ADD1_7BIT_SHIFT 1
#define I2C_OAR1_ADD1_10BIT_MASK 0X3FF
#define I2C_OAR1_ADD1_10BIT_SHIFT 0

#define I2C_OAR2_ADD2_7BIT_MASK 0X7F
#define I2C_OAR2_ADD2_7BIT_SHIFT 1
#define I2C_OAR2_ENDUAL_MASK 0X01U
#define I2C_OAR2_ENDUAL_SHIFT 0

#define I2C_DR_DR_MASK 0XFF
#define I2C_DR_DR_SHIFT 0

#define I2C_SR1_SMBALERT_MASK 0X01U
#define I2C_SR1_SMBALERT_SHIFT 15
#define I2C_SR1_TIMEOUT_MASK 0X01U
#define I2C_SR1_TIMEOUT_SHIFT 14
#define I2C_SR1_PECERR_MASK 0X01U
#define I2C_SR1_PECERR_SHIFT 12
#define I2C_SR1_OVR_MASK 0X01U
#define I2C_SR1_OVR_SHIFT 11
#define I2C_SR1_AF_MASK 0X01U
#define I2C_SR1_AF_SHIFT 10
#define I2C_SR1_ARLO_MASK 0X01U
#define I2C_SR1_ARLO_SHIFT 9
#define I2C_SR1_BERR_MASK 0X01U
#define I2C_SR1_BERR_SHIFT 8
#define I2C_SR1_TXE_MASK 0X01U
#define I2C_SR1_TXE_SHIFT 7
#define I2C_SR1_RXNE_MASK 0X01U
#define I2C_SR1_RXNE_SHIFT 6
#define I2C_SR1_STOPF_MASK 0X01U
#define I2C_SR1_STOPF_SHIFT 4
#define I2C_SR1_ADD10_MASK 0X01U
#define I2C_SR1_ADD10_SHIFT 3
#define I2C_SR1_BTF_MASK 0X01U
#define I2C_SR1_BTF_SHIFT 2
#define I2C_SR1_ADDR_MASK 0X01U
#define I2C_SR1_ADDR_SHIFT 1
#define I2C_SR1_SB_MASK 0X01U
#define I2C_SR1_SB_SHIFT 0

#define I2C_SR2_PEC_MASK 0XFFU
#define I2C_SR2_PEC_SHIFT 8
#define I2C_SR2_DUALF_MASK 0X01U
#define I2C_SR2_DUALF_SHIFT 7
#define I2C_SR2_SMBHOST_MASK 0X01U
#define I2C_SR2_SMBHOST_SHIFT 6
#define I2C_SR2_SMBDEFAULT_MASK 0X01U
#define I2C_SR2_SMBDEFAULT_SHIFT 5
#define I2C_SR2_GENCALL_MASK 0X01U
#define I2C_SR2_GENCALL_SHIFT 4
#define I2C_SR2_TRA_MASK 0X01U
#define I2C_SR2_TRA_SHIFT 2
#define I2C_SR2_BUSY_MASK 0X01U
#define I2C_SR2_BUSY_SHIFT 1
#define I2C_SR2_MSL_MASK 0X01U
#define I2C_SR2_MSL_SHIFT 0

#define I2C_CCR_FS_MASK 0X01U
#define I2C_CCR_FS_SHIFT 15
#define I2C_CCR_DUTY_MASK 0X01U
#define I2C_CCR_DUTY_SHIFT 14
#define I2C_CCR_CCR_MASK 0XFFU
#define I2C_CCR_CCR_SHIFT 0

#define I2C_TRISE_TRISE_MASK 0X3FU
#define I2C_TRISE_TRISE_SHIFT 0

#define I2C_FLTR_ANOFF_MASK 0X01U
#define I2C_FLTR_ANOFF_SHIFT 4
#define I2C_FLTR_DNF_MASK 0X07U
#define I2C_FLTR_DNF_SHIFT 0

/**
 * @brief
 */
#define CR1_PE_SET(_val) VMSL(_val, CR1_PE_MASK, CR1_PE_SHIFT)
#define CR1_PE_GET(_val) VMSR(_val, CR1_PE_MASK, CR1_PE_SHIFT)
#define CR1_SMBUS_SET(_val) VMSL(_val, CR1_SMBUS_MASK, CR1_SMBUS_SHIFT)
#define CR1_SMBUS_GET(_val) VMSR(_val, CR1_SMBUS_MASK, CR1_SMBUS_SHIFT)
#define CR1_SMBTYPE_SET(_val) VMSL(_val, CR1_SMBTYPE_MASK, CR1_SMBTYPE_SHIFT)
#define CR1_SMBTYPE_GET(_val) VMSR(_val, CR1_SMBTYPE_MASK, CR1_SMBTYPE_SHIFT)
#define CR1_ENARP_SET(_val) VMSL(_val, CR1_ENARP_MASK, CR1_ENARP_SHIFT)
#define CR1_ENARP_GET(_val) VMSR(_val, CR1_ENARP_MASK, CR1_ENARP_SHIFT)
#define CR1_ENPEC_SET(_val) VMSL(_val, CR1_ENPEC_MASK, CR1_ENPEC_SHIFT)
#define CR1_ENPEC_GET(_val) VMSR(_val, CR1_ENPEC_MASK, CR1_ENPEC_SHIFT)
#define CR1_ENGC_SET(_val) VMSL(_val, CR1_ENGC_MASK, CR1ENGCE_SHIFT)
#define CR1_ENGC_GET(_val) VMSR(_val, CR1_ENGC_MASK, CR1ENGCE_SHIFT)
#define CR1_NOSTRETCH_SET(_val) VMSL(_val, CR1_NOSTRETCH_MASK, CR1_NOSTRETCH_SHIFT)
#define CR1_NOSTRETCH_GET(_val) VMSR(_val, CR1_NOSTRETCH_MASK, CR1_NOSTRETCH_SHIFT)
#define CR1_START_SET(_val) VMSL(_val, CR1_START_MASK, CR1_START_SHIFT)
#define CR1_START_GET(_val) VMSR(_val, CR1_START_MASK, CR1_START_SHIFT)
#define CR1_STOP_SET(_val) VMSL(_val, CR1_STOP_MASK, CR1_STOP_SHIFT)
#define CR1_STOP_GET(_val) VMSR(_val, CR1_STOP_MASK, CR1_STOP_SHIFT)
#define CR1_ACK_SET(_val) VMSL(_val, CR1_ACK_MASK, CR1_ACK_SHIFT)
#define CR1_ACK_GET(_val) VMSR(_val, CR1_ACK_MASK, CR1_ACK_SHIFT)
#define CR1_POS_SET(_val) VMSL(_val, CR1_POS_MASK, CR1_POS_SHIFT)
#define CR1_POS_GET(_val) VMSR(_val, CR1_POS_MASK, CR1_POS_SHIFT)
#define CR1_PEC_SET(_val) VMSL(_val, CR1_PEC_MASK, CR1_PEC_SHIFT)
#define CR1_PEC_GET(_val) VMSR(_val, CR1_PEC_MASK, CR1_PEC_SHIFT)
#define CR1_ALERT_SET(_val) VMSL(_val, CR1_ALERT_MASK, CR1_ALERT_SHIFT)
#define CR1_ALERT_GET(_val) VMSR(_val, CR1_ALERT_MASK, CR1_ALERT_SHIFT)
#define CR1_SWRST_SET(_val) VMSL(_val, CR1_SWRST_MASK, CR1_SWRST_SHIFT)
#define CR1_SWRST_GET(_val) VMSR(_val, CR1_SWRST_MASK, CR1_SWRST_SHIFT)

#define I2C_CR2_LAST_SET(_val) VMSL(_val, I2C_CR2_LAST_MASK, I2C_CR2_LAST_SHIFT)
#define I2C_CR2_LAST_GET(_val) VMSR(_val, I2C_CR2_LAST_MASK, I2C_CR2_LAST_SHIFT)
#define I2C_CR2_DMAEN_SET(_val) VMSL(_val, I2C_CR2_DMAEN_MASK, I2C_CR2_DMAEN_SHIFT)
#define I2C_CR2_DMAEN_GET(_val) VMSR(_val, I2C_CR2_DMAEN_MASK, I2C_CR2_DMAEN_SHIFT)
#define I2C_CR2_ITBUFEN_SET(_val) VMSL(_val, I2C_CR2_ITBUFEN_MASK, I2C_CR2_ITBUFEN_SHIFT)
#define I2C_CR2_ITBUFEN_GET(_val) VMSR(_val, I2C_CR2_ITBUFEN_MASK, I2C_CR2_ITBUFEN_SHIFT)
#define I2C_CR2_ITEVTEN_SET(_val) VMSL(_val, I2C_CR2_ITEVTEN_MASK, I2C_CR2_ITEVTEN_SHIFT)
#define I2C_CR2_ITEVTEN_GET(_val) VMSR(_val, I2C_CR2_ITEVTEN_MASK, I2C_CR2_ITEVTEN_SHIFT)
#define I2C_CR2_ITERREN_SET(_val) VMSL(_val, I2C_CR2_ITERREN_MASK, I2C_CR2_ITERREN_SHIFT)
#define I2C_CR2_ITERREN_GET(_val) VMSR(_val, I2C_CR2_ITERREN_MASK, I2C_CR2_ITERREN_SHIFT)
#define I2C_CR2_FREQ_SET(_val) VMSL(_val, I2C_CR2_FREQ_MASK, I2C_CR2_FREQ_SHIFT)
#define I2C_CR2_FREQ_GET(_val) VMSR(_val, I2C_CR2_FREQ_MASK, I2C_CR2_FREQ_SHIFT)

#define I2C_OAR1_ADDMODE_SET(_val) VMSL(_val, I2C_OAR1_ADDMODE_MASK, I2C_OAR1_ADDMODE_SHIFT)
#define I2C_OAR1_ADDMODE_GET(_val) VMSR(_val, I2C_OAR1_ADDMODE_MASK, I2C_OAR1_ADDMODE_SHIFT)
#define I2C_OAR1_ADD1_7BIT_SET(_val) VMSL(_val, I2C_OAR1_ADD1_7BIT_MASK, I2C_OAR1_ADD1_7BIT_SHIFT)
#define I2C_OAR1_ADD1_7BIT_GET(_val) VMSR(_val, I2C_OAR1_ADD1_7BIT_MASK, I2C_OAR1_ADD1_7BIT_SHIFT)
#define I2C_OAR1_ADD1_10BIT_SET(_val)                                                              \
  VMSL(_val, I2C_OAR1_ADD1_10BIT_MASK, I2C_OAR1_ADD1_10BIT_SHIFT)
#define I2C_OAR1_ADD1_10BIT_GET(_val)                                                              \
  VMSR(_val, I2C_OAR1_ADD1_10BIT_MASK, I2C_OAR1_ADD1_10BIT_SHIFT)
#define I2C_OAR2_ADD2_7BIT_SET(_val) VMSL(_val, I2C_OAR2_ADD2_7BIT_MASK, I2C_OAR2_ADD2_7BIT_SHIFT)
#define I2C_OAR2_ADD2_7BIT_GET(_val) VMSR(_val, I2C_OAR2_ADD2_7BIT_MASK, I2C_OAR2_ADD2_7BIT_SHIFT)
#define I2C_OAR2_ENDUAL_SET(_val) VMSL(_val, I2C_OAR2_ENDUAL_MASK, I2C_OAR2_ENDUAL_SHIFT)
#define I2C_OAR2_ENDUAL_GET(_val) VMSR(_val, I2C_OAR2_ENDUAL_MASK, I2C_OAR2_ENDUAL_SHIFT)

#define I2C_DR_DR_SET(_val) VMSL(_val, I2C_DR_DR_MASK, I2C_DR_DR_SHIFT)
#define I2C_DR_DR_GET(_val) VMSR(_val, I2C_DR_DR_MASK, I2C_DR_DR_SHIFT)

#define I2C_SR1_SMBALERT_SET(_val) VMSL(_val, I2C_SR1_SMBALERT_MASK, I2C_SR1_SMBALERT_SHIFT)
#define I2C_SR1_SMBALERT_GET(_val) VMSR(_val, I2C_SR1_SMBALERT_MASK, I2C_SR1_SMBALERT_SHIFT)
#define I2C_SR1_TIMEOUT_SET(_val) VMSL(_val, I2C_SR1_TIMEOUT_MASK, I2C_SR1_TIMEOUT_SHIFT)
#define I2C_SR1_TIMEOUT_GET(_val) VMSR(_val, I2C_SR1_TIMEOUT_MASK, I2C_SR1_TIMEOUT_SHIFT)
#define I2C_SR1_PECERR_SET(_val) VMSL(_val, I2C_SR1_PECERR_MASK, I2C_SR1_PECERR_SHIFT)
#define I2C_SR1_PECERR_GET(_val) VMSR(_val, I2C_SR1_PECERR_MASK, I2C_SR1_PECERR_SHIFT)
#define I2C_SR1_OVR_SET(_val) VMSL(_val, I2C_SR1_OVR_MASK, I2C_SR1_OVR_SHIFT)
#define I2C_SR1_OVR_GET(_val) VMSR(_val, I2C_SR1_OVR_MASK, I2C_SR1_OVR_SHIFT)
#define I2C_SR1_AF_SET(_val) VMSL(_val, I2C_SR1_AF_MASK, I2C_SR1_AF_SHIFT)
#define I2C_SR1_AF_GET(_val) VMSR(_val, I2C_SR1_AF_MASK, I2C_SR1_AF_SHIFT)
#define I2C_SR1_ARLO_SET(_val) VMSL(_val, I2C_SR1_ARLO_MASK, I2C_SR1_ARLO_SHIFT)
#define I2C_SR1_ARLO_GET(_val) VMSR(_val, I2C_SR1_ARLO_MASK, I2C_SR1_ARLO_SHIFT)
#define I2C_SR1_BERR_SET(_val) VMSL(_val, I2C_SR1_BERR_MASK, I2C_SR1_BERR_SHIFT)
#define I2C_SR1_BERR_GET(_val) VMSR(_val, I2C_SR1_BERR_MASK, I2C_SR1_BERR_SHIFT)
#define I2C_SR1_TXE_SET(_val) VMSL(_val, I2C_SR1_TXE_MASK, I2C_SR1_TXE_SHIFT)
#define I2C_SR1_TXE_GET(_val) VMSR(_val, I2C_SR1_TXE_MASK, I2C_SR1_TXE_SHIFT)
#define I2C_SR1_RXNE_SET(_val) VMSL(_val, I2C_SR1_RXNE_MASK, I2C_SR1_RXNE_SHIFT)
#define I2C_SR1_RXNE_GET(_val) VMSR(_val, I2C_SR1_RXNE_MASK, I2C_SR1_RXNE_SHIFT)
#define I2C_SR1_STOPF_SET(_val) VMSL(_val, I2C_SR1_STOPF_MASK, I2C_SR1_STOPF_SHIFT)
#define I2C_SR1_STOPF_GET(_val) VMSR(_val, I2C_SR1_STOPF_MASK, I2C_SR1_STOPF_SHIFT)
#define I2C_SR1_ADD10_SET(_val) VMSL(_val, I2C_SR1_ADD10_MASK, I2C_SR1_ADD10_SHIFT)
#define I2C_SR1_ADD10_GET(_val) VMSR(_val, I2C_SR1_ADD10_MASK, I2C_SR1_ADD10_SHIFT)
#define I2C_SR1_BTF_SET(_val) VMSL(_val, I2C_SR1_BTF_MASK, I2C_SR1_BTF_SHIFT)
#define I2C_SR1_BTF_GET(_val) VMSR(_val, I2C_SR1_BTF_MASK, I2C_SR1_BTF_SHIFT)
#define I2C_SR1_ADDR_SET(_val) VMSL(_val, I2C_SR1_ADDR_MASK, I2C_SR1_ADDR_SHIFT)
#define I2C_SR1_ADDR_GET(_val) VMSR(_val, I2C_SR1_ADDR_MASK, I2C_SR1_ADDR_SHIFT)
#define I2C_SR1_SB_SET(_val) VMSL(_val, I2C_SR1_SB_MASK, I2C_SR1_SB_SHIFT)
#define I2C_SR1_SB_GET(_val) VMSR(_val, I2C_SR1_SB_MASK, I2C_SR1_SB_SHIFT)

#define I2C_SR2_PEC_SET(_val) VMSL(_val, I2C_SR2_PEC_MASK, I2C_SR2_PEC_SHIFT)
#define I2C_SR2_PEC_GET(_val) VMSR(_val, I2C_SR2_PEC_MASK, I2C_SR2_PEC_SHIFT)
#define I2C_SR2_DUALF_SET(_val) VMSL(_val, I2C_SR2_DUALF_MASK, I2C_SR2_DUALF_SHIFT)
#define I2C_SR2_DUALF_GET(_val) VMSR(_val, I2C_SR2_DUALF_MASK, I2C_SR2_DUALF_SHIFT)
#define I2C_SR2_SMBHOST_SET(_val) VMSL(_val, I2C_SR2_SMBHOST_MASK, I2C_SR2_SMBHOST_SHIFT)
#define I2C_SR2_SMBHOST_GET(_val) VMSR(_val, I2C_SR2_SMBHOST_MASK, I2C_SR2_SMBHOST_SHIFT)
#define I2C_SR2_SMBDEFAULT_SET(_val) VMSL(_val, I2C_SR2_SMBDEFAULT_MASK, I2C_SR2_SMBDEFAULT_SHIFT)
#define I2C_SR2_SMBDEFAULT_GET(_val) VMSR(_val, I2C_SR2_SMBDEFAULT_MASK, I2C_SR2_SMBDEFAULT_SHIFT)
#define I2C_SR2_GENCALL_SET(_val) VMSL(_val, I2C_SR2_GENCALL_MASK, I2C_SR2_GENCALL_SHIFT)
#define I2C_SR2_GENCALL_GET(_val) VMSR(_val, I2C_SR2_GENCALL_MASK, I2C_SR2_GENCALL_SHIFT)
#define I2C_SR2_TRA_SET(_val) VMSL(_val, I2C_SR2_TRA_MASK, I2C_SR2_TRA_SHIFT)
#define I2C_SR2_TRA_GET(_val) VMSR(_val, I2C_SR2_TRA_MASK, I2C_SR2_TRA_SHIFT)
#define I2C_SR2_BUSY_SET(_val) VMSL(_val, I2C_SR2_BUSY_MASK, I2C_SR2_BUSY_SHIFT)
#define I2C_SR2_BUSY_GET(_val) VMSR(_val, I2C_SR2_BUSY_MASK, I2C_SR2_BUSY_SHIFT)
#define I2C_SR2_MSL_SET(_val) VMSL(_val, I2C_SR2_MSL_MASK, I2C_SR2_MSL_SHIFT)
#define I2C_SR2_MSL_GET(_val) VMSR(_val, I2C_SR2_MSL_MASK, I2C_SR2_MSL_SHIFT)

#define I2C_CCR_FS_SET(_val) VMSL(_val, I2C_CCR_FS_MASK, I2C_CCR_FS_SHIFT)
#define I2C_CCR_FS_GET(_val) VMSR(_val, I2C_CCR_FS_MASK, I2C_CCR_FS_SHIFT)
#define I2C_CCR_DUTY_SET(_val) VMSL(_val, I2C_CCR_DUTY_MASK, I2C_CCR_DUTY_SHIFT)
#define I2C_CCR_DUTY_GET(_val) VMSR(_val, I2C_CCR_DUTY_MASK, I2C_CCR_DUTY_SHIFT)
#define I2C_CCR_CCR_SET(_val) VMSL(_val, I2C_CCR_CCR_MASK, I2C_CCR_CCR_SHIFT)
#define I2C_CCR_CCR_GET(_val) VMSR(_val, I2C_CCR_CCR_MASK, I2C_CCR_CCR_SHIFT)

#define I2C_TRISE_TRISE_SET(_val) VMSL(_val, I2C_TRISE_TRISE_MASK, I2C_TRISE_TRISE_SHIFT)
#define I2C_TRISE_TRISE_GET(_val) VMSR(_val, I2C_TRISE_TRISE_MASK, I2C_TRISE_TRISE_SHIFT)

#define I2C_FLTR_ANOFF_SET(_val) VMSL(_val, I2C_FLTR_ANOFF_MASK, I2C_FLTR_ANOFF_SHIFT)
#define I2C_FLTR_ANOFF_GET(_val) VMSR(_val, I2C_FLTR_ANOFF_MASK, I2C_FLTR_ANOFF_SHIFT)
#define I2C_FLTR_DNF_SET(_val) VMSL(_val, I2C_FLTR_DNF_MASK, I2C_FLTR_DNF_SHIFT)
#define I2C_FLTR_DNF_GET(_val) VMSR(_val, I2C_FLTR_DNF_MASK, I2C_FLTR_DNF_SHIFT)

#endif /* __I2C_REG_H */