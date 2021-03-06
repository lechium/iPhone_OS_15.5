//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameController/CoalescableMicroGamepad-Protocol.h>
#import <GameController/DigitizerValueChangedDelegate-Protocol.h>

@class GCControllerDirectionPad, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _GCAppleTVRemoteControllerProfile <DigitizerValueChangedDelegate, CoalescableMicroGamepad>
{
    double _windowX;	// 8 = 0x8
    double _windowY;	// 16 = 0x10
    double _windowSize;	// 24 = 0x18
    double _deadzoneSize;	// 32 = 0x20
    double _windowBufferSize[4];	// 40 = 0x28
    unsigned int _digitizerTouchState;	// 72 = 0x48
    unsigned int _sampleCount;	// 76 = 0x4c
    unsigned int _accumInputSampleCount;	// 80 = 0x50
    double _prevLogTime;	// 88 = 0x58
    int _orientation;	// 96 = 0x60
    int _candidateOrientation;	// 100 = 0x64
    NSDate *_candidateOrientationTimestamp;	// 104 = 0x68
    unsigned long long _owner;	// 112 = 0x70
    long long _deviceType;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000037925
@property(nonatomic) unsigned long long owner; // @synthesize owner=_owner;
@property(nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
- (void)setAllowsRotation:(_Bool)arg1;	// IMP=0x0000000000037629
- (id)name;	// IMP=0x000000000003761c
- (id)initWithController:(id)arg1;	// IMP=0x00000000000375b1
- (void)initCommon:(id)arg1;	// IMP=0x00000000000374d7
- (void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3 timestamp:(unsigned long long)arg4 forceSkipDpadRotation:(_Bool)arg5;	// IMP=0x00000000000371a7
- (void)getPositionInSlidingWindowForRealX:(double)arg1 realY:(double)arg2 outXInWindow:(double *)arg3 outYInWindow:(double *)arg4;	// IMP=0x0000000000037073
- (void)digitizerTouchUp:(id)arg1 timestamp:(unsigned long long)arg2 forceSkipDpadRotation:(_Bool)arg3;	// IMP=0x000000000003704a
- (void)digitizerTouchEvent:(id)arg1 x:(double)arg2 y:(double)arg3 timestamp:(unsigned long long)arg4 forceSkipDpadRotation:(_Bool)arg5;	// IMP=0x000000000003700f
- (void)processOrientationData:(id)arg1;	// IMP=0x0000000000036e1f
- (void)handleReport:(unsigned int)arg1 data:(id)arg2;	// IMP=0x0000000000036cfa
- (unsigned int)sampleRate;	// IMP=0x0000000000036cea
- (_Bool)ownershipClaimingElementsZero;	// IMP=0x0000000000036b75

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) GCControllerDirectionPad *dpad;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

