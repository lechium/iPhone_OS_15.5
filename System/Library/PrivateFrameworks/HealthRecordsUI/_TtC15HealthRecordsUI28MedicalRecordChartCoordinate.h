//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthRecordsUI/HKGraphSeriesBlockCoordinate-Protocol.h>

@class MISSING_TYPE;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface _TtC15HealthRecordsUI28MedicalRecordChartCoordinate : NSObject <HKGraphSeriesBlockCoordinate>
{
    MISSING_TYPE *pointValuesAscending;	// 8 = 0x8
    MISSING_TYPE *blockCoordinateInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000019b4f0
- (id)init;	// IMP=0x000000000019b470
- (id)copyWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;	// IMP=0x000000000019b3e0
@property(nonatomic, readonly) id <HKGraphSeriesBlockCoordinateInfo> userInfo;
@property(nonatomic, readonly) double endXValue;
@property(nonatomic, readonly) double startXValue;

@end

