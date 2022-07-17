//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

#import <MobileSafari/SFSiteIconModel-Protocol.h>

@class NSString, UIImage, UILabel, UIView, _SFSiteIconView;

__attribute__((visibility("hidden")))
@interface SFSiteIconCell : UICollectionViewCell <SFSiteIconModel>
{
    UIView *_iconDimmingView;	// 8 = 0x8
    _SFSiteIconView *_iconView;	// 16 = 0x10
    UILabel *_subtitleLabel;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
}

+ (id)reuseIdentifier;	// IMP=0x00000000000b2094
- (void).cxx_destruct;	// IMP=0x00000000000b3211
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) UIImage *icon;
- (void)setIconFromBookmark:(id)arg1;	// IMP=0x00000000000b2c75
- (id)focusEffect;	// IMP=0x00000000000b2be0
@property(readonly, nonatomic) UIView *contextMenuPreviewView;
- (void)updateViewsDependingOnCustomTraits;	// IMP=0x00000000000b2b4f
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000000b2aa0
- (void)updateConstraints;	// IMP=0x00000000000b2a10
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000b2952
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b2923
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000b20a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
