//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPFeedbackAddressFields, PBUnknownFields;

@interface GEORPGroundViewCorrections : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEORPFeedbackAddressFields *_addressToCensor;	// 16 = 0x10
    int _correctionType;	// 24 = 0x18
    CDStruct_ef3e2236 _flags;	// 28 = 0x1c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000046c8fc
- (void).cxx_destruct;	// IMP=0x000000000046cf3a
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000046cef4
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000046ce53
- (unsigned long long)hash;	// IMP=0x000000000046cdf0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000046ccf5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000046cc4f
- (void)copyTo:(id)arg1;	// IMP=0x000000000046cbda
- (void)writeTo:(id)arg1;	// IMP=0x000000000046cb5b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000046cb4c
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000046c56f
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000046c55d
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000046c29a
- (id)jsonRepresentation;	// IMP=0x000000000046c188
- (id)dictionaryRepresentation;	// IMP=0x000000000046be8c
- (id)description;	// IMP=0x000000000046bddd
@property(retain, nonatomic) GEORPFeedbackAddressFields *addressToCensor;
@property(readonly, nonatomic) _Bool hasAddressToCensor;
- (int)StringAsCorrectionType:(id)arg1;	// IMP=0x000000000046bc88
- (id)correctionTypeAsString:(int)arg1;	// IMP=0x000000000046bbe4
@property(nonatomic) _Bool hasCorrectionType;
@property(nonatomic) int correctionType;

@end
