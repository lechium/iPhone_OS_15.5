//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PIVideoReframeTimedMetadata : NSObject
{
    NSArray *_subjects;	// 8 = 0x8
    struct CGVector _estimatedCenterMotion;	// 16 = 0x10
    struct CGVector _estimatedMotionBlur;	// 32 = 0x20
    CDStruct_1b6d18a9 _time;	// 48 = 0x30
    CDStruct_8e0628e6 _trajectoryHomography;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000b9b7f
@property(readonly) CDStruct_8e0628e6 trajectoryHomography; // @synthesize trajectoryHomography=_trajectoryHomography;
@property(readonly) struct CGVector estimatedMotionBlur; // @synthesize estimatedMotionBlur=_estimatedMotionBlur;
@property(readonly) struct CGVector estimatedCenterMotion; // @synthesize estimatedCenterMotion=_estimatedCenterMotion;
@property(readonly) NSArray *subjects; // @synthesize subjects=_subjects;
@property(readonly) CDStruct_1b6d18a9 time; // @synthesize time=_time;
- (void)setTrajectoryHomography:(CDStruct_8e0628e6)arg1;	// IMP=0x00000000000b9a8f
- (void)setEstimatedMotionBlur:(struct CGVector)arg1;	// IMP=0x00000000000b9a7f
- (void)setEstimatedCenterMotion:(struct CGVector)arg1;	// IMP=0x00000000000b9a6f
- (void)setSubjects:(id)arg1;	// IMP=0x00000000000b9a5e
- (void)setTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000b9a48

@end
