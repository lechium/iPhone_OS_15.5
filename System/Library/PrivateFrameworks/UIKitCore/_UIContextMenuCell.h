//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIContextMenuCellContentView;

__attribute__((visibility("hidden")))
@interface _UIContextMenuCell
{
}

+ (_Bool)_isInternalCell;	// IMP=0x000000000123dc98
+ (Class)_contentViewClass;	// IMP=0x000000000123dc87
- (void)prepareForReuse;	// IMP=0x000000000123dee7
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000123dd32
@property(readonly, nonatomic) _UIContextMenuCellContentView *actionView;
- (_Bool)_wantsKeyEventsWhenDeferred;	// IMP=0x000000000123dd18
- (long long)_focusItemDeferralMode;	// IMP=0x000000000123dcff
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000123dca0

@end
