//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ManagedConfigurationUI/MCUIScrollAnimationResponder-Protocol.h>

@class MCProfileTitlePageMetaDataSectionController, NSString, UITableView, UIView;

@interface MCProfileTitlePageMetaDataSectionAnimationController : NSObject <MCUIScrollAnimationResponder>
{
    MCProfileTitlePageMetaDataSectionController *_sectionController;	// 8 = 0x8
    UIView *_iconView;	// 16 = 0x10
    UIView *_titleView;	// 24 = 0x18
    UIView *_subtitleView;	// 32 = 0x20
    UIView *_orgView;	// 40 = 0x28
    UIView *_topBar;	// 48 = 0x30
    UITableView *_tableView;	// 56 = 0x38
    struct CGRect _iconViewOriginFrame;	// 64 = 0x40
    struct CGRect _titleLabelOriginFrame;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000000151d7
@property(nonatomic) struct CGRect titleLabelOriginFrame; // @synthesize titleLabelOriginFrame=_titleLabelOriginFrame;
@property(nonatomic) struct CGRect iconViewOriginFrame; // @synthesize iconViewOriginFrame=_iconViewOriginFrame;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak UIView *topBar; // @synthesize topBar=_topBar;
@property(nonatomic) __weak UIView *orgView; // @synthesize orgView=_orgView;
@property(nonatomic) __weak UIView *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(nonatomic) __weak UIView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak UIView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak MCProfileTitlePageMetaDataSectionController *sectionController; // @synthesize sectionController=_sectionController;
- (unsigned long long)_binarySearch:(id)arg1 target:(double)arg2;	// IMP=0x0000000000014f45
- (double)_alphaWithProgress:(double)arg1 keys:(id)arg2 values:(id)arg3;	// IMP=0x0000000000014d51
- (void)_animateView:(id)arg1 progress:(double)arg2 startFrame:(struct CGRect)arg3 endY:(double)arg4 endScale:(double)arg5 extraYOffset:(double)arg6;	// IMP=0x0000000000014c59
- (_Bool)_relocateViewIfNeeded:(id)arg1 fromView:(id)arg2 toView:(id)arg3;	// IMP=0x0000000000014b1c
- (_Bool)_putBackViewIfNeeded:(id)arg1 toView:(id)arg2;	// IMP=0x0000000000014a84
- (void)updateProgressWithTranslationDistance:(double)arg1 referenceDistance:(double)arg2 isScrolling:(_Bool)arg3;	// IMP=0x00000000000140d3
- (void)startTrackingWithMetaDataSectionController:(id)arg1 topBar:(id)arg2;	// IMP=0x0000000000013edb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

