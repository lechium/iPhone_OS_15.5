//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOSurchargeType-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, NSString, PBUnknownFields;
@protocol GEOServerFormattedString;

@interface GEORequestOption : PBCodable <GEOSurchargeType, NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOFormattedString *_name;	// 16 = 0x10
    int _enumValue;	// 24 = 0x18
    struct {
        unsigned int has_enumValue:1;
    } _flags;	// 28 = 0x1c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000008e0382
- (void).cxx_destruct;	// IMP=0x00000000008e09e0
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000008e097a
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000008e08d9
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008e077b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008e06d5
- (void)copyTo:(id)arg1;	// IMP=0x00000000008e0660
- (void)writeTo:(id)arg1;	// IMP=0x00000000008e05e1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000008e05d2
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000008dfff5
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000008dffe3
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000008dfe5e
- (id)jsonRepresentation;	// IMP=0x00000000008dfd4c
- (id)dictionaryRepresentation;	// IMP=0x00000000008dfaee
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GEOFormattedString *name;
@property(readonly, nonatomic) _Bool hasName;
@property(nonatomic) _Bool hasEnumValue;
@property(nonatomic) int enumValue;
@property(readonly, nonatomic) id <GEOServerFormattedString> formattedName;
@property(readonly, nonatomic) int value;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
