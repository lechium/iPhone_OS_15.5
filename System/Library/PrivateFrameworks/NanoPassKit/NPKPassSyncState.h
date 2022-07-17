//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoPassKit/NSCopying-Protocol.h>
#import <NanoPassKit/NSSecureCoding-Protocol.h>

@class NSData, NSMutableDictionary;

@interface NPKPassSyncState : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_syncStateItems;	// 8 = 0x8
    unsigned long long _version;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000157a01
+ (id)_currentActiveDevice;	// IMP=0x00000000001d5fb5
+ (id)_deviceDomainAccessor;	// IMP=0x00000000001d5fa1
+ (void)setMinRemoteDevicePassSyncStateVersionSupport:(unsigned long long)arg1;	// IMP=0x00000000001d5e9e
+ (unsigned long long)minRemoteDevicePassSyncStateVersionSupport;	// IMP=0x00000000001d5db5
- (void).cxx_destruct;	// IMP=0x0000000000157af8
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSMutableDictionary *syncStateItems; // @synthesize syncStateItems=_syncStateItems;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000157a2c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000157a09
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000157995
- (unsigned long long)hash;	// IMP=0x0000000000157928
- (_Bool)isEqualToPassSyncState:(id)arg1;	// IMP=0x0000000000157916
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001578ae
@property(readonly, nonatomic) NSData *syncStateHash;
- (_Bool)stateContainsSyncStateItem:(id)arg1;	// IMP=0x000000000015757d
- (_Bool)diffWithBaselineState:(id)arg1 representsMaterialDifferenceFromState:(id)arg2;	// IMP=0x0000000000157223
- (_Bool)stateIsSubsetOfUnionOfPassSyncStates:(id)arg1;	// IMP=0x0000000000156ea3
- (id)commonBaselinePassSyncStateWithState:(id)arg1 version:(unsigned long long)arg2;	// IMP=0x0000000000156ba7
- (id)passSyncStateByRemovingPassWithUniqueID:(id)arg1;	// IMP=0x0000000000156b1f
- (id)passSyncStateByAddingOrUpdatingSyncStateItem:(id)arg1;	// IMP=0x0000000000156a76
- (id)passSyncStateByApplyingChange:(id)arg1;	// IMP=0x00000000001569b6
- (void)compareWithBaselinePassSyncState:(id)arg1 outAddedSyncItems:(id *)arg2 outUpdatedSyncItems:(id *)arg3 outRemovedSyncItems:(id *)arg4;	// IMP=0x00000000001563fa
- (id)description;	// IMP=0x0000000000156269
- (void)_commonInitWithVersion:(unsigned long long)arg1;	// IMP=0x000000000015623c
- (id)initWithSyncStateItems:(id)arg1 version:(unsigned long long)arg2;	// IMP=0x000000000015603e
- (id)initWithSyncStateItems:(id)arg1;	// IMP=0x0000000000155fdc
- (id)initWithPasses:(id)arg1 version:(unsigned long long)arg2;	// IMP=0x0000000000155da0
- (id)initWithPasses:(id)arg1;	// IMP=0x0000000000155d3e
- (id)initWithVersion:(unsigned long long)arg1;	// IMP=0x0000000000155cdf
- (id)init;	// IMP=0x0000000000155ca6
- (id)protoSyncState;	// IMP=0x00000000001464e1
- (id)initWithProtoSyncState:(id)arg1;	// IMP=0x00000000001462aa

@end
