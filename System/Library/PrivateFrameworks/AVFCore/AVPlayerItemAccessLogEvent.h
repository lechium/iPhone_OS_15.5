//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/NSCopying-Protocol.h>

@class AVPlayerItemAccessLogEventInternal, NSDate, NSString;

@interface AVPlayerItemAccessLogEvent : NSObject <NSCopying>
{
    AVPlayerItemAccessLogEventInternal *_playerItemAccessLogEvent;	// 8 = 0x8
}

@property(readonly, nonatomic) double switchBitrate;
@property(readonly, nonatomic) long long mediaRequestsWWAN;
@property(readonly, nonatomic) NSString *playbackType;
@property(readonly, nonatomic) double observedBitrateStandardDeviation;
@property(readonly, nonatomic) double observedMinBitrate;
@property(readonly, nonatomic) double observedMaxBitrate;
- (long long)entryReasonCode;	// IMP=0x00000000000fc09e
@property(readonly, nonatomic) long long downloadOverdue;
@property(readonly, nonatomic) double startupTime;
@property(readonly, nonatomic) long long numberOfDroppedVideoFrames;
@property(readonly, nonatomic) double averageAudioBitrate;
@property(readonly, nonatomic) double averageVideoBitrate;
@property(readonly, nonatomic) double indicatedAverageBitrate;
@property(readonly, nonatomic) double indicatedBitrate;
- (double)currentObservedBitrate;	// IMP=0x00000000000fbe88
@property(readonly, nonatomic) double observedBitrate;
@property(readonly, nonatomic) double transferDuration;
@property(readonly, nonatomic) long long numberOfBytesTransferred;
@property(readonly, nonatomic) long long numberOfStalls;
@property(readonly, nonatomic) double durationWatched;
@property(readonly, nonatomic) double segmentsDownloadedDuration;
@property(readonly, nonatomic) double playbackStartOffset;
@property(readonly, nonatomic) NSString *playbackSessionID;
@property(readonly, nonatomic) long long numberOfServerAddressChanges;
@property(readonly, nonatomic) NSString *serverAddress;
@property(readonly, nonatomic) NSString *URI;
@property(readonly, nonatomic) NSDate *playbackStartDate;
@property(readonly, nonatomic) long long numberOfSegmentsDownloaded;
@property(readonly, nonatomic) long long numberOfMediaRequests;
- (void)dealloc;	// IMP=0x00000000000fbaef
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fbae4
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000fba72
- (id)init;	// IMP=0x00000000000fba2a
- (id)_common_init;	// IMP=0x00000000000fb9e1
- (id)serviceIdentifier;	// IMP=0x00000000000fc263

@end
