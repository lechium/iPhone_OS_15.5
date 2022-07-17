//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlaySupport/CPGridTemplateProviding-Protocol.h>
#import <CarPlaySupport/CPSButtonDelegate-Protocol.h>

@class CPGridTemplate, CPSGridTemplateCollectionView, NSString;

@interface CPSGridTemplateViewController <CPSButtonDelegate, CPGridTemplateProviding>
{
    CPSGridTemplateCollectionView *_gridView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000056e16
@property(nonatomic) __weak CPSGridTemplateCollectionView *gridView; // @synthesize gridView=_gridView;
- (void)didSelectButton:(id)arg1;	// IMP=0x0000000000056ce6
- (void)reloadTemplate:(id)arg1;	// IMP=0x0000000000056ac7
- (void)setControl:(id)arg1 enabled:(_Bool)arg2;	// IMP=0x00000000000569ab
- (id)_prepareCPSGridButtonsForButtons:(id)arg1;	// IMP=0x00000000000567dc
- (id)_buttonForIdentifier:(id)arg1;	// IMP=0x00000000000565c6
- (void)_viewDidLoad;	// IMP=0x0000000000056131
- (_Bool)_wantsNowPlayingButton;	// IMP=0x0000000000056129
@property(readonly, nonatomic) CPGridTemplate *gridTemplate;
- (id)initWithGridTemplate:(id)arg1 interfaceDelegate:(id)arg2 templateEnvironment:(id)arg3;	// IMP=0x0000000000056002

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
