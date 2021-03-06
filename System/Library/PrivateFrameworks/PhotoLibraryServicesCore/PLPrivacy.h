//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PLAssetsdPrivacySupportClient;
@protocol OS_dispatch_queue;

@interface PLPrivacy : NSObject
{
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 16 = 0x10
    long long _authRightFullAccess;	// 24 = 0x18
    long long _authRightAddOnly;	// 32 = 0x20
    PLAssetsdPrivacySupportClient *_privacySupportClient;	// 40 = 0x28
    _Bool _hasHandledLimitedLibraryReprompt;	// 48 = 0x30
    _Bool _limitedLibrarySupported;	// 49 = 0x31
}

+ (id)_logDictionaryFromPhotosPickerClientLogFile:(id)arg1;	// IMP=0x0000000000077816
+ (_Bool)_isLimitedLibrarySupportedInClient;	// IMP=0x000000000007780e
+ (id)sharedInstance;	// IMP=0x00000000000777de
- (void).cxx_destruct;	// IMP=0x00000000000770bf
@property(nonatomic, getter=isLimitedLibrarySupported) _Bool limitedLibrarySupported; // @synthesize limitedLibrarySupported=_limitedLibrarySupported;
@property _Bool hasHandledLimitedLibraryReprompt; // @synthesize hasHandledLimitedLibraryReprompt=_hasHandledLimitedLibraryReprompt;
- (id)photosPickerPresentedLibraryLogForClient:(id)arg1;	// IMP=0x000000000007703b
- (id)photosPickerPresentedLibraryLogsByClient;	// IMP=0x0000000000076fb2
- (void)logPhotosPickerPresentedLibraryForClient:(id)arg1;	// IMP=0x0000000000076f56
- (void)logPhotosAccessWithSelfAuditToken;	// IMP=0x0000000000076f50
- (void)logPhotosAccessWithPhotoPickerClientIdentification:(id)arg1;	// IMP=0x0000000000076e63
- (void)logPhotosAccessWithClientAuthorization:(id)arg1;	// IMP=0x0000000000076d2c
- (void)requestLimitedLibraryPromptForApplicationIdentifier:(id)arg1;	// IMP=0x0000000000076b9f
- (void)presentAsyncPromptForLimitedLibraryPickerIfNeeded;	// IMP=0x0000000000076abc
- (long long)photosAccessAllowedWithScope:(long long)arg1 auditToken:(CDStruct_4c969caf)arg2 clientAuthorization:(id)arg3;	// IMP=0x0000000000076a25
- (long long)photosAccessAllowedWithScope:(long long)arg1;	// IMP=0x0000000000076978
- (long long)checkPhotosAccessAllowedWithScope:(long long)arg1;	// IMP=0x00000000000768c8
- (void)checkPhotosAccessAllowedWithScope:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000768ab
- (void)_isPhotosAccessAllowedWithScope:(long long)arg1 promptIfUnknown:(_Bool)arg2 synchronous:(_Bool)arg3 resultHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000767ff
- (void)_checkAuthStatusForPhotosAccessScope:(long long)arg1 promptIfUnknown:(_Bool)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000763a5
- (long long)_authStatusForScope:(long long)arg1;	// IMP=0x00000000000761ef
- (void)_setAuthStatus:(long long)arg1 scope:(long long)arg2;	// IMP=0x00000000000761d0
- (void)_resolvePreflightStatusForScope:(long long)arg1;	// IMP=0x0000000000076108
- (id)init;	// IMP=0x0000000000076040

@end

