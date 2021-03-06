//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

#import <DocumentManager/DOCViewServiceErrorViewDelegate-Protocol.h>

@class DOCViewServiceErrorView, NSString;
@protocol DOCViewServiceErrorViewControllerDelegate;

@interface DOCViewServiceErrorViewController : UIViewController <DOCViewServiceErrorViewDelegate>
{
    DOCViewServiceErrorView *_errorView;	// 8 = 0x8
    id <DOCViewServiceErrorViewControllerDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001effc
@property __weak id <DOCViewServiceErrorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapTryAgainInErrorView:(id)arg1;	// IMP=0x000000000001ef83
@property(retain, nonatomic) NSString *errorSubtitle;
@property(retain, nonatomic) NSString *errorTitle;
- (void)loadView;	// IMP=0x000000000001ed6e

@end

