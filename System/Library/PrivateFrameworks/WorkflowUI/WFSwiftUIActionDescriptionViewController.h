//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUI/WFActionDrawerDelegate-Protocol.h>

@class MISSING_TYPE;
@protocol WFSwiftUIActionDescriptionViewControllerDelegate;

@interface WFSwiftUIActionDescriptionViewController : UIViewController <WFActionDrawerDelegate>
{
    MISSING_TYPE *action;	// 8 = 0x8
    MISSING_TYPE *delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000010a610
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000010a5b0
- (void)appendAction:(id)arg1;	// IMP=0x000000000010a460
- (void)viewDidLoad;	// IMP=0x000000000010a3e0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000010a0e0
- (id)initWithAction:(id)arg1;	// IMP=0x0000000000109fd0
@property(nonatomic) __weak id <WFSwiftUIActionDescriptionViewControllerDelegate> delegate; // @synthesize delegate;

@end

