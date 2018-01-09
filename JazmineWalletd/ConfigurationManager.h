// Copyright 2018 Waitman Gobble
// Copyright (c) 2011-2016 The Cryptonote developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include "CoreConfig.h"
#include "PaymentServiceConfiguration.h"
#include "NetNodeConfig.h"
#include "RpcNodeConfiguration.h"

namespace PaymentService {

	class ConfigurationManager {
	public:
		ConfigurationManager();
		bool init(int argc, char** argv);

		bool startInprocess;
		Configuration gateConfiguration;
		CryptoNote::NetNodeConfig netNodeConfig;
		CryptoNote::CoreConfig coreConfig;
		RpcNodeConfiguration remoteNodeConfig;
	};

} //namespace PaymentService