//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <SpringBoardHome/SBFolderObserver-Protocol.h>
#import <SpringBoardHome/SBIconListModelObserver-Protocol.h>

@class MTMaterialView, NSString, SBFolder, SBHPageManagementCheckbox, SBIconListView;

@interface SBHPageManagementCellView : UIView <SBIconListModelObserver, SBFolderObserver>
{
    struct SBHPageManagementCellMetrics _metrics;	// 8 = 0x8
    _Bool _scalesListView;	// 128 = 0x80
    _Bool _listHighlighted;	// 129 = 0x81
    _Bool _hasCleanedUpListView;	// 130 = 0x82
    SBIconListView *_listView;	// 136 = 0x88
    MTMaterialView *_listBackgroundView;	// 144 = 0x90
    UIView *_listHighlightView;	// 152 = 0x98
    MTMaterialView *_toggleButtonBackgroundView;	// 160 = 0xa0
    SBFolder *_folder;	// 168 = 0xa8
    SBHPageManagementCheckbox *_toggleButton;	// 176 = 0xb0
    double _toggleButtonAlpha;	// 184 = 0xb8
    struct SBIconImageInfo _iconImageInfo;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x0000000000185de9
@property(nonatomic) double toggleButtonAlpha; // @synthesize toggleButtonAlpha=_toggleButtonAlpha;
@property(nonatomic) _Bool hasCleanedUpListView; // @synthesize hasCleanedUpListView=_hasCleanedUpListView;
@property(nonatomic, getter=isListHighlighted) _Bool listHighlighted; // @synthesize listHighlighted=_listHighlighted;
@property(readonly, nonatomic) SBHPageManagementCheckbox *toggleButton; // @synthesize toggleButton=_toggleButton;
@property(nonatomic) _Bool scalesListView; // @synthesize scalesListView=_scalesListView;
@property(nonatomic) struct SBIconImageInfo iconImageInfo; // @synthesize iconImageInfo=_iconImageInfo;
@property(readonly, nonatomic) SBFolder *folder; // @synthesize folder=_folder;
@property(readonly, nonatomic) MTMaterialView *toggleButtonBackgroundView; // @synthesize toggleButtonBackgroundView=_toggleButtonBackgroundView;
@property(readonly, nonatomic) UIView *listHighlightView; // @synthesize listHighlightView=_listHighlightView;
@property(readonly, nonatomic) MTMaterialView *listBackgroundView; // @synthesize listBackgroundView=_listBackgroundView;
@property(readonly, nonatomic) SBIconListView *listView; // @synthesize listView=_listView;
- (void)folder:(id)arg1 listHiddenDidChange:(id)arg2;	// IMP=0x0000000000185c2f
- (void)iconListHiddenDidChange:(id)arg1;	// IMP=0x0000000000185af0
- (void)_togglePageHidden:(id)arg1;	// IMP=0x00000000001859fe
- (void)cleanUpListView;	// IMP=0x0000000000185980
- (void)layoutSubviews;	// IMP=0x0000000000185261
- (id)initWithListView:(id)arg1 listBackgroundView:(id)arg2 toggleButtonBackgroundView:(id)arg3 folder:(id)arg4 metrics:(struct SBHPageManagementCellMetrics)arg5 toggleButtonAllowed:(_Bool)arg6;	// IMP=0x0000000000184e02

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

