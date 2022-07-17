//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafari/SFPopoverSizingTableViewController.h>

@class UITableViewHeaderFooterView, UIView, _UIVisualEffectBackdropView;

__attribute__((visibility("hidden")))
@interface CompletionListTableViewController : SFPopoverSizingTableViewController
{
    _UIVisualEffectBackdropView *_headerBackdropCaptureView;	// 8 = 0x8
    double _keyboardBottomInset;	// 16 = 0x10
    UIView *_defaultHeaderFooterBackgroundView;	// 24 = 0x18
}

+ (id)tableViewCellForSizeEstimation;	// IMP=0x0000000000173f1a
- (void).cxx_destruct;	// IMP=0x000000000017443a
@property(readonly, nonatomic) UIView *defaultHeaderFooterBackgroundView; // @synthesize defaultHeaderFooterBackgroundView=_defaultHeaderFooterBackgroundView;
- (void)updateKeyboardBottomInsetFromKeyboardFrame:(struct CGRect)arg1;	// IMP=0x0000000000174091
- (void)keyboardDidChangeFrame:(id)arg1;	// IMP=0x0000000000173fe8
- (long long)maximumNumberOfRows;	// IMP=0x0000000000173fdd
- (long long)minimumNumberOfRows;	// IMP=0x0000000000173fd2
- (void)updateContentInsets;	// IMP=0x0000000000173ec9
@property(readonly, nonatomic) UITableViewHeaderFooterView *defaultHeaderFooterView;
- (void)viewIsAppearing:(_Bool)arg1;	// IMP=0x0000000000173d9d
- (void)viewDidLoad;	// IMP=0x0000000000173a76

@end
