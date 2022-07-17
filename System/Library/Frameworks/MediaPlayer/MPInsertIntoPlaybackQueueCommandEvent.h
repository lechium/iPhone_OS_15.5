//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPRemotePlaybackQueue, NSArray, NSNumber, NSString;

@interface MPInsertIntoPlaybackQueueCommandEvent
{
    NSArray *_supportedInsertionPositions;	// 56 = 0x38
    long long _insertionPosition;	// 64 = 0x40
    MPRemotePlaybackQueue *_playbackQueue;	// 72 = 0x48
    NSNumber *_privateListeningOverride;	// 80 = 0x50
    NSString *_insertAfterContentItemID;	// 88 = 0x58
    long long _destinationOffset;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000081916
@property(readonly, nonatomic) long long destinationOffset; // @synthesize destinationOffset=_destinationOffset;
@property(readonly, nonatomic) NSString *insertAfterContentItemID; // @synthesize insertAfterContentItemID=_insertAfterContentItemID;
@property(readonly, nonatomic) NSNumber *privateListeningOverride; // @synthesize privateListeningOverride=_privateListeningOverride;
@property(readonly, nonatomic) MPRemotePlaybackQueue *playbackQueue; // @synthesize playbackQueue=_playbackQueue;
@property(readonly, nonatomic) long long insertionPosition; // @synthesize insertionPosition=_insertionPosition;
@property(readonly, copy, nonatomic) NSArray *supportedInsertionPositions; // @synthesize supportedInsertionPositions=_supportedInsertionPositions;
- (id)initWithCommand:(id)arg1 playbackQueue:(id)arg2 options:(id)arg3;	// IMP=0x0000000000081722
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;	// IMP=0x00000000000814f6

@end
