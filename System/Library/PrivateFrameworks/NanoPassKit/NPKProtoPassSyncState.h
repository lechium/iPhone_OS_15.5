//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NPKProtoPassSyncState : PBCodable <NSCopying>
{
    NSMutableArray *_passSyncStateItems;	// 8 = 0x8
    unsigned int _version;	// 16 = 0x10
    struct {
        unsigned int version:1;
    } _has;	// 20 = 0x14
}

+ (Class)passSyncStateItemsType;	// IMP=0x00000000000521c6
- (void).cxx_destruct;	// IMP=0x0000000000052ecd
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(retain, nonatomic) NSMutableArray *passSyncStateItems; // @synthesize passSyncStateItems=_passSyncStateItems;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000052d23
- (unsigned long long)hash;	// IMP=0x0000000000052cd1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000052c10
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000052a1e
- (void)copyTo:(id)arg1;	// IMP=0x0000000000052939
- (void)writeTo:(id)arg1;	// IMP=0x00000000000527d2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000527c5
- (id)dictionaryRepresentation;	// IMP=0x00000000000522cb
- (id)description;	// IMP=0x000000000005221c
@property(nonatomic) _Bool hasVersion;
- (id)passSyncStateItemsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000521a9
- (unsigned long long)passSyncStateItemsCount;	// IMP=0x000000000005218c
- (void)addPassSyncStateItems:(id)arg1;	// IMP=0x0000000000052122
- (void)clearPassSyncStateItems;	// IMP=0x0000000000052105

@end

