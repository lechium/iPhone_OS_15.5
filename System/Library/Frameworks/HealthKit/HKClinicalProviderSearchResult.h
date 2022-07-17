//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKClinicalBrandable-Protocol.h>
#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKClinicalBrand, NSString;

@interface HKClinicalProviderSearchResult : NSObject <NSCopying, NSSecureCoding, HKClinicalBrandable>
{
    _Bool _supported;	// 8 = 0x8
    NSString *_externalID;	// 16 = 0x10
    NSString *_batchID;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    NSString *_subtitle;	// 40 = 0x28
    NSString *_location;	// 48 = 0x30
    HKClinicalBrand *_brand;	// 56 = 0x38
    NSString *_countryCode;	// 64 = 0x40
    long long _minCompatibleAPIVersion;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000bb6cc
- (void).cxx_destruct;	// IMP=0x00000000000bbb53
@property(readonly, nonatomic) long long minCompatibleAPIVersion; // @synthesize minCompatibleAPIVersion=_minCompatibleAPIVersion;
@property(readonly, copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, nonatomic, getter=isSupported) _Bool supported; // @synthesize supported=_supported;
@property(readonly, copy, nonatomic) HKClinicalBrand *brand; // @synthesize brand=_brand;
@property(readonly, copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *batchID; // @synthesize batchID=_batchID;
@property(readonly, copy, nonatomic) NSString *externalID; // @synthesize externalID=_externalID;
- (id)informationURL;	// IMP=0x00000000000bbaf2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000bb8d0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000bb6d4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bb6c1
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000bb542
- (id)initWithExternalID:(id)arg1 batchID:(id)arg2 title:(id)arg3 subtitle:(id)arg4 location:(id)arg5 supported:(_Bool)arg6 countryCode:(id)arg7 brand:(id)arg8 minCompatibleAPIVersion:(long long)arg9;	// IMP=0x00000000000bb3bb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
