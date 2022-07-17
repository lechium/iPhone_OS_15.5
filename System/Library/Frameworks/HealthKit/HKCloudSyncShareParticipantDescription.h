//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface HKCloudSyncShareParticipantDescription : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identity;	// 8 = 0x8
    NSString *_role;	// 16 = 0x10
    NSString *_acceptanceStatus;	// 24 = 0x18
    NSString *_permission;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000cbd2e
- (void).cxx_destruct;	// IMP=0x00000000000cbf27
@property(readonly, copy, nonatomic) NSString *permission; // @synthesize permission=_permission;
@property(readonly, copy, nonatomic) NSString *acceptanceStatus; // @synthesize acceptanceStatus=_acceptanceStatus;
@property(readonly, copy, nonatomic) NSString *role; // @synthesize role=_role;
@property(readonly, copy, nonatomic) NSString *identity; // @synthesize identity=_identity;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000cbdcb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000cbd36
- (id)description;	// IMP=0x00000000000cbcec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cbce1
- (id)initWithIdentity:(id)arg1 role:(id)arg2 acceptanceStatus:(id)arg3 permission:(id)arg4;	// IMP=0x00000000000cbbd4

@end
