//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreServices/NSSecureCoding-Protocol.h>

@class LSApplicationProxy, LSApplicationRecord, NSDictionary, NSURL;

@interface LSAppLink : NSObject <NSSecureCoding>
{
    NSURL *_URL;	// 8 = 0x8
    LSApplicationProxy *_targetApplicationProxy;	// 16 = 0x10
    LSApplicationRecord *_targetApplicationRecord;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000043967
+ (_Bool)areEnabledByDefault;	// IMP=0x00000000000434cb
+ (void)afterAppLinksBecomeAvailableForURL:(id)arg1 limit:(unsigned long long)arg2 performBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000432f7
+ (void)getAppLinksWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000043159
+ (void)getAppLinkWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000042edb
+ (id)appLinksWithURL:(id)arg1 limit:(unsigned long long)arg2 includeLinksForCurrentApplication:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000042c52
+ (id)appLinksWithURL:(id)arg1 limit:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000042c2a
+ (_Bool)auditTokenHasWriteAccess:(CDStruct_4c969caf)arg1;	// IMP=0x0000000000043d93
+ (_Bool)currentProcessHasWriteAccess;	// IMP=0x0000000000043d42
+ (_Bool)auditTokenHasReadAccess:(CDStruct_4c969caf)arg1;	// IMP=0x0000000000043cf9
+ (_Bool)currentProcessHasReadAccess;	// IMP=0x0000000000043ca8
+ (_Bool)setSettingsSwitchState:(long long)arg1 forApplicationIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000043dc7
+ (long long)settingsSwitchStateForApplicationIdentifier:(id)arg1;	// IMP=0x0000000000043dad
+ (void)openWithURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004405d
+ (void)openWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000043df9
+ (_Bool)removeAllSettingsReturningError:(id *)arg1;	// IMP=0x00000000000443c6
+ (void)_openAppLink:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000045d86
+ (void)_openWithAppLink:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004570c
+ (id)_appLinkWithURL:(id)arg1 applicationRecord:(id)arg2 plugInClass:(Class)arg3;	// IMP=0x0000000000045530
+ (id)_appLinksWithState:(id)arg1 context:(struct LSContext *)arg2 limit:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x00000000000451b6
+ (_Bool)_URLIsValidForAppLinks:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000045118
+ (id)_dispatchQueue;	// IMP=0x0000000000045097
+ (id)_appLinksWithState:(id)arg1 context:(struct LSContext *)arg2 limit:(unsigned long long)arg3 URLComponents:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000046717
+ (_Bool)URLComponentsAreValidForAppLinks:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000046443
- (void).cxx_destruct;	// IMP=0x0000000000043c75
@property(retain) LSApplicationRecord *targetApplicationRecord; // @synthesize targetApplicationRecord=_targetApplicationRecord;
@property(readonly) LSApplicationProxy *targetApplicationProxy; // @synthesize targetApplicationProxy=_targetApplicationProxy;
@property(copy) NSURL *URL; // @synthesize URL=_URL;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000043a51
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004396f
- (id)debugDescription;	// IMP=0x000000000004385c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000436a4
- (unsigned long long)hash;	// IMP=0x00000000000435f0
- (_Bool)setEnabled:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00000000000435a1
@property(nonatomic, getter=isEnabled) _Bool enabled; // @dynamic enabled;
- (void)openWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000043e11
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000043de1
- (_Bool)removeSettingsReturningError:(id *)arg1;	// IMP=0x0000000000044377
- (_Bool)setBrowserSettings:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000044328
@property(retain, nonatomic) NSDictionary *browserSettings;
- (void)openInWebBrowser:(_Bool)arg1 setOpenStrategy:(long long)arg2 webBrowserState:(id)arg3 configuration:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000044459
- (void)openInWebBrowser:(_Bool)arg1 setOpenStrategy:(long long)arg2 webBrowserState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000044437
- (void)openInWebBrowser:(_Bool)arg1 setAppropriateOpenStrategyAndWebBrowserState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000044414
@property long long openStrategy; // @dynamic openStrategy;
- (id)_userActivityWithState:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000046c4c

@end
