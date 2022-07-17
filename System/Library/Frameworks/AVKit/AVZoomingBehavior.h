//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVKit/AVBehavior-Protocol.h>
#import <AVKit/AVBehaviorInternal-Protocol.h>

@class AVZoomingBehaviorContext, NSString;

__attribute__((visibility("hidden")))
@interface AVZoomingBehavior : NSObject <AVBehaviorInternal, AVBehavior>
{
    AVZoomingBehaviorContext *_behaviorContext;	// 8 = 0x8
}

+ (Class)behaviorContextClass;	// IMP=0x00000000000349ff
- (void).cxx_destruct;	// IMP=0x0000000000034a4f
@property(nonatomic) __weak AVZoomingBehaviorContext *behaviorContext; // @synthesize behaviorContext=_behaviorContext;
- (void)didRemoveFromContext:(id)arg1;	// IMP=0x0000000000034a22
- (void)willRemoveFromContext:(id)arg1;	// IMP=0x0000000000034a1c
- (void)didMoveToContext:(id)arg1;	// IMP=0x0000000000034a16
- (void)willMoveToContext:(id)arg1;	// IMP=0x0000000000034a10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
