//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SleepDaemon/HDSPActivityScheduler-Protocol.h>

@class NSString;
@protocol NAScheduler;

__attribute__((visibility("hidden")))
@interface HDSPXPCActivityScheduler : NSObject <HDSPActivityScheduler>
{
    NSString *_eventName;	// 8 = 0x8
    id <NAScheduler> _callbackScheduler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000615a5
@property(readonly, nonatomic) id <NAScheduler> callbackScheduler; // @synthesize callbackScheduler=_callbackScheduler;
@property(readonly, copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (void)unschedule;	// IMP=0x0000000000061573
- (void)scheduleActivityWithCriteria:(id)arg1 options:(unsigned long long)arg2 activityHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000006146a
- (void)scheduleActivity:(id)arg1 options:(unsigned long long)arg2 activityHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000061458
- (id)initWithEventName:(id)arg1 callbackScheduler:(id)arg2;	// IMP=0x00000000000613a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
