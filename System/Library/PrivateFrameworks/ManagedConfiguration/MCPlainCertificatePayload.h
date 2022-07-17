//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface MCPlainCertificatePayload
{
    NSString *_certificateFileName;	// 136 = 0x88
    NSData *_certificateData;	// 144 = 0x90
    NSString *_password;	// 152 = 0x98
    int _dataEncoding;	// 160 = 0xa0
}

+ (id)localizedPluralForm;	// IMP=0x00000000000622de
+ (id)localizedSingularForm;	// IMP=0x00000000000622cb
+ (id)typeStrings;	// IMP=0x0000000000062243
- (void).cxx_destruct;	// IMP=0x0000000000062ddd
@property(readonly, retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, retain, nonatomic) NSData *certificateData; // @synthesize certificateData=_certificateData;
@property(readonly, nonatomic) int dataEncoding; // @synthesize dataEncoding=_dataEncoding;
@property(readonly, retain, nonatomic) NSString *certificateFileName; // @synthesize certificateFileName=_certificateFileName;
- (_Bool)isIdentity;	// IMP=0x0000000000062d16
- (id)persistentResourceID;	// IMP=0x0000000000062cc6
- (id)verboseDescription;	// IMP=0x0000000000062bad
- (struct __SecCertificate *)copyCertificate;	// IMP=0x0000000000062a04
- (id)installationWarnings;	// IMP=0x0000000000062811
- (_Bool)isSigned;	// IMP=0x00000000000627a1
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;	// IMP=0x00000000000622f1

@end
