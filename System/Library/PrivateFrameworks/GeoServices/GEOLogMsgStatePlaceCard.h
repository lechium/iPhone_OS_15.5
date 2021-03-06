//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPlaceActionDetails, NSMutableArray, NSString, PBDataReader;

@interface GEOLogMsgStatePlaceCard : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_62a50c50 _containedChildrenPois;	// 16 = 0x10
    CDStruct_95bda58d _possibleActions;	// 40 = 0x28
    CDStruct_95bda58d _unactionableUiElements;	// 64 = 0x40
    NSMutableArray *_modules;	// 88 = 0x58
    GEOPlaceActionDetails *_placeActionDetails;	// 96 = 0x60
    NSString *_placecardCategory;	// 104 = 0x68
    unsigned int _readerMarkPos;	// 112 = 0x70
    unsigned int _readerMarkLength;	// 116 = 0x74
    struct os_unfair_lock_s _readerLock;	// 120 = 0x78
    int _placecardType;	// 124 = 0x7c
    _Bool _transitAdvisoryBanner;	// 128 = 0x80
    struct {
        unsigned int has_placecardType:1;
        unsigned int has_transitAdvisoryBanner:1;
        unsigned int read_containedChildrenPois:1;
        unsigned int read_possibleActions:1;
        unsigned int read_unactionableUiElements:1;
        unsigned int read_modules:1;
        unsigned int read_placeActionDetails:1;
        unsigned int read_placecardCategory:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 132 = 0x84
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000001501ddd
+ (Class)modulesType;	// IMP=0x00000000014f2c48
- (void).cxx_destruct;	// IMP=0x00000000015031dd
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000001502ea2
- (unsigned long long)hash;	// IMP=0x0000000001502d93
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001502bba
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000150280e
- (void)copyTo:(id)arg1;	// IMP=0x00000000015024e7
- (void)writeTo:(id)arg1;	// IMP=0x0000000001502146
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001502137
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000001501b2a
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000001501b18
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000014f7fdb
- (id)jsonRepresentation;	// IMP=0x00000000014f7fcc
- (id)dictionaryRepresentation;	// IMP=0x00000000014f2d08
- (id)description;	// IMP=0x00000000014f2c59
- (id)modulesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000014f2c17
- (unsigned long long)modulesCount;	// IMP=0x00000000014f2beb
- (void)addModules:(id)arg1;	// IMP=0x00000000014f2b35
- (void)clearModules;	// IMP=0x00000000014f2b0b
@property(retain, nonatomic) NSMutableArray *modules;
- (void)setContainedChildrenPois:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000014f29ca
- (unsigned long long)containedChildrenPoisAtIndex:(unsigned long long)arg1;	// IMP=0x00000000014f28f4
- (void)addContainedChildrenPois:(unsigned long long)arg1;	// IMP=0x00000000014f28b9
- (void)clearContainedChildrenPois;	// IMP=0x00000000014f289b
@property(readonly, nonatomic) unsigned long long *containedChildrenPois;
@property(readonly, nonatomic) unsigned long long containedChildrenPoisCount;
@property(nonatomic) _Bool hasTransitAdvisoryBanner;
@property(nonatomic) _Bool transitAdvisoryBanner;
- (int)StringAsPlacecardType:(id)arg1;	// IMP=0x00000000014f2500
- (id)placecardTypeAsString:(int)arg1;	// IMP=0x00000000014f23f0
@property(nonatomic) _Bool hasPlacecardType;
@property(nonatomic) int placecardType;
@property(retain, nonatomic) NSString *placecardCategory;
@property(readonly, nonatomic) _Bool hasPlacecardCategory;
- (int)StringAsUnactionableUiElements:(id)arg1;	// IMP=0x00000000014f2108
- (id)unactionableUiElementsAsString:(int)arg1;	// IMP=0x00000000014f2057
- (void)setUnactionableUiElements:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000014f2033
- (int)unactionableUiElementAtIndex:(unsigned long long)arg1;	// IMP=0x00000000014f1f5d
- (void)addUnactionableUiElement:(int)arg1;	// IMP=0x00000000014f1f22
- (void)clearUnactionableUiElements;	// IMP=0x00000000014f1f04
@property(readonly, nonatomic) int *unactionableUiElements;
@property(readonly, nonatomic) unsigned long long unactionableUiElementsCount;
- (int)StringAsPossibleActions:(id)arg1;	// IMP=0x00000000014e8b48
- (id)possibleActionsAsString:(int)arg1;	// IMP=0x00000000014e406d
- (void)setPossibleActions:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000014e4049
- (int)possibleActionAtIndex:(unsigned long long)arg1;	// IMP=0x00000000014e3f73
- (void)addPossibleAction:(int)arg1;	// IMP=0x00000000014e3f38
- (void)clearPossibleActions;	// IMP=0x00000000014e3f1a
@property(readonly, nonatomic) int *possibleActions;
@property(readonly, nonatomic) unsigned long long possibleActionsCount;
@property(retain, nonatomic) GEOPlaceActionDetails *placeActionDetails;
@property(readonly, nonatomic) _Bool hasPlaceActionDetails;
- (void)dealloc;	// IMP=0x00000000014e2d92
- (id)initWithData:(id)arg1;	// IMP=0x00000000014e2d36
- (id)init;	// IMP=0x00000000014e2cda

@end

