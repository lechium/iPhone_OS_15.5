//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLPRLicensePlateStructure, NSMutableArray, PBDataReader;

@interface GEOLPRLPRMapRule : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_9f2792e4 _plateTypeIndexes;	// 16 = 0x10
    GEOLPRLicensePlateStructure *_mrLicensePlateStructure;	// 40 = 0x28
    NSMutableArray *_targetChars;	// 48 = 0x30
    NSMutableArray *_valueMappings;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    struct {
        unsigned int read_plateTypeIndexes:1;
        unsigned int read_mrLicensePlateStructure:1;
        unsigned int read_targetChars:1;
        unsigned int read_valueMappings:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000675864
+ (Class)valueMappingType;	// IMP=0x000000000067489b
+ (Class)targetCharType;	// IMP=0x0000000000674636
- (void).cxx_destruct;	// IMP=0x0000000000676b0f
@property(retain, nonatomic) GEOLPRLicensePlateStructure *mrLicensePlateStructure;
@property(readonly, nonatomic) _Bool hasMrLicensePlateStructure;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000006766da
- (unsigned long long)hash;	// IMP=0x0000000000676649
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000067650a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006760a6
- (void)copyTo:(id)arg1;	// IMP=0x0000000000675e3f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000675a85
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000675a76
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000006755b1
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000067559f
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000674eef
- (id)jsonRepresentation;	// IMP=0x0000000000674ee0
- (id)dictionaryRepresentation;	// IMP=0x000000000067495b
- (id)description;	// IMP=0x00000000006748ac
- (id)valueMappingAtIndex:(unsigned long long)arg1;	// IMP=0x000000000067486a
- (unsigned long long)valueMappingsCount;	// IMP=0x000000000067483e
- (void)addValueMapping:(id)arg1;	// IMP=0x000000000067478a
- (void)clearValueMappings;	// IMP=0x0000000000674762
@property(retain, nonatomic) NSMutableArray *valueMappings;
- (id)targetCharAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000674605
- (unsigned long long)targetCharsCount;	// IMP=0x00000000006745d9
- (void)addTargetChar:(id)arg1;	// IMP=0x0000000000674525
- (void)clearTargetChars;	// IMP=0x00000000006744fd
@property(retain, nonatomic) NSMutableArray *targetChars;
- (void)setPlateTypeIndexes:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000006743c0
- (unsigned int)plateTypeIndexesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000006742ea
- (void)addPlateTypeIndexes:(unsigned int)arg1;	// IMP=0x00000000006742b1
- (void)clearPlateTypeIndexes;	// IMP=0x0000000000674295
@property(readonly, nonatomic) unsigned int *plateTypeIndexes;
@property(readonly, nonatomic) unsigned long long plateTypeIndexesCount;
- (void)dealloc;	// IMP=0x00000000006736b9
- (id)initWithData:(id)arg1;	// IMP=0x000000000067365d
- (id)init;	// IMP=0x0000000000673601

@end
