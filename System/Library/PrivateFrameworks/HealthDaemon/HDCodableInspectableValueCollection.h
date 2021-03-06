//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableMedicalCodingList, NSMutableArray;

@interface HDCodableInspectableValueCollection : PBCodable <NSCopying>
{
    long long _collectionType;	// 8 = 0x8
    NSMutableArray *_collections;	// 16 = 0x10
    HDCodableMedicalCodingList *_elementTags;	// 24 = 0x18
    struct {
        unsigned int collectionType:1;
    } _has;	// 32 = 0x20
}

+ (Class)collectionType;	// IMP=0x0000000000677495
- (void).cxx_destruct;	// IMP=0x000000000067835a
@property(retain, nonatomic) HDCodableMedicalCodingList *elementTags; // @synthesize elementTags=_elementTags;
@property(retain, nonatomic) NSMutableArray *collections; // @synthesize collections=_collections;
@property(nonatomic) long long collectionType; // @synthesize collectionType=_collectionType;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000067814f
- (unsigned long long)hash;	// IMP=0x00000000006780d2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000677fdd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000677dae
- (void)copyTo:(id)arg1;	// IMP=0x0000000000677ca4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000677b1f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000677b12
- (id)dictionaryRepresentation;	// IMP=0x000000000067756a
- (id)description;	// IMP=0x00000000006774bb
@property(readonly, nonatomic) _Bool hasElementTags;
- (id)collectionAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000677478
- (unsigned long long)collectionsCount;	// IMP=0x000000000067745b
- (void)addCollection:(id)arg1;	// IMP=0x00000000006773f1
- (void)clearCollections;	// IMP=0x00000000006773d4
@property(nonatomic) _Bool hasCollectionType;

@end

