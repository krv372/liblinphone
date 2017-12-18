/*
 * basic-to-client-group-chat-room.h
 * Copyright (C) 2010-2017 Belledonne Communications SARL
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef _BASIC_TO_CLIENT_GROUP_CHAT_ROOM_H_
#define _BASIC_TO_CLIENT_GROUP_CHAT_ROOM_H_

#include "proxy-chat-room.h"

// =============================================================================

LINPHONE_BEGIN_NAMESPACE

class BasicToClientGroupChatRoomPrivate;

class LINPHONE_PUBLIC BasicToClientGroupChatRoom : public ProxyChatRoom {
public:
	BasicToClientGroupChatRoom (const std::shared_ptr<ChatRoom> &chatRoom);

private:
	L_DECLARE_PRIVATE(BasicToClientGroupChatRoom);
	L_DISABLE_COPY(BasicToClientGroupChatRoom);
};

LINPHONE_END_NAMESPACE

#endif // ifndef _BASIC_TO_CLIENT_GROUP_CHAT_ROOM_H_