//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface PUProtoSetShouldNotifyNextUnlock : PBCodable
{
    _Bool _shouldNotify;	// 8 = 0x8
}

@property(nonatomic) _Bool shouldNotify; // @synthesize shouldNotify=_shouldNotify;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000000c540
- (unsigned long long)hash;	// IMP=0x001000000000c526
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000c4a1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000c450
- (void)copyTo:(id)arg1;	// IMP=0x001000000000c43d
- (void)writeTo:(id)arg1;	// IMP=0x001000000000c420
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000000c413
- (id)dictionaryRepresentation;	// IMP=0x001000000000c1be
- (id)description;	// IMP=0x001000000000c10f

@end

