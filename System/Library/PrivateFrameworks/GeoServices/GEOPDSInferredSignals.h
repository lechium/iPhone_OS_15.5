//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDSInferredInfo, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSInferredSignals : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDSInferredInfo *_inferredInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000657650
- (unsigned long long)hash;	// IMP=0x0000000000657590
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006574f6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000065746b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000657410
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000657401
- (id)jsonRepresentation;	// IMP=0x0000000000656d7f
- (id)dictionaryRepresentation;	// IMP=0x0000000000656b7f
- (id)description;	// IMP=0x0000000000656ad0

@end

