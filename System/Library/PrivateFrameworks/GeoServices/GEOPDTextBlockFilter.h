//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTextBlockFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000bff835
- (unsigned long long)hash;	// IMP=0x0000000000bff82d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bff7e8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bff78d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bff770
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bff761
- (id)jsonRepresentation;	// IMP=0x0000000000bff64f
- (id)dictionaryRepresentation;	// IMP=0x0000000000bff4e4
- (id)description;	// IMP=0x0000000000bff435

@end

