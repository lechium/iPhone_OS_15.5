//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSAttributedString, NSNumber;

@interface OBBoldTrayButton
{
    NSNumber *_buttonStateRequiredHeight;	// 8 = 0x8
    NSAttributedString *_cachedDisableStateTitle;	// 16 = 0x10
}

+ (id)boldButton;	// IMP=0x0000000000014186
- (void).cxx_destruct;	// IMP=0x0000000000014873
@property(retain, nonatomic) NSAttributedString *cachedDisableStateTitle; // @synthesize cachedDisableStateTitle=_cachedDisableStateTitle;
@property(retain, nonatomic) NSNumber *buttonStateRequiredHeight; // @synthesize buttonStateRequiredHeight=_buttonStateRequiredHeight;
- (void)tintColorDidChange;	// IMP=0x00000000000147e8
- (void)updateConfiguration;	// IMP=0x000000000001473d
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000014671
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000000000145bd
- (void)hidesBusyIndicator;	// IMP=0x000000000001446f
- (void)showsBusyIndicator;	// IMP=0x0000000000014292
- (id)boldConfiguration;	// IMP=0x000000000001420b

@end

