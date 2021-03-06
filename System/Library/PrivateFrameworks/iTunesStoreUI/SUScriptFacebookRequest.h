//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL, SLRequest, SUScriptAppleAccount;

@interface SUScriptFacebookRequest
{
    SLRequest *_request;	// 72 = 0x48
    long long _requestMethod;	// 80 = 0x50
    SUScriptAppleAccount *_scriptAccount;	// 88 = 0x58
    NSURL *_url;	// 96 = 0x60
}

+ (void)initialize;	// IMP=0x000000000010f5a1
+ (id)webScriptNameForSelector:(SEL)arg1;	// IMP=0x000000000010f4d8
+ (id)webScriptNameForKeyName:(id)arg1;	// IMP=0x000000000010f484
- (id)scriptAttributeKeys;	// IMP=0x000000000010f53e
- (id)attributeKeys;	// IMP=0x000000000010f52c
- (void)_performRequest:(id)arg1 withScriptFunction:(id)arg2;	// IMP=0x000000000010f359
- (_Bool)_isRequestAllowed:(id *)arg1;	// IMP=0x000000000010f2c9
@property(readonly) long long requestMethodPost;
@property(readonly) long long requestMethodGet;
@property(readonly) long long requestMethodDelete;
- (void)setParameters:(id)arg1;	// IMP=0x000000000010f159
- (void)performRequestWithFunction:(id)arg1;	// IMP=0x000000000010efea
- (void)addParameterWithKey:(id)arg1 value:(id)arg2;	// IMP=0x000000000010eefa
- (void)addMultiPartData:(id)arg1 withName:(id)arg2 type:(id)arg3;	// IMP=0x000000000010ecae
@property(readonly, copy) NSURL *URL;
@property(retain) SUScriptAppleAccount *account;
@property(readonly) long long requestMethod;
- (id)_className;	// IMP=0x000000000010eafe
- (void)dealloc;	// IMP=0x000000000010ea3f
- (id)initWithURL:(id)arg1 requestMethod:(id)arg2;	// IMP=0x000000000010e8c5

@end

