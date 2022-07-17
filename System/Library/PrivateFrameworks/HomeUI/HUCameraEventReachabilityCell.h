//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class CALayer, HFCameraScrubberReachabilityEventContainer;

@interface HUCameraEventReachabilityCell : UICollectionViewCell
{
    _Bool _needsFullDashedLineWidth;	// 8 = 0x8
    unsigned long long _displayMode;	// 16 = 0x10
    HFCameraScrubberReachabilityEventContainer *_reachabilityEvent;	// 24 = 0x18
    CALayer *_badgeLayer;	// 32 = 0x20
}

+ (id)backgroundColor;	// IMP=0x000000000017e619
- (void).cxx_destruct;	// IMP=0x000000000017e92c
@property(nonatomic) _Bool needsFullDashedLineWidth; // @synthesize needsFullDashedLineWidth=_needsFullDashedLineWidth;
@property(retain, nonatomic) CALayer *badgeLayer; // @synthesize badgeLayer=_badgeLayer;
@property(retain, nonatomic) HFCameraScrubberReachabilityEventContainer *reachabilityEvent; // @synthesize reachabilityEvent=_reachabilityEvent;
@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
- (id)accessibilityLabel;	// IMP=0x000000000017e770
- (void)updateWithReachabilityEventContainer:(id)arg1 mode:(unsigned long long)arg2;	// IMP=0x000000000017e643
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000000017e265
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000017e206

@end
