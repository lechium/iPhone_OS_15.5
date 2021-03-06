//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface NDApplication : NSObject
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSMutableArray *_observers;	// 16 = 0x10
    _Bool isInTransitionalDiscretionaryPeriod;	// 24 = 0x18
    double _currentRequestDelay;	// 32 = 0x20
}

+ (id)fileProviderWithIdentifer:(id)arg1 applicationIdentifier:(id)arg2;	// IMP=0x004000000003db04
+ (id)cloudContainerWithIdentifier:(id)arg1;	// IMP=0x001000000003d9ce
+ (id)chronoKitExtensionWithIdentifier:(id)arg1;	// IMP=0x001000000003d898
+ (_Bool)springBoardApplicationExistsWithIdentifier:(id)arg1;	// IMP=0x001000000003d80b
+ (id)springboardApplicationWithBundleIdentifier:(id)arg1;	// IMP=0x001000000003d6d5
+ (id)applicationWithIdentifier:(id)arg1;	// IMP=0x001000000003d595
+ (void)initialize;	// IMP=0x001000000003d571
- (void).cxx_destruct;	// IMP=0x002000000003d32f
@property double currentRequestDelay; // @synthesize currentRequestDelay=_currentRequestDelay;
@property(retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property _Bool isInTransitionalDiscretionaryPeriod; // @synthesize isInTransitionalDiscretionaryPeriod;
- (void)_onqueue_resetRequestDelay;	// IMP=0x001000000003d247
- (_Bool)backgroundUpdatesEnabled;	// IMP=0x001000000003d23f
- (void)invokeSelectorForAllObservers:(SEL)arg1;	// IMP=0x001000000003d1c7
- (void)removeObserver:(id)arg1;	// IMP=0x001000000003d116
- (void)addObserver:(id)arg1;	// IMP=0x001000000003d08b
- (_Bool)isHandlingBackgroundURLSessionWithIdentifier:(id)arg1 withSessionUUID:(id)arg2;	// IMP=0x001000000003d083
- (_Bool)hasBackgroundTaskCompletion;	// IMP=0x001000000003d07b
- (_Bool);	// IMP=0x001000000003d073
- (_Bool)isForeground;	// IMP=0x001000000003d06b
- (_Bool)hasForegroundBackgroundStates;	// IMP=0x001000000003d063
- (_Bool)wakeForSessionIdentifier:(id)arg1 withSessionUUID:(id)arg2 wakeRequirement:(long long)arg3;	// IMP=0x001000000003ced3
- (_Bool)maySupportWakesLater;	// IMP=0x001000000003ceac
- (_Bool)supportsWakes;	// IMP=0x001000000003ce3d
- (_Bool)usesContainerManagerForAVAsset;	// IMP=0x001000000003ce35
- (id)containerURL;	// IMP=0x001000000003ce2d
- (id)initWithIdentifier:(id)arg1;	// IMP=0x001000000003cd6c

@end

