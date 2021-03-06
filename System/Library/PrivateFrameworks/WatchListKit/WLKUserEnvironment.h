//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface WLKUserEnvironment : NSObject
{
    _Bool _consented;	// 8 = 0x8
    _Bool _internalBuild;	// 9 = 0x9
    NSNumber *_DSID;	// 16 = 0x10
    NSString *_storeFrontIdentifier;	// 24 = 0x18
    NSDictionary *_entitlements;	// 32 = 0x20
    NSString *_restrictions;	// 40 = 0x28
    NSArray *_consentedBrands;	// 48 = 0x30
    NSString *_platform;	// 56 = 0x38
    unsigned long long _protocolVersion;	// 64 = 0x40
    NSString *_languageIdentifier;	// 72 = 0x48
    NSString *_countryIdentifier;	// 80 = 0x50
    NSArray *_deniedBrands;	// 88 = 0x58
}

+ (void)setCurrentEnvironmentForTesting:(id)arg1;	// IMP=0x00000000000324ed
+ (id)currentEnvironment;	// IMP=0x00000000000324c0
- (void).cxx_destruct;	// IMP=0x0000000000034616
@property(nonatomic) _Bool internalBuild; // @synthesize internalBuild=_internalBuild;
@property(retain, nonatomic) NSArray *deniedBrands; // @synthesize deniedBrands=_deniedBrands;
@property(retain, nonatomic) NSString *countryIdentifier; // @synthesize countryIdentifier=_countryIdentifier;
@property(retain, nonatomic) NSString *languageIdentifier; // @synthesize languageIdentifier=_languageIdentifier;
@property(nonatomic) unsigned long long protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(retain, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(nonatomic) _Bool consented; // @synthesize consented=_consented;
@property(retain, nonatomic) NSArray *consentedBrands; // @synthesize consentedBrands=_consentedBrands;
@property(retain, nonatomic) NSString *restrictions; // @synthesize restrictions=_restrictions;
@property(retain, nonatomic) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(retain, nonatomic) NSString *storeFrontIdentifier; // @synthesize storeFrontIdentifier=_storeFrontIdentifier;
@property(retain, nonatomic) NSNumber *DSID; // @synthesize DSID=_DSID;
- (id)_queryPostV3;	// IMP=0x0000000000033ddc
- (id)_queryParametersV3;	// IMP=0x0000000000033b5d
- (id)_consentQuery;	// IMP=0x00000000000339a5
- (id)_entitlementsQuery;	// IMP=0x000000000003347b
- (id)description;	// IMP=0x00000000000331fe
- (unsigned long long)hash;	// IMP=0x000000000003310a
- (_Bool)isEqualToEnvironment:(id)arg1;	// IMP=0x00000000000329e7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000032980
- (id)init;	// IMP=0x0000000000032501

@end

