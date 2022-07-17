//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WatchKit/NSCopying-Protocol.h>

@class NSData, NSString, SPProtoCacheSyncData;

@interface SPProtoCacheMessage : PBCodable <NSCopying>
{
    NSData *_assetData;	// 8 = 0x8
    NSString *_assetKey;	// 16 = 0x10
    int _cacheType;	// 24 = 0x18
    NSString *_gizmoCacheIdentifier;	// 32 = 0x20
    int _messageType;	// 40 = 0x28
    SPProtoCacheSyncData *_syncData;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000021811
@property(retain, nonatomic) SPProtoCacheSyncData *syncData; // @synthesize syncData=_syncData;
@property(retain, nonatomic) NSData *assetData; // @synthesize assetData=_assetData;
@property(retain, nonatomic) NSString *gizmoCacheIdentifier; // @synthesize gizmoCacheIdentifier=_gizmoCacheIdentifier;
@property(retain, nonatomic) NSString *assetKey; // @synthesize assetKey=_assetKey;
@property(nonatomic) int cacheType; // @synthesize cacheType=_cacheType;
@property(nonatomic) int messageType; // @synthesize messageType=_messageType;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000021667
- (unsigned long long)hash;	// IMP=0x00000000000215b2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002145c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000021351
- (void)copyTo:(id)arg1;	// IMP=0x0000000000021292
- (void)writeTo:(id)arg1;	// IMP=0x00000000000211cd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000211c0
- (id)dictionaryRepresentation;	// IMP=0x0000000000020cc7
- (id)description;	// IMP=0x0000000000020c18
@property(readonly, nonatomic) _Bool hasSyncData;
@property(readonly, nonatomic) _Bool hasAssetData;
@property(readonly, nonatomic) _Bool hasGizmoCacheIdentifier;
@property(readonly, nonatomic) _Bool hasAssetKey;

@end
