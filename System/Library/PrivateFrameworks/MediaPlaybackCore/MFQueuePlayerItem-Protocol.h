//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/MFPlayerItem-Protocol.h>

@protocol MFQueuePlayerItem <MFPlayerItem>
@property(readonly, nonatomic) _Bool isAlwaysLive;
@property(readonly, nonatomic) double playbackStartTime;
@property(nonatomic) double playbackStartTimeOverride;
@property(readonly, nonatomic) _Bool isMovieOrTVShow;
- (void)reset;
@end

