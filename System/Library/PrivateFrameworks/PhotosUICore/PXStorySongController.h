//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXStoryModel;
@protocol PXStorySongResource;

@interface PXStorySongController
{
    PXStoryModel *_model;	// 8 = 0x8
    id <PXStorySongResource> _currentSongResource;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000006680f2
@property(retain, nonatomic) id <PXStorySongResource> currentSongResource; // @synthesize currentSongResource=_currentSongResource;
@property(readonly, nonatomic) __weak PXStoryModel *model; // @synthesize model=_model;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000667fe3
- (void)handleModelChange:(unsigned long long)arg1;	// IMP=0x0000000000667f5b
- (void)_updateCurrentSongResource;	// IMP=0x0000000000667d60
- (void)_invalidateCurrentSongResource;	// IMP=0x0000000000667d1c
- (void)configureUpdater:(id)arg1;	// IMP=0x0000000000667b03
- (id)initWithModel:(id)arg1;	// IMP=0x00000000006679c0
- (id)initWithObservableModel:(id)arg1;	// IMP=0x000000000066793d

@end
