//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreMotion/CMNatalimeter.h>

@interface HDTMockCMNatalimeter : CMNatalimeter
{
    CDUnknownBlockType _handleQueryDataSinceRecord;	// 8 = 0x8
    CDUnknownBlockType _handleStartNatalimetryUpdates;	// 16 = 0x10
    CDUnknownBlockType _handleStopNatalimeteryUpdates;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000039545b
@property(copy, nonatomic) CDUnknownBlockType handleStopNatalimeteryUpdates; // @synthesize handleStopNatalimeteryUpdates=_handleStopNatalimeteryUpdates;
@property(copy, nonatomic) CDUnknownBlockType handleStartNatalimetryUpdates; // @synthesize handleStartNatalimetryUpdates=_handleStartNatalimetryUpdates;
@property(copy, nonatomic) CDUnknownBlockType handleQueryDataSinceRecord; // @synthesize handleQueryDataSinceRecord=_handleQueryDataSinceRecord;
- (void)stopAbsoluteNatalimetryDataUpdates;	// IMP=0x00000000003953bd
- (void)startAbsoluteNatalimetryDataUpdatesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000395361
- (void)queryAbsoluteNatalimetryDataSinceDataRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003952ed

@end

