//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCategoryData : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_categoryNames;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000aa508c
- (unsigned long long)hash;	// IMP=0x0000000000aa506f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000aa4fd5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000aa4e15
- (void)writeTo:(id)arg1;	// IMP=0x0000000000aa4cb6
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000aa4ca7
- (id)jsonRepresentation;	// IMP=0x0000000000aa4931
- (id)dictionaryRepresentation;	// IMP=0x0000000000aa458e
- (id)description;	// IMP=0x0000000000aa44df

@end

