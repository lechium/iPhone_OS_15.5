//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUI/_TtP10WorkflowUI43AddToSiriSwiftHostingViewControllerDelegate_-Protocol.h>

@class WFDatabase, WFWorkflow, _TtC10WorkflowUI35AddToSiriSwiftHostingViewController;
@protocol WFAddToSiriViewControllerDelegate;

@interface WFAddToSiriViewController : UIViewController <_TtP10WorkflowUI43AddToSiriSwiftHostingViewControllerDelegate_>
{
    id <WFAddToSiriViewControllerDelegate> _delegate;	// 8 = 0x8
    WFWorkflow *_workflow;	// 16 = 0x10
    WFDatabase *_database;	// 24 = 0x18
    _TtC10WorkflowUI35AddToSiriSwiftHostingViewController *_hostedAddToSiriController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001bd7f6
@property(retain, nonatomic) _TtC10WorkflowUI35AddToSiriSwiftHostingViewController *hostedAddToSiriController; // @synthesize hostedAddToSiriController=_hostedAddToSiriController;
@property(retain, nonatomic) WFDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
@property(nonatomic) __weak id <WFAddToSiriViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)addToSiriWithViewController:(id)arg1 savedShortcut:(id)arg2;	// IMP=0x00000000001bd6ab
- (void)addToSiriWithViewController:(id)arg1 deletedShortcut:(id)arg2;	// IMP=0x00000000001bd5e8
- (void)addToSiriWithViewController:(id)arg1 createdShortcut:(id)arg2;	// IMP=0x00000000001bd525
- (void)addToSiriDidCancelWithViewController:(id)arg1;	// IMP=0x00000000001bd4d9
- (void)viewDidLoad;	// IMP=0x00000000001bcfb3
- (id)initWithWorkflow:(id)arg1 database:(id)arg2;	// IMP=0x00000000001bcefe

@end

