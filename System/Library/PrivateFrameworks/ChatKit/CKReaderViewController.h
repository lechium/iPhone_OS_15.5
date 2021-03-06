//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/UIWebViewDelegate-Protocol.h>

@class NSAttributedString, NSString, UITextView;
@protocol CKReaderViewControllerDelegate;

@interface CKReaderViewController : UIViewController <UIWebViewDelegate>
{
    id <CKReaderViewControllerDelegate> _delegate;	// 8 = 0x8
    NSString *_messageGUID;	// 16 = 0x10
    UITextView *_textView;	// 24 = 0x18
}

+ (id)readerScrollPositionCache;	// IMP=0x00000000004bb072
+ (id)readerViewControllerForChatItem:(id)arg1;	// IMP=0x00000000004baa77
- (void).cxx_destruct;	// IMP=0x00000000004bb9f4
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) NSString *messageGUID; // @synthesize messageGUID=_messageGUID;
@property(nonatomic) __weak id <CKReaderViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct _NSRange visibleRange; // @dynamic visibleRange;
@property(copy, nonatomic) NSAttributedString *text; // @dynamic text;
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x00000000004ba8e6
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000004ba864
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00000000004ba859
- (_Bool)shouldAutorotate;	// IMP=0x00000000004ba851
- (void)loadView;	// IMP=0x00000000004ba643
- (id)init;	// IMP=0x00000000004ba4b6
- (void)dealloc;	// IMP=0x00000000004ba441

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

