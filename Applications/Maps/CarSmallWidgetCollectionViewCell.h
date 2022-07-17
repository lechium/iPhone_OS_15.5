//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol CarFocusableCollectionItemDelegate;

__attribute__((visibility("hidden")))
@interface CarSmallWidgetCollectionViewCell
{
    id <CarFocusableCollectionItemDelegate> _delegate;	// 8 = 0x8
}

+ (double)bottomMargin;	// IMP=0x0020000000748ee9
+ (_Bool)isSubtitleHidden;	// IMP=0x0010000000748ee1
+ (double)imageTopMargin;	// IMP=0x0010000000748ed8
- (void).cxx_destruct;	// IMP=0x0020000000749103
@property(nonatomic) __weak id <CarFocusableCollectionItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)focusableItemSelected;	// IMP=0x001000000074908a
- (void)focusableItemPressed:(_Bool)arg1;	// IMP=0x0010000000749078
- (void)focusableItemFocused:(_Bool)arg1;	// IMP=0x0010000000749066
- (void)_focusColorDidChange;	// IMP=0x0010000000749054
- (id)focusColor;	// IMP=0x0010000000748f97
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000748ef2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
