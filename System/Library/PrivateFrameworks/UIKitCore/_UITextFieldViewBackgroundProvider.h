//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView;

__attribute__((visibility("hidden")))
@interface _UITextFieldViewBackgroundProvider
{
}

- (void)_buildDescription:(id)arg1;	// IMP=0x000000000069ff1d
- (void)setNeedsDisplay;	// IMP=0x000000000069feb0
- (void)populateArchivedSubviews:(id)arg1;	// IMP=0x000000000069fe22
- (void)removeFromTextField;	// IMP=0x000000000069fdb7
- (void)addToTextField:(id)arg1;	// IMP=0x000000000069fce5
- (_Bool)hitTestView:(id)arg1;	// IMP=0x000000000069fc76
- (id)overridingSetBackgroundColor:(id)arg1;	// IMP=0x000000000069fc14
@property(readonly, nonatomic) UIView *backgroundView;
- (void)didChangeFirstResponder;	// IMP=0x000000000069fb4f
- (void)layoutIfNeeded;	// IMP=0x000000000069fa43

@end
