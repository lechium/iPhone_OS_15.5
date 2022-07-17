//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXAssetTile-Protocol.h>
#import <PhotosUICore/PXAutoplayTile-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXReusableObject-Protocol.h>
#import <PhotosUICore/PXUIViewBasicTile-Protocol.h>

@class NSString, PXImageRequester, PXVideoSession, PXVideoSessionUIView, UIView, _PXAssetLoopUIView;

@interface PXAssetLoopUIViewTile : NSObject <PXChangeObserver, PXReusableObject, PXAssetTile, PXUIViewBasicTile, PXAutoplayTile>
{
    unsigned long long _requestCount;	// 8 = 0x8
    _PXAssetLoopUIView *_view;	// 16 = 0x10
    PXVideoSession *_videoSession;	// 24 = 0x18
    PXVideoSessionUIView *_videoView;	// 32 = 0x20
    PXImageRequester *_imageRequester;	// 40 = 0x28
    double _cornerRadius;	// 48 = 0x30
    long long _desiredPlayState;	// 56 = 0x38
    struct CGSize _contentSize;	// 64 = 0x40
    struct CGRect _desiredContentsRect;	// 80 = 0x50
    CDStruct_e83c9415 _bestPlaybackTimeRange;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000001fa12
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) struct CGRect desiredContentsRect; // @synthesize desiredContentsRect=_desiredContentsRect;
@property(retain, nonatomic) PXVideoSession *videoSession; // @synthesize videoSession=_videoSession;
@property(nonatomic) CDStruct_e83c9415 bestPlaybackTimeRange; // @synthesize bestPlaybackTimeRange=_bestPlaybackTimeRange;
@property(nonatomic) long long desiredPlayState; // @synthesize desiredPlayState=_desiredPlayState;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) PXImageRequester *imageRequester; // @synthesize imageRequester=_imageRequester;
- (void)dealloc;	// IMP=0x000000000001f8db
- (void)_updateDesiredDynamicRange;	// IMP=0x000000000001f67f
- (void)_reloadVideoSessionIfNecessary;	// IMP=0x000000000001f36a
- (void)_updateVideoSession;	// IMP=0x000000000001f2cd
- (void)_updateImageRequester;	// IMP=0x000000000001f1bd
- (void)_updateLayer;	// IMP=0x000000000001f097
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000001ef40
@property(readonly, nonatomic) UIView *view;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;	// IMP=0x000000000001ea95
- (void)prepareForReuse;	// IMP=0x000000000001ea7d
- (void)becomeReusable;	// IMP=0x000000000001ea2e
- (id)init;	// IMP=0x000000000001e9f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
