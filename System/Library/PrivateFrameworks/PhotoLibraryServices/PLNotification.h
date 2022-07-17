//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate, NSDictionary, NSMutableSet, NSString;

@interface PLNotification : NSObject
{
    long long _notificationType;	// 8 = 0x8
    NSString *_senderName;	// 16 = 0x10
    NSString *_senderEmailAddress;	// 24 = 0x18
    NSString *_albumTitle;	// 32 = 0x20
    NSString *_photosBatchID;	// 40 = 0x28
    NSString *_mainAssetUUID;	// 48 = 0x30
    _Bool _mainAssetIsMine;	// 56 = 0x38
    _Bool _mainAssetIsVideo;	// 57 = 0x39
    _Bool _containsBatchFirstKnownAsset;	// 58 = 0x3a
    NSMutableSet *_assetUUIDs;	// 64 = 0x40
    long long _assetCount;	// 72 = 0x48
    NSMutableSet *_placeholderAssetUUIDs;	// 80 = 0x50
    NSMutableSet *_lowResThumbAssetUUIDs;	// 88 = 0x58
    int _invitationState;	// 96 = 0x60
    NSString *_firstCommentGUID;	// 104 = 0x68
    NSDate *_commentDate;	// 112 = 0x70
    NSString *_commentText;	// 120 = 0x78
    long long _commentCount;	// 128 = 0x80
    _Bool _commentIsCaption;	// 136 = 0x88
    _Bool _suppressAlert;	// 137 = 0x89
    NSMutableSet *_senderNames;	// 144 = 0x90
    _Bool _forMultipleAsset;	// 152 = 0x98
    _Bool _allMultipleAssetIsMine;	// 153 = 0x99
    _Bool _isMixedType;	// 154 = 0x9a
    _Bool _offerToReportAsJunk;	// 155 = 0x9b
    NSString *_interestingMemoryUUID;	// 160 = 0xa0
    NSString *_notificationTitle;	// 168 = 0xa8
    NSString *_notificationSubtitle;	// 176 = 0xb0
    NSString *_suggestedCMMUUID;	// 184 = 0xb8
    NSString *_keyMomentShareUUID;	// 192 = 0xc0
    NSArray *_momentShareUUIDs;	// 200 = 0xc8
    NSString *_momentShareOwnerLocalizedName;	// 208 = 0xd0
    NSString *_albumUUID;	// 216 = 0xd8
    NSString *_albumCloudGUID;	// 224 = 0xe0
    NSDate *_date;	// 232 = 0xe8
    NSDate *_originalDate;	// 240 = 0xf0
    NSDate *_expirationDate;	// 248 = 0xf8
    NSDate *_notificationDeliveryDate;	// 256 = 0x100
    NSData *_thumbnailImageData;	// 264 = 0x108
    NSString *_photoLibraryURLString;	// 272 = 0x110
}

+ (id)_UNCategoryFromNotificationType:(long long)arg1;	// IMP=0x000000000043ce50
+ (id)requestIdentifierByNotificationType:(long long)arg1 keyObjectUUID:(id)arg2 photosBatchID:(id)arg3;	// IMP=0x000000000043cd72
- (void).cxx_destruct;	// IMP=0x000000000043ca3a
@property(readonly) NSString *photoLibraryURLString; // @synthesize photoLibraryURLString=_photoLibraryURLString;
@property(readonly) NSString *commentText; // @synthesize commentText=_commentText;
@property(readonly) NSString *photosBatchID; // @synthesize photosBatchID=_photosBatchID;
@property(readonly) _Bool offerToReportAsJunk; // @synthesize offerToReportAsJunk=_offerToReportAsJunk;
@property(retain) NSData *thumbnailImageData; // @synthesize thumbnailImageData=_thumbnailImageData;
@property(readonly) NSString *interestingMemoryUUID; // @synthesize interestingMemoryUUID=_interestingMemoryUUID;
@property(copy) NSDate *notificationDeliveryDate; // @synthesize notificationDeliveryDate=_notificationDeliveryDate;
@property _Bool suppressAlert; // @synthesize suppressAlert=_suppressAlert;
@property(readonly, copy) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy) NSDate *originalDate; // @synthesize originalDate=_originalDate;
@property(readonly, copy) NSDate *date; // @synthesize date=_date;
@property(readonly, copy) NSString *senderEmailAddress; // @synthesize senderEmailAddress=_senderEmailAddress;
@property(readonly, copy) NSString *mainAssetUUID; // @synthesize mainAssetUUID=_mainAssetUUID;
@property(readonly, copy) NSString *albumCloudGUID; // @synthesize albumCloudGUID=_albumCloudGUID;
@property(readonly, copy) NSString *albumUUID; // @synthesize albumUUID=_albumUUID;
@property(readonly) long long notificationType; // @synthesize notificationType=_notificationType;
- (_Bool)assetWithUUID:(id)arg1 didChangePlaceholderKindTo:(short)arg2 fromOldKind:(short)arg3;	// IMP=0x000000000043c830
@property(readonly) NSString *requestIdentifier;
@property(readonly) NSString *keyObjectUUID;
- (_Bool)isCommentPiggyBackedOnPhotosAddedNotification;	// IMP=0x000000000043c6e4
- (id)description;	// IMP=0x000000000043c63f
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly) NSArray *suppressionContexts;
@property(readonly) _Bool hasThumbnail;
@property(readonly) NSString *destinationURLString;
@property(readonly) NSString *message;
@property(readonly) NSString *title;
@property(readonly) double completionPercentage;
@property(readonly) _Bool thumbnailAssetIsPlaceholder;
@property(readonly) _Bool allAssetsAreFullResolution;
- (id)notificationByMergingWithNotificationDictionary:(id)arg1;	// IMP=0x000000000043a9e4
- (id)notificationByMergingWithNotification:(id)arg1;	// IMP=0x000000000043a3b3
@property(readonly) _Bool canMergeWithPersistedNotifications;
- (id)initWithExpiringMomentShareUUIDs:(id)arg1 thumbnailImageData:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4;	// IMP=0x000000000043a1a2
- (id)initWithExpiringMomentShares:(id)arg1;	// IMP=0x0000000000439ed4
- (id)initCMMInvitationReadyToViewWithMomentShare:(id)arg1;	// IMP=0x0000000000439bfe
- (id)initCMMInvitationWithMomentShare:(id)arg1;	// IMP=0x0000000000439aa8
- (id)initWithSuggestedCMMUUID:(id)arg1 keyAssetUUID:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4;	// IMP=0x00000000004397ff
- (id)initWithInterestingMemoryNotificationWithMemoryUUID:(id)arg1 keyAssetUUID:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4 photoLibraryURLString:(id)arg5;	// IMP=0x00000000004394b2
- (id)_initWithLikesCount:(long long)arg1 commentDate:(id)arg2 firstCommentGUID:(id)arg3 toAssetWithUUID:(id)arg4 photosBatchID:(id)arg5 mainAssetIsMine:(_Bool)arg6 mainAssetIsVideo:(_Bool)arg7 inAlbumWithTitle:(id)arg8 albumUUID:(id)arg9 albumCloudGUID:(id)arg10 assetUUIDs:(id)arg11 placeholderAssetUUIDs:(id)arg12 lowResThumbAssetUUIDs:(id)arg13 senderNames:(id)arg14 forMultipleAsset:(_Bool)arg15 allMultipleAssetIsMine:(_Bool)arg16 isMixedType:(_Bool)arg17;	// IMP=0x000000000043926a
- (id)_initWithCommentsCount:(long long)arg1 commentDate:(id)arg2 firstCommentGUID:(id)arg3 toAssetWithUUID:(id)arg4 photosBatchID:(id)arg5 mainAssetIsMine:(_Bool)arg6 mainAssetIsVideo:(_Bool)arg7 inAlbumWithTitle:(id)arg8 albumUUID:(id)arg9 albumCloudGUID:(id)arg10 assetUUIDs:(id)arg11 placeholderAssetUUIDs:(id)arg12 lowResThumbAssetUUIDs:(id)arg13;	// IMP=0x000000000043904b
- (id)initWithLikeAdded:(id)arg1;	// IMP=0x0000000000438c34
- (id)initWithCommentAdded:(id)arg1;	// IMP=0x000000000043877e
- (id)_initWithPhotosAddedNotification:(id)arg1 mergedWithNotificationDictionary:(id)arg2;	// IMP=0x00000000004383e6
- (id)_initWithPhotosAddedNotification:(id)arg1 mergedWithNotification:(id)arg2;	// IMP=0x000000000043814f
- (id)initWithAssetsAdded:(id)arg1 toAlbum:(id)arg2;	// IMP=0x0000000000437b65
- (id)initWithAssetAdded:(id)arg1 atIndex:(unsigned long long)arg2 toAlbum:(id)arg3;	// IMP=0x0000000000437680
- (id)initWithMultipleContributorEnabledForAlbum:(id)arg1;	// IMP=0x00000000004374be
- (id)initWithInvitationRecordStatusChanged:(id)arg1;	// IMP=0x000000000043727f
- (id)initWithInvitationAlbum:(id)arg1;	// IMP=0x00000000004370ab
- (id)_initWithType:(long long)arg1;	// IMP=0x0000000000436fa1
- (id)init;	// IMP=0x0000000000436f1a

@end
