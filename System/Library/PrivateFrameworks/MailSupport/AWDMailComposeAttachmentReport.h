//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MailSupport/NSCopying-Protocol.h>

@interface AWDMailComposeAttachmentReport : PBCodable <NSCopying>
{
    long long _drawingInsertCount;	// 8 = 0x8
    long long _drawingSentCount;	// 16 = 0x10
    unsigned long long _timestamp;	// 24 = 0x18
    _Bool _messageSent;	// 32 = 0x20
    struct {
        unsigned int drawingInsertCount:1;
        unsigned int drawingSentCount:1;
        unsigned int timestamp:1;
        unsigned int messageSent:1;
    } _has;	// 36 = 0x24
}

@property(nonatomic) _Bool messageSent; // @synthesize messageSent=_messageSent;
@property(nonatomic) long long drawingSentCount; // @synthesize drawingSentCount=_drawingSentCount;
@property(nonatomic) long long drawingInsertCount; // @synthesize drawingInsertCount=_drawingInsertCount;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000006dea
- (unsigned long long)hash;	// IMP=0x0000000000006d6b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000006c4c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000006b97
- (void)copyTo:(id)arg1;	// IMP=0x0000000000006b05
- (void)writeTo:(id)arg1;	// IMP=0x0000000000006a3a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000006a2c
- (id)dictionaryRepresentation;	// IMP=0x0000000000006483
- (id)description;	// IMP=0x00000000000063b3
@property(nonatomic) _Bool hasMessageSent;
@property(nonatomic) _Bool hasDrawingSentCount;
@property(nonatomic) _Bool hasDrawingInsertCount;
@property(nonatomic) _Bool hasTimestamp;

@end
