//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <WorkflowEditor/WFDrawerPaneHeaderView-Protocol.h>

@class NSString, WFDrawerPaneCloseButton;
@protocol WFDrawerPaneHeaderViewDelegate;

@interface WFDrawerPaneCustomTitleHeaderView : UIView <WFDrawerPaneHeaderView>
{
    id <WFDrawerPaneHeaderViewDelegate> _delegate;	// 8 = 0x8
    UIView *_titleView;	// 16 = 0x10
    WFDrawerPaneCloseButton *_closeButton;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002b0410
@property(readonly, nonatomic) __weak WFDrawerPaneCloseButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) __weak UIView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak id <WFDrawerPaneHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)closeButtonTouchedUp:(id)arg1;	// IMP=0x00000000002b0335
- (id)layoutConstraints;	// IMP=0x00000000002afc23
- (id)initWithTitleView:(id)arg1;	// IMP=0x00000000002afa8d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
