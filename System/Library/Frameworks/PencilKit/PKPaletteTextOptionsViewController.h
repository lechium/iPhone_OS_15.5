//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@protocol PKPaletteTextOptionsViewControllerDelegate;

@interface PKPaletteTextOptionsViewController : UIViewController
{
    id <PKPaletteTextOptionsViewControllerDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000f7310
@property(nonatomic) __weak id <PKPaletteTextOptionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_signatureButtonTouchUpInsideHandler:(id)arg1;	// IMP=0x00000000000f7292
- (void)_textButtonTouchUpInsideHandler:(id)arg1;	// IMP=0x00000000000f7241
- (struct CGSize)preferredContentSize;	// IMP=0x00000000000f722b
- (void)loadView;	// IMP=0x00000000000f6e40

@end
