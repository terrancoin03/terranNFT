#include <sigmaengine/protocol/get_config.hpp>
#include <sigmaengine/protocol/config.hpp>
#include <sigmaengine/protocol/asset.hpp>
#include <sigmaengine/protocol/types.hpp>
#include <sigmaengine/protocol/version.hpp>

namespace sigmaengine { namespace protocol {

fc::variant_object get_config()
{
   fc::mutable_variant_object result;

   result["SIGMAENGINE_100_PERCENT"] = SIGMAENGINE_100_PERCENT;
   result["SIGMAENGINE_1_PERCENT"] = SIGMAENGINE_1_PERCENT;
   result["SIGMAENGINE_1_TENTH_PERCENT"] = SIGMAENGINE_1_TENTH_PERCENT;
   result["SIGMAENGINE_ACCOUNT_RECOVERY_REQUEST_EXPIRATION_PERIOD"] = SIGMAENGINE_ACCOUNT_RECOVERY_REQUEST_EXPIRATION_PERIOD;
   result["SIGMAENGINE_ADDRESS_PREFIX"] = SIGMAENGINE_ADDRESS_PREFIX;
   result["SIGMAENGINE_BLOCKCHAIN_PRECISION_DIGITS"] = SIGMAENGINE_BLOCKCHAIN_PRECISION_DIGITS;
   result["SIGMAENGINE_BLOCKCHAIN_HARDFORK_VERSION"] = SIGMAENGINE_BLOCKCHAIN_HARDFORK_VERSION;
   result["SIGMAENGINE_BLOCKCHAIN_VERSION"] = SIGMAENGINE_BLOCKCHAIN_VERSION;
   result["SIGMAENGINE_BLOCK_INTERVAL"] = SIGMAENGINE_BLOCK_INTERVAL;
   result["SIGMAENGINE_BLOCKS_PER_DAY"] = SIGMAENGINE_BLOCKS_PER_DAY;
   result["SIGMAENGINE_BLOCKS_PER_YEAR"] = SIGMAENGINE_BLOCKS_PER_YEAR;
   result["SIGMAENGINE_CHAIN_ID"] = SIGMAENGINE_CHAIN_ID;
   result["SIGMAENGINE_CREATE_ACCOUNT_DELEGATION_RATIO"] = SIGMAENGINE_CREATE_ACCOUNT_DELEGATION_RATIO;
   result["SIGMAENGINE_CREATE_ACCOUNT_WITH_SIGMAENGINE_MODIFIER"] = SIGMAENGINE_CREATE_ACCOUNT_WITH_SIGMAENGINE_MODIFIER;
   result["SIGMAENGINE_GENESIS_TIME"] = SIGMAENGINE_GENESIS_TIME;
   result["SIGMAENGINE_HARDFORK_REQUIRED_BOBSERVERS"] = SIGMAENGINE_HARDFORK_REQUIRED_BOBSERVERS;
   result["SIGMAENGINE_INIT_MINER_NAME"] = SIGMAENGINE_INIT_MINER_NAME;
   result["SIGMAENGINE_INIT_PUBLIC_KEY_STR"] = SIGMAENGINE_INIT_PUBLIC_KEY_STR;
   result["SIGMAENGINE_INIT_SUPPLY"] = SIGMAENGINE_INIT_SUPPLY;
   result["SIGMAENGINE_INIT_TIME"] = SIGMAENGINE_INIT_TIME;
   result["SIGMAENGINE_IRREVERSIBLE_THRESHOLD"] = SIGMAENGINE_IRREVERSIBLE_THRESHOLD;
   result["SIGMAENGINE_MAX_ACCOUNT_NAME_LENGTH"] = SIGMAENGINE_MAX_ACCOUNT_NAME_LENGTH;
   result["SIGMAENGINE_MAX_BLOCK_SIZE"] = SIGMAENGINE_MAX_BLOCK_SIZE;
   result["SIGMAENGINE_MAX_MEMO_SIZE"] = SIGMAENGINE_MAX_MEMO_SIZE;
   result["SIGMAENGINE_MAX_MINER_BOBSERVERS_HF0"] = SIGMAENGINE_MAX_MINER_BOBSERVERS_HF0;
   result["SIGMAENGINE_MAX_PERMLINK_LENGTH"] = SIGMAENGINE_MAX_PERMLINK_LENGTH;
   result["SIGMAENGINE_MAX_RESERVE_RATIO"] = SIGMAENGINE_MAX_RESERVE_RATIO;
   result["SIGMAENGINE_MAX_RUNNER_BOBSERVERS_HF0"] = SIGMAENGINE_MAX_RUNNER_BOBSERVERS_HF0;
   result["SIGMAENGINE_MAX_SHARE_SUPPLY"] = SIGMAENGINE_MAX_SHARE_SUPPLY;
   result["SIGMAENGINE_MAX_SIG_CHECK_DEPTH"] = SIGMAENGINE_MAX_SIG_CHECK_DEPTH;
   result["SIGMAENGINE_MAX_TIME_UNTIL_EXPIRATION"] = SIGMAENGINE_MAX_TIME_UNTIL_EXPIRATION;
   result["SIGMAENGINE_MAX_TRANSACTION_SIZE"] = SIGMAENGINE_MAX_TRANSACTION_SIZE;
   result["SIGMAENGINE_MAX_UNDO_HISTORY"] = SIGMAENGINE_MAX_UNDO_HISTORY;
   result["SIGMAENGINE_MAX_VOTED_BOBSERVERS_HF0"] = SIGMAENGINE_MAX_VOTED_BOBSERVERS_HF0;
   result["SIGMAENGINE_MAX_BOBSERVER_URL_LENGTH"] = SIGMAENGINE_MAX_BOBSERVER_URL_LENGTH;
   result["SIGMAENGINE_MIN_ACCOUNT_NAME_LENGTH"] = SIGMAENGINE_MIN_ACCOUNT_NAME_LENGTH;
   result["SIGMAENGINE_MIN_BLOCK_SIZE"] = SIGMAENGINE_MIN_BLOCK_SIZE;
   result["SIGMAENGINE_MIN_PERMLINK_LENGTH"] = SIGMAENGINE_MIN_PERMLINK_LENGTH;
   result["SIGMAENGINE_MINER_ACCOUNT"] = SIGMAENGINE_MINER_ACCOUNT;
   result["SIGMAENGINE_NULL_ACCOUNT"] = SIGMAENGINE_NULL_ACCOUNT;
   result["SIGMAENGINE_NUM_INIT_MINERS"] = SIGMAENGINE_NUM_INIT_MINERS;
   result["SIGMAENGINE_OWNER_AUTH_HISTORY_TRACKING_START_BLOCK_NUM"] = SIGMAENGINE_OWNER_AUTH_HISTORY_TRACKING_START_BLOCK_NUM;
   result["SIGMAENGINE_OWNER_AUTH_RECOVERY_PERIOD"] = SIGMAENGINE_OWNER_AUTH_RECOVERY_PERIOD;
   result["SIGMAENGINE_OWNER_UPDATE_LIMIT"] = SIGMAENGINE_OWNER_UPDATE_LIMIT;
   result["SIGMAENGINE_START_MINER_VOTING_BLOCK"] = SIGMAENGINE_START_MINER_VOTING_BLOCK;
   result["SGT_SYMBOL"] = SGT_SYMBOL;
   result["SIGMAENGINE_TEMP_ACCOUNT"] = SIGMAENGINE_TEMP_ACCOUNT;
   result["SIGMAENGINE_TRANSFER_SAVINGS_CYCLE"] = SIGMAENGINE_TRANSFER_SAVINGS_CYCLE;
   result["SIGMAENGINE_DEPOSIT_FUND_NAME"] = SIGMAENGINE_DEPOSIT_FUND_NAME;
   result["SIGMAENGINE_DAPP_TRANSACTION_FEE"] = SIGMAENGINE_DAPP_TRANSACTION_FEE;

   return result;
}

} } // sigmaengine::protocol
