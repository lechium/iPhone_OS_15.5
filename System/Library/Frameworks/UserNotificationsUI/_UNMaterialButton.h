//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

#import <UserNotificationsUI/MTVisualStylingRequiring-Protocol.h>

@class MTVisualStylingProvider, NSArray, NSMutableDictionary, NSString;

@interface _UNMaterialButton : UIButton <MTVisualStylingRequiring>
{
    MTVisualStylingProvider *_visualStylingProvider;	// 8 = 0x8
    NSMutableDictionary *_styling;	// 16 = 0x10
    NSMutableDictionary *_imageViewStyling;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000064dc
@property(retain, nonatomic) NSMutableDictionary *imageViewStyling; // @synthesize imageViewStyling=_imageViewStyling;
@property(retain, nonatomic) NSMutableDictionary *styling; // @synthesize styling=_styling;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;	// IMP=0x00000000000063d4
@property(readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
- (id)visualStylingProviderForCategory:(long long)arg1;	// IMP=0x00000000000063a5
- (void)_applyImageViewStyling;	// IMP=0x000000000000628b
- (void)_applyButtonStyling;	// IMP=0x00000000000061c4
- (void)_applyStyling;	// IMP=0x0000000000006196
- (void)_setFlagsRelatedToState:(unsigned long long)arg1 to:(_Bool)arg2;	// IMP=0x0000000000006167
- (void)setImageViewStyle:(long long)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000006038
- (void)setStyle:(long long)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000005f3a
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000000005edc
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000005e7e
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000000005e20
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000005d48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

