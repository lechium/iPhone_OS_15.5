//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSString;

@interface HMDBackgroundTaskAgentTimer : NSObject <HMFLogging>
{
    NSString *_timerID;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x00000000002a79c4
- (void).cxx_destruct;	// IMP=0x00000000002a79b4
@property(readonly, nonatomic) NSString *timerID; // @synthesize timerID=_timerID;
- (void)_stopTimer:(CDUnknownBlockType)arg1;	// IMP=0x00000000002a7994
- (void)_startTimer:(id)arg1 home:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002a781b
@property(readonly, copy) NSString *description;
- (id)logIdentifier;	// IMP=0x00000000002a779d
- (id)initWithTimerID:(id)arg1;	// IMP=0x00000000002a7732

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

