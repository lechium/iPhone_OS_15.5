//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <EmailDaemon/NSCopying-Protocol.h>

@class EDPETQuotaReachedEvent, EDPETSubmittedEvent, NSData;

@interface EDPETBatchedWrapper : PBCodable <NSCopying>
{
    EDPETQuotaReachedEvent *_quotaEvent;	// 8 = 0x8
    NSData *_rawData;	// 16 = 0x10
    EDPETSubmittedEvent *_submittedEvent;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d80b2
@property(retain, nonatomic) NSData *rawData; // @synthesize rawData=_rawData;
@property(retain, nonatomic) EDPETSubmittedEvent *submittedEvent; // @synthesize submittedEvent=_submittedEvent;
@property(retain, nonatomic) EDPETQuotaReachedEvent *quotaEvent; // @synthesize quotaEvent=_quotaEvent;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000d7f72
- (unsigned long long)hash;	// IMP=0x00000000000d7f05
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d7def
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d7d16
- (void)copyTo:(id)arg1;	// IMP=0x00000000000d7c7f
- (void)writeTo:(id)arg1;	// IMP=0x00000000000d7bf1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000d7be3
- (id)dictionaryRepresentation;	// IMP=0x00000000000d7848
- (id)description;	// IMP=0x00000000000d7778
@property(readonly, nonatomic) _Bool hasRawData;
@property(readonly, nonatomic) _Bool hasSubmittedEvent;
@property(readonly, nonatomic) _Bool hasQuotaEvent;

@end

