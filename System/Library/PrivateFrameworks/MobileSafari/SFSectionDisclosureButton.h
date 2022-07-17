//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SFSectionDisclosureButton : UIButton
{
    UILabel *_labelWhenCollapsed;	// 8 = 0x8
    UILabel *_labelWhenExpanded;	// 16 = 0x10
    UIImageView *_imageView;	// 24 = 0x18
    _Bool _expanded;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004c1b3
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
- (void)buttonShapesEnabledDidChange;	// IMP=0x000000000004bfaf
- (void)toggleExpanded;	// IMP=0x000000000004bf1c
- (void)updateExpanded;	// IMP=0x000000000004be00
- (void)dealloc;	// IMP=0x000000000004bd5b
- (id)initWithFrame:(struct CGRect)arg1 expanded:(_Bool)arg2;	// IMP=0x000000000004b210

@end
