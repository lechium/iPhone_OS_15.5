//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TrialProto/NSCopying-Protocol.h>

@class NSString, TRIDenormalizedEvent, TRILogContext;

@interface TRILogEvent : PBCodable <NSCopying>
{
    TRILogContext *_context;	// 8 = 0x8
    TRIDenormalizedEvent *_denormalizedEvent;	// 16 = 0x10
    NSString *_logEventId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001e738
@property(retain, nonatomic) TRIDenormalizedEvent *denormalizedEvent; // @synthesize denormalizedEvent=_denormalizedEvent;
@property(retain, nonatomic) NSString *logEventId; // @synthesize logEventId=_logEventId;
@property(retain, nonatomic) TRILogContext *context; // @synthesize context=_context;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001e618
- (unsigned long long)hash;	// IMP=0x000000000001e5ab
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001e4b3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001e3ef
- (void)copyTo:(id)arg1;	// IMP=0x000000000001e36c
- (void)writeTo:(id)arg1;	// IMP=0x000000000001e2f2
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001e2e5
- (id)dictionaryRepresentation;	// IMP=0x000000000001dfa2
- (id)description;	// IMP=0x000000000001def3
@property(readonly, nonatomic) _Bool hasDenormalizedEvent;
@property(readonly, nonatomic) _Bool hasLogEventId;
@property(readonly, nonatomic) _Bool hasContext;

@end
