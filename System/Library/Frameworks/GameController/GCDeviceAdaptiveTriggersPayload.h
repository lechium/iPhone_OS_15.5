//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber;

@interface GCDeviceAdaptiveTriggersPayload : NSObject <NSSecureCoding>
{
    NSNumber *_mode;	// 8 = 0x8
    NSNumber *_startPosition;	// 16 = 0x10
    NSNumber *_endPosition;	// 24 = 0x18
    NSArray *_strengths;	// 32 = 0x20
    NSArray *_amplitudes;	// 40 = 0x28
    NSNumber *_frequency;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000046810
- (void).cxx_destruct;	// IMP=0x00000000000467bc
@property(readonly, nonatomic) NSNumber *frequency; // @synthesize frequency=_frequency;
@property(readonly, nonatomic) NSArray *amplitudes; // @synthesize amplitudes=_amplitudes;
@property(readonly, nonatomic) NSArray *strengths; // @synthesize strengths=_strengths;
@property(readonly, nonatomic) NSNumber *endPosition; // @synthesize endPosition=_endPosition;
@property(readonly, nonatomic) NSNumber *startPosition; // @synthesize startPosition=_startPosition;
@property(readonly, nonatomic) NSNumber *mode; // @synthesize mode=_mode;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000046365
- (_Bool)hasEqualAmplitudes:(id)arg1;	// IMP=0x000000000004616e
- (_Bool)hasEqualStrengths:(id)arg1;	// IMP=0x0000000000045f77
- (id)redactedDescription;	// IMP=0x0000000000045f3d
- (id)description;	// IMP=0x0000000000045ee5
- (id)initOff;	// IMP=0x0000000000045e94
- (id)initVibrationWithAmplitudes:(CDStruct_dd47a48c)arg1 frequency:(float)arg2;	// IMP=0x0000000000045d71
- (id)initVibrationWithStartPosition:(float)arg1 amplitude:(float)arg2 frequency:(float)arg3;	// IMP=0x0000000000045c2b
- (id)initWeaponWithStartPosition:(float)arg1 endPosition:(float)arg2 resistiveStrength:(float)arg3;	// IMP=0x0000000000045ae9
- (id)initFeedbackWithResistiveStrengths:(CDStruct_dd47a48c)arg1;	// IMP=0x00000000000459f5
- (id)initFeedbackWithStartPosition:(float)arg1 resistiveStrength:(float)arg2;	// IMP=0x00000000000458dd
- (id)initSlopeFeedbackWithStartPosition:(float)arg1 endPosition:(float)arg2 startStrength:(float)arg3 endStrength:(float)arg4;	// IMP=0x000000000004575c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000469c9
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000046818

@end
