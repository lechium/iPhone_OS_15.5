//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLocationData : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_locationNames;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000b71426
- (unsigned long long)hash;	// IMP=0x0000000000b71409
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b7136f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b711af
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b71050
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b71041
- (id)jsonRepresentation;	// IMP=0x0000000000b70f2f
- (id)dictionaryRepresentation;	// IMP=0x0000000000b70b8c
- (id)description;	// IMP=0x0000000000b70add

@end

