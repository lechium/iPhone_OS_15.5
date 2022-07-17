//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HMDRemoteLoginAuthenticationRequest
{
    unsigned long long _targetedAccountType;	// 8 = 0x8
}

+ (id)xpcMessageName;	// IMP=0x0000000000386746
+ (id)messageName;	// IMP=0x0000000000386739
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000386731
+ (id)objWithMessage:(id)arg1;	// IMP=0x000000000038659a
+ (id)objWithDict:(id)arg1;	// IMP=0x0000000000386425
@property(nonatomic) unsigned long long targetedAccountType; // @synthesize targetedAccountType=_targetedAccountType;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000386389
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000386303
- (id)description;	// IMP=0x0000000000386269
- (id)messagePayload;	// IMP=0x00000000003861ae
- (id)xpcMessageName;	// IMP=0x00000000003861a1
- (id)messageName;	// IMP=0x0000000000386194

@end
