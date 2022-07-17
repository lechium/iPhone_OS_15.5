//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PXPlacesTestDataGenerator : NSObject
{
    NSObject<OS_dispatch_queue> *_generationQueue;	// 8 = 0x8
    NSArray *_latOffsets;	// 16 = 0x10
    NSArray *_longOffsets;	// 24 = 0x18
    unsigned long long _max;	// 32 = 0x20
    struct CLLocationCoordinate2D _from;	// 40 = 0x28
    struct CLLocationCoordinate2D _to;	// 56 = 0x38
    NSMutableArray *_dataPoints;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000016c64
- (void)generateTestImages:(unsigned long long)arg1 fromLocation:(struct CLLocationCoordinate2D)arg2 toLocation:(struct CLLocationCoordinate2D)arg3 atEnd:(CDUnknownBlockType)arg4;	// IMP=0x0000000000016b79
- (unsigned long long)generateDataPointsFromLocation:(struct CLLocationCoordinate2D)arg1 toLocation:(struct CLLocationCoordinate2D)arg2 longDir:(long long)arg3 currentCount:(unsigned long long)arg4;	// IMP=0x000000000001669f
- (id)generateOffsetArray:(double)arg1 insert:(_Bool)arg2;	// IMP=0x00000000000165ad
- (id)init;	// IMP=0x00000000000164f0

@end
