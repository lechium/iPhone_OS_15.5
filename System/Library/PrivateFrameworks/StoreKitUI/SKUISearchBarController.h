//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUISearchFieldDelegate-Protocol.h>
#import <StoreKitUI/UISearchBarDelegate-Protocol.h>

@class NSString, SKUIClientContext, SKUIFocusedTouchGestureRecognizer, SKUISearchBarViewElement, SKUISearchFieldController, UISearchBar, UIViewController;

__attribute__((visibility("hidden")))
@interface SKUISearchBarController : NSObject <SKUISearchFieldDelegate, UISearchBarDelegate>
{
    SKUIFocusedTouchGestureRecognizer *_cancelTouchGestureRecognizer;	// 8 = 0x8
    SKUIClientContext *_clientContext;	// 16 = 0x10
    _Bool _displaysSearchBarInNavigationBar;	// 24 = 0x18
    UIViewController *_parentViewController;	// 32 = 0x20
    UISearchBar *_searchBar;	// 40 = 0x28
    SKUISearchFieldController *_searchFieldController;	// 48 = 0x30
    _Bool _showsResultsForEmptyField;	// 56 = 0x38
    _Bool _usesSearchFieldController;	// 57 = 0x39
    SKUISearchBarViewElement *_viewElement;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000327458
@property(nonatomic) _Bool showsResultsForEmptyField; // @synthesize showsResultsForEmptyField=_showsResultsForEmptyField;
@property(retain, nonatomic) SKUISearchBarViewElement *searchBarViewElement; // @synthesize searchBarViewElement=_viewElement;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(nonatomic) _Bool displaysSearchBarInNavigationBar; // @synthesize displaysSearchBarInNavigationBar=_displaysSearchBarInNavigationBar;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (id)_searchFieldController;	// IMP=0x000000000032739e
- (void)_removeCancelTouchGestureRecognizer;	// IMP=0x0000000000327325
- (id)_newSearchFieldController;	// IMP=0x0000000000327250
- (void)_dispatchSubmitEventWithText:(id)arg1 URL:(id)arg2 searchHintOriginalTerm:(id)arg3 searchHintIndex:(id)arg4;	// IMP=0x00000000003270cd
- (void)_dispatchChangeEventWithText:(id)arg1;	// IMP=0x000000000032702f
- (void)_customizeSearchFieldController:(id)arg1;	// IMP=0x0000000000326f5b
- (void)_customizeSearchBar:(id)arg1;	// IMP=0x0000000000326df5
- (void)_cancelGestureAction:(id)arg1;	// IMP=0x0000000000326db8
- (void)searchBarSearchButtonClicked:(id)arg1;	// IMP=0x0000000000326d31
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x0000000000326d1c
- (void)searchBarTextDidEndEditing:(id)arg1;	// IMP=0x0000000000326d0a
- (void)searchBarTextDidBeginEditing:(id)arg1;	// IMP=0x0000000000326bd8
- (void)searchFieldController:(id)arg1 searchBarDidChangeText:(id)arg2;	// IMP=0x0000000000326b73
- (void)searchFieldController:(id)arg1 requestSearch:(id)arg2;	// IMP=0x0000000000326a57
@property(readonly, nonatomic) UISearchBar *searchBar;
- (void)resignActive:(_Bool)arg1;	// IMP=0x00000000003268fa
- (void)becomeActive;	// IMP=0x00000000003268e4
@property(readonly, nonatomic) _Bool canBecomeActive;
- (void)reloadAfterDocumentUpdate;	// IMP=0x0000000000326860
- (void)dealloc;	// IMP=0x00000000003267fc
- (id)initWithSearchBarViewElement:(id)arg1;	// IMP=0x0000000000326738

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
