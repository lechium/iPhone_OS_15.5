//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _TVOrganizerCellView : UIView
{
    NSArray *_components;	// 8 = 0x8
    long long _contentVerticalAlignment;	// 16 = 0x10
    NSArray *_filteredComponents;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d96ae
@property(readonly, copy, nonatomic) NSArray *filteredComponents; // @synthesize filteredComponents=_filteredComponents;
@property(nonatomic) long long contentVerticalAlignment; // @synthesize contentVerticalAlignment=_contentVerticalAlignment;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (void)_resetSubviews;	// IMP=0x00000000000d94c4
- (long long)_alignmentFromView:(id)arg1;	// IMP=0x00000000000d9444
- (void)_updateView:(id)arg1 maxViewWidth:(double)arg2;	// IMP=0x00000000000d9235
- (struct CGSize)_sizeThatFitsComponents:(id)arg1 boundingSize:(struct CGSize)arg2;	// IMP=0x00000000000d8e43
- (void)_verticallyStackComponents:(id)arg1 alignment:(long long)arg2;	// IMP=0x00000000000d8653
- (_Bool)canBecomeFocused;	// IMP=0x00000000000d864b
- (void)layoutSubviews;	// IMP=0x00000000000d8348
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000d82d0
- (void)setComponentsNeedUpdate;	// IMP=0x00000000000d7fc2
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000d7f13

@end
