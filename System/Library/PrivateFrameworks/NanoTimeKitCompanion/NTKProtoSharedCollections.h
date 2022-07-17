//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoTimeKitCompanion/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTKProtoSharedCollections : PBCodable <NSCopying>
{
    NSMutableArray *_collections;	// 8 = 0x8
}

+ (Class)collectionsType;	// IMP=0x000000000013d723
+ (id)protoBufferFromSharedCollections:(id)arg1;	// IMP=0x0000000000300f3e
- (void).cxx_destruct;	// IMP=0x000000000013e1b8
@property(retain, nonatomic) NSMutableArray *collections; // @synthesize collections=_collections;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000013e05e
- (unsigned long long)hash;	// IMP=0x000000000013e041
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013dfa7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013dde4
- (void)copyTo:(id)arg1;	// IMP=0x000000000013dd1d
- (void)writeTo:(id)arg1;	// IMP=0x000000000013dbed
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000013dbe0
- (id)dictionaryRepresentation;	// IMP=0x000000000013d7e3
- (id)description;	// IMP=0x000000000013d734
- (id)collectionsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000013d706
- (unsigned long long)collectionsCount;	// IMP=0x000000000013d6e9
- (void)addCollections:(id)arg1;	// IMP=0x000000000013d67f
- (void)clearCollections;	// IMP=0x000000000013d662
- (id)sharedCollectionsDictionary;	// IMP=0x0000000000301036

@end
