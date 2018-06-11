// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Contract.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class AssetIssueContract_FrozenSupply;
@class VoteWitnessContract_Vote;
GPB_ENUM_FWD_DECLARE(AccountType);

NS_ASSUME_NONNULL_BEGIN

#pragma mark - ContractRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface ContractRoot : GPBRootObject
@end

#pragma mark - AccountCreateContract

typedef GPB_ENUM(AccountCreateContract_FieldNumber) {
  AccountCreateContract_FieldNumber_OwnerAddress = 1,
  AccountCreateContract_FieldNumber_AccountAddress = 2,
  AccountCreateContract_FieldNumber_Type = 3,
};

@interface AccountCreateContract : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSData *ownerAddress;

@property(nonatomic, readwrite, copy, null_resettable) NSData *accountAddress;

@property(nonatomic, readwrite) enum AccountType type;

@end

/**
 * Fetches the raw value of a @c AccountCreateContract's @c type property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t AccountCreateContract_Type_RawValue(AccountCreateContract *message);
/**
 * Sets the raw value of an @c AccountCreateContract's @c type property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetAccountCreateContract_Type_RawValue(AccountCreateContract *message, int32_t value);

#pragma mark - AccountUpdateContract

typedef GPB_ENUM(AccountUpdateContract_FieldNumber) {
  AccountUpdateContract_FieldNumber_AccountName = 1,
  AccountUpdateContract_FieldNumber_OwnerAddress = 2,
};

/**
 * update account name if the account has no name.
 **/
@interface AccountUpdateContract : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSData *accountName;

@property(nonatomic, readwrite, copy, null_resettable) NSData *ownerAddress;

@end

#pragma mark - TransferContract

typedef GPB_ENUM(TransferContract_FieldNumber) {
  TransferContract_FieldNumber_OwnerAddress = 1,
  TransferContract_FieldNumber_ToAddress = 2,
  TransferContract_FieldNumber_Amount = 3,
};

@interface TransferContract : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSData *ownerAddress;

@property(nonatomic, readwrite, copy, null_resettable) NSData *toAddress;

@property(nonatomic, readwrite) int64_t amount;

@end

#pragma mark - TransferAssetContract

typedef GPB_ENUM(TransferAssetContract_FieldNumber) {
  TransferAssetContract_FieldNumber_AssetName = 1,
  TransferAssetContract_FieldNumber_OwnerAddress = 2,
  TransferAssetContract_FieldNumber_ToAddress = 3,
  TransferAssetContract_FieldNumber_Amount = 4,
};

@interface TransferAssetContract : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSData *assetName;

@property(nonatomic, readwrite, copy, null_resettable) NSData *ownerAddress;

@property(nonatomic, readwrite, copy, null_resettable) NSData *toAddress;

@property(nonatomic, readwrite) int64_t amount;

@end

#pragma mark - VoteAssetContract

typedef GPB_ENUM(VoteAssetContract_FieldNumber) {
  VoteAssetContract_FieldNumber_OwnerAddress = 1,
  VoteAssetContract_FieldNumber_VoteAddressArray = 2,
  VoteAssetContract_FieldNumber_Support = 3,
  VoteAssetContract_FieldNumber_Count = 5,
};

@interface VoteAssetContract : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSData *ownerAddress;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSData*> *voteAddressArray;
/** The number of items in @c voteAddressArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger voteAddressArray_Count;

@property(nonatomic, readwrite) BOOL support;

@property(nonatomic, readwrite) int32_t count;

@end

#pragma mark - VoteWitnessContract

typedef GPB_ENUM(VoteWitnessContract_FieldNumber) {
  VoteWitnessContract_FieldNumber_OwnerAddress = 1,
  VoteWitnessContract_FieldNumber_VotesArray = 2,
  VoteWitnessContract_FieldNumber_Support = 3,
};

@interface VoteWitnessContract : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSData *ownerAddress;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<VoteWitnessContract_Vote*> *votesArray;
/** The number of items in @c votesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger votesArray_Count;

@property(nonatomic, readwrite) BOOL support;

@end

#pragma mark - VoteWitnessContract_Vote

typedef GPB_ENUM(VoteWitnessContract_Vote_FieldNumber) {
  VoteWitnessContract_Vote_FieldNumber_VoteAddress = 1,
  VoteWitnessContract_Vote_FieldNumber_VoteCount = 2,
};

@interface VoteWitnessContract_Vote : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSData *voteAddress;

@property(nonatomic, readwrite) int64_t voteCount;

@end

#pragma mark - WitnessCreateContract

typedef GPB_ENUM(WitnessCreateContract_FieldNumber) {
  WitnessCreateContract_FieldNumber_OwnerAddress = 1,
  WitnessCreateContract_FieldNumber_URL = 2,
};

@interface WitnessCreateContract : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSData *ownerAddress;

@property(nonatomic, readwrite, copy, null_resettable) NSData *URL;

@end

#pragma mark - WitnessUpdateContract

typedef GPB_ENUM(WitnessUpdateContract_FieldNumber) {
  WitnessUpdateContract_FieldNumber_OwnerAddress = 1,
  WitnessUpdateContract_FieldNumber_UpdateURL = 12,
};

@interface WitnessUpdateContract : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSData *ownerAddress;

@property(nonatomic, readwrite, copy, null_resettable) NSData *updateURL;

@end

#pragma mark - AssetIssueContract

typedef GPB_ENUM(AssetIssueContract_FieldNumber) {
  AssetIssueContract_FieldNumber_OwnerAddress = 1,
  AssetIssueContract_FieldNumber_Name = 2,
  AssetIssueContract_FieldNumber_Abbr = 3,
  AssetIssueContract_FieldNumber_TotalSupply = 4,
  AssetIssueContract_FieldNumber_FrozenSupplyArray = 5,
  AssetIssueContract_FieldNumber_TrxNum = 6,
  AssetIssueContract_FieldNumber_Num = 8,
  AssetIssueContract_FieldNumber_StartTime = 9,
  AssetIssueContract_FieldNumber_EndTime = 10,
  AssetIssueContract_FieldNumber_VoteScore = 16,
  AssetIssueContract_FieldNumber_Description_p = 20,
  AssetIssueContract_FieldNumber_URL = 21,
  AssetIssueContract_FieldNumber_FreeAssetNetLimit = 22,
  AssetIssueContract_FieldNumber_PublicFreeAssetNetLimit = 23,
  AssetIssueContract_FieldNumber_PublicFreeAssetNetUsage = 24,
  AssetIssueContract_FieldNumber_PublicLatestFreeNetTime = 25,
};

@interface AssetIssueContract : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSData *ownerAddress;

@property(nonatomic, readwrite, copy, null_resettable) NSData *name;

@property(nonatomic, readwrite, copy, null_resettable) NSData *abbr;

@property(nonatomic, readwrite) int64_t totalSupply;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<AssetIssueContract_FrozenSupply*> *frozenSupplyArray;
/** The number of items in @c frozenSupplyArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger frozenSupplyArray_Count;

@property(nonatomic, readwrite) int32_t trxNum;

@property(nonatomic, readwrite) int32_t num;

@property(nonatomic, readwrite) int64_t startTime;

@property(nonatomic, readwrite) int64_t endTime;

@property(nonatomic, readwrite) int32_t voteScore;

@property(nonatomic, readwrite, copy, null_resettable) NSData *description_p;

@property(nonatomic, readwrite, copy, null_resettable) NSData *URL;

@property(nonatomic, readwrite) int64_t freeAssetNetLimit;

@property(nonatomic, readwrite) int64_t publicFreeAssetNetLimit;

@property(nonatomic, readwrite) int64_t publicFreeAssetNetUsage;

@property(nonatomic, readwrite) int64_t publicLatestFreeNetTime;

@end

#pragma mark - AssetIssueContract_FrozenSupply

typedef GPB_ENUM(AssetIssueContract_FrozenSupply_FieldNumber) {
  AssetIssueContract_FrozenSupply_FieldNumber_FrozenAmount = 1,
  AssetIssueContract_FrozenSupply_FieldNumber_FrozenDays = 2,
};

@interface AssetIssueContract_FrozenSupply : GPBMessage

@property(nonatomic, readwrite) int64_t frozenAmount;

@property(nonatomic, readwrite) int64_t frozenDays;

@end

#pragma mark - ParticipateAssetIssueContract

typedef GPB_ENUM(ParticipateAssetIssueContract_FieldNumber) {
  ParticipateAssetIssueContract_FieldNumber_OwnerAddress = 1,
  ParticipateAssetIssueContract_FieldNumber_ToAddress = 2,
  ParticipateAssetIssueContract_FieldNumber_AssetName = 3,
  ParticipateAssetIssueContract_FieldNumber_Amount = 4,
};

@interface ParticipateAssetIssueContract : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSData *ownerAddress;

@property(nonatomic, readwrite, copy, null_resettable) NSData *toAddress;

/** the name of target asset */
@property(nonatomic, readwrite, copy, null_resettable) NSData *assetName;

/** the amount of drops */
@property(nonatomic, readwrite) int64_t amount;

@end

#pragma mark - DeployContract

typedef GPB_ENUM(DeployContract_FieldNumber) {
  DeployContract_FieldNumber_OwnerAddress = 1,
  DeployContract_FieldNumber_Script = 2,
};

@interface DeployContract : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSData *ownerAddress;

@property(nonatomic, readwrite, copy, null_resettable) NSData *script;

@end

#pragma mark - FreezeBalanceContract

typedef GPB_ENUM(FreezeBalanceContract_FieldNumber) {
  FreezeBalanceContract_FieldNumber_OwnerAddress = 1,
  FreezeBalanceContract_FieldNumber_FrozenBalance = 2,
  FreezeBalanceContract_FieldNumber_FrozenDuration = 3,
};

@interface FreezeBalanceContract : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSData *ownerAddress;

@property(nonatomic, readwrite) int64_t frozenBalance;

@property(nonatomic, readwrite) int64_t frozenDuration;

@end

#pragma mark - UnfreezeBalanceContract

typedef GPB_ENUM(UnfreezeBalanceContract_FieldNumber) {
  UnfreezeBalanceContract_FieldNumber_OwnerAddress = 1,
};

@interface UnfreezeBalanceContract : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSData *ownerAddress;

@end

#pragma mark - UnfreezeAssetContract

typedef GPB_ENUM(UnfreezeAssetContract_FieldNumber) {
  UnfreezeAssetContract_FieldNumber_OwnerAddress = 1,
};

@interface UnfreezeAssetContract : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSData *ownerAddress;

@end

#pragma mark - WithdrawBalanceContract

typedef GPB_ENUM(WithdrawBalanceContract_FieldNumber) {
  WithdrawBalanceContract_FieldNumber_OwnerAddress = 1,
};

@interface WithdrawBalanceContract : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSData *ownerAddress;

@end

#pragma mark - UpdateAssetContract

typedef GPB_ENUM(UpdateAssetContract_FieldNumber) {
  UpdateAssetContract_FieldNumber_OwnerAddress = 1,
  UpdateAssetContract_FieldNumber_Description_p = 2,
  UpdateAssetContract_FieldNumber_URL = 3,
  UpdateAssetContract_FieldNumber_NewLimit = 4,
  UpdateAssetContract_FieldNumber_NewPublicLimit = 5,
};

@interface UpdateAssetContract : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSData *ownerAddress;

@property(nonatomic, readwrite, copy, null_resettable) NSData *description_p;

@property(nonatomic, readwrite, copy, null_resettable) NSData *URL;

@property(nonatomic, readwrite) int64_t newLimit;

@property(nonatomic, readwrite) int64_t newPublicLimit;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
