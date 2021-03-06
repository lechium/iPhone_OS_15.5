//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AssistantServices/NSCopying-Protocol.h>

@class NSData;

@interface SISchemaClientTurnContext : PBCodable <NSCopying>
{
    NSData *_turnID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000124f1f
@property(retain, nonatomic) NSData *turnID; // @synthesize turnID=_turnID;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000124ed6
- (unsigned long long)hash;	// IMP=0x0000000000124eb9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000124e1f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000124da7
- (void)copyTo:(id)arg1;	// IMP=0x0000000000124d7d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000124d59
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000124d4c
- (id)dictionaryRepresentation;	// IMP=0x0000000000124b7e
- (id)description;	// IMP=0x0000000000124acf
@property(readonly, nonatomic) _Bool hasTurnID;

@end

