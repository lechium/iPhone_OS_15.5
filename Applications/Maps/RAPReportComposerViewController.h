//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, RAPReport, UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface RAPReportComposerViewController
{
    RAPReport *_report;	// 8 = 0x8
    CDUnknownBlockType _completion;	// 16 = 0x10
    _Bool _shouldInstrumentPrivacyCancelOnNextBackAction;	// 24 = 0x18
    UIActivityIndicatorView *_sendSpinner;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000089e842
@property(readonly, nonatomic) RAPReport *report; // @synthesize report=_report;
- (void)returnFromViewController:(id)arg1;	// IMP=0x001000000089e64d
- (void)segueToViewController:(id)arg1 afterReturningFromViewController:(id)arg2;	// IMP=0x001000000089e54e
- (void)segueToViewController:(id)arg1;	// IMP=0x001000000089e537
- (void)_cancelWithAnalyticsTarget:(int)arg1;	// IMP=0x001000000089e4f6
- (void)_sendWithFinalOutcome:(long long)arg1 acknowledgementOptions:(id)arg2;	// IMP=0x001000000089d909
- (void)_invokeCompletionWithOutcome:(long long)arg1;	// IMP=0x001000000089d8ce
- (id)popViewControllerAnimated:(_Bool)arg1;	// IMP=0x001000000089d785
- (void)_exitCommentCorrections;	// IMP=0x001000000089d755
- (void)_exitCuratedCollections;	// IMP=0x001000000089d725
- (void)_exitPlaceCorrections;	// IMP=0x001000000089d6f2
- (void)_exitMunin;	// IMP=0x001000000089d6bf
- (void)_capturePrivacyBackActionIfNeeded;	// IMP=0x001000000089d617
- (void)_handlePrivacyCancelledNotification:(id)arg1;	// IMP=0x001000000089d5a7
- (void)_registerForPrivacyNotification;	// IMP=0x001000000089d538
- (id)_cancelButtonWithSelector:(SEL)arg1;	// IMP=0x001000000089d483
- (id)initWithReport:(id)arg1 commentQuestion:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000089d184
- (id)initWithReport:(id)arg1 curatedCollectionQuestion:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000089cd69
- (id)initWithReport:(id)arg1 muninQuestion:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000089ca28
- (id)initWithReport:(id)arg1 placecardQuestion:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000089c6c8
- (id)initWithReport:(id)arg1 categoryQuestion:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000089c3fa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
