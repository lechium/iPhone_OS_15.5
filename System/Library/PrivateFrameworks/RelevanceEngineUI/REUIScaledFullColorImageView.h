//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <RelevanceEngineUI/CLKFullColorImageView-Protocol.h>

@class NSString, UIImageView;
@protocol CLKMonochromeFilterProvider;

@interface REUIScaledFullColorImageView : UIView <CLKFullColorImageView>
{
    id <CLKMonochromeFilterProvider> filterProvider;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000017a5d
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <CLKMonochromeFilterProvider> filterProvider; // @synthesize filterProvider;
- (void)updateMonochromeColor;	// IMP=0x0000000000017a19
- (void)transitionToMonochromeWithFraction:(double)arg1;	// IMP=0x0000000000017a13
- (void)layoutSubviews;	// IMP=0x00000000000177cd
- (void)resumeLiveFullColorImageView;	// IMP=0x00000000000177c7
- (void)pauseLiveFullColorImageView;	// IMP=0x00000000000177c1
- (void)configureWithImageProvider:(id)arg1 reason:(long long)arg2;	// IMP=0x00000000000176f0
- (id)initFullColorImageViewWithDevice:(id)arg1;	// IMP=0x0000000000017575

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

