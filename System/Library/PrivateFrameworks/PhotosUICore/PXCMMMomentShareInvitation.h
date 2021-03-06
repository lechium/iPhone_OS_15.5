//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>
#import <PhotosUICore/PXCMMInvitation-Protocol.h>
#import <PhotosUICore/PXMediaTypeAggregating-Protocol.h>

@class NSDate, NSString, PHFetchResult, PHMomentShare, PXAssetCollectionActionManager;
@protocol PXCMMInvitationParticipant, PXDisplayAsset, PXDisplayAssetCollection, PXUIImageProvider;

@interface PXCMMMomentShareInvitation : NSObject <PXMediaTypeAggregating, PXCMMInvitation, NSCopying>
{
    long long _shareType;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_subtitle;	// 24 = 0x18
    id <PXCMMInvitationParticipant> _owner;	// 32 = 0x20
    id <PXDisplayAsset> _posterAsset;	// 40 = 0x28
    id <PXUIImageProvider> _posterMediaProvider;	// 48 = 0x30
    PHMomentShare *_momentShare;	// 56 = 0x38
    PHFetchResult *_participantsFetchResult;	// 64 = 0x40
    PHFetchResult *_previewAssetsFetchResult;	// 72 = 0x48
}

+ (id)invitationWithMomentShare:(id)arg1;	// IMP=0x000000000089b55e
+ (id)new;	// IMP=0x000000000089b4e4
- (void).cxx_destruct;	// IMP=0x000000000089b321
@property(readonly, nonatomic) PHFetchResult *previewAssetsFetchResult; // @synthesize previewAssetsFetchResult=_previewAssetsFetchResult;
@property(readonly, nonatomic) PHFetchResult *participantsFetchResult; // @synthesize participantsFetchResult=_participantsFetchResult;
@property(readonly, nonatomic) PHMomentShare *momentShare; // @synthesize momentShare=_momentShare;
@property(readonly, nonatomic) id <PXUIImageProvider> posterMediaProvider; // @synthesize posterMediaProvider=_posterMediaProvider;
@property(readonly, nonatomic) id <PXDisplayAsset> posterAsset; // @synthesize posterAsset=_posterAsset;
@property(readonly, nonatomic) id <PXCMMInvitationParticipant> owner; // @synthesize owner=_owner;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) long long shareType; // @synthesize shareType=_shareType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000089b2bc
- (id)momentShareStatus;	// IMP=0x000000000089b253
- (void)acceptWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000089b242
- (id)contextForActivityType:(unsigned long long)arg1;	// IMP=0x000000000089b203
@property(readonly, nonatomic) id <PXDisplayAssetCollection> assetCollection;
@property(readonly, nonatomic) PXAssetCollectionActionManager *assetCollectionActionManager;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) NSDate *expiryDate;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) NSString *identifier;
- (id)invitationWithUpdatedPreviewAssetsFetchResult:(id)arg1;	// IMP=0x000000000089b053
- (id)invitationWithUpdatedParticipantsFetchResult:(id)arg1;	// IMP=0x000000000089af15
@property(readonly, copy) NSString *description;
- (id)initWithMomentShare:(id)arg1;	// IMP=0x000000000089ad4f
- (id)init;	// IMP=0x000000000089acd5
@property(readonly, nonatomic) long long aggregateMediaType; // @dynamic aggregateMediaType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

