//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class GEORequestResponsePersistedEvent, NSArray, NSMutableAttributedString, NSString, UISearchController, UITextView;

__attribute__((visibility("hidden")))
@interface GeoRequestResponseLogDetailViewController : UIViewController
{
    GEORequestResponsePersistedEvent *_event;	// 8 = 0x8
    NSArray *_mapItems;	// 16 = 0x10
    UISearchController *_searchController;	// 24 = 0x18
    UITextView *_textView;	// 32 = 0x20
    NSString *_text;	// 40 = 0x28
    NSMutableAttributedString *_attributedText;	// 48 = 0x30
    struct _NSRange _lastHighlightedRange;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000118ac8
- (void)searchBarCancelButtonClicked:(id)arg1;	// IMP=0x00100000001189c4
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x00100000001189af
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x001000000011893d
- (void)searchFor:(id)arg1;	// IMP=0x00100000001187ff
- (void)_showPlaceCardAt:(unsigned long long)arg1;	// IMP=0x001000000011871a
- (void)_showPlaceCard;	// IMP=0x0010000000118492
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000001182a6
- (void)viewDidLoad;	// IMP=0x0010000000117dc1
- (id)initWithEvent:(id)arg1;	// IMP=0x00100000001179e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
