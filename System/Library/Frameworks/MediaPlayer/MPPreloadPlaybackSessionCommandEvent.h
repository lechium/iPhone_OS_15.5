//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, NSURL;

@interface MPPreloadPlaybackSessionCommandEvent
{
    NSString *_identifier;	// 56 = 0x38
    NSString *_type;	// 64 = 0x40
    long long _priority;	// 72 = 0x48
    NSString *_revision;	// 80 = 0x50
    NSURL *_playbackSessionDataFilePath;	// 88 = 0x58
    NSDictionary *_metadata;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000082125
@property(readonly, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSURL *playbackSessionDataFilePath; // @synthesize playbackSessionDataFilePath=_playbackSessionDataFilePath;
@property(readonly, nonatomic) NSString *revision; // @synthesize revision=_revision;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;	// IMP=0x0000000000081e11

@end

