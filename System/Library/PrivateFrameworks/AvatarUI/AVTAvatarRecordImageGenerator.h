//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVTAvatarConfigurationImageRenderer, AVTCoreModel, AVTImageStore, AVTUIEnvironment, NSArray;
@protocol AVTUILogger;

@interface AVTAvatarRecordImageGenerator : NSObject
{
    AVTImageStore *_imageStore;	// 8 = 0x8
    AVTAvatarConfigurationImageRenderer *_renderer;	// 16 = 0x10
    NSArray *_scopes;	// 24 = 0x18
    id <AVTUILogger> _logger;	// 32 = 0x20
    AVTUIEnvironment *_environment;	// 40 = 0x28
}

+ (id)supportedScopesForScale:(double)arg1;	// IMP=0x0000000000005436
- (void).cxx_destruct;	// IMP=0x0000000000006e1e
@property(readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(readonly, copy, nonatomic) NSArray *scopes; // @synthesize scopes=_scopes;
@property(readonly, nonatomic) AVTAvatarConfigurationImageRenderer *renderer; // @synthesize renderer=_renderer;
@property(readonly, nonatomic) AVTImageStore *imageStore; // @synthesize imageStore=_imageStore;
- (void)updateThumbnailsForChangesWithTracker:(id)arg1 recordProvider:(CDUnknownBlockType)arg2;	// IMP=0x00000000000065d3
- (_Bool)generateThumbnailsForDuplicateAvatarRecord:(id)arg1 originalRecord:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000064b9
- (_Bool)deleteThumbnailsForAvatarRecordsWithIdentifiers:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000006296
- (_Bool)generateThumbnailForAvatarRecordItem:(id)arg1 avatarConfiguration:(id)arg2 scope:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000005fe0
- (_Bool)generateThumbnailsForAvatarRecords:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000005b40
- (_Bool)generateThumbnailsForAvatarRecord:(id)arg1 avatar:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000576a
@property(readonly, nonatomic) AVTCoreModel *coreModel;
- (id)initWithImageStore:(id)arg1 coreEnvironment:(id)arg2;	// IMP=0x0000000000005667
- (id)initWithImageStore:(id)arg1 renderer:(id)arg2 environment:(id)arg3;	// IMP=0x0000000000005527

@end

