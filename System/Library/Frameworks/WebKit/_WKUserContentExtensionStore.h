//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString, WKContentRuleListStore;

@interface _WKUserContentExtensionStore : NSObject <WKObject>
{
    struct RetainPtr<WKContentRuleListStore> _contentRuleListStore;	// 8 = 0x8
}

+ (id)storeWithURL:(id)arg1;	// IMP=0x00000000002ebfbf
+ (id)defaultStore;	// IMP=0x00000000002ebf6d
- (id).cxx_construct;	// IMP=0x00000000002ec32c
- (void).cxx_destruct;	// IMP=0x00000000002ec30c
@property(readonly) struct Object *_apiObject;
- (void)removeContentExtensionForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002ec27f
- (void)lookupContentExtensionForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002ec19e
- (void)compileContentExtensionForIdentifier:(id)arg1 encodedContentExtension:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002ec020
@property(readonly, nonatomic) WKContentRuleListStore *_contentRuleListStore;
- (id)_initWithWKContentRuleListStore:(id)arg1;	// IMP=0x00000000002ec369
- (void)_invalidateContentExtensionVersionForIdentifier:(id)arg1;	// IMP=0x00000000002ec353
- (void)_removeAllContentExtensions;	// IMP=0x00000000002ec33d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

