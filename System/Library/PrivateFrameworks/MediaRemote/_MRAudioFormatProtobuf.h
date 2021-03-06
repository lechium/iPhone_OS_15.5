//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MRAudioFormatProtobuf : PBCodable <NSCopying>
{
    long long _bitDepth;	// 8 = 0x8
    long long _bitrate;	// 16 = 0x10
    long long _sampleRate;	// 24 = 0x18
    NSString *_audioChannelLayoutDescription;	// 32 = 0x20
    unsigned int _channelLayout;	// 40 = 0x28
    unsigned int _codec;	// 44 = 0x2c
    NSString *_groupID;	// 48 = 0x30
    NSString *_stableVariantID;	// 56 = 0x38
    int _tier;	// 64 = 0x40
    _Bool _multiChannel;	// 68 = 0x44
    _Bool _spatialized;	// 69 = 0x45
    struct {
        unsigned int bitDepth:1;
        unsigned int bitrate:1;
        unsigned int sampleRate:1;
        unsigned int channelLayout:1;
        unsigned int codec:1;
        unsigned int tier:1;
        unsigned int multiChannel:1;
        unsigned int spatialized:1;
    } _has;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000024f8af
- (unsigned long long)hash;	// IMP=0x000000000024f654
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000024f3d9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000024f231
- (void)writeTo:(id)arg1;	// IMP=0x000000000024f08d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000024f080
- (id)dictionaryRepresentation;	// IMP=0x000000000024e663
- (id)description;	// IMP=0x000000000024e5b4

@end

