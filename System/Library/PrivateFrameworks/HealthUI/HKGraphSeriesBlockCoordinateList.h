//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface HKGraphSeriesBlockCoordinateList : NSObject
{
}

+ (id)coordinateListWithCoordinates:(id)arg1 blockPath:(CDStruct_6ca94699)arg2;	// IMP=0x00000000001cc0e3
+ (id)coordinateListByCombiningSubCoordinates:(id)arg1 chartableValueRange:(id)arg2;	// IMP=0x00000000001cc073
- (long long)_numCoordinatesInChartableRange:(id)arg1;	// IMP=0x00000000002c7c61
- (id)_coordinatesInChartableRange:(id)arg1;	// IMP=0x00000000002c7c3a
- (id)lastCoordinateWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;	// IMP=0x00000000002c7c13
- (id)firstCoordinateWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;	// IMP=0x00000000002c7bec
- (void)_enumerateCoordinatesWithTransform:(struct CGAffineTransform)arg1 chartableValueRange:(id)arg2 roundToViewScale:(_Bool)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000000002c7bc8
- (void)enumerateCoordinatesWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000001cc144
@property(readonly, nonatomic) CDStruct_6ca94699 blockPathEnd;
@property(readonly, nonatomic) CDStruct_6ca94699 blockPathStart;
@property(readonly, nonatomic) long long numCoordinates;
@property(readonly, nonatomic) NSArray *coordinates;

@end

