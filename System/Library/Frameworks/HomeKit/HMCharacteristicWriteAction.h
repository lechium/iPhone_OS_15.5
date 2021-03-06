//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMCharacteristic, NSString, NSUUID;

@interface HMCharacteristicWriteAction <NSSecureCoding, HMObjectMerge>
{
    HMCharacteristic *_characteristic;	// 16 = 0x10
    id _targetValue;	// 24 = 0x18
}

+ (id)allowedTargetValueClassesForShortcuts;	// IMP=0x00000000000b3eb0
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000b3ea8
+ (id)_actionWithInfo:(id)arg1 home:(id)arg2;	// IMP=0x00000000000b3c95
- (void).cxx_destruct;	// IMP=0x00000000000b3b7f
- (id)encodeAsProtoBuf;	// IMP=0x00000000000b357e
- (id)initWithProtoBuf:(id)arg1 home:(id)arg2;	// IMP=0x00000000000b32a8
- (_Bool)isKindOfAllowedTargetValueClass:(id)arg1;	// IMP=0x00000000000b315c
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b2fb6
- (_Bool)_mergeWithNewObject:(id)arg1;	// IMP=0x00000000000b2e46
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b2e40
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b2c70
- (_Bool)_handleUpdates:(id)arg1;	// IMP=0x00000000000b2ba7
- (id)_serializeForAdd;	// IMP=0x00000000000b294e
- (_Bool)requiresDeviceUnlock;	// IMP=0x00000000000b290a
- (_Bool)isValid;	// IMP=0x00000000000b2813
- (void)_updateTargetValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b25b8
- (void)updateTargetValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b2249
@property(copy, nonatomic) id targetValue; // @synthesize targetValue=_targetValue;
@property(retain, nonatomic) HMCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (unsigned long long)type;	// IMP=0x00000000000b1e6f
- (void)__configureWithContext:(id)arg1 actionSet:(id)arg2;	// IMP=0x00000000000b1c84
- (id)initWithCharacteristic:(id)arg1 targetValue:(id)arg2 uuid:(id)arg3;	// IMP=0x00000000000b1be3
- (id)initWithCharacteristic:(id)arg1 targetValue:(id)arg2;	// IMP=0x00000000000b1b15
- (id)commonInitWith:(id)arg1 targetValue:(id)arg2;	// IMP=0x00000000000b1a2a
- (id)initWithUUID:(id)arg1;	// IMP=0x00000000000b1974

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier;

@end

