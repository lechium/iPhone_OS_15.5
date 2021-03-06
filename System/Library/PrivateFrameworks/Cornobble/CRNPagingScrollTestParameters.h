//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Cornobble/CRNBlockBasedScrollTestParameters-Protocol.h>
#import <Cornobble/CRNScrollTestParameters-Protocol.h>

@class NSString, RCPSyntheticEventStream;

@interface CRNPagingScrollTestParameters : NSObject <CRNScrollTestParameters, CRNBlockBasedScrollTestParameters>
{
    _Bool _useFlicks;	// 8 = 0x8
    NSString *_testName;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
    unsigned long long _iterations;	// 32 = 0x20
    double _amplitude;	// 40 = 0x28
    long long _direction;	// 48 = 0x30
    double _iterationDuration;	// 56 = 0x38
    long long _realDirection;	// 64 = 0x40
    struct CGRect _scrollingBounds;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000004f7a
@property(readonly, nonatomic) long long realDirection; // @synthesize realDirection=_realDirection;
@property(nonatomic) _Bool useFlicks; // @synthesize useFlicks=_useFlicks;
@property(nonatomic) double iterationDuration; // @synthesize iterationDuration=_iterationDuration;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(nonatomic) double amplitude; // @synthesize amplitude=_amplitude;
@property(nonatomic) struct CGRect scrollingBounds; // @synthesize scrollingBounds=_scrollingBounds;
@property(nonatomic) unsigned long long iterations; // @synthesize iterations=_iterations;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *testName; // @synthesize testName=_testName;
@property(readonly, nonatomic) RCPSyntheticEventStream *eventStream;
- (void)scrollWithComposer:(id)arg1 fromPoint:(struct CGPoint)arg2 toPoint:(struct CGPoint)arg3 duration:(double)arg4;	// IMP=0x0000000000004cc2
- (CDUnknownBlockType)composerBlock;	// IMP=0x00000000000048c8
- (id)initWithTestName:(id)arg1 iterations:(unsigned long long)arg2 scrollingBounds:(struct CGRect)arg3 amplitude:(double)arg4 direction:(long long)arg5 iterationDuration:(double)arg6 useFlicks:(_Bool)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x0000000000004764

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

