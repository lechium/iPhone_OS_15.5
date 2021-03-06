//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CarAlertButtonView;

__attribute__((visibility("hidden")))
@interface CarAlertButtonViewController : UIViewController
{
    CarAlertButtonView *_contentView;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000078c3cb
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000078c2e0
- (void)_dismissAlertController;	// IMP=0x001000000078c29e
- (void)_handleTouch:(id)arg1;	// IMP=0x001000000078c262
- (void)loadView;	// IMP=0x001000000078c15b
- (struct CGSize)preferredContentSize;	// IMP=0x001000000078c145
- (id)initWithTitle:(id)arg1 image:(id)arg2;	// IMP=0x001000000078c093

@end

