//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSString;

@interface HMDRemoteLoginUtilities : NSObject <HMFLogging>
{
}

+ (id)logCategory;	// IMP=0x0000000000aeb667
+ (void)fetchIsTwoFactorAuthenticationEnabledForAccountWithReason:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000aeb34d
+ (id)primaryITunesAccount;	// IMP=0x0000000000aeb345
+ (long long)serviceTypeForAccountService:(unsigned long long)arg1;	// IMP=0x0000000000aeb334

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
