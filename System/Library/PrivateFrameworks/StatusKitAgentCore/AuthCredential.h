//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <StatusKitAgentCore/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AuthCredential : PBCodable <NSCopying>
{
    int _authCredentialOneof;	// 8 = 0x8
    NSString *_simpleJwt;	// 16 = 0x10
    struct {
        unsigned int authCredentialOneof:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000029589
@property(retain, nonatomic) NSString *simpleJwt; // @synthesize simpleJwt=_simpleJwt;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000029515
- (unsigned long long)hash;	// IMP=0x00000000000294c8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000029403
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000029373
- (void)copyTo:(id)arg1;	// IMP=0x0000000000029310
- (void)writeTo:(id)arg1;	// IMP=0x00000000000292ec
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000292df
- (id)dictionaryRepresentation;	// IMP=0x0000000000029001
- (id)description;	// IMP=0x0000000000028f52
- (void)clearOneofValuesForAuthCredentialOneof;	// IMP=0x0000000000028f18
- (int)StringAsAuthCredentialOneof:(id)arg1;	// IMP=0x0000000000028eb6
- (id)authCredentialOneofAsString:(int)arg1;	// IMP=0x0000000000028e61
@property(nonatomic) _Bool hasAuthCredentialOneof;
@property(nonatomic) int authCredentialOneof; // @synthesize authCredentialOneof=_authCredentialOneof;
@property(readonly, nonatomic) _Bool hasSimpleJwt;

@end

