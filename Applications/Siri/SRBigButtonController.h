//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUI/SiriUISnippetViewController.h>

@class SAUIButton, SRBigButtonView;

@interface SRBigButtonController : SiriUISnippetViewController
{
    SRBigButtonView *_buttonView;	// 8 = 0x8
    SAUIButton *_buttonObject;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000f821
- (void)_bigButtonHit:(id)arg1;	// IMP=0x001000000000f7a8
- (double)desiredHeightForWidth:(double)arg1;	// IMP=0x001000000000f746
- (void)loadView;	// IMP=0x001000000000f4a2
- (_Bool)usePlatterStyle;	// IMP=0x001000000000f49a
- (struct UIEdgeInsets)defaultViewInsets;	// IMP=0x001000000000f47c
- (id)snippet;	// IMP=0x001000000000f474
- (void)setAceObject:(id)arg1;	// IMP=0x001000000000f41b
- (void)dealloc;	// IMP=0x001000000000f395

@end

