//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/HDProfileReadyObserver-Protocol.h>

@class HDProfile, NSString;
@protocol OS_dispatch_queue;

@interface HDAgeGatingManager : NSObject <HDProfileReadyObserver, HDDatabaseProtectedDataObserver>
{
    HDProfile *_profile;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    int _significantTimeChangeNotificationToken;	// 24 = 0x18
    int _userCharacteristicsDidChangeNotificationToken;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000422cea
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;	// IMP=0x0000000000422cda
- (id)ageInYearsWithError:(id *)arg1;	// IMP=0x0000000000422921
- (void)unitTesting_updateAgeGates;	// IMP=0x00000000004228c8
- (void)didRecieveDayChangeNotification:(id)arg1;	// IMP=0x000000000042286f
- (void)profileDidBecomeReady:(id)arg1;	// IMP=0x0000000000421fbf
- (void)dealloc;	// IMP=0x0000000000421f10
- (id)initWithProfile:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000421c45
- (id)initWithProfile:(id)arg1;	// IMP=0x0000000000421bde

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
