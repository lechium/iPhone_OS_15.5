//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSSet;

@interface PLDelayedSaveActionsDetail : NSObject <NSSecureCoding>
{
    _Bool _shouldReloadWidgetTimeline;	// 8 = 0x8
    _Bool _shouldUpdateFeaturedContent;	// 9 = 0x9
    NSArray *_cloudFeedAlbumUpdates;	// 16 = 0x10
    NSArray *_cloudFeedAssetInserts;	// 24 = 0x18
    NSArray *_cloudFeedAssetUpdates;	// 32 = 0x20
    NSArray *_cloudFeedCommentInserts;	// 40 = 0x28
    NSArray *_cloudFeedInvitationRecordUpdates;	// 48 = 0x30
    NSArray *_cloudFeedDeletionEntries;	// 56 = 0x38
    NSArray *_momentInsertsAndUpdates;	// 64 = 0x40
    NSDictionary *_momentDeletes;	// 72 = 0x48
    NSArray *_updatedAssetIDsForHighlights;	// 80 = 0x50
    NSArray *_updatedMomentIDsForHighlights;	// 88 = 0x58
    NSArray *_dupeAnalysisNormalInserts;	// 96 = 0x60
    NSArray *_dupeAnalysisCloudInserts;	// 104 = 0x68
    NSArray *_assetsForFilesystemPersistency;	// 112 = 0x70
    NSDictionary *_searchIndexUpdates;	// 120 = 0x78
    NSSet *_albumCountsAndDateRangeUpdates;	// 128 = 0x80
    NSSet *_importSessionCountsAndDateRangeUpdates;	// 136 = 0x88
    NSSet *_assetsForDuetDelete;	// 144 = 0x90
    NSSet *_memoriesForDuetDelete;	// 152 = 0x98
    NSSet *_memoriesForAssetUpdate;	// 160 = 0xa0
}

+ (id)_decodeMomentDeletes:(id)arg1 urlToObjectID:(CDUnknownBlockType)arg2;	// IMP=0x00000000005d55bf
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000005d55b7
- (void).cxx_destruct;	// IMP=0x00000000005d541e
@property(copy, nonatomic) NSSet *memoriesForAssetUpdate; // @synthesize memoriesForAssetUpdate=_memoriesForAssetUpdate;
@property(nonatomic) _Bool shouldUpdateFeaturedContent; // @synthesize shouldUpdateFeaturedContent=_shouldUpdateFeaturedContent;
@property(nonatomic) _Bool shouldReloadWidgetTimeline; // @synthesize shouldReloadWidgetTimeline=_shouldReloadWidgetTimeline;
@property(copy, nonatomic) NSSet *memoriesForDuetDelete; // @synthesize memoriesForDuetDelete=_memoriesForDuetDelete;
@property(copy, nonatomic) NSSet *assetsForDuetDelete; // @synthesize assetsForDuetDelete=_assetsForDuetDelete;
@property(copy, nonatomic) NSSet *importSessionCountsAndDateRangeUpdates; // @synthesize importSessionCountsAndDateRangeUpdates=_importSessionCountsAndDateRangeUpdates;
@property(copy, nonatomic) NSSet *albumCountsAndDateRangeUpdates; // @synthesize albumCountsAndDateRangeUpdates=_albumCountsAndDateRangeUpdates;
@property(copy, nonatomic) NSDictionary *searchIndexUpdates; // @synthesize searchIndexUpdates=_searchIndexUpdates;
@property(copy, nonatomic) NSArray *assetsForFilesystemPersistency; // @synthesize assetsForFilesystemPersistency=_assetsForFilesystemPersistency;
@property(copy, nonatomic) NSArray *dupeAnalysisCloudInserts; // @synthesize dupeAnalysisCloudInserts=_dupeAnalysisCloudInserts;
@property(copy, nonatomic) NSArray *dupeAnalysisNormalInserts; // @synthesize dupeAnalysisNormalInserts=_dupeAnalysisNormalInserts;
@property(copy, nonatomic) NSArray *updatedMomentIDsForHighlights; // @synthesize updatedMomentIDsForHighlights=_updatedMomentIDsForHighlights;
@property(copy, nonatomic) NSArray *updatedAssetIDsForHighlights; // @synthesize updatedAssetIDsForHighlights=_updatedAssetIDsForHighlights;
@property(copy, nonatomic) NSDictionary *momentDeletes; // @synthesize momentDeletes=_momentDeletes;
@property(copy, nonatomic) NSArray *momentInsertsAndUpdates; // @synthesize momentInsertsAndUpdates=_momentInsertsAndUpdates;
@property(copy, nonatomic) NSArray *cloudFeedDeletionEntries; // @synthesize cloudFeedDeletionEntries=_cloudFeedDeletionEntries;
@property(copy, nonatomic) NSArray *cloudFeedInvitationRecordUpdates; // @synthesize cloudFeedInvitationRecordUpdates=_cloudFeedInvitationRecordUpdates;
@property(copy, nonatomic) NSArray *cloudFeedCommentInserts; // @synthesize cloudFeedCommentInserts=_cloudFeedCommentInserts;
@property(copy, nonatomic) NSArray *cloudFeedAssetUpdates; // @synthesize cloudFeedAssetUpdates=_cloudFeedAssetUpdates;
@property(copy, nonatomic) NSArray *cloudFeedAssetInserts; // @synthesize cloudFeedAssetInserts=_cloudFeedAssetInserts;
@property(copy, nonatomic) NSArray *cloudFeedAlbumUpdates; // @synthesize cloudFeedAlbumUpdates=_cloudFeedAlbumUpdates;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005d45a0
- (id)_encodableMomentDeletes;	// IMP=0x00000000005d44ff
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000005d4090
@property(readonly, nonatomic) _Bool shouldHandleMoments;
- (id)init;	// IMP=0x00000000005d3fe8

@end
