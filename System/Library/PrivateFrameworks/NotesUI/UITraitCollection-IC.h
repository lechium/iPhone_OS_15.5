//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITraitCollection.h>

@class ICAppearanceInfo;

@interface UITraitCollection (IC)
+ (void)setIc_alwaysShowLightContent:(_Bool)arg1;	// IMP=0x0000000000105f76
+ (_Bool)ic_alwaysShowLightContent;	// IMP=0x0000000000105f56
- (void)ic_performAsCurrent:(CDUnknownBlockType)arg1;	// IMP=0x000000000010617c
- (id)ic_traitCollectionByAppendingNonNilTraitCollection:(id)arg1;	// IMP=0x0000000000106092
- (_Bool)ic_hasEqualSizeToTraitCollection:(id)arg1;	// IMP=0x000000000010600d
@property(readonly, nonatomic) ICAppearanceInfo *ic_appearanceInfo;
@property(readonly, nonatomic) _Bool ic_isDark;
@property(readonly, nonatomic) _Bool ic_hasCompactWidth;
@property(readonly, nonatomic) _Bool ic_hasCompactHeight;
@property(readonly, nonatomic) _Bool ic_hasCompactSize;
@end
