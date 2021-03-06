//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IXPlaceholderAttributes, IXPlaceholderSeed, IXSOwnedDataPromise, IXSPromisedInMemoryData, IXSPromisedInMemoryDictionary, MISSING_TYPE, MIStoreMetadata, NSArray, NSData, NSDictionary, NSError, NSString, NSUUID;

@interface IXSPlaceholder
{
    _Bool _sentDidBegin;	// 8 = 0x8
    _Bool _configurationComplete;	// 9 = 0x9
    NSUUID *_iconPromiseUUID;	// 16 = 0x10
    NSUUID *_entitlementsPromiseUUID;	// 24 = 0x18
    NSUUID *_metadataPromiseUUID;	// 32 = 0x20
    NSUUID *_sinfPromiseUUID;	// 40 = 0x28
    NSArray *_plugInPlaceholdersPromiseUUIDs;	// 48 = 0x30
    MISSING_TYPE *_localizationDictionaryPromiseUUID;	// 56 = 0x38
    IXSOwnedDataPromise *_icon;	// 64 = 0x40
    IXSOwnedDataPromise *_entitlements;	// 72 = 0x48
    NSArray *_plugInPlaceholders;	// 80 = 0x50
    IXPlaceholderAttributes *_attributes;	// 88 = 0x58
    IXSPromisedInMemoryData *_metadataPromise;	// 96 = 0x60
    IXSPromisedInMemoryData *_sinfPromise;	// 104 = 0x68
    IXSPromisedInMemoryDictionary *_localizationDictionaryPromise;	// 112 = 0x70
    NSError *_awakeningError;	// 120 = 0x78
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000010c93
- (void).cxx_destruct;	// IMP=0x001000000001a11b
@property(retain, nonatomic) NSError *awakeningError; // @synthesize awakeningError=_awakeningError;
@property(retain, nonatomic) IXSPromisedInMemoryDictionary *localizationDictionaryPromise; // @synthesize localizationDictionaryPromise=_localizationDictionaryPromise;
@property(retain, nonatomic) IXSPromisedInMemoryData *sinfPromise; // @synthesize sinfPromise=_sinfPromise;
@property(retain, nonatomic) IXSPromisedInMemoryData *metadataPromise; // @synthesize metadataPromise=_metadataPromise;
@property(copy, nonatomic) IXPlaceholderAttributes *attributes; // @synthesize attributes=_attributes;
@property(copy, nonatomic) NSArray *plugInPlaceholders; // @synthesize plugInPlaceholders=_plugInPlaceholders;
@property(retain, nonatomic) IXSOwnedDataPromise *entitlements; // @synthesize entitlements=_entitlements;
@property(retain, nonatomic) IXSOwnedDataPromise *icon; // @synthesize icon=_icon;
@property(nonatomic) _Bool configurationComplete; // @synthesize configurationComplete=_configurationComplete;
@property(nonatomic) _Bool sentDidBegin; // @synthesize sentDidBegin=_sentDidBegin;
@property(retain, nonatomic) NSUUID *localizationDictionaryPromiseUUID; // @synthesize localizationDictionaryPromiseUUID=_localizationDictionaryPromiseUUID;
@property(retain, nonatomic) NSArray *plugInPlaceholdersPromiseUUIDs; // @synthesize plugInPlaceholdersPromiseUUIDs=_plugInPlaceholdersPromiseUUIDs;
@property(retain, nonatomic) NSUUID *sinfPromiseUUID; // @synthesize sinfPromiseUUID=_sinfPromiseUUID;
@property(retain, nonatomic) NSUUID *metadataPromiseUUID; // @synthesize metadataPromiseUUID=_metadataPromiseUUID;
@property(retain, nonatomic) NSUUID *entitlementsPromiseUUID; // @synthesize entitlementsPromiseUUID=_entitlementsPromiseUUID;
@property(retain, nonatomic) NSUUID *iconPromiseUUID; // @synthesize iconPromiseUUID=_iconPromiseUUID;
- (void)promise:(id)arg1 didCancelForReason:(id)arg2 client:(unsigned long long)arg3;	// IMP=0x0010000000019d30
- (void)promise:(id)arg1 didUpdateProgress:(double)arg2;	// IMP=0x0010000000019b59
- (void)promiseDidReset:(id)arg1;	// IMP=0x00100000000199aa
- (void)promiseDidComplete:(id)arg1;	// IMP=0x00100000000198ea
- (void)promiseDidBegin:(id)arg1;	// IMP=0x001000000001970d
@property(readonly, copy) NSString *description;
- (_Bool)_materialize;	// IMP=0x00100000000170aa
- (void)decommission;	// IMP=0x0010000000016e48
- (void)_decommissionPromise:(id)arg1;	// IMP=0x0010000000016d89
- (id)subPromiseUUIDs;	// IMP=0x00100000000169c5
- (id)_promiseUUIDsForPromise:(id)arg1;	// IMP=0x00100000000167db
- (unsigned long long)totalBytesNeededOnDisk;	// IMP=0x00100000000164d0
@property(readonly, nonatomic) unsigned long long installType; // @dynamic installType;
@property(readonly, copy, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(readonly, copy, nonatomic) NSString *bundleName; // @dynamic bundleName;
- (void)cancelForReason:(id)arg1 client:(unsigned long long)arg2;	// IMP=0x0010000000015ffa
- (void)_cancelPromise:(id)arg1 forReason:(id)arg2 client:(unsigned long long)arg3;	// IMP=0x0010000000015ea9
- (void)setPercentComplete:(double)arg1;	// IMP=0x0010000000015e74
- (double)percentComplete;	// IMP=0x0010000000015775
- (void)setComplete:(_Bool)arg1;	// IMP=0x0010000000015740
- (_Bool)isComplete;	// IMP=0x00100000000156bd
- (MISSING_TYPE *)_materializeIfReady;	// IMP=0x0010000000015542
- (_Bool)_isReadyToMaterialize;	// IMP=0x0010000000014db3
@property(readonly, nonatomic) NSDictionary *localizationDictionary; // @dynamic localizationDictionary;
@property(readonly, copy, nonatomic) NSData *sinfData; // @dynamic sinfData;
@property(readonly, copy, nonatomic) MIStoreMetadata *metadata; // @dynamic metadata;
- (_Bool)awakeFromSerializationWithLookupBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x0010000000010c9b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000010a43
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000107aa
- (id)initWithSeed:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001070f
- (_Bool)_internal_checkInitWithSeed:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001057b
- (oneway void)_remote_setConfigurationCompleteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001ca70
- (oneway void)_remote_getPlugInPlaceholderPromises:(CDUnknownBlockType)arg1;	// IMP=0x001000000001c687
- (oneway void)_remote_hasPlugInPlaceholderPromises:(CDUnknownBlockType)arg1;	// IMP=0x001000000001c567
- (oneway void)_remote_setPlugInPlaceholderPromiseUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001bc80
- (oneway void)_remote_getEntitlementsPromise:(CDUnknownBlockType)arg1;	// IMP=0x001000000001ba79
- (oneway void)_remote_hasEntitlementsPromise:(CDUnknownBlockType)arg1;	// IMP=0x001000000001b959
- (oneway void)_remote_setEntitlementsPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001b717
- (oneway void)_remote_getLocalizationDictionary:(CDUnknownBlockType)arg1;	// IMP=0x001000000001b5fd
- (oneway void)_remote_setLocalizationPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001b3bb
- (oneway void)_remote_getIconPromise:(CDUnknownBlockType)arg1;	// IMP=0x001000000001b1b4
- (oneway void)_remote_hasIconPromise:(CDUnknownBlockType)arg1;	// IMP=0x001000000001b094
- (oneway void)_remote_setIconPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001ae52
- (oneway void)_remote_getAttributesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001ad38
- (oneway void)_remote_setAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001abfb
- (oneway void)_remote_getLaunchProhibitedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001aac7
- (oneway void)_remote_setLaunchProhibited:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001a8f2
- (oneway void)_remote_getSinfDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001a7d8
- (oneway void)_remote_setSinfPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001a585
- (oneway void)_remote_getMetadataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001a46b
- (oneway void)_remote_setMetadataPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001a218

// Remaining properties
@property(readonly, copy, nonatomic) IXPlaceholderSeed *clientSeed; // @dynamic clientSeed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) IXPlaceholderSeed *seed; // @dynamic seed;
@property(readonly) Class superclass;

@end

