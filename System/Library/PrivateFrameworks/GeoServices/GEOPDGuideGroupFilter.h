//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDGuideGroupFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b5b1b2
- (unsigned long long)hash;	// IMP=0x0000000000b5b1aa
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b5b165
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b5b10a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b5b0ed
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b5b0de
- (id)jsonRepresentation;	// IMP=0x0000000000b5afcc
- (id)dictionaryRepresentation;	// IMP=0x0000000000b5ae61
- (id)description;	// IMP=0x0000000000b5adb2

@end

