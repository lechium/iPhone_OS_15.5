//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HFPinCodeManagerObserver-Protocol.h>
#import <HomeUI/HUPresentationDelegate-Protocol.h>

@class HFPinCodeManager, NSString;

@interface HUUsersAndGuestsPinCodeViewController <HUPresentationDelegate, HFPinCodeManagerObserver>
{
    HFPinCodeManager *_pinCodeManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000026b195
@property(nonatomic) __weak HFPinCodeManager *pinCodeManager; // @synthesize pinCodeManager=_pinCodeManager;
- (id)finishPresentation:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000026b10b
- (id)buildItemModuleControllerForModule:(id)arg1;	// IMP=0x000000000026b095
- (void)hideSpinner;	// IMP=0x000000000026af95
- (void)showSpinner;	// IMP=0x000000000026aedf
- (id)initWithSourceItem:(id)arg1 pinCodeManager:(id)arg2 home:(id)arg3 forAccessory:(id)arg4;	// IMP=0x000000000026adab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

