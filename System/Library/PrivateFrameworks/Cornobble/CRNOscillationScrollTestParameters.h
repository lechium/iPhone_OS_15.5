//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Cornobble/CRNBlockBasedScrollTestParameters-Protocol.h>
#import <Cornobble/CRNScrollTestParameters-Protocol.h>

@class NSString, RCPSyntheticEventStream;

@interface CRNOscillationScrollTestParameters : NSObject <CRNBlockBasedScrollTestParameters, CRNScrollTestParameters>
{
    _Bool _shouldFlick;	// 8 = 0x8
    _Bool _preventDismissalGestures;	// 9 = 0x9
    _Bool _finishWithHalfIteration;	// 10 = 0xa
    NSString *_testName;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
    unsigned long long _iterations;	// 32 = 0x20
    double _amplitudeVariationPerIteration;	// 40 = 0x28
    double _initialAmplitude;	// 48 = 0x30
    long long _initialDirection;	// 56 = 0x38
    double _iterationDuration;	// 64 = 0x40
    long long _realInitialDirection;	// 72 = 0x48
    struct CGRect _scrollingBounds;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000005df1
@property(readonly, nonatomic) long long realInitialDirection; // @synthesize realInitialDirection=_realInitialDirection;
@property(nonatomic) double iterationDuration; // @synthesize iterationDuration=_iterationDuration;
@property(nonatomic) long long initialDirection; // @synthesize initialDirection=_initialDirection;
@property(nonatomic) double initialAmplitude; // @synthesize initialAmplitude=_initialAmplitude;
@property(nonatomic) double amplitudeVariationPerIteration; // @synthesize amplitudeVariationPerIteration=_amplitudeVariationPerIteration;
@property(nonatomic) _Bool finishWithHalfIteration; // @synthesize finishWithHalfIteration=_finishWithHalfIteration;
@property(nonatomic) _Bool preventDismissalGestures; // @synthesize preventDismissalGestures=_preventDismissalGestures;
@property(nonatomic) _Bool shouldFlick; // @synthesize shouldFlick=_shouldFlick;
@property(nonatomic) struct CGRect scrollingBounds; // @synthesize scrollingBounds=_scrollingBounds;
@property(nonatomic) unsigned long long iterations; // @synthesize iterations=_iterations;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *testName; // @synthesize testName=_testName;
- (struct CGPoint)finalFingerPosition;	// IMP=0x0000000000005c52
- (struct CGPoint)initialFingerPosition;	// IMP=0x0000000000005bb5
- (void)scrollWithComposer:(id)arg1 fromPoint:(struct CGPoint)arg2 toPoint:(struct CGPoint)arg3 duration:(double)arg4;	// IMP=0x0000000000005ad1
@property(readonly, nonatomic) RCPSyntheticEventStream *eventStream;
- (CDUnknownBlockType)composerBlock;	// IMP=0x00000000000055f8
- (id)initWithTestName:(id)arg1 iterations:(unsigned long long)arg2 scrollingBounds:(struct CGRect)arg3 useFlicks:(_Bool)arg4 preventDismissalGestures:(_Bool)arg5 initialAmplitude:(double)arg6 amplitudeVariationPerIteration:(double)arg7 initialDirection:(long long)arg8 iterationDuration:(double)arg9 finishWithHalfIteration:(_Bool)arg10 completionHandler:(CDUnknownBlockType)arg11;	// IMP=0x0000000000005474
- (id)initWithTestName:(id)arg1 iterations:(unsigned long long)arg2 scrollingBounds:(struct CGRect)arg3 useFlicks:(_Bool)arg4 preventDismissalGestures:(_Bool)arg5 initialAmplitude:(double)arg6 amplitudeVariationPerIteration:(double)arg7 initialDirection:(long long)arg8 iterationDuration:(double)arg9 finishWithHalfIteration:(_Bool)arg10;	// IMP=0x000000000000542c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

