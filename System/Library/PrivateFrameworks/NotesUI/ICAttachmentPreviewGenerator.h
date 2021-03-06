//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NotesUI/ICAttachmentPreviewGenerating-Protocol.h>
#import <NotesUI/ICProgressIndicatorTrackerDelegate-Protocol.h>

@class ICAttachmentPreviewGeneratorOperationQueue, ICProgressIndicatorTracker, NSMapTable, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface ICAttachmentPreviewGenerator : NSObject <ICProgressIndicatorTrackerDelegate, ICAttachmentPreviewGenerating>
{
    _Atomic _Bool _shouldGenerateAttachmentsWhenReachable;	// 8 = 0x8
    ICAttachmentPreviewGeneratorOperationQueue *_asyncGeneratorQueue;	// 16 = 0x10
    ICAttachmentPreviewGeneratorOperationQueue *_costlyGeneratorQueue;	// 24 = 0x18
    ICAttachmentPreviewGeneratorOperationQueue *_generatorQueue;	// 32 = 0x20
    NSMapTable *_lastOperationForAttachmentID;	// 40 = 0x28
    NSMutableSet *_attachmentIDsPending;	// 48 = 0x30
    NSMutableDictionary *_attachmentIDsProgress;	// 56 = 0x38
    ICProgressIndicatorTracker *_progressTracker;	// 64 = 0x40
    ICAttachmentPreviewGeneratorOperationQueue *_postProcessingQueue;	// 72 = 0x48
    NSMutableOrderedSet *_postProcessingIDsPending;	// 80 = 0x50
    unsigned long long _postProcessingRequestIndex;	// 88 = 0x58
    unsigned long long _previewGenerationState;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_previewQueue;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_previewProgressQueue;	// 112 = 0x70
}

+ (void)purgeOCRInContext:(id)arg1;	// IMP=0x000000000008cc8e
+ (void)purgeImageClassificationsInContext:(id)arg1;	// IMP=0x000000000008ca65
+ (void)setImageClassificationTemporarilyDisabled:(_Bool)arg1;	// IMP=0x000000000008c8bb
+ (_Bool)imageClassificationEnabled;	// IMP=0x000000000008c741
+ (_Bool)ocrGenerationEnabled;	// IMP=0x000000000008c6f0
+ (id)sharedGenerator;	// IMP=0x000000000008bef5
- (void).cxx_destruct;	// IMP=0x0000000000090caa
@property(nonatomic) _Atomic _Bool shouldGenerateAttachmentsWhenReachable; // @synthesize shouldGenerateAttachmentsWhenReachable=_shouldGenerateAttachmentsWhenReachable;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *previewProgressQueue; // @synthesize previewProgressQueue=_previewProgressQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *previewQueue; // @synthesize previewQueue=_previewQueue;
@property unsigned long long previewGenerationState; // @synthesize previewGenerationState=_previewGenerationState;
@property unsigned long long postProcessingRequestIndex; // @synthesize postProcessingRequestIndex=_postProcessingRequestIndex;
@property(retain, nonatomic) NSMutableOrderedSet *postProcessingIDsPending; // @synthesize postProcessingIDsPending=_postProcessingIDsPending;
@property(retain, nonatomic) ICAttachmentPreviewGeneratorOperationQueue *postProcessingQueue; // @synthesize postProcessingQueue=_postProcessingQueue;
@property(retain, nonatomic) ICProgressIndicatorTracker *progressTracker; // @synthesize progressTracker=_progressTracker;
@property(retain, nonatomic) NSMutableDictionary *attachmentIDsProgress; // @synthesize attachmentIDsProgress=_attachmentIDsProgress;
@property(retain, nonatomic) NSMutableSet *attachmentIDsPending; // @synthesize attachmentIDsPending=_attachmentIDsPending;
@property(retain, nonatomic) NSMapTable *lastOperationForAttachmentID; // @synthesize lastOperationForAttachmentID=_lastOperationForAttachmentID;
@property(retain, nonatomic) ICAttachmentPreviewGeneratorOperationQueue *generatorQueue; // @synthesize generatorQueue=_generatorQueue;
@property(retain, nonatomic) ICAttachmentPreviewGeneratorOperationQueue *costlyGeneratorQueue; // @synthesize costlyGeneratorQueue=_costlyGeneratorQueue;
@property(retain, nonatomic) ICAttachmentPreviewGeneratorOperationQueue *asyncGeneratorQueue; // @synthesize asyncGeneratorQueue=_asyncGeneratorQueue;
- (void)cancelIfNeededForAttachment:(id)arg1;	// IMP=0x000000000009062c
- (void)generatePendingPreviewForAttachment:(id)arg1;	// IMP=0x000000000008ffb4
- (void)generatePendingPreviews;	// IMP=0x000000000008fa93
- (id)progressForObjectID:(id)arg1;	// IMP=0x000000000008f8e5
- (void)setProgress:(id)arg1 forObjectID:(id)arg2;	// IMP=0x000000000008f798
- (void)operationComplete:(id)arg1;	// IMP=0x000000000008f5a1
- (void)resume;	// IMP=0x000000000008f44a
- (void)suspend;	// IMP=0x000000000008f303
- (void)disableAutomaticPreviewGeneration;	// IMP=0x000000000008f2b0
- (void)enableAutomaticPreviewGeneration;	// IMP=0x000000000008f080
- (void)didReceiveMemoryWarning;	// IMP=0x000000000008eff9
- (void)cancelGenerationOfPendingPreviews;	// IMP=0x000000000008ef2a
- (void)reachabilityChanged:(id)arg1;	// IMP=0x000000000008eece
- (void)managedObjectContextDidSave:(id)arg1;	// IMP=0x000000000008eebc
- (void)mediaDidLoad:(id)arg1;	// IMP=0x000000000008edc3
- (void)attachmentWillBeDeleted:(id)arg1;	// IMP=0x000000000008ecbe
- (void)attachmentNeedsPreviewGenerationNotification:(id)arg1;	// IMP=0x000000000008eb54
- (void)attachmentDidLoad:(id)arg1;	// IMP=0x000000000008eb42
- (void)adjustUserTitleIfNecessaryForAttachment:(id)arg1;	// IMP=0x000000000008e799
- (void)postProcessPreviewForAttachment:(id)arg1;	// IMP=0x000000000008e4d6
- (void)postProcessPendingPreviews;	// IMP=0x000000000008e1a1
- (void)beginPostProcessingAfterDelayIfNecessaryWithForceDelay:(_Bool)arg1;	// IMP=0x000000000008df14
- (void)postProcessIfNeededForAttachment:(id)arg1;	// IMP=0x000000000008dd0a
- (void)attachmentNeedsPostProcessingNotification:(id)arg1;	// IMP=0x000000000008dc37
- (void)generatePreviewIfNeededForAttachmentWithObjectID:(id)arg1;	// IMP=0x000000000008da65
- (void)generatePreviewIfNeededForAttachment:(id)arg1;	// IMP=0x000000000008d8cc
- (void)generateMissingOrOutdatedAttachmentMetaDataIfNeededInContext:(id)arg1;	// IMP=0x000000000008d69d
- (id)missingOrOutdatedMetaDataAttachmentIDsInContext:(id)arg1;	// IMP=0x000000000008d5c4
- (id)missingOrOutdatedOCRSummaryAttachmentIDsInContext:(id)arg1;	// IMP=0x000000000008d250
- (id)missingOrOutdatedImageClassificationSummaryAttachmentIDsInContext:(id)arg1;	// IMP=0x000000000008ceb7
- (void)generatePreviewsIfNeeded;	// IMP=0x000000000008c5e3
@property(readonly, nonatomic) _Bool previewOperationsIdle;
- (_Bool)isPreviewGenerationSupported;	// IMP=0x000000000008c49b
- (void)progressIndicatorTrackerStopAnimation;	// IMP=0x000000000008c45c
- (void)progressIndicatorTrackerStartAnimation;	// IMP=0x000000000008c41a
- (void)dealloc;	// IMP=0x000000000008c3a5
- (id)init;	// IMP=0x000000000008bf4a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

