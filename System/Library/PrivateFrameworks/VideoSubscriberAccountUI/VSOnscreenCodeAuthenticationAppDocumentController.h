//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideoSubscriberAccountUI/VSOnscreenCodeViewModelDelegate-Protocol.h>

@class IKViewElement, NSString;

__attribute__((visibility("hidden")))
@interface VSOnscreenCodeAuthenticationAppDocumentController <VSOnscreenCodeViewModelDelegate>
{
    IKViewElement *_buttonLockupViewElement;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000c878
@property(retain, nonatomic) IKViewElement *buttonLockupViewElement; // @synthesize buttonLockupViewElement=_buttonLockupViewElement;
- (_Bool)_updateViewModel:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000c72f
- (id)_newViewModel;	// IMP=0x000000000000c6fb
- (void)onscreenCodeViewModelButtonLockupPressed;	// IMP=0x000000000000c69b
- (_Bool)_updateOnscreenCodeViewModel:(id)arg1 withTemplate:(id)arg2;	// IMP=0x000000000000bcfb
- (_Bool)_updateOnscreenCodeViewModel:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000bc06
- (id)_onscreenCodeViewModelWithViewModel:(id)arg1;	// IMP=0x000000000000bb44

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

