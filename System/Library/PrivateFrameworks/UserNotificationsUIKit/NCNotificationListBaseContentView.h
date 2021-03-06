//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <UserNotificationsUIKit/MTVisualStylingProviding-Protocol.h>
#import <UserNotificationsUIKit/MTVisualStylingRequiring-Protocol.h>
#import <UserNotificationsUIKit/PLContentSizeCategoryAdjusting-Protocol.h>

@class MTVisualStylingProvider, NSArray, NSString, NSStringDrawingContext;

@interface NCNotificationListBaseContentView : UIView <MTVisualStylingProviding, MTVisualStylingRequiring, PLContentSizeCategoryAdjusting>
{
    MTVisualStylingProvider *_strokeVisualStylingProvider;	// 8 = 0x8
    NSStringDrawingContext *_drawingContext;	// 16 = 0x10
    _Bool _adjustsFontForContentSizeCategory;	// 24 = 0x18
    NSString *_preferredContentSizeCategory;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000e3110
@property(copy, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
- (double)_sizeMeasuringHeightForLabel:(id)arg1 withNumberOfLines:(unsigned long long)arg2;	// IMP=0x00000000000e304c
- (id)_preferredFont:(_Bool)arg1 textStyle:(id)arg2 weight:(double)arg3 additionalTraits:(unsigned int)arg4;	// IMP=0x00000000000e2eba
- (void)_updateTextAttributesForLabel:(id)arg1 withTextStyle:(id)arg2 fontWeight:(double)arg3 additionalTraits:(unsigned int)arg4 maximumNumberOfLines:(unsigned long long)arg5;	// IMP=0x00000000000e2e01
- (unsigned long long)_numberOfLinesForLabel:(id)arg1 maximumNumberOfLines:(unsigned long long)arg2 inFrame:(struct CGRect)arg3;	// IMP=0x00000000000e2ddb
- (void)_updateTextAttributes;	// IMP=0x00000000000e2dd5
- (void)_visualStylingProviderDidChange:(id)arg1 forCategory:(long long)arg2 outgoingProvider:(id)arg3;	// IMP=0x00000000000e2dcf
- (void)_updateVisualStylingOfImageView:(id)arg1 ifSymbolImageWithStyle:(long long)arg2 visualStylingProvider:(id)arg3 outgoingProvider:(id)arg4;	// IMP=0x00000000000e2d13
- (void)_updateVisualStylingOfView:(id)arg1 style:(long long)arg2 visualStylingProvider:(id)arg3 outgoingProvider:(id)arg4;	// IMP=0x00000000000e2c90
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;	// IMP=0x00000000000e2c00
@property(readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
- (id)visualStylingProviderForCategory:(long long)arg1;	// IMP=0x00000000000e2b9a
- (_Bool)adjustForContentSizeCategoryChange;	// IMP=0x00000000000e2ae9
- (void)didMoveToWindow;	// IMP=0x00000000000e2aa0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000e29b1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

