//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@interface NNMKProtoInitialSyncFinishedNotification : PBCodable <NSCopying>
{
    unsigned int _fullSyncVersion;	// 8 = 0x8
    CDStruct_a125a100 _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001b04b
- (unsigned long long)hash;	// IMP=0x000000000001b021
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001af8f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001af2d
- (void)copyTo:(id)arg1;	// IMP=0x000000000001af09
- (void)writeTo:(id)arg1;	// IMP=0x000000000001aede
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001aed1
- (id)dictionaryRepresentation;	// IMP=0x000000000001ac58
- (id)description;	// IMP=0x000000000001aba9
@property(nonatomic) _Bool hasFullSyncVersion;

@end
