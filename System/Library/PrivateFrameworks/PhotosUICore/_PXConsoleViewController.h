//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class UIBarButtonItem, UITextView;

@interface _PXConsoleViewController : UIViewController
{
    _Bool _toolBarWasHidden;	// 8 = 0x8
    UITextView *__textView;	// 16 = 0x10
    UIBarButtonItem *__shareBarButtonItem;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000271d2e
@property(readonly, nonatomic) UIBarButtonItem *_shareBarButtonItem; // @synthesize _shareBarButtonItem=__shareBarButtonItem;
@property(nonatomic) _Bool toolBarWasHidden; // @synthesize toolBarWasHidden=_toolBarWasHidden;
- (void)_presentSharingViewController:(id)arg1;	// IMP=0x0000000000271b8d
@property(readonly, nonatomic) UITextView *_textView; // @synthesize _textView=__textView;
- (void)appendOutput:(id)arg1;	// IMP=0x00000000002719ee
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000271966
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000002718a9
- (void)loadView;	// IMP=0x00000000002717b1
- (id)init;	// IMP=0x0000000000271685

@end

