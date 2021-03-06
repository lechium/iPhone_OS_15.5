//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface DMFProcessStatusRequest
{
    NSString *_organizationIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000031fb0
+ (_Bool)isPermittedOnUserConnection;	// IMP=0x0000000000031fa8
+ (_Bool)isPermittedOnSystemConnection;	// IMP=0x0000000000031fa0
+ (id)permittedPlatforms;	// IMP=0x0000000000031f93
- (void).cxx_destruct;	// IMP=0x000000000003214c
@property(copy, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003208f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000031fb8

@end

