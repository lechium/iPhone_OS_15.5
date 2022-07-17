//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreDuet/NSCopying-Protocol.h>

@class NSMutableArray;

@interface FTCPPETInteractionLogEvent : PBCodable <NSCopying>
{
    unsigned long long _hashedUserId;	// 8 = 0x8
    unsigned long long _snapshotTimestamp;	// 16 = 0x10
    NSMutableArray *_interactions;	// 24 = 0x18
}

+ (Class)interactionsType;	// IMP=0x000000000005ff29
- (void).cxx_destruct;	// IMP=0x0000000000060cad
@property(retain, nonatomic) NSMutableArray *interactions; // @synthesize interactions=_interactions;
@property(nonatomic) unsigned long long snapshotTimestamp; // @synthesize snapshotTimestamp=_snapshotTimestamp;
@property(nonatomic) unsigned long long hashedUserId; // @synthesize hashedUserId=_hashedUserId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000060ad0
- (unsigned long long)hash;	// IMP=0x0000000000060a85
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000609cb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000607ea
- (void)copyTo:(id)arg1;	// IMP=0x0000000000060705
- (void)writeTo:(id)arg1;	// IMP=0x00000000000605a1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000060594
- (id)dictionaryRepresentation;	// IMP=0x000000000005ffe9
- (id)description;	// IMP=0x000000000005ff3a
- (id)interactionsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005ff0c
- (unsigned long long)interactionsCount;	// IMP=0x000000000005feef
- (void)addInteractions:(id)arg1;	// IMP=0x000000000005fe85
- (void)clearInteractions;	// IMP=0x000000000005fe68

@end
