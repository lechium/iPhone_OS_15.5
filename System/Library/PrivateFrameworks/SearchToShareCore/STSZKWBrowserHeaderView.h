//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

#import <SearchToShareCore/STSSearchBarDelegate-Protocol.h>
#import <SearchToShareCore/UISearchBarDelegate-Protocol.h>
#import <SearchToShareCore/UITextFieldDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, STSSearchBar, UIButton, UIVisualEffectView;
@protocol STSKeyCommandDelegate, STSZKWBrowserHeaderViewDelegate;

@interface STSZKWBrowserHeaderView : UIView <UISearchBarDelegate, UITextFieldDelegate, STSSearchBarDelegate>
{
    UIVisualEffectView *_visualEffectView;	// 8 = 0x8
    STSSearchBar *_searchBar;	// 16 = 0x10
    UIButton *_feedbackButton;	// 24 = 0x18
    NSMutableArray *_topZKWButtons;	// 32 = 0x20
    NSMutableArray *_bottomZKWButtons;	// 40 = 0x28
    _Bool _writingInSearchBar;	// 48 = 0x30
    NSMutableArray *_searchBarConstraints;	// 56 = 0x38
    id <STSZKWBrowserHeaderViewDelegate> _delegate;	// 64 = 0x40
    id <STSKeyCommandDelegate> _keyCommandDelegate;	// 72 = 0x48
    NSArray *_topSuggestions;	// 80 = 0x50
    NSArray *_bottomSuggestions;	// 88 = 0x58
    struct UIEdgeInsets _contentInset;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000001e734
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(copy, nonatomic) NSArray *bottomSuggestions; // @synthesize bottomSuggestions=_bottomSuggestions;
@property(copy, nonatomic) NSArray *topSuggestions; // @synthesize topSuggestions=_topSuggestions;
@property(nonatomic) __weak id <STSKeyCommandDelegate> keyCommandDelegate; // @synthesize keyCommandDelegate=_keyCommandDelegate;
@property(nonatomic) __weak id <STSZKWBrowserHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)escapeKeyPressed;	// IMP=0x000000000001e63b
- (void)upArrowPressed;	// IMP=0x000000000001e5de
- (void)downArrowPressed;	// IMP=0x000000000001e581
- (void)returnKeyPressed;	// IMP=0x000000000001e4d1
- (id)keyCommands;	// IMP=0x000000000001e34f
- (void)enableSearchButton;	// IMP=0x000000000001e32d
- (double)_searchBarWidthFraction;	// IMP=0x000000000001e2fa
- (id)_buttonWithTitle:(id)arg1;	// IMP=0x000000000001e10d
- (void)_updateTopStackView:(_Bool)arg1 andBottomStackView:(_Bool)arg2;	// IMP=0x000000000001de9a
- (void)setSearchQuery:(id)arg1;	// IMP=0x000000000001de7d
- (id)searchQuery;	// IMP=0x000000000001de60
- (void)searchBarClicked;	// IMP=0x000000000001de4c
- (struct CGRect)contentRect;	// IMP=0x000000000001dcb1
- (void)_suggestionButtonPressed:(id)arg1;	// IMP=0x000000000001dc30
- (unsigned long long)_suggestionIndexForButton:(id)arg1;	// IMP=0x000000000001dbb7
- (void)_cancelButtonPressed:(id)arg1;	// IMP=0x000000000001db7b
- (void)_searchButtonPressed:(id)arg1;	// IMP=0x000000000001db2d
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000001dae4
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000001da3f
- (void)layoutSubviews;	// IMP=0x000000000001d335
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000001d0bc
- (void)clear;	// IMP=0x000000000001d072
- (id)init;	// IMP=0x000000000001ca76
- (void)searchBarCancelButtonClicked:(id)arg1;	// IMP=0x000000000001ca62
- (_Bool)searchBarShouldBeginEditing:(id)arg1;	// IMP=0x000000000001c9a3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

