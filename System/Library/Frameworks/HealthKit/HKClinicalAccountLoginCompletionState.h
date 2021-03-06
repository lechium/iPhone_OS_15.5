//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKClinicalAccount, NSNumber;

@interface HKClinicalAccountLoginCompletionState : NSObject <NSSecureCoding>
{
    _Bool _wasRelogin;	// 8 = 0x8
    HKClinicalAccount *_account;	// 16 = 0x10
    NSNumber *_alternateCredentialPersistentID;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001c1b12
- (void).cxx_destruct;	// IMP=0x00000000001c1d6b
@property(readonly, nonatomic) _Bool wasRelogin; // @synthesize wasRelogin=_wasRelogin;
@property(copy, nonatomic) NSNumber *alternateCredentialPersistentID; // @synthesize alternateCredentialPersistentID=_alternateCredentialPersistentID;
@property(readonly, nonatomic) HKClinicalAccount *account; // @synthesize account=_account;
- (id)description;	// IMP=0x00000000001c1c97
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001c1c0f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001c1b1a
- (id)initWithAccount:(id)arg1 wasRelogin:(_Bool)arg2;	// IMP=0x00000000001c1a9c

@end

