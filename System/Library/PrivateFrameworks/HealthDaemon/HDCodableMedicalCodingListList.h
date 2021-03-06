//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

@interface HDCodableMedicalCodingListList : PBCodable <NSCopying>
{
    NSMutableArray *_items;	// 8 = 0x8
}

+ (Class)itemsType;	// IMP=0x00000000004fb8fc
- (void).cxx_destruct;	// IMP=0x00000000004fc38f
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000004fc235
- (unsigned long long)hash;	// IMP=0x00000000004fc218
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004fc17e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004fbfbb
- (void)copyTo:(id)arg1;	// IMP=0x00000000004fbef4
- (void)writeTo:(id)arg1;	// IMP=0x00000000004fbdc4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004fbdb7
- (id)dictionaryRepresentation;	// IMP=0x00000000004fb9bc
- (id)description;	// IMP=0x00000000004fb90d
- (id)itemsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004fb8df
- (unsigned long long)itemsCount;	// IMP=0x00000000004fb8c2
- (void)addItems:(id)arg1;	// IMP=0x00000000004fb858
- (void)clearItems;	// IMP=0x00000000004fb83b

@end

