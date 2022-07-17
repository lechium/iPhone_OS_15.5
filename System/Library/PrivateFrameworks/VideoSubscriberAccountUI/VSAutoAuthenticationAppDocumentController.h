//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideoSubscriberAccountUI/VSAutoAuthenticationViewModelDelegate-Protocol.h>

@class IKViewElement, NSString;

__attribute__((visibility("hidden")))
@interface VSAutoAuthenticationAppDocumentController <VSAutoAuthenticationViewModelDelegate>
{
    IKViewElement *_buttonLockupElement;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001e217
@property(retain, nonatomic) IKViewElement *buttonLockupElement; // @synthesize buttonLockupElement=_buttonLockupElement;
- (_Bool)_updateAutoAuthenticationViewModel:(id)arg1 withTemplate:(id)arg2;	// IMP=0x000000000001d9db
- (_Bool)_updateAutoAuthenticationViewModel:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001d8e6
- (id)_autoAuthenticationViewModelWithViewModel:(id)arg1;	// IMP=0x000000000001d824
- (void)autoAuthenticationViewModelDidManualSignInButton:(id)arg1;	// IMP=0x000000000001d792
- (_Bool)_updateViewModel:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001d66e
- (id)_newViewModel;	// IMP=0x000000000001d63a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
