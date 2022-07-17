//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSOperationQueue, VSDevice, VSOptional, VSPreferences;

__attribute__((visibility("hidden")))
@interface VSSetupFlowPreparationOperation : VSAsyncOperation
{
    VSOptional *_storage;	// 8 = 0x8
    VSOptional *_result;	// 16 = 0x10
    NSOperationQueue *_privateQueue;	// 24 = 0x18
    VSPreferences *_preferences;	// 32 = 0x20
    VSDevice *_currentDevice;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000005ef63
@property(retain, nonatomic) VSDevice *currentDevice; // @synthesize currentDevice=_currentDevice;
@property(retain, nonatomic) VSPreferences *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
@property(retain, nonatomic) VSOptional *storage; // @synthesize storage=_storage;
- (void)executionDidBegin;	// IMP=0x000000000005ee98
- (void)_checkForSupportedAppsButtonWithFlow:(id)arg1;	// IMP=0x000000000005ea26
- (void)_checkForSupportedAppsButton;	// IMP=0x000000000005e976
- (void)_resolveBundleIDs:(id)arg1 forFlow:(id)arg2;	// IMP=0x000000000005e642
- (void)_getPersonalAppDescriptions:(id)arg1 identityProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000005e290
- (void)_checkForSupportedAppsFromProvider:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000005d94e
- (void)prepareSTBSetupForAccount:(id)arg1 forProvider:(id)arg2;	// IMP=0x000000000005d839
- (void)_fetchProviderForAccount:(id)arg1;	// IMP=0x000000000005d30b
- (void)_fetchAllProviders;	// IMP=0x000000000005c9d3
- (void)_loadProviderAppDescriptionWithFlow:(id)arg1;	// IMP=0x000000000005c2fd
- (void)_fetchAllProvidersIfNeeded;	// IMP=0x000000000005bf80
- (void)_getSTBProviderFromAllProviders:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005bb71
- (void)_checkForExistingAccounts;	// IMP=0x000000000005b806
- (void)_checkAvailability;	// IMP=0x000000000005b58f
- (void)_checkPreferences;	// IMP=0x000000000005b49c
- (_Bool)_isInSTBMode;	// IMP=0x000000000005b458
- (void)_finishWithFlow:(id)arg1;	// IMP=0x000000000005b332
- (void)_finishWithError:(id)arg1;	// IMP=0x000000000005b248
- (id)init;	// IMP=0x000000000005b14e

@end
