//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class UIActivityIndicatorView;

@interface PKSpinnerHeaderView : UITableViewHeaderFooterView
{
    UIActivityIndicatorView *_spinner;	// 8 = 0x8
    _Bool _showSpinner;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002b529b
@property(nonatomic) _Bool showSpinner; // @synthesize showSpinner=_showSpinner;
- (void)layoutSubviews;	// IMP=0x00000000002b4e17
- (void)prepareForReuse;	// IMP=0x00000000002b4dd4
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x00000000002b4d62

@end

