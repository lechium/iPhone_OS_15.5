//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoPassKit/UNUserNotificationCenterDelegatePrivate-Protocol.h>

@class NSString, UNUserNotificationCenter;

@interface NPKUserNotificationCenter : NSObject <UNUserNotificationCenterDelegatePrivate>
{
    UNUserNotificationCenter *_notificationCenter;	// 8 = 0x8
    long long _authorizationStatus;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000000001ce37c
- (void).cxx_destruct;	// IMP=0x00000000001cf54f
- (void)_requestNotificationAuthorizationWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001cf2ec
- (void)_requestNotificationAuthorizationWithPreconditionCheck:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001cf010
- (id)_requestWithNotificationIdentifier:(id)arg1 title:(id)arg2 body:(id)arg3 categoryIdentifier:(id)arg4 userInfo:(id)arg5 suppressed:(_Bool)arg6;	// IMP=0x00000000001cee02
- (void)_addNotificationWithNotificationIdentifier:(id)arg1 title:(id)arg2 body:(id)arg3 categoryIdentifier:(id)arg4 userInfo:(id)arg5 suppressed:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000000001ceaee
- (void)userNotificationCenter:(id)arg1 didChangeSettings:(id)arg2;	// IMP=0x00000000001cea00
- (void)addNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ce7f8
- (void)setNotificationCategoryWithIdentifier:(id)arg1 intentIdentifier:(id)arg2 actions:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x00000000001ce694
- (void)fetchAuthorizationStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001ce4fd
- (void)requestAuthorizationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001ce4d9
- (void)requestAuthorizationIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001ce3d1
- (id)initWithNotificationBundleIdentifier:(id)arg1;	// IMP=0x00000000001ce234
- (id)init;	// IMP=0x00000000001ce218

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

