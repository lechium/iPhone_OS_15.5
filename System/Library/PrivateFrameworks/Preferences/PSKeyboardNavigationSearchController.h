//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISearchController.h>

@class PSKeyboardNavigationSearchBar, UIViewController;
@protocol PSKeyboardNavigationSearchResultsController;

@interface PSKeyboardNavigationSearchController : UISearchController
{
    UIViewController<PSKeyboardNavigationSearchResultsController> *searchResultsController;	// 8 = 0x8
    PSKeyboardNavigationSearchBar *searchBar;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007b531
@property(retain, nonatomic) PSKeyboardNavigationSearchBar *searchBar; // @synthesize searchBar;
@property(retain, nonatomic) UIViewController<PSKeyboardNavigationSearchResultsController> *searchResultsController; // @synthesize searchResultsController;
- (void)_upArrowKeyPressed;	// IMP=0x000000000007b4aa
- (void)_downArrowKeyPressed;	// IMP=0x000000000007b46d
- (void)_escapeKeyPressed;	// IMP=0x000000000007b459
- (id)initWithSearchResultsController:(id)arg1;	// IMP=0x000000000007b1ea

@end

