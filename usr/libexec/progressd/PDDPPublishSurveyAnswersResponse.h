//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface PDDPPublishSurveyAnswersResponse : PBCodable
{
    NSMutableArray *_payloads;	// 8 = 0x8
}

+ (Class)payloadType;	// IMP=0x0020000000168c5f
- (void).cxx_destruct;	// IMP=0x00200000001696ea
@property(retain, nonatomic) NSMutableArray *payloads; // @synthesize payloads=_payloads;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000169590
- (unsigned long long)hash;	// IMP=0x0010000000169573
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001694d9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000169316
- (void)copyTo:(id)arg1;	// IMP=0x001000000016924f
- (void)writeTo:(id)arg1;	// IMP=0x001000000016911f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000168f52
- (id)dictionaryRepresentation;	// IMP=0x0010000000168d1f
- (id)description;	// IMP=0x0010000000168c70
- (id)payloadAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000168c42
- (unsigned long long)payloadsCount;	// IMP=0x0010000000168c25
- (void)addPayload:(id)arg1;	// IMP=0x0010000000168bbb
- (void)clearPayloads;	// IMP=0x0010000000168b9e

@end

