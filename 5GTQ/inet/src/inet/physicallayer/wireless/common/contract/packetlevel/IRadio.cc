//
// Copyright (C) 2013 OpenSim Ltd.
//
// SPDX-License-Identifier: LGPL-3.0-or-later
//


#include "inet/physicallayer/wireless/common/contract/packetlevel/IRadio.h"

namespace inet {

namespace physicallayer {

simsignal_t IRadio::radioModeChangedSignal = cComponent::registerSignal("radioModeChanged");
simsignal_t IRadio::listeningChangedSignal = cComponent::registerSignal("listeningChanged");
simsignal_t IRadio::receptionStateChangedSignal = cComponent::registerSignal("receptionStateChanged");
simsignal_t IRadio::transmissionStateChangedSignal = cComponent::registerSignal("transmissionStateChanged");
simsignal_t IRadio::receivedSignalPartChangedSignal = cComponent::registerSignal("receivedSignalPartChanged");
simsignal_t IRadio::transmittedSignalPartChangedSignal = cComponent::registerSignal("transmittedSignalPartChanged");

cEnum *IRadio::radioModeEnum = nullptr;
cEnum *IRadio::receptionStateEnum = nullptr;
cEnum *IRadio::transmissionStateEnum = nullptr;

Register_Enum(inet::physicallayer::IRadio::RadioMode,
    (IRadio::RADIO_MODE_OFF,
     IRadio::RADIO_MODE_SLEEP,
     IRadio::RADIO_MODE_RECEIVER,
     IRadio::RADIO_MODE_TRANSMITTER,
     IRadio::RADIO_MODE_TRANSCEIVER,
     IRadio::RADIO_MODE_SWITCHING));

Register_Enum(inet::physicallayer::IRadio::ReceptionState,
    (IRadio::RECEPTION_STATE_UNDEFINED,
     IRadio::RECEPTION_STATE_IDLE,
     IRadio::RECEPTION_STATE_BUSY,
     IRadio::RECEPTION_STATE_RECEIVING));

Register_Enum(inet::physicallayer::IRadio::TransmissionState,
    (IRadio::TRANSMISSION_STATE_UNDEFINED,
     IRadio::TRANSMISSION_STATE_IDLE,
     IRadio::TRANSMISSION_STATE_TRANSMITTING));

const char *IRadio::getRadioModeName(RadioMode radioMode)
{
    if (!radioModeEnum)
        radioModeEnum = cEnum::get(opp_typename(typeid(IRadio::RadioMode)));
    return radioModeEnum->getStringFor(radioMode) + 11;
}

const char *IRadio::getRadioReceptionStateName(ReceptionState receptionState)
{
    if (!receptionStateEnum)
        receptionStateEnum = cEnum::get(opp_typename(typeid(IRadio::ReceptionState)));
    return receptionStateEnum->getStringFor(receptionState) + 16;
}

const char *IRadio::getRadioTransmissionStateName(TransmissionState transmissionState)
{
    if (!transmissionStateEnum)
        transmissionStateEnum = cEnum::get(opp_typename(typeid(IRadio::TransmissionState)));
    return transmissionStateEnum->getStringFor(transmissionState) + 19;
}

} // namespace physicallayer

} // namespace inet

