//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableError, NSString;

@interface HDCodableCompanionUserNotificationResponse : PBCodable <NSCopying>
{
    HDCodableError *_error;	// 8 = 0x8
    NSString *_requestIdentifier;	// 16 = 0x10
    _Bool _success;	// 24 = 0x18
    CDStruct_f2ecb737 _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000225aa2
@property(retain, nonatomic) HDCodableError *error; // @synthesize error=_error;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(retain, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002259ae
- (unsigned long long)hash;	// IMP=0x000000000022593a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000022583a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000225779
- (void)copyTo:(id)arg1;	// IMP=0x00000000002256f6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000225674
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000225667
- (id)dictionaryRepresentation;	// IMP=0x00000000002252d0
- (id)description;	// IMP=0x0000000000225221
@property(readonly, nonatomic) _Bool hasError;
@property(nonatomic) _Bool hasSuccess;
@property(readonly, nonatomic) _Bool hasRequestIdentifier;

@end
