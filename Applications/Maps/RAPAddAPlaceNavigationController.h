//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface RAPAddAPlaceNavigationController
{
    _Bool _shouldInstrumentPrivacyCancelOnNextBackAction;	// 8 = 0x8
}

- (void)dealloc;	// IMP=0x0020000000a7329f
- (void)_capturePrivacyBackActionIfNeeded;	// IMP=0x0010000000a7325c
- (void)_handlePrivacyCancelledNotification:(id)arg1;	// IMP=0x0010000000a731ec
- (void)_registerForPrivacyNotification;	// IMP=0x0010000000a73188
- (id)popViewControllerAnimated:(_Bool)arg1;	// IMP=0x0010000000a73040
- (void)viewDidLoad;	// IMP=0x0010000000a72ffc
- (id)init;	// IMP=0x0010000000a72fa5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
