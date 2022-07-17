//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SSLookupRequest;

@interface SUScriptLookupRequest
{
    SSLookupRequest *_request;	// 72 = 0x48
}

+ (void)initialize;	// IMP=0x000000000011f0f5
+ (id)webScriptNameForSelector:(SEL)arg1;	// IMP=0x000000000011f02c
+ (id)webScriptNameForKeyName:(id)arg1;	// IMP=0x000000000011efd8
- (id)scriptAttributeKeys;	// IMP=0x000000000011f092
- (id)attributeKeys;	// IMP=0x000000000011f080
@property(readonly) long long localizationStyleServer;
@property(readonly) long long localizationStyleDevice;
@property long long localizationStyle;
@property(copy) NSString *keyProfile;
@property(retain) id authenticatesIfNeeded;
- (id)_className;	// IMP=0x000000000011ed43
- (id)valueForRequestParameter:(id)arg1;	// IMP=0x000000000011ec85
- (void)startWithLookupFunction:(id)arg1;	// IMP=0x000000000011ea1e
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;	// IMP=0x000000000011e7ee
- (void)dealloc;	// IMP=0x000000000011e7ac
- (id)init;	// IMP=0x000000000011e759

@end
