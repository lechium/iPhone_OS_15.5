//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/BSTransactionObserver-Protocol.h>

@class NSString, SBRotateScenesWorkspaceTransaction;

@interface SBActivateAppClipFromPlaceholderWorkspaceTransaction <BSTransactionObserver>
{
    SBRotateScenesWorkspaceTransaction *_rotateScenesTransaction;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000006bb303
- (unsigned long long)_concurrentOverlayDismissalOptions;	// IMP=0x00000000006bb2fb
- (unsigned long long)_serialOverlayPreDismissalOptions;	// IMP=0x00000000006bb2f3
- (void)transactionDidComplete:(id)arg1;	// IMP=0x00000000006bb28d
- (void)_begin;	// IMP=0x00000000006baefd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

