//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreDuet/NSCopying-Protocol.h>

@interface FTCPPETParticipant : PBCodable <NSCopying>
{
    unsigned long long _hashedId;	// 8 = 0x8
    _Bool _isContact;	// 16 = 0x10
}

@property(nonatomic) _Bool isContact; // @synthesize isContact=_isContact;
@property(nonatomic) unsigned long long hashedId; // @synthesize hashedId=_hashedId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000002b493
- (unsigned long long)hash;	// IMP=0x000000000002b467
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002b3d1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002b371
- (void)copyTo:(id)arg1;	// IMP=0x000000000002b34f
- (void)writeTo:(id)arg1;	// IMP=0x000000000002b2ef
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002b2e2
- (id)dictionaryRepresentation;	// IMP=0x000000000002af99
- (id)description;	// IMP=0x000000000002aeea

@end
