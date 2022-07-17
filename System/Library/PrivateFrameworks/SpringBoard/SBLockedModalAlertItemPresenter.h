//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBAlertItemPresenter-Protocol.h>
#import <SpringBoard/SBLockScreenActionProvider-Protocol.h>

@class NSString, SBSharedModalAlertItemPresenter;

@interface SBLockedModalAlertItemPresenter : NSObject <SBAlertItemPresenter, SBLockScreenActionProvider>
{
    SBSharedModalAlertItemPresenter *_modalAlertPresenter;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000006e4361
- (id)lockScreenActionContext;	// IMP=0x000000000009b9ce
- (void)dismissAlertItem:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000006e42b5
- (void)presentAlertItem:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000006e4067
- (_Bool)canPresentMultipleAlertItemsSimultaneously;	// IMP=0x00000000006e405f
- (_Bool)presentsAlertItemsModally;	// IMP=0x00000000006e4057
- (id)initWithSharedModalAlertItemPresenter:(id)arg1;	// IMP=0x00000000006e3fec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
