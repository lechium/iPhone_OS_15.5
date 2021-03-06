//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@interface BMPBWorkoutEvent : PBCodable <NSCopying>
{
    _Bool _starting;	// 8 = 0x8
    struct {
        unsigned int starting:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) _Bool starting; // @synthesize starting=_starting;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000869e9
- (unsigned long long)hash;	// IMP=0x00000000000869be
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008691c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000868ba
- (void)copyTo:(id)arg1;	// IMP=0x0000000000086896
- (void)writeTo:(id)arg1;	// IMP=0x000000000008686a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000008685d
- (id)dictionaryRepresentation;	// IMP=0x00000000000865e3
- (id)description;	// IMP=0x0000000000086534
@property(nonatomic) _Bool hasStarting;

@end

