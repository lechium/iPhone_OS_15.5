//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/PUAssetViewModelChangeObserver-Protocol.h>

@class NSString, PUAssetViewModel, UIActivityIndicatorView, UIView;

__attribute__((visibility("hidden")))
@interface PUImportStatusTileViewController <PUAssetViewModelChangeObserver>
{
    struct {
        unsigned long long needsUpdate;
        unsigned long long updated;
        _Bool isPerformingUpdate;
        _Bool willPerformUpdate;
    } _updateFlags;	// 8 = 0x8
    UIView *_successView;	// 32 = 0x20
    UIView *_errorView;	// 40 = 0x28
    UIActivityIndicatorView *_progressIndicatorView;	// 48 = 0x30
    _Bool __isPerformingChanges;	// 56 = 0x38
    PUAssetViewModel *_assetViewModel;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001de434
@property(nonatomic) _Bool _isPerformingChanges; // @synthesize _isPerformingChanges=__isPerformingChanges;
@property(retain, nonatomic) PUAssetViewModel *assetViewModel; // @synthesize assetViewModel=_assetViewModel;
- (void)applyLayoutInfo:(id)arg1;	// IMP=0x00000000001de2c1
- (void)viewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x00000000001de1ee
- (void)_updateStatusView;	// IMP=0x00000000001dde00
- (void)_updateIfNeeded;	// IMP=0x00000000001ddc5b
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x00000000001ddbc0
- (void)viewDidLoad;	// IMP=0x00000000001dda5b
- (void)becomeReusable;	// IMP=0x00000000001dd9e9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
