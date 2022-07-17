//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class NSString;

@interface WFPBRemoteExecutionErrorEvent : PBCodable <NSCopying>
{
    NSString *_destinationType;	// 8 = 0x8
    NSString *_errorCode;	// 16 = 0x10
    NSString *_errorDomain;	// 24 = 0x18
    NSString *_key;	// 32 = 0x20
    NSString *_source;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000016687e
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(retain, nonatomic) NSString *destinationType; // @synthesize destinationType=_destinationType;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000166713
- (unsigned long long)hash;	// IMP=0x0000000000166670
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000166510
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001663f8
- (void)copyTo:(id)arg1;	// IMP=0x0000000000166335
- (void)writeTo:(id)arg1;	// IMP=0x0000000000166281
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000166274
- (id)dictionaryRepresentation;	// IMP=0x000000000016617c
- (id)description;	// IMP=0x00000000001660cd
@property(readonly, nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasErrorDomain;
@property(readonly, nonatomic) _Bool hasDestinationType;
@property(readonly, nonatomic) _Bool hasSource;
@property(readonly, nonatomic) _Bool hasKey;

@end
