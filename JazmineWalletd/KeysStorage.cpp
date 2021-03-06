// Copyright 2018 Waitman Gobble
// Copyright (c) 2011-2016 The Cryptonote developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "stdafx.h"
#include "KeysStorage.h"

#include "WalletLegacySerialization.h"
#include "ISerializer.h"
#include "SerializationOverloads.h"
#include "CryptoNoteSerialization.h"

namespace CryptoNote {

	void KeysStorage::serialize(ISerializer& serializer, const std::string& name) {
		serializer.beginObject(name);

		serializer(creationTimestamp, "creation_timestamp");

		serializer(spendPublicKey, "spend_public_key");
		serializer(spendSecretKey, "spend_secret_key");

		serializer(viewPublicKey, "view_public_key");
		serializer(viewSecretKey, "view_secret_key");

		serializer.endObject();
	}

}
