//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class UIButton;
@protocol HomeActionFooterViewDelegate;

__attribute__((visibility("hidden")))
@interface HomeActionFooterView : UITableViewHeaderFooterView
{
    UIButton *_shareMyLocationButton;	// 8 = 0x8
    UIButton *_markMyLocationButton;	// 16 = 0x10
    UIButton *_rapButton;	// 24 = 0x18
    UIButton *_termsAndConditionsButton;	// 32 = 0x20
    id <HomeActionFooterViewDelegate> _delegate;	// 40 = 0x28
    double _topMargin;	// 48 = 0x30
}

+ (id)classReuseIdentifier;	// IMP=0x0040000000319c6e
- (void).cxx_destruct;	// IMP=0x002000000031b561
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(retain, nonatomic) id <HomeActionFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_openTermsAndConditions:(id)arg1;	// IMP=0x001000000031b4de
- (void)_reportAProblem:(id)arg1;	// IMP=0x001000000031b492
- (void)_markMyLocation:(id)arg1;	// IMP=0x001000000031b446
- (void)_shareMyLocation:(id)arg1;	// IMP=0x001000000031b3fa
- (_Bool)_shouldShowShareMylocation;	// IMP=0x001000000031b37d
- (void)_updateLayoutMargins;	// IMP=0x001000000031b2b1
- (void)prepareForReuse;	// IMP=0x001000000031b212
- (id)_linkButtonWithTitle:(id)arg1;	// IMP=0x001000000031af82
- (id)_footerButtonWithTitle:(id)arg1;	// IMP=0x001000000031ae2f
- (void)_rebuildContent;	// IMP=0x0010000000319d67
- (id);	// IMP=0x0010000000319c78

@end
