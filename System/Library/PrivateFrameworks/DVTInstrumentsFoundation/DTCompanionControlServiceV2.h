//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DTXConnectionServices/DTXService.h>

#import <DVTInstrumentsFoundation/DTCompanionControlServiceV2API-Protocol.h>

@class NSString;

@interface DTCompanionControlServiceV2 : DTXService <DTCompanionControlServiceV2API>
{
}

+ (void)registerCapabilities:(id)arg1;	// IMP=0x000000000000a239
+ (CDUnknownFunctionPointerType)dlsymFunc;	// IMP=0x000000000000a201
+ (void)setDlsymFunc:(CDUnknownFunctionPointerType)arg1;	// IMP=0x000000000000a1ca
- (id)terminateWatchAppForCompanionIdentifier:(id)arg1 options:(id)arg2;	// IMP=0x000000000000afb8
- (id)launchWatchAppForCompanionIdentifier:(id)arg1 options:(id)arg2;	// IMP=0x000000000000a809
- (id)willInstallWatchAppForCompanionIdentifier:(id)arg1;	// IMP=0x000000000000a403
- (id)_launchModeTranslationsMap;	// IMP=0x000000000000a2db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

