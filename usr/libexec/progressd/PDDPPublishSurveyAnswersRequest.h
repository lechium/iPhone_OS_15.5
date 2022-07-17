//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray;

@interface PDDPPublishSurveyAnswersRequest : PBRequest
{
    NSMutableArray *_payloads;	// 8 = 0x8
}

+ (Class)payloadType;	// IMP=0x0020000000180503
- (void).cxx_destruct;	// IMP=0x0020000000180faa
@property(retain, nonatomic) NSMutableArray *payloads; // @synthesize payloads=_payloads;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000180e50
- (unsigned long long)hash;	// IMP=0x0010000000180e33
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000180d99
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000180bd6
- (void)copyTo:(id)arg1;	// IMP=0x0010000000180b0f
- (Class)responseClass;	// IMP=0x0010000000180afe
- (unsigned int)requestTypeCode;	// IMP=0x0010000000180af3
- (void)writeTo:(id)arg1;	// IMP=0x00100000001809c3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001807f6
- (id)dictionaryRepresentation;	// IMP=0x00100000001805c3
- (id)description;	// IMP=0x0010000000180514
- (id)payloadAtIndex:(unsigned long long)arg1;	// IMP=0x00100000001804e6
- (unsigned long long)payloadsCount;	// IMP=0x00100000001804c9
- (void)addPayload:(id)arg1;	// IMP=0x001000000018045f
- (void)clearPayloads;	// IMP=0x0010000000180442

@end
