//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEODestinationInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    _Bool _hasDisplayAddress;	// 16 = 0x10
    _Bool _hasDisplayName;	// 17 = 0x11
    _Bool _hasSpokenAddress;	// 18 = 0x12
    _Bool _hasSpokenName;	// 19 = 0x13
    struct {
        unsigned int has_hasDisplayAddress:1;
        unsigned int has_hasDisplayName:1;
        unsigned int has_hasSpokenAddress:1;
        unsigned int has_hasSpokenName:1;
    } _flags;	// 20 = 0x14
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000877eae
- (void).cxx_destruct;	// IMP=0x00000000008786ec
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000008786a6
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000008785e9
- (unsigned long long)hash;	// IMP=0x000000000087854f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008783e8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000878315
- (void)copyTo:(id)arg1;	// IMP=0x000000000087826d
- (void)writeTo:(id)arg1;	// IMP=0x000000000087819f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000878190
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000008779f1
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000008779df
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000087777f
- (id)jsonRepresentation;	// IMP=0x000000000087766d
- (id)dictionaryRepresentation;	// IMP=0x000000000087736e
- (id)description;	// IMP=0x00000000008772bf
@property(nonatomic) _Bool hasHasSpokenAddress;
@property(nonatomic) _Bool hasSpokenAddress;
@property(nonatomic) _Bool hasHasDisplayAddress;
@property(nonatomic) _Bool hasDisplayAddress;
@property(nonatomic) _Bool hasHasSpokenName;
@property(nonatomic) _Bool hasSpokenName;
@property(nonatomic) _Bool hasHasDisplayName;
@property(nonatomic) _Bool hasDisplayName;

@end

