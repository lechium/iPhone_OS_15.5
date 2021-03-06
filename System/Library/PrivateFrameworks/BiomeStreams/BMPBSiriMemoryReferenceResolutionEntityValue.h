//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class NSData;

@interface BMPBSiriMemoryReferenceResolutionEntityValue : PBCodable <NSCopying>
{
    double _timestamp;	// 8 = 0x8
    NSData *_valueData;	// 16 = 0x10
    struct {
        unsigned int timestamp:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007408d
@property(retain, nonatomic) NSData *valueData; // @synthesize valueData=_valueData;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000073fef
- (unsigned long long)hash;	// IMP=0x0000000000073eb7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000073dec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000073d58
- (void)copyTo:(id)arg1;	// IMP=0x0000000000073cf1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000073c8b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000073c7e
- (id)dictionaryRepresentation;	// IMP=0x00000000000739d8
- (id)description;	// IMP=0x0000000000073929
@property(readonly, nonatomic) _Bool hasValueData;
@property(nonatomic) _Bool hasTimestamp;

@end

