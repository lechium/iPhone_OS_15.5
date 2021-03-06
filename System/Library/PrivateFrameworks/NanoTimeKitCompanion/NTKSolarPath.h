//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NTKSolarTimeModel, UIBezierPath;

@interface NTKSolarPath : NSObject
{
    UIBezierPath *_bezierPath;	// 8 = 0x8
    struct CGRect _bounds;	// 16 = 0x10
    NTKSolarTimeModel *_solarTimeModel;	// 48 = 0x30
    _Bool _verticallyFitsPathToBounds;	// 56 = 0x38
    _Bool _usePlaceholderData;	// 57 = 0x39
    struct CGPoint _points[29];	// 64 = 0x40
    double _altitude[29];	// 528 = 0x210
}

- (void).cxx_destruct;	// IMP=0x000000000026be0b
@property(readonly, nonatomic) _Bool verticallyFitsPathToBounds; // @synthesize verticallyFitsPathToBounds=_verticallyFitsPathToBounds;
@property(readonly, nonatomic) NTKSolarTimeModel *solarTimeModel; // @synthesize solarTimeModel=_solarTimeModel;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) UIBezierPath *bezierPath; // @synthesize bezierPath=_bezierPath;
- (double)altitudeAtX:(double)arg1;	// IMP=0x000000000026bd73
- (double)altitudeAtPercentage:(double)arg1;	// IMP=0x000000000026bd5c
- (id)_computeSolarPath;	// IMP=0x000000000026b9b1
- (id)initWithBounds:(struct CGRect)arg1 solarTimeModel:(id)arg2 verticallyFitsPathToBounds:(_Bool)arg3 usePlaceholderData:(_Bool)arg4;	// IMP=0x000000000026b8f7

@end

