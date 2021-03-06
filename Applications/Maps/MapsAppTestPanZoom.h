//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface MapsAppTestPanZoom
{
    NSArray *_testPoints;	// 8 = 0x8
    double _pitch;	// 16 = 0x10
    double _yaw;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000002ff00a
@property(nonatomic) double yaw; // @synthesize yaw=_yaw;
@property(nonatomic) double pitch; // @synthesize pitch=_pitch;
@property(retain, nonatomic) NSArray *testPoints; // @synthesize testPoints=_testPoints;
- (void)onFullyDrawn:(id)arg1;	// IMP=0x00100000002fece1
- (void)addFullyDrawnCallback:(CDUnknownBlockType)arg1;	// IMP=0x00100000002feb6d
- (void)panLoadCompleted;	// IMP=0x00100000002fe87c
- (void)panLoadFinished;	// IMP=0x00100000002fe78c
- (void)panToTestPoint:(unsigned int)arg1;	// IMP=0x00100000002fe4e7
- (_Bool)runTest;	// IMP=0x00100000002fe2bc
- (id)initWithApplication:(id)arg1 testName:(id)arg2 options:(id)arg3;	// IMP=0x00100000002fdf64

@end

