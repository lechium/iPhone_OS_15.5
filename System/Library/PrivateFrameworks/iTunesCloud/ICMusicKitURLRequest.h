//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICMusicKitRequestContext, ICStoreURLRequest, NSDictionary, NSString;

@interface ICMusicKitURLRequest
{
    ICStoreURLRequest *_pendingEquivalentStoreURLRequest;	// 8 = 0x8
    NSString *_cachedDescription;	// 16 = 0x10
    NSString *_developerToken;	// 24 = 0x18
    NSDictionary *_additionalHTTPCookies;	// 32 = 0x20
}

+ (Class)_responseHandlerClass;	// IMP=0x000000000019233b
+ (Class)_responseClass;	// IMP=0x000000000019232a
+ (unsigned long long)_defaultMaxRetryCountForReason:(id)arg1;	// IMP=0x000000000019226d
- (void).cxx_destruct;	// IMP=0x000000000019154b
@property(copy, nonatomic) NSDictionary *additionalHTTPCookies; // @synthesize additionalHTTPCookies=_additionalHTTPCookies;
@property(readonly, copy, nonatomic) NSString *_developerToken; // @synthesize _developerToken;
- (void)_updateURLSessionManagedPropertiesForEquivalentStoreURLRequest:(id)arg1;	// IMP=0x00000000001913ea
- (void)_buildUserTokenBasedMusicKitURLRequestWithBaseURLRequest:(id)arg1 developerToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000190f67
- (void)_buildEquivalentStoreURLRequestWithDeveloperToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000190b29
- (void)_buildMusicKitURLRequestWithBaseURLRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001909cd
@property(readonly, copy, nonatomic) ICMusicKitRequestContext *requestContext;
- (void)buildURLRequestWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001908c2
- (id)description;	// IMP=0x0000000000190828
- (id)_description;	// IMP=0x0000000000190759
@property(readonly, nonatomic) ICStoreURLRequest *_pendingEquivalentStoreURLRequest;
- (void)_setDeveloperToken:(id)arg1;	// IMP=0x00000000001906ca
- (id)initWithURLRequest:(id)arg1 requestContext:(id)arg2 resumeData:(id)arg3;	// IMP=0x00000000001905ab
- (id)initWithURLRequest:(id)arg1 requestContext:(id)arg2;	// IMP=0x0000000000190596
- (id)initWithURL:(id)arg1 requestContext:(id)arg2;	// IMP=0x000000000019050d

@end
