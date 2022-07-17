//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class DOCTagRenderingRequest, NSArray;

@interface DOCChainedTagsView : UIView
{
    NSArray *_tags;	// 8 = 0x8
    double _knockOutBorderWidth;	// 16 = 0x10
    unsigned long long _spacing;	// 24 = 0x18
    double _tagDimension;	// 32 = 0x20
    DOCTagRenderingRequest *_renderingRequest;	// 40 = 0x28
    struct CGPoint _alignmentOffset;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000006f62
@property(retain, nonatomic) DOCTagRenderingRequest *renderingRequest; // @synthesize renderingRequest=_renderingRequest;
@property(nonatomic) struct CGPoint alignmentOffset; // @synthesize alignmentOffset=_alignmentOffset;
@property(nonatomic) double tagDimension; // @synthesize tagDimension=_tagDimension;
@property(nonatomic) unsigned long long spacing; // @synthesize spacing=_spacing;
@property(nonatomic) double knockOutBorderWidth; // @synthesize knockOutBorderWidth=_knockOutBorderWidth;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
- (void)_reloadRenderingRequest;	// IMP=0x0000000000006c71
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000006bf3
- (void)sizeToFit;	// IMP=0x0000000000006b4b
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;	// IMP=0x0000000000006b39
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000006b27
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000006a7d
- (void)setknockOutBorderWidth:(double)arg1;	// IMP=0x00000000000069fe
- (void)_commonInit;	// IMP=0x0000000000006980
- (id)init;	// IMP=0x0000000000006934
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000068e8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000688b

@end
