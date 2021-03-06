//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKDeviceDescriptor;
@protocol BKDeviceDelegate, OS_dispatch_queue;

@interface BKDevice : NSObject
{
    id <BKDeviceDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    BKDeviceDescriptor *_descriptor;	// 24 = 0x18
}

+ (id)deviceWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000035c5
+ (_Bool)isIdentityEnrolled;	// IMP=0x000000000000357c
- (void).cxx_destruct;	// IMP=0x0000000000004db8
@property(retain, nonatomic) BKDeviceDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <BKDeviceDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)deviceHardwareState:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x0000000000004cd1
- (id)lastMatchEventWithError:(id *)arg1;	// IMP=0x0000000000004c47
- (_Bool)biometryAvailability:(long long *)arg1 forUser:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x0000000000004bbd
- (id)freeIdentityCountForUser:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x0000000000004b33
- (id)maxIdentityCountWithError:(id *)arg1;	// IMP=0x0000000000004aa9
- (id)identitiesForUser:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x0000000000004a1f
- (void)removeAllIdentitiesForUser:(unsigned int)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004973
- (_Bool)removeAllIdentitiesForUser:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x00000000000048e9
- (void)removeIdentity:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000483d
- (_Bool)removeIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000047b3
- (void)updateIdentity:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004707
- (_Bool)updateIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000467d
- (id)identityForUUID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000045f3
- (_Bool)forceBioLockoutIfLockedForUser:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x0000000000004569
- (_Bool)forceBioLockoutForUser:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x00000000000044df
- (_Bool)forceBioLockoutForAllUsersWithError:(id *)arg1;	// IMP=0x0000000000004455
- (_Bool)dropAllUnlockTokensWithError:(id *)arg1;	// IMP=0x00000000000043cb
- (id)identitiesDatabaseUUIDForUser:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x0000000000004341
- (void)setSystemProtectedConfiguration:(id)arg1 credentialSet:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004295
- (_Bool)setSystemProtectedConfiguration:(id)arg1 credentialSet:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000420b
- (void)setProtectedConfiguration:(id)arg1 forUser:(unsigned int)arg2 credentialSet:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000000415f
- (_Bool)setProtectedConfiguration:(id)arg1 forUser:(unsigned int)arg2 credentialSet:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000040d5
- (id)systemProtectedConfigurationWithError:(id *)arg1;	// IMP=0x000000000000404b
- (id)effectiveProtectedConfigurationForUser:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x0000000000003fc1
- (id)protectedConfigurationForUser:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x0000000000003f37
- (id)createPresenceDetectOperationWithError:(id *)arg1;	// IMP=0x0000000000003ead
- (id)createEnrollOperationWithError:(id *)arg1;	// IMP=0x0000000000003e23
- (id)createMatchOperationWithError:(id *)arg1;	// IMP=0x0000000000003cd7
- (id)identitiesDatabaseHashForUser:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x0000000000003bb2
- (_Bool)expressModeState:(long long *)arg1 forUser:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x0000000000003ab1
- (_Bool)extendedBioLockoutState:(long long *)arg1 forUser:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x00000000000039b0
- (_Bool)bioLockoutState:(long long *)arg1 forUser:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x00000000000038af
- (id)identitiesWithError:(id *)arg1;	// IMP=0x0000000000003720

@end

