//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

@interface UISwipeGestureRecognizer
{
    double _maximumDuration;	// 16 = 0x10
    double _minimumPrimaryMovement;	// 24 = 0x18
    double _maximumPrimaryMovement;	// 32 = 0x20
    double _minimumSecondaryMovement;	// 40 = 0x28
    double _maximumSecondaryMovement;	// 48 = 0x30
    double _minimumPrimaryMovementRate;	// 56 = 0x38
    double _rateOfMinimumMovementDecay;	// 64 = 0x40
    double _rateOfMaximumMovementDecay;	// 72 = 0x48
    unsigned long long _numberOfTouchesRequired;	// 80 = 0x50
    NSMutableArray *_touches;	// 88 = 0x58
    unsigned long long _direction;	// 96 = 0x60
    struct CGPoint _startLocation;	// 104 = 0x68
    struct CGPoint *_startLocations;	// 120 = 0x78
    double _startTime;	// 128 = 0x80
    struct CGPoint *_previousLocations;	// 136 = 0x88
    double _previousTime;	// 144 = 0x90
    _Bool _failed;	// 152 = 0x98
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000007d1e49
+ (_Bool)_shouldDefaultToTouches;	// IMP=0x00000000007d1cd8
- (void).cxx_destruct;	// IMP=0x00000000007d351a
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(nonatomic) unsigned long long numberOfTouchesRequired; // @synthesize numberOfTouchesRequired=_numberOfTouchesRequired;
@property(nonatomic) double maximumDuration; // @synthesize maximumDuration=_maximumDuration;
- (_Bool)_isGestureType:(long long)arg1;	// IMP=0x00000000007d34b6
- (void)_appendSubclassDescription:(id)arg1;	// IMP=0x00000000007d337b
- (struct CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;	// IMP=0x00000000007d32cc
- (unsigned long long)numberOfTouches;	// IMP=0x00000000007d32af
- (struct CGPoint)locationInView:(id)arg1;	// IMP=0x00000000007d320f
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000007d308a
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000007d2f05
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000007d272e
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000007d21eb
- (void)_resetGestureRecognizer;	// IMP=0x00000000007d2182
- (void)dealloc;	// IMP=0x00000000007d1fe2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000007d1f45
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000007d1e51
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000007d1ce0

@end

