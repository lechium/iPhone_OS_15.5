//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSTimer;

__attribute__((visibility("hidden")))
@interface CNFRegAccountWebViewController
{
    _Bool _failedBagLoad;	// 56 = 0x38
    _Bool _listeningForBagLoad;	// 57 = 0x39
    NSTimer *_bagLoadTimer;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000042422
@property(nonatomic) _Bool failedBagLoad; // @synthesize failedBagLoad=_failedBagLoad;
- (id)authTokenHeaderValue;	// IMP=0x00000000000423fa
- (id)authIdHeaderValue;	// IMP=0x00000000000423f2
- (void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;	// IMP=0x00000000000423dd
- (void)doHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;	// IMP=0x00000000000423cb
- (void)cancelTapped;	// IMP=0x00000000000423b6
- (id)bagKey;	// IMP=0x000000000004239e
- (id)clientInfoHeaderValue;	// IMP=0x000000000004209c
- (id)interfaceLayoutHeaderValue;	// IMP=0x0000000000041fc2
- (id)serviceHeaderValue;	// IMP=0x0000000000041f53
- (id)pushTokenHeaderValue;	// IMP=0x0000000000041e84
- (id)securityHeaderValue;	// IMP=0x0000000000041e43
- (id)viewPortHeaderValue;	// IMP=0x0000000000041d96
- (id)_viewPortForNormalPresentation;	// IMP=0x0000000000041bd4
- (id)_viewPortForFormSheetPresentation;	// IMP=0x0000000000041bac
- (id)_nonModalParentController;	// IMP=0x0000000000041b47
- (id)_viewPortStringForSize:(struct CGSize)arg1;	// IMP=0x0000000000041aed
- (void)_showGenericErrorWithHandler;	// IMP=0x000000000004184d
- (void)_stopListeningForBagLoad;	// IMP=0x00000000000416e5
- (void)_startListeningForBagLoad;	// IMP=0x0000000000041576
- (void)_handleFTServerBagFinishedLoading;	// IMP=0x000000000004145d
- (void)_stopBagLoadTimer;	// IMP=0x000000000004141b
- (void)_startBagLoadTimer;	// IMP=0x00000000000413b8
- (void)_bagLoadTimeout:(id)arg1;	// IMP=0x0000000000041294
- (void)_showURLDidNotLoadAlert;	// IMP=0x0000000000040f32
- (_Bool)_loadURLFromBag;	// IMP=0x0000000000040cd3
- (void)_reloadDelayed;	// IMP=0x0000000000040c8d
- (void)_stopCurrentReload;	// IMP=0x0000000000040c67
- (void)_reload;	// IMP=0x0000000000040c30
- (_Bool)canSendURLRequest:(id)arg1;	// IMP=0x000000000004063c
- (void)setHeadersForRequest:(id)arg1;	// IMP=0x000000000004047b
- (_Bool)shouldSetHeadersForRequest:(id)arg1;	// IMP=0x000000000004043e
- (void)receivedStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;	// IMP=0x000000000004042c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000403eb
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000040396
- (id)logName;	// IMP=0x0000000000040389
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x000000000004037c
- (void)viewDidLoad;	// IMP=0x00000000000401ea
- (void)loadView;	// IMP=0x000000000003fe28
- (void)dealloc;	// IMP=0x000000000003fd87
- (id)initWithRegController:(id)arg1;	// IMP=0x000000000003fa67

@end
