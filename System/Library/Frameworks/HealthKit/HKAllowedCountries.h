//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKCountrySet, NSString;

@interface HKAllowedCountries : NSObject <NSCopying, NSSecureCoding>
{
    long long _category;	// 8 = 0x8
    NSString *_version;	// 16 = 0x10
    HKCountrySet *_localCountrySet;	// 24 = 0x18
    long long _remoteState;	// 32 = 0x20
    HKCountrySet *_remoteCountrySet;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d54af
+ (id)allowedCountriesInIntersectionOfLocalSet:(id)arg1 remoteSet:(id)arg2;	// IMP=0x00000000000d515b
+ (id)allowedCountriesInIntersectionOfLocalAndRemoteSetPendingSync:(id)arg1;	// IMP=0x00000000000d5109
+ (id)capabilityNotSupportedOnRemoteDevice:(id)arg1;	// IMP=0x00000000000d50b7
+ (id)noRemoteDevice:(id)arg1;	// IMP=0x00000000000d5065
+ (id)allowedCountriesInLocalSet:(id)arg1;	// IMP=0x00000000000d5018
- (void).cxx_destruct;	// IMP=0x00000000000d586f
@property(readonly, copy, nonatomic) HKCountrySet *remoteCountrySet; // @synthesize remoteCountrySet=_remoteCountrySet;
@property(readonly, nonatomic) long long remoteState; // @synthesize remoteState=_remoteState;
@property(readonly, copy, nonatomic) HKCountrySet *localCountrySet; // @synthesize localCountrySet=_localCountrySet;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) long long category; // @synthesize category=_category;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d5567
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d54b7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d54a4
- (unsigned long long)hash;	// IMP=0x00000000000d543e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d532f
- (unsigned long long)ineligibilityReasonsForOnboardingCountryCode:(id)arg1;	// IMP=0x0000000000223409

@end
