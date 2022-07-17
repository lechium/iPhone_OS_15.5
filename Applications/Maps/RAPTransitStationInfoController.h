//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, RAPMapFeaturePickerViewController, RAPReport, RAPTransitStationInfoQuestion, UIActivityIndicatorView, UIBarButtonItem, UIViewController;
@protocol RAPPresentingViewController;

__attribute__((visibility("hidden")))
@interface RAPTransitStationInfoController : NSObject
{
    UIViewController<RAPPresentingViewController> *_owner;	// 8 = 0x8
    RAPReport *_report;	// 16 = 0x10
    CDUnknownBlockType _completion;	// 24 = 0x18
    RAPMapFeaturePickerViewController *_mapPicker;	// 32 = 0x20
    UIBarButtonItem *_nextBarItem;	// 40 = 0x28
    UIBarButtonItem *_spinnerBarItem;	// 48 = 0x30
    UIActivityIndicatorView *_spinner;	// 56 = 0x38
    _Bool _shouldProceedAfterLoading;	// 64 = 0x40
    NSError *_lastDisplayedError;	// 72 = 0x48
    RAPTransitStationInfoQuestion *_question;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000005fd065
@property(readonly, nonatomic) RAPTransitStationInfoQuestion *question; // @synthesize question=_question;
- (void)_proceedToIssues;	// IMP=0x00100000005fcf17
- (void)_next;	// IMP=0x00100000005fcebb
- (void)_mapPickerSelectionDidChange;	// IMP=0x00100000005fce40
- (void)present;	// IMP=0x00100000005fcb5c
- (id)_spinnerBarItem;	// IMP=0x00100000005fcab9
- (void)_updateSpinner;	// IMP=0x00100000005fca76
- (id)_nextBarItem;	// IMP=0x00100000005fc99c
- (void)_updateNextBarItem;	// IMP=0x00100000005fc946
- (void)_endLoadingModally;	// IMP=0x00100000005fc89e
- (void)_beginLoadingModally;	// IMP=0x00100000005fc7f9
- (void)_update;	// IMP=0x00100000005fc567
- (id)initWithOwner:(id)arg1 report:(id)arg2 question:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000005fc41a

@end
