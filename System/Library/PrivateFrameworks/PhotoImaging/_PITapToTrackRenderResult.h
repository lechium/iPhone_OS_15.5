//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/_NURenderResult.h>

#import <PhotoImaging/PITapToTrackResult-Protocol.h>

@class NSString, PTCinematographyTrack;
@protocol NURenderStatistics;

@interface _PITapToTrackRenderResult : _NURenderResult <PITapToTrackResult>
{
    PTCinematographyTrack *_completedTrack;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000251c
@property(readonly, nonatomic) PTCinematographyTrack *completedTrack; // @synthesize completedTrack=_completedTrack;
- (id)initWithCompletedTrack:(id)arg1;	// IMP=0x000000000000249d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) id <NURenderStatistics> statistics;
@property(readonly) Class superclass;

@end
