//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface KTLogNetworkRequest
{
    NSString *_application;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000008ccdf
@property(retain) NSString *application; // @synthesize application=_application;
- (void)createRequestForAuthentication:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000008cca1
- (void)createRequestForAuthentication:(id)arg1 fetchAuthNow:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000008cb77
- (id)createGETRequestForURL:(id)arg1 timeout:(double)arg2 error:(id *)arg3;	// IMP=0x000000000008c9ee
- (id)initPOSTWithURL:(id)arg1 data:(id)arg2 uuid:(id)arg3 application:(id)arg4;	// IMP=0x000000000008c968
- (id)initGETWithURL:(id)arg1 application:(id)arg2;	// IMP=0x000000000008c8f6

@end
