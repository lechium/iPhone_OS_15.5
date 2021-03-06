//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/NSCopying-Protocol.h>

@class NSString;

@interface SBHFloatyFolderVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding>
{
    double _continuousCornerRadius;	// 8 = 0x8
    double _titleFontSizeInPortrait;	// 16 = 0x10
    double _titleFontSizeInLandscape;	// 24 = 0x18
    double _titleHorizontalInset;	// 32 = 0x20
    double _pageControlAreaHeight;	// 40 = 0x28
    double _rubberBandIntervalForOverscroll;	// 48 = 0x30
    struct CGSize _contentBackgroundSize;	// 56 = 0x38
    struct CGSize _pageControlCustomPadding;	// 72 = 0x48
}

@property(nonatomic) double rubberBandIntervalForOverscroll; // @synthesize rubberBandIntervalForOverscroll=_rubberBandIntervalForOverscroll;
@property(nonatomic) struct CGSize pageControlCustomPadding; // @synthesize pageControlCustomPadding=_pageControlCustomPadding;
@property(nonatomic) double pageControlAreaHeight; // @synthesize pageControlAreaHeight=_pageControlAreaHeight;
@property(nonatomic) double titleHorizontalInset; // @synthesize titleHorizontalInset=_titleHorizontalInset;
@property(nonatomic) double titleFontSizeInLandscape; // @synthesize titleFontSizeInLandscape=_titleFontSizeInLandscape;
@property(nonatomic) double titleFontSizeInPortrait; // @synthesize titleFontSizeInPortrait=_titleFontSizeInPortrait;
@property(nonatomic) double continuousCornerRadius; // @synthesize continuousCornerRadius=_continuousCornerRadius;
@property(nonatomic) struct CGSize contentBackgroundSize; // @synthesize contentBackgroundSize=_contentBackgroundSize;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000002287e0
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000228790
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000228774
- (id)succinctDescription;	// IMP=0x0000000000228724
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000022857c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000022850e
- (void)setTitleFontSizeInAllOrientations:(double)arg1;	// IMP=0x00000000002284fe
- (id)init;	// IMP=0x0000000000228454

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

