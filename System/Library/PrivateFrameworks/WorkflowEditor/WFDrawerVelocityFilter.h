//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface WFDrawerVelocityFilter : NSObject
{
    double _previousTime;	// 8 = 0x8
    double _previousValue;	// 16 = 0x10
    CDStruct_37002fae _currentSample;	// 24 = 0x18
    CDStruct_37002fae _previousSample;	// 48 = 0x30
}

@property(nonatomic) double previousValue; // @synthesize previousValue=_previousValue;
@property(nonatomic) double previousTime; // @synthesize previousTime=_previousTime;
@property(nonatomic) CDStruct_37002fae previousSample; // @synthesize previousSample=_previousSample;
@property(nonatomic) CDStruct_37002fae currentSample; // @synthesize currentSample=_currentSample;
- (void)resetWithValue:(double)arg1;	// IMP=0x000000000024d4d8
@property(readonly, nonatomic) double calculatedVelocity;
- (void)addSample:(double)arg1;	// IMP=0x000000000024d412

@end
