//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HFPinCodeManagerObserver-Protocol.h>
#import <HomeUI/HUPresentationDelegate-Protocol.h>

@class HFPinCodeManager, NSString;

@interface HUGuestsPinCodesViewController <HUPresentationDelegate, HFPinCodeManagerObserver>
{
    HFPinCodeManager *_pinCodeManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003cd72e
@property(nonatomic) __weak HFPinCodeManager *pinCodeManager; // @synthesize pinCodeManager=_pinCodeManager;
- (id)finishPresentation:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000003cd6a4
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000003cd51a
- (id)buildItemModuleControllerForModule:(id)arg1;	// IMP=0x00000000003cd4a4
- (void)hideSpinner;	// IMP=0x00000000003cd3a4
- (void)showSpinner;	// IMP=0x00000000003cd2ee
- (id)initWithPinCodeManager:(id)arg1;	// IMP=0x00000000003cd1f9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

