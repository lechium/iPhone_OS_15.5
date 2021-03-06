//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

@interface HDCodableSignedClinicalDataItemList : PBCodable <NSCopying>
{
    NSMutableArray *_items;	// 8 = 0x8
}

+ (Class)itemsType;	// IMP=0x00000000001632fc
- (void).cxx_destruct;	// IMP=0x0000000000163d8f
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000163c35
- (unsigned long long)hash;	// IMP=0x0000000000163c18
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000163b7e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001639bb
- (void)copyTo:(id)arg1;	// IMP=0x00000000001638f4
- (void)writeTo:(id)arg1;	// IMP=0x00000000001637c4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001637b7
- (id)dictionaryRepresentation;	// IMP=0x00000000001633bc
- (id)description;	// IMP=0x000000000016330d
- (id)itemsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001632df
- (unsigned long long)itemsCount;	// IMP=0x00000000001632c2
- (void)addItems:(id)arg1;	// IMP=0x0000000000163258
- (void)clearItems;	// IMP=0x000000000016323b

@end

