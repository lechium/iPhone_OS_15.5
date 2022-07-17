//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PDDPStatus;

@interface PDDPIngestResponse : PBCodable
{
    NSMutableArray *_items;	// 8 = 0x8
    PDDPStatus *_status;	// 16 = 0x10
}

+ (Class)itemsType;	// IMP=0x00200000000c3dec
- (void).cxx_destruct;	// IMP=0x00200000000c4a59
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) PDDPStatus *status; // @synthesize status=_status;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000c487e
- (unsigned long long)hash;	// IMP=0x00100000000c4831
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000c4769
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000c4590
- (void)copyTo:(id)arg1;	// IMP=0x00100000000c44a6
- (void)writeTo:(id)arg1;	// IMP=0x00100000000c435a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000c412a
- (id)dictionaryRepresentation;	// IMP=0x00100000000c3eac
- (id)description;	// IMP=0x00100000000c3dfd
- (id)itemsAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000c3dcf
- (unsigned long long)itemsCount;	// IMP=0x00100000000c3db2
- (void)addItems:(id)arg1;	// IMP=0x00100000000c3d48
- (void)clearItems;	// IMP=0x00100000000c3d2b
@property(readonly, nonatomic) _Bool hasStatus;

@end
