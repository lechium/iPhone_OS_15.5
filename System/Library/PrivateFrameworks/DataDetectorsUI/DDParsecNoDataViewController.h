//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, NSURL, UILabel, UIView, _UIContentUnavailableView;

@interface DDParsecNoDataViewController : UIViewController
{
    UIView *_container;	// 8 = 0x8
    UILabel *_errorLabel;	// 16 = 0x10
    _UIContentUnavailableView *_emptyNoContentView;	// 24 = 0x18
    _Bool _lookup;	// 32 = 0x20
    NSString *_reason;	// 40 = 0x28
    NSString *_searchWebQuery;	// 48 = 0x30
    NSURL *_altURL;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000000c526
@property(nonatomic) _Bool lookup; // @synthesize lookup=_lookup;
@property(retain, nonatomic) NSURL *altURL; // @synthesize altURL=_altURL;
@property(retain, nonatomic) NSString *searchWebQuery; // @synthesize searchWebQuery=_searchWebQuery;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000000c4a3
- (void)manageDictionaries:(id)arg1;	// IMP=0x000000000000c3a7
- (id)manageDictionariesURL;	// IMP=0x000000000000c2d5
- (void)searchWeb:(id)arg1;	// IMP=0x000000000000c120
- (void)updateStyle;	// IMP=0x000000000000bfeb
- (void)loadView;	// IMP=0x000000000000aea7

@end

