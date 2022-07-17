//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSURLProtocolDelegate-Protocol.h>
#import <AppleMediaServices/NSURLSessionTaskDelegate-Protocol.h>

@class AMSProcessInfo, AMSURLSession, NSString;

__attribute__((visibility("hidden")))
@interface AMSBagNetworkTask <NSURLSessionTaskDelegate, AMSURLProtocolDelegate>
{
    AMSProcessInfo *_clientInfo;	// 8 = 0x8
    NSString *_profile;	// 16 = 0x10
    NSString *_profileVersion;	// 24 = 0x18
    AMSURLSession *_URLSession;	// 32 = 0x20
    NSString *_logKey;	// 40 = 0x28
}

+ (id)_URLCookieNamesForProfile:(id)arg1;	// IMP=0x00000000000aeabe
+ (_Bool)_shouldReloadDataForOriginalCookies:(id)arg1 newCookies:(id)arg2;	// IMP=0x00000000000ae9b8
+ (void)_setURLCookieNames:(id)arg1 forProfile:(id)arg2;	// IMP=0x00000000000ae8ac
+ (id)_defaultURLCookieNames;	// IMP=0x00000000000ae85c
+ (id)_setStorefrontFromURLResponse:(id)arg1 bagData:(id)arg2;	// IMP=0x00000000000adad1
+ (id)_OSBuildTypeString;	// IMP=0x00000000000adaad
+ (id)_deviceString;	// IMP=0x00000000000ad9cc
+ (id)bagStorefrontPromiseForAccountMediaType:(id)arg1;	// IMP=0x00000000000ab76f
+ (id)bagStorefrontForAccountMediaType:(id)arg1;	// IMP=0x00000000000ab71d
+ (id)bagAccountPromiseForAccountMediaType:(id)arg1;	// IMP=0x00000000000ab5de
+ (id)bagAccountForAccountMediaType:(id)arg1;	// IMP=0x00000000000ab58c
- (void).cxx_destruct;	// IMP=0x00000000000aec20
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain, nonatomic) AMSURLSession *URLSession; // @synthesize URLSession=_URLSession;
@property(retain, nonatomic) NSString *profileVersion; // @synthesize profileVersion=_profileVersion;
@property(retain, nonatomic) NSString *profile; // @synthesize profile=_profile;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
- (id)_cookiesForNames:(id)arg1;	// IMP=0x00000000000ae4f6
- (void)_updateStorefrontSuffixIfNecessaryWithBagData:(id)arg1;	// IMP=0x00000000000ae0a7
- (_Bool)_shouldRetryForResult:(id)arg1 cookieNames:(id)arg2 urlCookies:(id)arg3 newStorefront:(id)arg4;	// IMP=0x00000000000adcbc
- (id)_createRequestWithCookieNames:(id)arg1 storefront:(id)arg2;	// IMP=0x00000000000ad1e2
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000ad170
- (id)performFetch;	// IMP=0x00000000000ac3cd
- (id)initWithClientInfo:(id)arg1 profile:(id)arg2 profileVersion:(id)arg3;	// IMP=0x00000000000ab3fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
