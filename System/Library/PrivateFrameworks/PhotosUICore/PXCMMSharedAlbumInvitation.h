//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>
#import <PhotosUICore/PXCMMInvitation-Protocol.h>
#import <PhotosUICore/PXMediaTypeAggregating-Protocol.h>

@class NSDate, NSString, PHAssetCollection, PHFetchResult, PXAssetCollectionActionManager;
@protocol PXCMMInvitationParticipant, PXDisplayAsset, PXUIImageProvider;

@interface PXCMMSharedAlbumInvitation : NSObject <PXMediaTypeAggregating, PXCMMInvitation, NSCopying>
{
    long long _shareType;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_subtitle;	// 24 = 0x18
    id <PXCMMInvitationParticipant> _owner;	// 32 = 0x20
    id <PXDisplayAsset> _posterAsset;	// 40 = 0x28
    id <PXUIImageProvider> _posterMediaProvider;	// 48 = 0x30
    PHAssetCollection *_assetCollection;	// 56 = 0x38
    PHFetchResult *_previewAssetsFetchResult;	// 64 = 0x40
}

+ (id)invitationWithAssetCollection:(id)arg1;	// IMP=0x00000000002039a6
+ (id)_invitationWithAssetCollection:(id)arg1 previewAssetsFetchResult:(id)arg2;	// IMP=0x0000000000203891
+ (id)_participantsForAssetCollection:(id)arg1;	// IMP=0x000000000020376a
+ (id)new;	// IMP=0x00000000002036f0
- (void).cxx_destruct;	// IMP=0x0000000000203691
@property(readonly, nonatomic) PHFetchResult *previewAssetsFetchResult; // @synthesize previewAssetsFetchResult=_previewAssetsFetchResult;
@property(readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(readonly, nonatomic) id <PXUIImageProvider> posterMediaProvider; // @synthesize posterMediaProvider=_posterMediaProvider;
@property(readonly, nonatomic) id <PXDisplayAsset> posterAsset; // @synthesize posterAsset=_posterAsset;
@property(readonly, nonatomic) id <PXCMMInvitationParticipant> owner; // @synthesize owner=_owner;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) long long shareType; // @synthesize shareType=_shareType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000203636
- (void)acceptWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000020361b
- (id)contextForActivityType:(unsigned long long)arg1;	// IMP=0x00000000002035dc
@property(readonly, nonatomic) PXAssetCollectionActionManager *assetCollectionActionManager;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) NSDate *expiryDate;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) NSString *identifier;
- (id)invitationWithUpdatedPreviewAssetsFetchResult:(id)arg1;	// IMP=0x0000000000203480
@property(readonly, copy) NSString *description;
- (id)initWithAssetCollection:(id)arg1;	// IMP=0x00000000002031f6
- (id)init;	// IMP=0x000000000020317c
@property(readonly, nonatomic) long long aggregateMediaType; // @dynamic aggregateMediaType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

