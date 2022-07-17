//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIPopoverBackgroundViewMethods-Protocol.h>

@interface UIPopoverBackgroundView <UIPopoverBackgroundViewMethods>
{
    _Bool __chromeHidden;	// 8 = 0x8
}

+ (_Bool)wantsDefaultContentAppearance;	// IMP=0x000000000125c77f
+ (double)_contentViewCornerRadiusForArrowDirection:(unsigned long long)arg1;	// IMP=0x000000000125c76d
+ (double)cornerRadius;	// IMP=0x000000000125c75f
+ (struct UIEdgeInsets)contentViewInsets;	// IMP=0x000000000125c6d9
+ (double)arrowBase;	// IMP=0x000000000125c6c3
+ (double)arrowHeight;	// IMP=0x000000000125c6ad
@property(nonatomic, setter=_setChromeHidden:) _Bool _chromeHidden; // @synthesize _chromeHidden=__chromeHidden;
- (long long)backgroundStyle;	// IMP=0x000000000125cfed
- (void)layoutSubviews;	// IMP=0x000000000125cfac
- (struct CGRect)_backgroundContentViewFrame;	// IMP=0x000000000125ce2f
- (struct CGRect)_contentViewFrame;	// IMP=0x000000000125cdaf
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000125cbe2
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x000000000125cb70
- (void)_updateShadow;	// IMP=0x000000000125ca22
- (id)_shadowPath;	// IMP=0x000000000125c9ac
- (struct CGSize)_shadowOffset;	// IMP=0x000000000125c99b
- (double)_shadowRadius;	// IMP=0x000000000125c98d
- (double)_shadowOpacity;	// IMP=0x000000000125c97f
- (struct UIEdgeInsets)_shadowInsets;	// IMP=0x000000000125c968
- (id)_shadowPathForRect:(struct CGRect)arg1 arrowDirection:(unsigned long long)arg2;	// IMP=0x000000000125c7b0
- (void)_updateChrome;	// IMP=0x000000000125c787
- (struct UIEdgeInsets)_contentViewInsetsForArrowDirection:(unsigned long long)arg1;	// IMP=0x000000000125c740
- (struct UIEdgeInsets)_contentViewInsets;	// IMP=0x000000000125c702
@property(nonatomic) unsigned long long arrowDirection;
@property(nonatomic) double arrowOffset;

@end
