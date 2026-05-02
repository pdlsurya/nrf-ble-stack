/**
 * @file nrf_ble.h
 * @author Surya Poudel
 * @brief Umbrella public header for nRF BLE stack
 * @version 0.1
 * @date 2026-03-27
 *
 * @copyright Copyright (c) 2026
 *
 */

#ifndef NRF_BLE_H__
#define NRF_BLE_H__

#include "ble_gap.h"
#include "ble_gatt_server.h"
#include "ble_gatt_client.h"

/**
 * @brief Initialize the BLE stack for the selected role.
 *
 * @param[in] role Initial GAP role for the stack instance.
 */
void ble_stack_init(ble_gap_role_t role);

#endif // NRF_BLE_H__
