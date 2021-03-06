//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface SBApplicationTestingManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableArray *_queue_testEndedHandlers;	// 16 = 0x10
    NSMutableDictionary *_idleTimerDisableAssertions;	// 24 = 0x18
    NSString *_currentTestName;	// 32 = 0x20
    NSString *_scrollTestActiveSubtest;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x000000000007b066
- (void).cxx_destruct;	// IMP=0x0000000000403ed7
@property(copy, nonatomic) NSString *scrollTestActiveSubtest; // @synthesize scrollTestActiveSubtest=_scrollTestActiveSubtest;
@property(copy, nonatomic) NSString *currentTestName; // @synthesize currentTestName=_currentTestName;
@property(readonly, nonatomic, getter=_idleTimerDisableAssertions) NSMutableDictionary *idleTimerDisableAssertions; // @synthesize idleTimerDisableAssertions=_idleTimerDisableAssertions;
- (void)_installTestEndedHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000403d8b
- (void)_handleTestEnded;	// IMP=0x0000000000403a3d
- (void)_prepareForTestStartup:(id)arg1;	// IMP=0x0000000000403923
- (void)installNotificationObserverForNotificationName:(id)arg1 forOneNotification:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000403909
- (void)installNotificationObserverForNotificationName:(id)arg1 notificationCenter:(id)arg2 forOneNotification:(_Bool)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000004035b6
- (void)setupKeyboardAnimationSubTestsForTestName:(id)arg1;	// IMP=0x000000000040327c
- (void)markUserLaunchInitiationTime;	// IMP=0x000000000007b0a3
- (id)init;	// IMP=0x0000000000403226

@end

