//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPRemotePlaybackQueue, NSNumber, NSString;

@interface MPSetPlaybackQueueCommandEvent
{
    MPRemotePlaybackQueue *_playbackQueue;	// 56 = 0x38
    NSNumber *_privateListeningOverride;	// 64 = 0x40
    NSString *_sessionIdentifierOverride;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000814b4
@property(readonly, nonatomic) NSString *sessionIdentifierOverride; // @synthesize sessionIdentifierOverride=_sessionIdentifierOverride;
@property(readonly, nonatomic) NSNumber *privateListeningOverride; // @synthesize privateListeningOverride=_privateListeningOverride;
@property(readonly, nonatomic) MPRemotePlaybackQueue *playbackQueue; // @synthesize playbackQueue=_playbackQueue;
- (id)initWithCommand:(id)arg1 playbackQueue:(id)arg2;	// IMP=0x00000000000813e8
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;	// IMP=0x0000000000081168

@end

