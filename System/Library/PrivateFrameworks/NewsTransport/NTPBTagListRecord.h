//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NTPBRecordBase;

@interface NTPBTagListRecord : PBCodable <NSCopying>
{
    NTPBRecordBase *_base;	// 8 = 0x8
    NSMutableArray *_tagIDs;	// 16 = 0x10
}

+ (Class)tagIDsType;	// IMP=0x000000000004af1f
@property(retain, nonatomic) NSMutableArray *tagIDs; // @synthesize tagIDs=_tagIDs;
@property(retain, nonatomic) NTPBRecordBase *base; // @synthesize base=_base;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004b60d
- (unsigned long long)hash;	// IMP=0x000000000004b5c0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004b52c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004b370
- (void)writeTo:(id)arg1;	// IMP=0x000000000004b24a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004b23d
- (id)dictionaryRepresentation;	// IMP=0x000000000004afa7
- (id)description;	// IMP=0x000000000004af30
- (id)tagIDsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004af02
- (unsigned long long)tagIDsCount;	// IMP=0x000000000004aee5
- (void)addTagIDs:(id)arg1;	// IMP=0x000000000004ae98
- (void)clearTagIDs;	// IMP=0x000000000004ae7b
@property(readonly, nonatomic) _Bool hasBase;
- (void)dealloc;	// IMP=0x000000000004ae0f

@end
