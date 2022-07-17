//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RCPPlayer;
@protocol OS_dispatch_queue;

@interface RCPInlinePlayer : NSObject
{
    _Bool _needsInitialDelay;	// 8 = 0x8
    _Bool _ignoresCompletionDelay;	// 9 = 0x9
    RCPPlayer *_underlyingPlayer;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_replayQueue;	// 24 = 0x18
}

+ (void)setIgnoresCompletionDelay:(_Bool)arg1;	// IMP=0x0000000000005053
+ (void)playEventActions:(CDUnknownBlockType)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004f31
+ (void)playEventStream:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004e0f
+ (void)playCommandString:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004ced
+ (void)setNeedsInitialDelay;	// IMP=0x0000000000004c9f
+ (id)sharedInstance;	// IMP=0x0000000000004c4a
- (void).cxx_destruct;	// IMP=0x0000000000005af9
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *replayQueue; // @synthesize replayQueue=_replayQueue;
@property(retain, nonatomic) RCPPlayer *underlyingPlayer; // @synthesize underlyingPlayer=_underlyingPlayer;
@property(nonatomic) _Bool ignoresCompletionDelay; // @synthesize ignoresCompletionDelay=_ignoresCompletionDelay;
@property(nonatomic) _Bool needsInitialDelay; // @synthesize needsInitialDelay=_needsInitialDelay;
- (void)_callBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005a8d
- (void)playEventStream:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000568f
- (void)playEventActions:(CDUnknownBlockType)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000055f3
- (void)playCommandString:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000550d
- (void)tearDown;	// IMP=0x000000000000545b
- (void)_doInitialDelayIfNeeded;	// IMP=0x00000000000053f1
- (void)prewarmForEventStream:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005130
- (id)init;	// IMP=0x000000000000507c

@end
