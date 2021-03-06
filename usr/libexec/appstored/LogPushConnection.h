//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface LogPushConnection : PBCodable
{
    NSString *_environment;	// 8 = 0x8
    NSMutableArray *_messages;	// 16 = 0x10
    NSString *_token;	// 24 = 0x18
}

+ (Class)messagesType;	// IMP=0x00200000000eaa88
+ (id)connectionWithEnvironment:(id)arg1 token:(id)arg2;	// IMP=0x00100000000e545d
- (void).cxx_destruct;	// IMP=0x00100000000eb4ad
@property(retain, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *environment; // @synthesize environment=_environment;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000eb2a6
- (unsigned long long)hash;	// IMP=0x00100000000eb239
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000eb141
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000eaf3b
- (void)writeTo:(id)arg1;	// IMP=0x00100000000eadd2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000eabf2
- (id)dictionaryRepresentation;	// IMP=0x00100000000eab48
- (id)description;	// IMP=0x00100000000eaa99
- (id)messagesAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000eaa6b
- (unsigned long long)messagesCount;	// IMP=0x00100000000eaa4e
- (void)addMessages:(id)arg1;	// IMP=0x00100000000ea9e4
- (void)clearMessages;	// IMP=0x00100000000ea9c7
@property(readonly, nonatomic) _Bool hasToken;
@property(readonly, nonatomic) _Bool hasEnvironment;
- (id)formattedText;	// IMP=0x00100000000e5507

@end

