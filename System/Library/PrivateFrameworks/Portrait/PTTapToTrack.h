//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTCinematicTapToTrack, NSMutableArray;

@interface PTTapToTrack : NSObject
{
    struct CGRect _tmpCurrentRect;	// 8 = 0x8
    FTCinematicTapToTrack *_tracker;	// 40 = 0x28
    NSMutableArray *_detections;	// 48 = 0x30
}

+ (_Bool)isSupported;	// IMP=0x0000000000043b8a
- (void).cxx_destruct;	// IMP=0x0000000000044045
@property(retain, nonatomic) NSMutableArray *detections; // @synthesize detections=_detections;
- (void)addDetectionAtTime:(CDStruct_1b6d18a9)arg1 rect:(struct CGRect)arg2 disparityBuffer:(struct __CVBuffer *)arg3;	// IMP=0x0000000000043f0e
- (void)resetTrack;	// IMP=0x0000000000043ee5
- (id)finalizeTrack;	// IMP=0x0000000000043e63
- (id)addDetectionForNextFrameAt:(CDStruct_1b6d18a9)arg1 colorBuffer:(struct __CVBuffer *)arg2 disparityBuffer:(struct __CVBuffer *)arg3;	// IMP=0x0000000000043d82
- (_Bool)addDetectionAndStartTrackingRect:(struct CGRect)arg1 time:(CDStruct_1b6d18a9)arg2 colorBuffer:(struct __CVBuffer *)arg3 disparityBuffer:(struct __CVBuffer *)arg4;	// IMP=0x0000000000043cfe
- (id)getRectForPoint:(struct CGPoint)arg1 colorBuffer:(struct __CVBuffer *)arg2;	// IMP=0x0000000000043c67
- (id)initWithCommandQueue:(id)arg1;	// IMP=0x0000000000043b92

@end

