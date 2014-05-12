/*
 * Copyright (C) 2008-2013 Trinitycore <http://www.trinitycore.org/>
 * Copyright (C) 2009-2014 Infinitycore <http://www.infinitycore.org/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "Common.h"
#include "WorldPacket.h"
#include "WorldSession.h"
#include "Opcodes.h"
#include "Log.h"

void WorldSession::HandleChannelEnableVoiceOpcode(WorldPacket& recvData)
{
    IC_LOG_DEBUG("network", "WORLD: CMSG_VOICE_SESSION_ENABLE");
    // uint8 isVoiceEnabled, uint8 isMicrophoneEnabled
    recvData.read_skip<uint8>();
    recvData.read_skip<uint8>();
}

void WorldSession::HandleVoiceSettingsOpcode(WorldPacket& /*recvData*/)
{
    IC_LOG_DEBUG("network", "WORLD: CMSG_CHANNEL_VOICE_ON");
    // Enable Voice button in channel context menu
}

void WorldSession::HandleChannelVoiceChatQuery(WorldPacket& recvData)
{
    IC_LOG_DEBUG("network", "WORLD: CMSG_SET_ACTIVE_VOICE_CHANNEL");
    recvData.read_skip<uint32>();
    recvData.read_skip<char*>();
}

