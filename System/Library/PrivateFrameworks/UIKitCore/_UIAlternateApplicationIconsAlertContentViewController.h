//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface _UIAlternateApplicationIconsAlertContentViewController
{
    UILabel *_messageLabel;	// 400 = 0x190
}

- (void).cxx_destruct;	// IMP=0x0000000000d06fa7
- (void)loadView;	// IMP=0x0000000000d069f7
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x0000000000d069b6
- (void)_updateWithContainingAlertControllerVisualStyle;	// IMP=0x0000000000d0696f
- (void)__updateWithVisualStyle:(id)arg1;	// IMP=0x0000000000d06897
- (void)_containingAlertControllerDidChangeVisualStyle:(id)arg1;	// IMP=0x0000000000d06829
@property(copy, nonatomic) NSString *messageText;

@end

