//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRKASMRosterProviderConfiguration;

@interface CRKASMCertificateIngestor : NSObject
{
    CRKASMRosterProviderConfiguration *_configuration;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000043a78
@property(readonly, nonatomic) CRKASMRosterProviderConfiguration *configuration; // @synthesize configuration=_configuration;
- (_Bool)storeCertificates:(id)arg1 userIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000043941
- (_Bool)isCertificateValid:(id)arg1 forUserIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000043860
- (_Bool)areCertificatesValid:(id)arg1 forUserIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000436d3
- (_Bool)ingestCertificates:(id)arg1 forTrustedUserIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000043614
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000000435a9

@end

