//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <FocusUI/FCUIContentSizeCategoryAdjusting-Protocol.h>

@class NSArray, NSString;

@interface FCUIActivityBaubleGroupView : UIView <FCUIContentSizeCategoryAdjusting>
{
    NSArray *_baubleViews;	// 8 = 0x8
    _Bool _adjustsFontForContentSizeCategory;	// 16 = 0x10
    NSString *_preferredContentSizeCategory;	// 24 = 0x18
    long long _baubleGroupType;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000206ca
@property(readonly, nonatomic) long long baubleGroupType; // @synthesize baubleGroupType=_baubleGroupType;
@property(copy, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
- (_Bool)adjustForContentSizeCategoryChange;	// IMP=0x0000000000020496
- (void)layoutSubviews;	// IMP=0x00000000000201c5
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000001fbc2
- (id)initWithBaubleDescriptions:(id)arg1 baubleGroupType:(long long)arg2;	// IMP=0x000000000001f90f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

