//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSNumber, NSString;

@interface DMFMDMv1InstallAppRequest
{
    _Bool _manage;	// 8 = 0x8
    NSString *_redemptionCode;	// 16 = 0x10
    NSString *_originator;	// 24 = 0x18
    unsigned long long _managementOptions;	// 32 = 0x20
    NSString *_VPNUUIDString;	// 40 = 0x28
    NSArray *_associatedDomains;	// 48 = 0x30
    NSNumber *_associatedDomainsEnableDirectDownloads;	// 56 = 0x38
    NSNumber *_removable;	// 64 = 0x40
    NSDictionary *_configuration;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002bcb3
+ (_Bool)isPermittedOnUserConnection;	// IMP=0x000000000002bcab
+ (_Bool)isPermittedOnSystemConnection;	// IMP=0x000000000002bca3
+ (id)permittedPlatforms;	// IMP=0x000000000002bc96
+ (Class)whitelistedClassForResultObject;	// IMP=0x000000000002bc85
- (void).cxx_destruct;	// IMP=0x000000000002c562
@property(copy, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) NSNumber *removable; // @synthesize removable=_removable;
@property(copy, nonatomic) NSNumber *associatedDomainsEnableDirectDownloads; // @synthesize associatedDomainsEnableDirectDownloads=_associatedDomainsEnableDirectDownloads;
@property(copy, nonatomic) NSArray *associatedDomains; // @synthesize associatedDomains=_associatedDomains;
@property(copy, nonatomic) NSString *VPNUUIDString; // @synthesize VPNUUIDString=_VPNUUIDString;
@property(nonatomic) unsigned long long managementOptions; // @synthesize managementOptions=_managementOptions;
@property(nonatomic) _Bool manage; // @synthesize manage=_manage;
@property(copy, nonatomic) NSString *originator; // @synthesize originator=_originator;
@property(copy, nonatomic) NSString *redemptionCode; // @synthesize redemptionCode=_redemptionCode;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002c1b1
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002bcbb

@end

