//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSPartitionedBackingStoreRecord-Protocol.h>
#import <DoNotDisturbServer/NSCopying-Protocol.h>
#import <DoNotDisturbServer/NSMutableCopying-Protocol.h>

@class DNDSConfigurationRecord, DNDSConfigurationSecureRecord, DNDSModeConfigurationTriggersRecord, DNDSModeRecord, NSDate, NSString;

@interface DNDSModeConfigurationRecord : NSObject <NSCopying, NSMutableCopying, DNDSPartitionedBackingStoreRecord>
{
    DNDSModeRecord *_mode;	// 8 = 0x8
    DNDSConfigurationRecord *_configuration;	// 16 = 0x10
    DNDSConfigurationSecureRecord *_secureConfiguration;	// 24 = 0x18
    DNDSModeConfigurationTriggersRecord *_triggers;	// 32 = 0x20
    unsigned long long _impactsAvailability;	// 40 = 0x28
    unsigned long long _dimsLockScreen;	// 48 = 0x30
    NSDate *_created;	// 56 = 0x38
    NSDate *_lastModified;	// 64 = 0x40
    _Bool _automaticallyGenerated;	// 72 = 0x48
    _Bool _hasSecureData;	// 73 = 0x49
    long long _compatibilityVersion;	// 80 = 0x50
    long long _ephemeralResolvedCompatibilityVersion;	// 88 = 0x58
}

+ (id)newWithDictionaryRepresentation:(id)arg1 partitionedDictionaryRepresentation:(id)arg2 context:(id)arg3;	// IMP=0x0000000000030733
+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;	// IMP=0x00000000000302a5
+ (id)newWithCKRecord:(id)arg1;	// IMP=0x000000000004079f
+ (id)dictionaryRepresentationWithCKRecord:(id)arg1 partitionType:(unsigned long long)arg2;	// IMP=0x0000000000040527
+ (id)newWithDNDSIDSRecord:(id)arg1;	// IMP=0x0000000000088226
- (void).cxx_destruct;	// IMP=0x000000000003103a
@property(readonly, nonatomic) long long ephemeralResolvedCompatibilityVersion; // @synthesize ephemeralResolvedCompatibilityVersion=_ephemeralResolvedCompatibilityVersion;
@property(readonly, nonatomic) long long compatibilityVersion; // @synthesize compatibilityVersion=_compatibilityVersion;
@property(readonly, nonatomic) _Bool hasSecureData; // @synthesize hasSecureData=_hasSecureData;
@property(readonly, nonatomic, getter=isAutomaticallyGenerated) _Bool automaticallyGenerated; // @synthesize automaticallyGenerated=_automaticallyGenerated;
@property(readonly, copy, nonatomic) NSDate *lastModified; // @synthesize lastModified=_lastModified;
@property(readonly, copy, nonatomic) NSDate *created; // @synthesize created=_created;
@property(readonly, nonatomic) unsigned long long dimsLockScreen; // @synthesize dimsLockScreen=_dimsLockScreen;
@property(readonly, nonatomic) unsigned long long impactsAvailability; // @synthesize impactsAvailability=_impactsAvailability;
@property(readonly, copy, nonatomic) DNDSModeConfigurationTriggersRecord *triggers; // @synthesize triggers=_triggers;
@property(readonly, copy, nonatomic) DNDSConfigurationSecureRecord *secureConfiguration; // @synthesize secureConfiguration=_secureConfiguration;
@property(readonly, copy, nonatomic) DNDSConfigurationRecord *configuration; // @synthesize configuration=_configuration;
@property(readonly, copy, nonatomic) DNDSModeRecord *mode; // @synthesize mode=_mode;
- (id)dictionaryRepresentationWithContext:(id)arg1;	// IMP=0x0000000000030c6d
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000030277
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003026c
- (id)shortDescription;	// IMP=0x0000000000030185
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002f84b
@property(readonly) unsigned long long hash;
- (void)log:(id)arg1 withMessage:(id)arg2;	// IMP=0x000000000002f340
- (id)_initWithMode:(id)arg1 configuration:(id)arg2 secureConfiguration:(id)arg3 triggers:(id)arg4 impactsAvailability:(unsigned long long)arg5 dimsLockScreen:(unsigned long long)arg6 created:(id)arg7 lastModified:(id)arg8 automaticallyGenerated:(_Bool)arg9 compatibilityVersion:(long long)arg10 ephemeralResolvedCompatibilityVersion:(long long)arg11 hasSecureData:(_Bool)arg12;	// IMP=0x000000000002f1b5
- (id)_initWithRecord:(id)arg1;	// IMP=0x000000000002f00f
- (id)init;	// IMP=0x000000000002effb
- (long long)populateCKRecord:(inout id)arg1 lastChanceRecord:(id)arg2;	// IMP=0x00000000000408e9
- (_Bool)populateDNDSIDSRecord:(inout id)arg1;	// IMP=0x0000000000088500

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

