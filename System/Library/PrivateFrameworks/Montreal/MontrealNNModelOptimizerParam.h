//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Montreal/MontrealNNDescriptionProtocol-Protocol.h>

@class NSNumber, NSString;

@interface MontrealNNModelOptimizerParam <MontrealNNDescriptionProtocol>
{
    float _learningRate;	// 8 = 0x8
    float _momentum;	// 12 = 0xc
    unsigned long long _optimizerType;	// 16 = 0x10
    NSNumber *_gradientClipMin;	// 24 = 0x18
    NSNumber *_gradientClipMax;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001e0e20
@property(readonly) NSNumber *gradientClipMax; // @synthesize gradientClipMax=_gradientClipMax;
@property(readonly) NSNumber *gradientClipMin; // @synthesize gradientClipMin=_gradientClipMin;
@property(readonly) float momentum; // @synthesize momentum=_momentum;
@property(readonly) float learningRate; // @synthesize learningRate=_learningRate;
@property(readonly) unsigned long long optimizerType; // @synthesize optimizerType=_optimizerType;
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000001e0c50
- (id)initWithOptimizerType:(unsigned long long)arg1 learningRate:(float)arg2 momentum:(float)arg3 gradientClipMin:(id)arg4 gradientClipMax:(id)arg5;	// IMP=0x00000000001e0b30
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001e0970

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
