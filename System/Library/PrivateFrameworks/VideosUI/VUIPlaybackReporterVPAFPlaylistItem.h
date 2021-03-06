//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUI/MTMediaPlaylistItem-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VUIPlaybackReporterVPAFPlaylistItem : NSObject <MTMediaPlaylistItem>
{
    unsigned long long _overallPosition;	// 8 = 0x8
    NSArray *_eventData;	// 16 = 0x10
    unsigned long long _duration;	// 24 = 0x18
    struct _NSRange _timeRange;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000021ef00
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(nonatomic) struct _NSRange timeRange; // @synthesize timeRange=_timeRange;
@property(retain, nonatomic) NSArray *eventData; // @synthesize eventData=_eventData;
@property(nonatomic) unsigned long long overallPosition; // @synthesize overallPosition=_overallPosition;
@property(readonly, copy) NSString *description;
- (id)initWithPosition:(unsigned long long)arg1 duration:(unsigned long long)arg2 eventData:(id)arg3;	// IMP=0x000000000021ecf6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long startOverallPosition;
@property(readonly, nonatomic) unsigned long long startPosition;
@property(readonly) Class superclass;

@end

