//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTStickerTaskScheduler-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol AVTAvatarRecordDataSource, AVTUILogger, OS_dispatch_queue;

@interface AVTStickerTaskScheduler : NSObject <AVTStickerTaskScheduler>
{
    NSObject<OS_dispatch_queue> *_stateLock;	// 8 = 0x8
    NSMutableDictionary *_stickerPickerTasks;	// 16 = 0x10
    NSMutableDictionary *_stickerPickerBacklogTasks;	// 24 = 0x18
    NSMutableDictionary *_stickerSheetPlaceholderTasks;	// 32 = 0x20
    NSMutableDictionary *_stickerSheetsTasks;	// 40 = 0x28
    id <AVTAvatarRecordDataSource> _recordDataSource;	// 48 = 0x30
    NSArray *_allAvatarRecordIdentifiers;	// 56 = 0x38
    NSString *_selectedAvatarRecordIdentifier;	// 64 = 0x40
    NSArray *_sortedVisibleIndexPaths;	// 72 = 0x48
    id <AVTUILogger> _logger;	// 80 = 0x50
}

+ (id)schedulerWithRecordDataSource:(id)arg1;	// IMP=0x000000000009e7e9
- (void).cxx_destruct;	// IMP=0x00000000000a12f6
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(retain) NSArray *sortedVisibleIndexPaths; // @synthesize sortedVisibleIndexPaths=_sortedVisibleIndexPaths;
@property(retain) NSString *selectedAvatarRecordIdentifier; // @synthesize selectedAvatarRecordIdentifier=_selectedAvatarRecordIdentifier;
@property(retain) NSArray *allAvatarRecordIdentifiers; // @synthesize allAvatarRecordIdentifiers=_allAvatarRecordIdentifiers;
@property(readonly, nonatomic) id <AVTAvatarRecordDataSource> recordDataSource; // @synthesize recordDataSource=_recordDataSource;
@property(readonly, nonatomic) NSMutableDictionary *stickerSheetsTasks; // @synthesize stickerSheetsTasks=_stickerSheetsTasks;
@property(readonly, nonatomic) NSMutableDictionary *stickerSheetPlaceholderTasks; // @synthesize stickerSheetPlaceholderTasks=_stickerSheetPlaceholderTasks;
@property(readonly, nonatomic) NSMutableDictionary *stickerPickerBacklogTasks; // @synthesize stickerPickerBacklogTasks=_stickerPickerBacklogTasks;
@property(readonly, nonatomic) NSMutableDictionary *stickerPickerTasks; // @synthesize stickerPickerTasks=_stickerPickerTasks;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateLock; // @synthesize stateLock=_stateLock;
- (void)lowerTaskPriority:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a1241
- (void)scheduleTask:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a123b
- (void)cancelTask:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a1235
- (id)nextSheetStickerFromTasksStorage:(id)arg1 allAvatarRecordIdentifiers:(id)arg2;	// IMP=0x00000000000a0fa6
- (id)nextSheetPlaceHolderFromTasksStorage:(id)arg1 allAvatarRecordIdentifiers:(id)arg2;	// IMP=0x00000000000a0d80
- (id)nextSelectedSheetStickerFromTasksStorage:(id)arg1 selectedAvatarRecordIdentifier:(id)arg2;	// IMP=0x00000000000a0c3b
- (id)nextVisibleSelectedSheetStickerFromTasksStorage:(id)arg1 selectedAvatarRecordIdentifier:(id)arg2 visibleIndexPaths:(id)arg3;	// IMP=0x00000000000a07ed
- (id)selectedSheetPlaceholderFromTasksStorage:(id)arg1 selectedAvatarRecordIdentifier:(id)arg2;	// IMP=0x00000000000a06f3
- (id)selectedPickerThumbnailFromTasksStorage:(id)arg1 selectedAvatarRecordIdentifier:(id)arg2;	// IMP=0x00000000000a05f9
- (id)nextPickerThumbnailFromTasksBacklogStorage:(id)arg1 allAvatarRecordIdentifiers:(id)arg2;	// IMP=0x00000000000a03d3
- (id)nextPickerThumbnailFromTasksStorage:(id)arg1 allAvatarRecordIdentifiers:(id)arg2;	// IMP=0x00000000000a01ad
- (id)nextTaskToRunFromStickerPickerTasks:(id)arg1 stickerPickerBacklogStorage:(id)arg2 stickerSheetPlaceholderTasks:(id)arg3 stickerSheetsTasks:(id)arg4;	// IMP=0x000000000009ff02
- (void)setVisibleIndexPaths:(id)arg1;	// IMP=0x000000000009fe94
- (void)reloadData;	// IMP=0x000000000009fd33
- (void)cancelAllTasks;	// IMP=0x000000000009fc14
- (void)cancelStickerSheetTasksForAvatarRecordIdentifier:(id)arg1;	// IMP=0x000000000009f931
- (void)cancelPickerTask:(CDUnknownBlockType)arg1 avatarRecordIdentifier:(id)arg2;	// IMP=0x000000000009f618
- (void)didCompleteTask:(id)arg1;	// IMP=0x000000000009f26a
- (void)startTask:(id)arg1;	// IMP=0x000000000009f141
- (void)lowerStickerPickerTaskPriority:(CDUnknownBlockType)arg1 avatarRecordIdentifier:(id)arg2;	// IMP=0x000000000009efb5
- (void)scheduleStickerTask:(id)arg1;	// IMP=0x000000000009eb88
- (void)performStateWork:(CDUnknownBlockType)arg1;	// IMP=0x000000000009ea10
- (id)initWithEnvironment:(id)arg1 recordDataSource:(id)arg2;	// IMP=0x000000000009e872

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

