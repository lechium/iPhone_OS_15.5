//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDResultSnippetFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    CDStruct_95bda58d _supportedChildActions;	// 16 = 0x10
    int _maxChildItems;	// 40 = 0x28
    int _maxChildPlaces;	// 44 = 0x2c
    _Bool _supportChildItems;	// 48 = 0x30
    struct {
        unsigned int has_maxChildItems:1;
        unsigned int has_maxChildPlaces:1;
        unsigned int has_supportChildItems:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000bdce63
- (unsigned long long)hash;	// IMP=0x0000000000bdcdea
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bdcced
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bdcc22
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bdcb45
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bdcb36
- (id)jsonRepresentation;	// IMP=0x0000000000bdca24
- (id)dictionaryRepresentation;	// IMP=0x0000000000bdc5fb
- (id)description;	// IMP=0x0000000000bdc54c
- (void)dealloc;	// IMP=0x0000000000bdc50b

@end

