//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface CLPInstSchemaCLPNLv4SampleEvaluationFailed
{
    _Bool _userProfileSandboxFailure;	// 8 = 0x8
    _Bool _xpcClientDisconnected;	// 9 = 0x9
    _Bool _xpcClientNLURequestTimeout;	// 10 = 0xa
    struct {
        unsigned int userProfileSandboxFailure:1;
        unsigned int xpcClientDisconnected:1;
        unsigned int xpcClientNLURequestTimeout:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) _Bool xpcClientNLURequestTimeout; // @synthesize xpcClientNLURequestTimeout=_xpcClientNLURequestTimeout;
@property(nonatomic) _Bool xpcClientDisconnected; // @synthesize xpcClientDisconnected=_xpcClientDisconnected;
@property(nonatomic) _Bool userProfileSandboxFailure; // @synthesize userProfileSandboxFailure=_userProfileSandboxFailure;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000b1927
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000b1869
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000b1673
- (unsigned long long)hash;	// IMP=0x00000000000b1610
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b14f4
- (void)writeTo:(id)arg1;	// IMP=0x00000000000b1461
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000b1454
- (void)deleteXpcClientNLURequestTimeout;	// IMP=0x00000000000b142a
@property(nonatomic) _Bool hasXpcClientNLURequestTimeout;
- (void)deleteXpcClientDisconnected;	// IMP=0x00000000000b13b5
@property(nonatomic) _Bool hasXpcClientDisconnected;
- (void)deleteUserProfileSandboxFailure;	// IMP=0x00000000000b1342
@property(nonatomic) _Bool hasUserProfileSandboxFailure;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000339fb5

@end
