//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitInfoSnippetFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000c13719
- (unsigned long long)hash;	// IMP=0x0000000000c13711
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c136cc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c13671
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c13654
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c13645
- (id)jsonRepresentation;	// IMP=0x0000000000c13533
- (id)dictionaryRepresentation;	// IMP=0x0000000000c133c8
- (id)description;	// IMP=0x0000000000c13319

@end

