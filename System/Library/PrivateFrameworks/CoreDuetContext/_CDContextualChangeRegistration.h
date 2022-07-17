//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuetContext/NSCopying-Protocol.h>
#import <CoreDuetContext/NSSecureCoding-Protocol.h>

@class NSString, _CDContextualPredicate;

@interface _CDContextualChangeRegistration : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _mustWake;	// 8 = 0x8
    _Bool _isDeserialized;	// 9 = 0x9
    unsigned int _qualityOfService;	// 12 = 0xc
    NSString *_identifier;	// 16 = 0x10
    _CDContextualPredicate *_predicate;	// 24 = 0x18
    _CDContextualPredicate *_dismissalPolicy;	// 32 = 0x20
    CDUnknownBlockType _callback;	// 40 = 0x28
    unsigned long long _deviceSet;	// 48 = 0x30
    unsigned long long _deviceTypes;	// 56 = 0x38
    NSString *_clientIdentifier;	// 64 = 0x40
    NSString *_locationManagerEffectiveBundleID;	// 72 = 0x48
    NSString *_locationManagerEffectiveBundlePath;	// 80 = 0x50
    CDUnknownBlockType _informativeCallback;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000005ae4
+ (id)localNonWakingRegistrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 clientIdentifier:(id)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x0000000000005930
+ (id)localNonWakingRegistrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x000000000000588b
+ (id)localWakingRegistrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 clientIdentifier:(id)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x00000000000057d6
+ (id)localWakingRegistrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x0000000000005731
+ (id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 deviceTypes:(unsigned long long)arg3 clientIdentifier:(id)arg4 mustWake:(_Bool)arg5 qualityOfService:(unsigned int)arg6 callback:(CDUnknownBlockType)arg7;	// IMP=0x0000000000005632
+ (id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 deviceTypes:(unsigned long long)arg3 clientIdentifier:(id)arg4 mustWake:(_Bool)arg5 callback:(CDUnknownBlockType)arg6;	// IMP=0x000000000000560b
+ (id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 clientIdentifier:(id)arg5 mustWake:(_Bool)arg6 qualityOfService:(unsigned int)arg7 callback:(CDUnknownBlockType)arg8;	// IMP=0x00000000000054ff
+ (id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 clientIdentifier:(id)arg5 mustWake:(_Bool)arg6 callback:(CDUnknownBlockType)arg7;	// IMP=0x00000000000054d9
+ (id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 mustWake:(_Bool)arg5 callback:(CDUnknownBlockType)arg6;	// IMP=0x00000000000053f5
- (void).cxx_destruct;	// IMP=0x00000000000061bd
@property(copy) CDUnknownBlockType informativeCallback; // @synthesize informativeCallback=_informativeCallback;
@property(copy, nonatomic) NSString *locationManagerEffectiveBundlePath; // @synthesize locationManagerEffectiveBundlePath=_locationManagerEffectiveBundlePath;
@property(copy, nonatomic) NSString *locationManagerEffectiveBundleID; // @synthesize locationManagerEffectiveBundleID=_locationManagerEffectiveBundleID;
@property(nonatomic) _Bool isDeserialized; // @synthesize isDeserialized=_isDeserialized;
@property(readonly, nonatomic) unsigned int qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(nonatomic) _Bool mustWake; // @synthesize mustWake=_mustWake;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, nonatomic) unsigned long long deviceTypes; // @synthesize deviceTypes=_deviceTypes;
@property(nonatomic) unsigned long long deviceSet; // @synthesize deviceSet=_deviceSet;
@property(readonly, copy) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) _CDContextualPredicate *dismissalPolicy; // @synthesize dismissalPolicy=_dismissalPolicy;
@property(retain, nonatomic) _CDContextualPredicate *predicate; // @synthesize predicate=_predicate;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x0000000000005fa5
- (unsigned long long)hash;	// IMP=0x0000000000005f8f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000005eff
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000005c1a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000005aec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000005a0f
- (_Bool)isMultiDeviceRegistration;	// IMP=0x00000000000059e5
- (id)initWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 deviceTypes:(unsigned long long)arg5 clientIdentifier:(id)arg6 mustWake:(_Bool)arg7 qualityOfService:(unsigned int)arg8 informativeCallback:(CDUnknownBlockType)arg9;	// IMP=0x00000000000052c8
- (id)initWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 deviceTypes:(unsigned long long)arg5 clientIdentifier:(id)arg6 mustWake:(_Bool)arg7 callback:(CDUnknownBlockType)arg8;	// IMP=0x000000000000519a
- (id)init;	// IMP=0x000000000000518c

@end
