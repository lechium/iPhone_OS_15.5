//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDGroundViewLabelResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000523cec
- (unsigned long long)hash;	// IMP=0x0000000000523ce4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000523c9f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000523c44
- (void)writeTo:(id)arg1;	// IMP=0x0000000000523c27
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000523c18
- (id)jsonRepresentation;	// IMP=0x000000000052395a
- (id)dictionaryRepresentation;	// IMP=0x00000000005237ef
- (id)description;	// IMP=0x0000000000523740

@end
