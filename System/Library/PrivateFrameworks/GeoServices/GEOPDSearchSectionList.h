//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchSectionList : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_sections;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000d4b624
- (unsigned long long)hash;	// IMP=0x0000000000d4b607
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d4b56d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d4b3ad
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d4b24e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d4b23f
- (id)jsonRepresentation;	// IMP=0x0000000000d4a185
- (id)dictionaryRepresentation;	// IMP=0x0000000000d49df4
- (id)description;	// IMP=0x0000000000d49d45

@end

