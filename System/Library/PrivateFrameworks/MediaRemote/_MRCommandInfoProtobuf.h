//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _MRCommandInfoProtobuf : PBCodable <NSCopying>
{
    CDStruct_82f37d05 _preferredIntervals;	// 8 = 0x8
    CDStruct_95bda58d _supportedInsertionPositions;	// 32 = 0x20
    CDStruct_95bda58d _supportedPlaybackQueueTypes;	// 56 = 0x38
    CDStruct_95bda58d _supportedQueueEndActions;	// 80 = 0x50
    struct {
        float *list;
        unsigned long long count;
        unsigned long long size;
    } _supportedRates;	// 104 = 0x68
    int _canScrub;	// 128 = 0x80
    int _command;	// 132 = 0x84
    NSMutableArray *_currentPlaybackSessionTypes;	// 136 = 0x88
    int _currentQueueEndAction;	// 144 = 0x90
    int _disabledReason;	// 148 = 0x94
    NSString *_localizedShortTitle;	// 152 = 0x98
    NSString *_localizedTitle;	// 160 = 0xa0
    float _maximumRating;	// 168 = 0xa8
    float _minimumRating;	// 172 = 0xac
    int _numAvailableSkips;	// 176 = 0xb0
    NSString *_playbackSessionIdentifier;	// 184 = 0xb8
    float _preferredPlaybackRate;	// 192 = 0xc0
    int _presentationStyle;	// 196 = 0xc4
    int _repeatMode;	// 200 = 0xc8
    int _shuffleMode;	// 204 = 0xcc
    int _skipFrequency;	// 208 = 0xd0
    int _skipInterval;	// 212 = 0xd4
    NSMutableArray *_supportedCustomQueueIdentifiers;	// 216 = 0xd8
    NSMutableArray *_supportedPlaybackSessionIdentifiers;	// 224 = 0xe0
    NSMutableArray *_supportedPlaybackSessionTypes;	// 232 = 0xe8
    int _upNextItemCount;	// 240 = 0xf0
    _Bool _active;	// 244 = 0xf4
    _Bool _enabled;	// 245 = 0xf5
    _Bool _supportsSharedQueue;	// 246 = 0xf6
    struct {
        unsigned int canScrub:1;
        unsigned int command:1;
        unsigned int currentQueueEndAction:1;
        unsigned int disabledReason:1;
        unsigned int maximumRating:1;
        unsigned int minimumRating:1;
        unsigned int numAvailableSkips:1;
        unsigned int preferredPlaybackRate:1;
        unsigned int presentationStyle:1;
        unsigned int repeatMode:1;
        unsigned int shuffleMode:1;
        unsigned int skipFrequency:1;
        unsigned int skipInterval:1;
        unsigned int upNextItemCount:1;
        unsigned int active:1;
        unsigned int enabled:1;
        unsigned int supportsSharedQueue:1;
    } _has;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x000000000012bf48
- (unsigned long long)hash;	// IMP=0x000000000012b64b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000012b08e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012a8dc
- (void)writeTo:(id)arg1;	// IMP=0x000000000012a10d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000012a100
- (id)dictionaryRepresentation;	// IMP=0x0000000000127dc3
- (id)description;	// IMP=0x0000000000127d14
- (void)dealloc;	// IMP=0x00000000001274f8

@end
