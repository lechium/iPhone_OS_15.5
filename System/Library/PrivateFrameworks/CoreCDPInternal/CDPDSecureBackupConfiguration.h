//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CDPContext, NSDictionary, NSURLSession;

@interface CDPDSecureBackupConfiguration : NSObject
{
    CDPContext *_context;	// 8 = 0x8
    NSDictionary *_configurationURLs;	// 16 = 0x10
    NSDictionary *_escrowConfigurationURLs;	// 24 = 0x18
    NSURLSession *_session;	// 32 = 0x20
}

+ (id)_configurationRequestWithURLString:(id)arg1;	// IMP=0x00000000000369d6
+ (id)configurationWithContext:(id)arg1 andSession:(id)arg2;	// IMP=0x0000000000035ed4
+ (id)configurationWithContext:(id)arg1;	// IMP=0x0000000000035e59
- (void).cxx_destruct;	// IMP=0x00000000000370c5
- (id)_fetchConfigurationWithRequest:(id)arg1;	// IMP=0x0000000000036b30
- (id)_fetchConfigurationDictionary;	// IMP=0x0000000000036ad1
- (id)_fetchEscrowConfigurationBag;	// IMP=0x0000000000036a72
- (id)_configurationInfoURLRequest;	// IMP=0x00000000000369b5
- (id)_escrowProxyConfigurationURLRequest;	// IMP=0x00000000000368f5
- (id)_escrowConfigurationBagFull;	// IMP=0x00000000000368ae
- (id)_setupConfigurationURLs;	// IMP=0x0000000000036858
- (id)_escrowConfigurationBag;	// IMP=0x00000000000367d1
- (id)_escrowProxyConfigurationURL;	// IMP=0x000000000003677a
- (id)_escrowProxyURL;	// IMP=0x0000000000036723
- (id)_iCloudEnvironment;	// IMP=0x00000000000366cc
- (id)accountInfoFetchSetupDictionary;	// IMP=0x0000000000036555
- (id)escrowAuthInfo;	// IMP=0x0000000000035f59

@end
