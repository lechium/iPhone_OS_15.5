//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOVisualLaneGuidance : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_instructions;	// 24 = 0x18
    NSMutableArray *_laneInfos;	// 32 = 0x20
    NSMutableArray *_titles;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_instructions:1;
        unsigned int read_laneInfos:1;
        unsigned int read_titles:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000988a98
+ (Class)titleType;	// IMP=0x00000000009879fe
+ (Class)instructionType;	// IMP=0x0000000000987799
+ (Class)laneInfoType;	// IMP=0x0000000000987534
- (void).cxx_destruct;	// IMP=0x0000000000989fc1
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000989c96
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000989850
- (unsigned long long)hash;	// IMP=0x00000000009897d4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009896af
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000989153
- (void)copyTo:(id)arg1;	// IMP=0x0000000000988ef6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000988ab4
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000988aa5
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000098898c
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000098897a
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000098834c
- (id)jsonRepresentation;	// IMP=0x000000000098823a
- (id)dictionaryRepresentation;	// IMP=0x0000000000987abe
- (id)description;	// IMP=0x0000000000987a0f
- (id)titleAtIndex:(unsigned long long)arg1;	// IMP=0x00000000009879cd
- (unsigned long long)titlesCount;	// IMP=0x00000000009879a1
- (void)addTitle:(id)arg1;	// IMP=0x00000000009878ed
- (void)clearTitles;	// IMP=0x00000000009878c5
@property(retain, nonatomic) NSMutableArray *titles;
- (id)instructionAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000987768
- (unsigned long long)instructionsCount;	// IMP=0x000000000098773c
- (void)addInstruction:(id)arg1;	// IMP=0x0000000000987688
- (void)clearInstructions;	// IMP=0x0000000000987660
@property(retain, nonatomic) NSMutableArray *instructions;
- (id)laneInfoAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000987503
- (unsigned long long)laneInfosCount;	// IMP=0x00000000009874d7
- (void)addLaneInfo:(id)arg1;	// IMP=0x0000000000987423
- (void)clearLaneInfos;	// IMP=0x00000000009873fb
@property(retain, nonatomic) NSMutableArray *laneInfos;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000986848
- (id)init;	// IMP=0x00000000009867ec

@end
