//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Navigation/NSCopying-Protocol.h>

@class NSData;

@interface MNTraceBookmark : PBCodable <NSCopying>
{
    double _timestamp;	// 8 = 0x8
    NSData *_imageData;	// 16 = 0x10
    struct {
        unsigned int timestamp:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000bc14c
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000bc0ae
- (unsigned long long)hash;	// IMP=0x00000000000bbf76
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000bbeab
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bbe17
- (void)copyTo:(id)arg1;	// IMP=0x00000000000bbdb0
- (void)writeTo:(id)arg1;	// IMP=0x00000000000bbd4a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000bbd3d
- (id)dictionaryRepresentation;	// IMP=0x00000000000bba99
- (id)description;	// IMP=0x00000000000bb9ea
@property(readonly, nonatomic) _Bool hasImageData;
@property(nonatomic) _Bool hasTimestamp;

@end
