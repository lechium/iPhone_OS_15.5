//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol COSBuddyControllerDelegate;

@interface COSTinkerWaitForSignInResultsController
{
    id <COSBuddyControllerDelegate> _waitDelegate;	// 8 = 0x8
    long long _currentStatus;	// 16 = 0x10
}

+ (_Bool)controllerNeedsToRun;	// IMP=0x00200000000921ab
- (void).cxx_destruct;	// IMP=0x0020000000092f09
@property(nonatomic) long long currentStatus; // @synthesize currentStatus=_currentStatus;
@property(nonatomic) __weak id <COSBuddyControllerDelegate> waitDelegate; // @synthesize waitDelegate=_waitDelegate;
- (id)holdActivityIdentifier;	// IMP=0x0010000000092ead
- (_Bool)controllerAllowsNavigatingBackTo;	// IMP=0x0010000000092ea5
- (id)localizedWaitScreenDescription;	// IMP=0x0010000000092d3e
- (void)setDelegate:(id)arg1;	// IMP=0x0010000000092d2a
- (double)waitScreenPushGracePeriod;	// IMP=0x0010000000092d21
- (_Bool)holdWithWaitScreen;	// IMP=0x0010000000092d19
- (void)popToWaitForCDPCompletionController;	// IMP=0x0010000000092868
- (void)didPushWaitScreen;	// IMP=0x00100000000921bb
- (_Bool)holdBeforeDisplaying;	// IMP=0x00100000000921b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
