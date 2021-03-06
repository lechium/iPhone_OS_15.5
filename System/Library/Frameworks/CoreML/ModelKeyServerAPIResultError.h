//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreML/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ModelKeyServerAPIResultError : PBCodable <NSCopying>
{
    NSString *_message;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000118a2c
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001189e3
- (unsigned long long)hash;	// IMP=0x00000000001189c6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000011892c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001188b4
- (void)copyTo:(id)arg1;	// IMP=0x000000000011888a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000118866
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000118859
- (id)dictionaryRepresentation;	// IMP=0x00000000001187fd
- (id)description;	// IMP=0x000000000011874e
@property(readonly, nonatomic) _Bool hasMessage;

@end

