//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class NSData, NSString;

@interface BMPBSiriIntentEvent : PBCodable <NSCopying>
{
    NSData *_eventData;	// 8 = 0x8
    NSString *_eventType;	// 16 = 0x10
    NSString *_intentId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007388b
@property(retain, nonatomic) NSData *eventData; // @synthesize eventData=_eventData;
@property(retain, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
@property(retain, nonatomic) NSString *intentId; // @synthesize intentId=_intentId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000073799
- (unsigned long long)hash;	// IMP=0x000000000007372c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000073634
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000073570
- (void)copyTo:(id)arg1;	// IMP=0x00000000000734ed
- (void)writeTo:(id)arg1;	// IMP=0x0000000000073473
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000073466
- (id)dictionaryRepresentation;	// IMP=0x000000000007320c
- (id)description;	// IMP=0x000000000007315d
@property(readonly, nonatomic) _Bool hasEventData;
@property(readonly, nonatomic) _Bool hasEventType;
@property(readonly, nonatomic) _Bool hasIntentId;

@end

