/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001.h"

void cppISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_GetAppOwnershipTicketData( struct cppISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_GetAppOwnershipTicketData_params *params )
{
    struct u_ISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001 *iface = (struct u_ISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetAppOwnershipTicketData( params->nAppID, params->pvBuffer, params->cbBufferLength, params->piAppId, params->piSteamId, params->piSignature, params->pcbSignature );
}

