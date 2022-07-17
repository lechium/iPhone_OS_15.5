//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRContentItemMetadataAudioFormat, NSString;

@interface MPNowPlayingInfoAudioFormat : NSObject
{
    MRContentItemMetadataAudioFormat *_mediaRemoteAudioFormat;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000512d1
@property(readonly, nonatomic) MRContentItemMetadataAudioFormat *mediaRemoteAudioFormat; // @synthesize mediaRemoteAudioFormat=_mediaRemoteAudioFormat;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005126c
- (unsigned long long)hash;	// IMP=0x0000000000051256
@property(retain, nonatomic) NSString *audioChannelLayoutDescription;
@property(nonatomic) unsigned int channelLayout;
@property(nonatomic, getter=isMultiChannel) _Bool multiChannel;
@property(nonatomic, getter=isSpatialized) _Bool spatialized;
@property(copy, nonatomic) NSString *stableVariantID;
@property(copy, nonatomic) NSString *groupID;
@property(nonatomic) unsigned int codec;
@property(nonatomic) long long bitDepth;
@property(nonatomic) long long sampleRate;
@property(nonatomic) long long bitrate;
@property(nonatomic) long long tier;
- (id)initWithMediaRemoteAudioFormat:(id)arg1;	// IMP=0x0000000000050ae5
- (id)init;	// IMP=0x0000000000050a8f

@end
