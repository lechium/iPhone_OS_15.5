//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class UIView;
@protocol CKFullscreenEffectView;

@interface CKFullscreenEffectDecorationView : UICollectionReusableView
{
    UIView<CKFullscreenEffectView> *_effectView;	// 8 = 0x8
}

+ (id)reuseIdentifier;	// IMP=0x000000000049f64f
+ (id)decorationViewKind;	// IMP=0x000000000049f642
- (void).cxx_destruct;	// IMP=0x000000000049f7e0
@property(nonatomic) __weak UIView<CKFullscreenEffectView> *effectView; // @synthesize effectView=_effectView;
- (void)tearDownEffectView;	// IMP=0x000000000049f732
- (void)setupForEffectView:(id)arg1;	// IMP=0x000000000049f69d
- (void)prepareForReuse;	// IMP=0x000000000049f65c

@end

