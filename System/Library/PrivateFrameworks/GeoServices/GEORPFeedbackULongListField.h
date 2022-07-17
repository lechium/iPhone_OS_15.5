//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBDataReader;

@interface GEORPFeedbackULongListField : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_62a50c50 _addeds;	// 16 = 0x10
    CDStruct_62a50c50 _originals;	// 40 = 0x28
    CDStruct_62a50c50 _removeds;	// 64 = 0x40
    unsigned int _readerMarkPos;	// 88 = 0x58
    unsigned int _readerMarkLength;	// 92 = 0x5c
    struct os_unfair_lock_s _readerLock;	// 96 = 0x60
    CDStruct_c0dca870 _flags;	// 100 = 0x64
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000e141ab
- (void).cxx_destruct;	// IMP=0x0000000000e149be
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e14886
- (unsigned long long)hash;	// IMP=0x0000000000e14823
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e14744
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e145c8
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e143be
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e141c7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e141b8
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e1409f
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e14092
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e13b36
- (id)jsonRepresentation;	// IMP=0x0000000000e13b2c
- (id)dictionaryRepresentation;	// IMP=0x0000000000e139f1
- (id)description;	// IMP=0x0000000000e13942
- (void)setOriginals:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000e13920
- (unsigned long long)originalAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000e1384a
- (void)addOriginal:(unsigned long long)arg1;	// IMP=0x0000000000e13811
- (void)clearOriginals;	// IMP=0x0000000000e137f5
@property(readonly, nonatomic) unsigned long long *originals;
@property(readonly, nonatomic) unsigned long long originalsCount;
- (void)setRemoveds:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000e136ba
- (unsigned long long)removedAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000e135e4
- (void)addRemoved:(unsigned long long)arg1;	// IMP=0x0000000000e135ab
- (void)clearRemoveds;	// IMP=0x0000000000e1358f
@property(readonly, nonatomic) unsigned long long *removeds;
@property(readonly, nonatomic) unsigned long long removedsCount;
- (void)setAddeds:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000e13454
- (unsigned long long)addedAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000e1337e
- (void)addAdded:(unsigned long long)arg1;	// IMP=0x0000000000e13345
- (void)clearAddeds;	// IMP=0x0000000000e13329
@property(readonly, nonatomic) unsigned long long *addeds;
@property(readonly, nonatomic) unsigned long long addedsCount;
- (void)dealloc;	// IMP=0x0000000000e129e9
- (id)initWithData:(id)arg1;	// IMP=0x0000000000e1298d
- (id)init;	// IMP=0x0000000000e12931

@end
