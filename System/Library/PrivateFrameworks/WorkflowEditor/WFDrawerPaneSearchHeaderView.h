//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <WorkflowEditor/WFDrawerPaneHeaderView-Protocol.h>

@class NSString, UIButton, UISearchBar;
@protocol WFDrawerPaneHeaderViewDelegate;

@interface WFDrawerPaneSearchHeaderView : UIView <WFDrawerPaneHeaderView>
{
    id <WFDrawerPaneHeaderViewDelegate> _delegate;	// 8 = 0x8
    UISearchBar *_searchBar;	// 16 = 0x10
    UIButton *_closeButton;	// 24 = 0x18
    UIView *_separatorView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000256cc4
@property(readonly, nonatomic) __weak UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(readonly, nonatomic) __weak UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) __weak UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) __weak id <WFDrawerPaneHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)layoutConstraints;	// IMP=0x0000000000256637
- (id)initWithSearchBar:(id)arg1;	// IMP=0x000000000025649c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
