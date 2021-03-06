//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DOCAppearance, DOCDocumentSource, FPItem, UIColor, UIImage, UIView;

@protocol _TtP5Files31DOCSourceListInterfaceProviding_
- (UIImage *)nonThumbnailedIconForItem:(FPItem *)arg1;
- (_Bool)iconForSourceRequireHierarchicalColors:(DOCDocumentSource *)arg1;
- (UIImage *)iconForSource:(DOCDocumentSource *)arg1;
- (UIImage *)ejectIconFor:(long long)arg1 variant:(long long)arg2;
@property(nonatomic, readonly) UIImage *iconForMore;
@property(nonatomic, readonly) UIImage *iconForShared;
@property(nonatomic, readonly) UIImage *iconForRecents;
- (UIColor *)backgroundColorForView:(UIView *)arg1 effectiveAppearance:(DOCAppearance *)arg2;
- (UIColor *)iconColorFor:(UIView *)arg1 variant:(long long)arg2;
- (UIColor *)textColorFor:(UIView *)arg1 variant:(long long)arg2;
@end

