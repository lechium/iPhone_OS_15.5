//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HFCameraPlaybackEngineObservationOptions;

@interface HFCameraPlaybackEngineObservationState : NSObject
{
    HFCameraPlaybackEngineObservationOptions *_options;	// 8 = 0x8
    id _timeObservationToken;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000024f488
@property(retain, nonatomic) id timeObservationToken; // @synthesize timeObservationToken=_timeObservationToken;
@property(retain, nonatomic) HFCameraPlaybackEngineObservationOptions *options; // @synthesize options=_options;

@end

