//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface UIInterpolatingMotionEffect
{
    double _horizontalAccelerationBoostFactor;	// 24 = 0x18
    double _verticalAccelerationBoostFactor;	// 32 = 0x20
    NSString *_keyPath;	// 40 = 0x28
    long long _type;	// 48 = 0x30
    id _minimumRelativeValue;	// 56 = 0x38
    id _maximumRelativeValue;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000babecc
@property(retain, nonatomic) id maximumRelativeValue; // @synthesize maximumRelativeValue=_maximumRelativeValue;
@property(retain, nonatomic) id minimumRelativeValue; // @synthesize minimumRelativeValue=_minimumRelativeValue;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (void)_setType:(long long)arg1;	// IMP=0x0000000000babe4f
- (void)_setKeyPath:(id)arg1;	// IMP=0x0000000000babe11
- (void)_setVerticalAccelerationBoostFactor:(double)arg1;	// IMP=0x0000000000babdff
- (double)_verticalAccelerationBoostFactor;	// IMP=0x0000000000babded
- (void)_setHorizontalAccelerationBoostFactor:(double)arg1;	// IMP=0x0000000000babddb
- (double)_horizontalAccelerationBoostFactor;	// IMP=0x0000000000babdc9
- (id)description;	// IMP=0x0000000000babc81
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000babb11
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000baba0e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bab981
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset)arg1;	// IMP=0x0000000000bab86a
- (id)_keyPathsAndRelativeValuesForPose:(id)arg1;	// IMP=0x0000000000bab7d6
- (id)init;	// IMP=0x0000000000bab7bb
- (id)initWithKeyPath:(id)arg1 type:(long long)arg2;	// IMP=0x0000000000bab71c

@end
