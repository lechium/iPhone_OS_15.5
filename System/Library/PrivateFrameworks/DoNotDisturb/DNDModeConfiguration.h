//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/DNDDiffBuilding-Protocol.h>
#import <DoNotDisturb/NSCopying-Protocol.h>
#import <DoNotDisturb/NSMutableCopying-Protocol.h>
#import <DoNotDisturb/NSSecureCoding-Protocol.h>

@class DNDConfiguration, DNDMode, NSArray, NSDate, NSString;

@interface DNDModeConfiguration : NSObject <DNDDiffBuilding, NSCopying, NSMutableCopying, NSSecureCoding>
{
    DNDMode *_mode;	// 8 = 0x8
    DNDConfiguration *_configuration;	// 16 = 0x10
    NSArray *_triggers;	// 24 = 0x18
    unsigned long long _impactsAvailability;	// 32 = 0x20
    unsigned long long _dimsLockScreen;	// 40 = 0x28
    NSDate *_lastModified;	// 48 = 0x30
    NSDate *_created;	// 56 = 0x38
    _Bool _automaticallyGenerated;	// 64 = 0x40
    long long _compatibilityVersion;	// 72 = 0x48
    _Bool _hasSecureData;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000022849
+ (id)defaultModeConfiguration;	// IMP=0x000000000002109c
- (void).cxx_destruct;	// IMP=0x000000000002344b
@property(readonly, nonatomic) long long compatibilityVersion; // @synthesize compatibilityVersion=_compatibilityVersion;
@property(readonly, nonatomic, getter=isAutomaticallyGenerated) _Bool automaticallyGenerated; // @synthesize automaticallyGenerated=_automaticallyGenerated;
@property(readonly, copy, nonatomic) NSDate *created; // @synthesize created=_created;
@property(readonly, copy, nonatomic) NSDate *lastModified; // @synthesize lastModified=_lastModified;
@property(readonly, nonatomic) unsigned long long dimsLockScreen; // @synthesize dimsLockScreen=_dimsLockScreen;
@property(readonly, nonatomic) unsigned long long impactsAvailability; // @synthesize impactsAvailability=_impactsAvailability;
@property(readonly, copy, nonatomic) NSArray *triggers; // @synthesize triggers=_triggers;
@property(readonly, copy, nonatomic) DNDConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, copy, nonatomic) DNDMode *mode; // @synthesize mode=_mode;
- (long long)_maxTriggerCompatibilityVersion:(id)arg1;	// IMP=0x00000000000232b8
- (_Bool)_containsSecureTriggers:(id)arg1;	// IMP=0x000000000002316a
- (void)diffAgainstObject:(id)arg1 usingDiffBuilder:(id)arg2 withDescription:(id)arg3;	// IMP=0x0000000000022c9a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000022abf
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000022851
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000022811
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000022806
- (id)shortDescription;	// IMP=0x000000000002271f
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000021eee
@property(readonly) unsigned long long hash;
- (void)log:(id)arg1 withMessage:(id)arg2;	// IMP=0x00000000000219a5
@property(readonly, nonatomic) long long resolvedCompatibilityVersion;
@property(readonly, nonatomic, getter=isSupportedConfiguration) _Bool supportedConfiguration;
- (_Bool)hasSecureData;	// IMP=0x0000000000021873
- (id)mergeWithModeConfiguration:(id)arg1;	// IMP=0x000000000002168c
@property(readonly, nonatomic) unsigned long long allowSmartEntry; // @dynamic allowSmartEntry;
- (id)_initWithModeConfiguration:(id)arg1;	// IMP=0x00000000000213bf
- (id)initWithMode:(id)arg1 configuration:(id)arg2 triggers:(id)arg3 impactsAvailability:(unsigned long long)arg4 dimsLockScreen:(unsigned long long)arg5 created:(id)arg6 lastModified:(id)arg7 automaticallyGenerated:(_Bool)arg8 compatibilityVersion:(long long)arg9;	// IMP=0x000000000002120c
- (id)initWithMode:(id)arg1 configuration:(id)arg2 triggers:(id)arg3;	// IMP=0x0000000000021144

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

