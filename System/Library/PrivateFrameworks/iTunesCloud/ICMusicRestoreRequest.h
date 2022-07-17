//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICMediaRedownloadResponse, ICMusicRestoreRequestParameters, ICStoreRequestContext, ICStoreURLRequest;

@interface ICMusicRestoreRequest
{
    ICStoreRequestContext *_requestContext;	// 8 = 0x8
    ICStoreURLRequest *_storeURLRequest;	// 16 = 0x10
    ICMediaRedownloadResponse *_response;	// 24 = 0x18
    ICMusicRestoreRequestParameters *_requestParameters;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000094cf9
- (id)_serializedBodyDataWithAccountID:(id)arg1;	// IMP=0x000000000009487d
- (void)cancel;	// IMP=0x0000000000094800
- (void)execute;	// IMP=0x0000000000094657
- (void)performRestoreRequestWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000945c5
- (id)initWithRequestContext:(id)arg1 parameters:(id)arg2;	// IMP=0x0000000000094523

@end
