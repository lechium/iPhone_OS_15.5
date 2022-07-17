//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <EmailDaemon/NSCopying-Protocol.h>

@interface EDPBMessageDataIDOnly : PBCodable <NSCopying>
{
    long long _messageId;	// 8 = 0x8
    struct {
        unsigned int messageId:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) long long messageId; // @synthesize messageId=_messageId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000bc008
- (unsigned long long)hash;	// IMP=0x00000000000bbfe0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000bbf33
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bbecf
- (void)copyTo:(id)arg1;	// IMP=0x00000000000bbea9
- (void)writeTo:(id)arg1;	// IMP=0x00000000000bbe4d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000bbe3f
- (id)dictionaryRepresentation;	// IMP=0x00000000000bbb95
- (id)description;	// IMP=0x00000000000bbac5
@property(nonatomic) _Bool hasMessageId;

@end
