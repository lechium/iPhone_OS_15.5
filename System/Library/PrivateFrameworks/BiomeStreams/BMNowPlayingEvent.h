//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>

@class NSArray, NSString;

@interface BMNowPlayingEvent <BMStoreData, BMProtoBufWrapper>
{
    _Bool _isAirPlayVideo;	// 8 = 0x8
    unsigned int _duration;	// 12 = 0xc
    unsigned int _elapsed;	// 16 = 0x10
    NSString *_uniqueID;	// 24 = 0x18
    NSString *_bundleID;	// 32 = 0x20
    double _absoluteTimestamp;	// 40 = 0x28
    unsigned long long _playbackState;	// 48 = 0x30
    NSString *_album;	// 56 = 0x38
    NSString *_artist;	// 64 = 0x40
    NSString *_genre;	// 72 = 0x48
    NSString *_title;	// 80 = 0x50
    NSString *_mediaType;	// 88 = 0x58
    NSString *_iTunesStoreIdentifier;	// 96 = 0x60
    NSString *_iTunesSubscriptionIdentifier;	// 104 = 0x68
    NSArray *_outputDevices;	// 112 = 0x70
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x0000000000055fc5
- (void).cxx_destruct;	// IMP=0x000000000005763d
@property(readonly, nonatomic) NSArray *outputDevices; // @synthesize outputDevices=_outputDevices;
@property(readonly, nonatomic) _Bool isAirPlayVideo; // @synthesize isAirPlayVideo=_isAirPlayVideo;
@property(readonly, nonatomic) NSString *iTunesSubscriptionIdentifier; // @synthesize iTunesSubscriptionIdentifier=_iTunesSubscriptionIdentifier;
@property(readonly, nonatomic) NSString *iTunesStoreIdentifier; // @synthesize iTunesStoreIdentifier=_iTunesStoreIdentifier;
@property(readonly, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) unsigned int elapsed; // @synthesize elapsed=_elapsed;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(readonly, nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(readonly, nonatomic) NSString *album; // @synthesize album=_album;
@property(readonly, nonatomic) unsigned long long playbackState; // @synthesize playbackState=_playbackState;
@property(readonly, nonatomic) double absoluteTimestamp; // @synthesize absoluteTimestamp=_absoluteTimestamp;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000056d52
@property(readonly) unsigned long long hash;
- (id)proto;	// IMP=0x000000000005667c
- (id)initWithProtoData:(id)arg1;	// IMP=0x00000000000565e0
- (id)initWithProto:(id)arg1;	// IMP=0x0000000000056070
- (id)encodeAsProto;	// IMP=0x0000000000056020
- (id)serialize;	// IMP=0x000000000005600e
@property(readonly, nonatomic) unsigned int dataVersion;
@property(readonly, copy) NSString *description;
- (id)initWithDKEvent:(id)arg1 outputDevices:(id)arg2;	// IMP=0x0000000000055374
- (id)initWithUniqueID:(id)arg1 bundleID:(id)arg2 absoluteTimestamp:(double)arg3 playbackState:(unsigned long long)arg4 album:(id)arg5 artist:(id)arg6 duration:(unsigned int)arg7 genre:(id)arg8 title:(id)arg9 elapsed:(unsigned int)arg10 mediaType:(id)arg11 iTunesStoreIdentifier:(id)arg12 iTunesSubscriptionIdentifier:(id)arg13 isAirPlayVideo:(_Bool)arg14 outputDevices:(id)arg15;	// IMP=0x0000000000055141
- (id)init;	// IMP=0x000000000005513b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

