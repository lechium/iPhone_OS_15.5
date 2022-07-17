//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface DMFRefreshStatusRequest
{
    NSString *_organizationIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000353d4
+ (_Bool)isPermittedOnUserConnection;	// IMP=0x00000000000353cc
+ (_Bool)isPermittedOnSystemConnection;	// IMP=0x00000000000353c4
+ (id)permittedPlatforms;	// IMP=0x00000000000353b7
+ (Class)whitelistedClassForResultObject;	// IMP=0x00000000000353a6
- (void).cxx_destruct;	// IMP=0x0000000000035570
@property(copy, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000354b3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000353dc

@end
