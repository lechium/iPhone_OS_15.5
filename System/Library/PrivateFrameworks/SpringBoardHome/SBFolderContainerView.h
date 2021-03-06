//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@class SBFolderView, UIView;

@interface SBFolderContainerView : SBFTouchPassThroughView
{
    SBFolderView *_folderView;	// 8 = 0x8
    SBFolderContainerView *_childFolderContainerView;	// 16 = 0x10
    UIView *_backgroundView;	// 24 = 0x18
    double _statusBarHeight;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000257292
@property(nonatomic) double statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) SBFolderView *folderView; // @synthesize folderView=_folderView;
- (void)layoutSubviews;	// IMP=0x00000000002570cd
- (struct CGRect)_frameForFolderView:(id)arg1;	// IMP=0x00000000002570ae
@property(retain, nonatomic) SBFolderContainerView *childFolderContainerView;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000256fff
- (id)initWithFolderView:(id)arg1;	// IMP=0x0000000000256f44

@end

