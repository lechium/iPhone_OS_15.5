//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

@interface HDCodableAuthorizationResponseMessage : PBCodable <NSCopying>
{
    NSString *_appBundleIdentifier;	// 8 = 0x8
    NSString *_errorDescription;	// 16 = 0x10
    NSString *_hostAppName;	// 24 = 0x18
    NSData *_requestIdentifier;	// 32 = 0x20
    _Bool _shouldPrompt;	// 40 = 0x28
    struct {
        unsigned int shouldPrompt:1;
    } _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x00000000001326b0
@property(retain, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(retain, nonatomic) NSString *hostAppName; // @synthesize hostAppName=_hostAppName;
@property(nonatomic) _Bool shouldPrompt; // @synthesize shouldPrompt=_shouldPrompt;
@property(retain, nonatomic) NSData *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000132549
- (unsigned long long)hash;	// IMP=0x0000000000132488
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000132320
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013220c
- (void)copyTo:(id)arg1;	// IMP=0x0000000000132149
- (void)writeTo:(id)arg1;	// IMP=0x000000000013208d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000132080
- (id)dictionaryRepresentation;	// IMP=0x0000000000131cac
- (id)description;	// IMP=0x0000000000131bfd
@property(readonly, nonatomic) _Bool hasErrorDescription;
@property(readonly, nonatomic) _Bool hasHostAppName;
@property(nonatomic) _Bool hasShouldPrompt;
@property(readonly, nonatomic) _Bool hasRequestIdentifier;
@property(readonly, nonatomic) _Bool hasAppBundleIdentifier;

@end

