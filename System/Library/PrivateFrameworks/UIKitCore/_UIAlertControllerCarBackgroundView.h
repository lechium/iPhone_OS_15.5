//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIInterfaceActionVisualBackgroundDisplaying-Protocol.h>
#import <UIKitCore/UIInterfaceActionVisualGroupBackgroundDisplaying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerCarBackgroundView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying>
{
}

- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000084b5a
- (id)_colorForInterfaceStyle:(long long)arg1;	// IMP=0x0000000000084b0b
- (void)setPressed:(_Bool)arg1;	// IMP=0x0000000000084b05
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000084aff
- (void)setRoundedCornerPosition:(unsigned long long)arg1;	// IMP=0x0000000000084ab3
- (void)setCornerRadius:(double)arg1;	// IMP=0x0000000000084a64
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000084663

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

