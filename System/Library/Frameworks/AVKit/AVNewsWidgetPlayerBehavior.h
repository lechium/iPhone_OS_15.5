//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVKit/AVBehavior-Protocol.h>
#import <AVKit/AVBehaviorInternal-Protocol.h>

@class AVNewsWidgetPlayerBehaviorContext, NSString;

@interface AVNewsWidgetPlayerBehavior : NSObject <AVBehaviorInternal, AVBehavior>
{
    AVNewsWidgetPlayerBehaviorContext *_behaviorContext;	// 8 = 0x8
}

+ (Class)behaviorContextClass;	// IMP=0x0000000000017552
- (void).cxx_destruct;	// IMP=0x0000000000017544
@property(nonatomic) __weak AVNewsWidgetPlayerBehaviorContext *behaviorContext; // @synthesize behaviorContext=_behaviorContext;
- (void)didCancelContentTransition;	// IMP=0x0000000000017517
- (void)willCancelContentTransition;	// IMP=0x0000000000017511
- (void)didCompleteContentTransition;	// IMP=0x000000000001750b
- (void)willCompleteContentTransition;	// IMP=0x0000000000017505
- (void)didUpdateContentTransitionProgress:(double)arg1;	// IMP=0x00000000000174ff
- (void)willBeginContentTransition;	// IMP=0x00000000000174f9
- (id)playerForContentTransitionType:(long long)arg1;	// IMP=0x00000000000174f1
- (void)didRemoveFromContext:(id)arg1;	// IMP=0x00000000000174eb
- (void)willRemoveFromContext:(id)arg1;	// IMP=0x00000000000174e5
- (void)didMoveToContext:(id)arg1;	// IMP=0x00000000000174df
- (void)willMoveToContext:(id)arg1;	// IMP=0x00000000000174d9
- (void)dealloc;	// IMP=0x000000000001740c
- (id)init;	// IMP=0x0000000000017320

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

