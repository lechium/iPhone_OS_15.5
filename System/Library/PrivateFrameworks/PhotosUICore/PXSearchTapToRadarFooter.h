//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class UILabel;

@interface PXSearchTapToRadarFooter : UICollectionReusableView
{
    CDUnknownBlockType _tapToRadarHandler;	// 8 = 0x8
    UILabel *_tapToRadarAppleInternalLabel;	// 16 = 0x10
    UILabel *_tapToRadarDescriptionLabel;	// 24 = 0x18
}

+ (id)reuseIdentifier;	// IMP=0x00000000005c588e
- (void).cxx_destruct;	// IMP=0x00000000005c584c
@property(retain, nonatomic) UILabel *tapToRadarDescriptionLabel; // @synthesize tapToRadarDescriptionLabel=_tapToRadarDescriptionLabel;
@property(retain, nonatomic) UILabel *tapToRadarAppleInternalLabel; // @synthesize tapToRadarAppleInternalLabel=_tapToRadarAppleInternalLabel;
@property(copy, nonatomic) CDUnknownBlockType tapToRadarHandler; // @synthesize tapToRadarHandler=_tapToRadarHandler;
- (void)shouldDisplayRadarDescriptionLabel:(_Bool)arg1;	// IMP=0x00000000005c573a
- (void)_didSelectTapToRadarButton;	// IMP=0x00000000005c56c9
- (void)prepareForReuse;	// IMP=0x00000000005c5612
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000005c4d2a

@end

