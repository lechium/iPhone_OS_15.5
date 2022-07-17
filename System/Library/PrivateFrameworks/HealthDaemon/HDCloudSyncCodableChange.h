//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableSyncAnchorRangeMap;

@interface HDCloudSyncCodableChange : PBCodable <NSCopying>
{
    long long _changeIndex;	// 8 = 0x8
    long long _changeSize;	// 16 = 0x10
    long long _protocolVersion;	// 24 = 0x18
    HDCodableSyncAnchorRangeMap *_anchorRangeMap;	// 32 = 0x20
    _Bool _finalForSequence;	// 40 = 0x28
    struct {
        unsigned int changeIndex:1;
        unsigned int changeSize:1;
        unsigned int protocolVersion:1;
        unsigned int finalForSequence:1;
    } _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x00000000004591ff
@property(nonatomic) _Bool finalForSequence; // @synthesize finalForSequence=_finalForSequence;
@property(nonatomic) long long changeIndex; // @synthesize changeIndex=_changeIndex;
@property(nonatomic) long long changeSize; // @synthesize changeSize=_changeSize;
@property(nonatomic) long long protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(retain, nonatomic) HDCodableSyncAnchorRangeMap *anchorRangeMap; // @synthesize anchorRangeMap=_anchorRangeMap;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000004590c7
- (unsigned long long)hash;	// IMP=0x0000000000459021
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000458eea
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000458dfc
- (void)copyTo:(id)arg1;	// IMP=0x0000000000458d43
- (void)writeTo:(id)arg1;	// IMP=0x0000000000458c73
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000458c66
- (id)dictionaryRepresentation;	// IMP=0x0000000000458639
- (id)description;	// IMP=0x000000000045858a
@property(nonatomic) _Bool hasFinalForSequence;
@property(nonatomic) _Bool hasChangeIndex;
@property(nonatomic) _Bool hasChangeSize;
@property(nonatomic) _Bool hasProtocolVersion;
@property(readonly, nonatomic) _Bool hasAnchorRangeMap;

@end
