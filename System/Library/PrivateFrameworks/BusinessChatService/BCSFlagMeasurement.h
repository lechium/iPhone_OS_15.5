//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface BCSFlagMeasurement
{
    _Bool _flag;	// 8 = 0x8
    _Bool _flagWasSet;	// 9 = 0x9
    NSArray *_realTimeMeasurementHandlers;	// 16 = 0x10
    long long _flagMeasurementType;	// 24 = 0x18
}

+ (id)newFlagMeasurement:(long long)arg1 withHandlers:(id)arg2;	// IMP=0x000000000002ad71
- (void).cxx_destruct;	// IMP=0x000000000002af29
@property(readonly, nonatomic) long long flagMeasurementType; // @synthesize flagMeasurementType=_flagMeasurementType;
@property(nonatomic) _Bool flag; // @synthesize flag=_flag;

@end
