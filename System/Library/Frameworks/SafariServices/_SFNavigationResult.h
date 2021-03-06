//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LSApplicationProxy, NSURL, WBSAppLink;

@interface _SFNavigationResult : NSObject
{
    _Bool _loadWasUserDriven;	// 8 = 0x8
    LSApplicationProxy *_externalApplication;	// 16 = 0x10
    long long _externalApplicationCategory;	// 24 = 0x18
    long long _type;	// 32 = 0x20
    NSURL *_URL;	// 40 = 0x28
    WBSAppLink *_appLink;	// 48 = 0x30
}

+ (void)determineResultOfLoadingRequest:(id)arg1 isMainFrame:(_Bool)arg2 disallowRedirectToExternalApps:(_Bool)arg3 preferredApplicationBundleIdentifier:(id)arg4 redirectDecisionHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000155fc0
+ (id)resultOfLoadingRequest:(id)arg1 isMainFrame:(_Bool)arg2 disallowRedirectToExternalApps:(_Bool)arg3 preferredApplicationBundleIdentifier:(id)arg4 redirectDecisionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000155909
+ (id)resultWithAppLink:(id)arg1;	// IMP=0x000000000015585d
+ (id)resultWithRedirectToExternalURL:(id)arg1 preferredApplicationBundleIdentifier:(id)arg2;	// IMP=0x0000000000155665
+ (id)resultOfType:(long long)arg1 withURL:(id)arg2;	// IMP=0x0000000000155607
- (void).cxx_destruct;	// IMP=0x000000000015635b
@property(nonatomic) _Bool loadWasUserDriven; // @synthesize loadWasUserDriven=_loadWasUserDriven;
@property(readonly, nonatomic) WBSAppLink *appLink; // @synthesize appLink=_appLink;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) long long externalApplicationCategory; // @synthesize externalApplicationCategory=_externalApplicationCategory;
@property(readonly, nonatomic) LSApplicationProxy *externalApplication; // @synthesize externalApplication=_externalApplication;
- (_Bool)shouldPromptWithPolicy:(long long)arg1 telephonyNavigationPolicy:(id)arg2 userAction:(id)arg3 inBackground:(_Bool)arg4;	// IMP=0x0000000000155443
@property(readonly, nonatomic) _Bool isRedirectToAppleServices;
@property(readonly, nonatomic) _Bool appliesOneTimeUserInitiatedActionPolicy;
- (id)_initWithType:(long long)arg1 URL:(id)arg2 externalApplication:(id)arg3 appLink:(id)arg4;	// IMP=0x000000000015523d

@end

