//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORPAccessPointCorrections : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_addeds;	// 24 = 0x18
    NSMutableArray *_editeds;	// 32 = 0x20
    NSMutableArray *_removeds;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_addeds:1;
        unsigned int read_editeds:1;
        unsigned int read_removeds:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000411a4a
+ (Class)editedType;	// IMP=0x0000000000410686
+ (Class)removedType;	// IMP=0x0000000000410421
+ (Class)addedType;	// IMP=0x00000000004101bc
- (void).cxx_destruct;	// IMP=0x000000000041375e
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000413433
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000412fed
- (unsigned long long)hash;	// IMP=0x0000000000412f71
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000412e4c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004128f0
- (void)copyTo:(id)arg1;	// IMP=0x0000000000412693
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000412319
- (void)writeTo:(id)arg1;	// IMP=0x0000000000411e70
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000411e61
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000004115f0
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000004115de
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000410fc2
- (id)jsonRepresentation;	// IMP=0x0000000000410eb0
- (id)dictionaryRepresentation;	// IMP=0x0000000000410746
- (id)description;	// IMP=0x0000000000410697
- (id)editedAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000410655
- (unsigned long long)editedsCount;	// IMP=0x0000000000410629
- (void)addEdited:(id)arg1;	// IMP=0x0000000000410575
- (void)clearEditeds;	// IMP=0x000000000041054d
@property(retain, nonatomic) NSMutableArray *editeds;
- (id)removedAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004103f0
- (unsigned long long)removedsCount;	// IMP=0x00000000004103c4
- (void)addRemoved:(id)arg1;	// IMP=0x0000000000410310
- (void)clearRemoveds;	// IMP=0x00000000004102e8
@property(retain, nonatomic) NSMutableArray *removeds;
- (id)addedAtIndex:(unsigned long long)arg1;	// IMP=0x000000000041018b
- (unsigned long long)addedsCount;	// IMP=0x000000000041015f
- (void)addAdded:(id)arg1;	// IMP=0x00000000004100ab
- (void)clearAddeds;	// IMP=0x0000000000410083
@property(retain, nonatomic) NSMutableArray *addeds;
- (id)initWithData:(id)arg1;	// IMP=0x000000000040f4d0
- (id)init;	// IMP=0x000000000040f474

@end
