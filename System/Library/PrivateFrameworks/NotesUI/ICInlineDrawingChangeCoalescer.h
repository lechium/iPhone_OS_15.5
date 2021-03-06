//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICAttachment, ICSelectorDelayer, NSManagedObjectContext, PKDrawing;

@interface ICInlineDrawingChangeCoalescer : NSObject
{
    ICAttachment *_attachment;	// 8 = 0x8
    ICSelectorDelayer *_processChangesSelectorDelayer;	// 16 = 0x10
    PKDrawing *_latestDrawing;	// 24 = 0x18
    unsigned long long _numberOfChanges;	// 32 = 0x20
    NSManagedObjectContext *_workerContext;	// 40 = 0x28
    NSManagedObjectContext *_mainContext;	// 48 = 0x30
    NSManagedObjectContext *_handwritingRecognitionContext;	// 56 = 0x38
}

+ (void)purgeHandwritingSummariesInContext:(id)arg1;	// IMP=0x000000000011e222
+ (void)generateMissingOrOutdatedHandwritingSummariesInContext:(id)arg1;	// IMP=0x000000000011e032
+ (id)missingOrOutdatedHandwritingSummaryAttachmentIDsInContext:(id)arg1;	// IMP=0x000000000011dcc3
+ (id)handwritingSummaryAttachmentsInContext:(id)arg1;	// IMP=0x000000000011da06
- (void).cxx_destruct;	// IMP=0x000000000011f6cb
@property(retain, nonatomic) NSManagedObjectContext *handwritingRecognitionContext; // @synthesize handwritingRecognitionContext=_handwritingRecognitionContext;
@property(retain, nonatomic) NSManagedObjectContext *mainContext; // @synthesize mainContext=_mainContext;
@property(retain, nonatomic) NSManagedObjectContext *workerContext; // @synthesize workerContext=_workerContext;
@property(nonatomic) unsigned long long numberOfChanges; // @synthesize numberOfChanges=_numberOfChanges;
@property(retain, nonatomic) PKDrawing *latestDrawing; // @synthesize latestDrawing=_latestDrawing;
@property(retain, nonatomic) ICSelectorDelayer *processChangesSelectorDelayer; // @synthesize processChangesSelectorDelayer=_processChangesSelectorDelayer;
@property(retain, nonatomic) ICAttachment *attachment; // @synthesize attachment=_attachment;
- (void)updateVersionIfNeededForAttachment:(id)arg1 withDrawing:(id)arg2;	// IMP=0x000000000011f599
- (void)processIndexableContentWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000011ea36
- (void)mergeDrawingWithDrawing:(id)arg1;	// IMP=0x000000000011e5ff
- (id)retrieveAndClearLatestDrawingToMerge;	// IMP=0x000000000011e4f6
- (void)mergeDrawingChanges;	// IMP=0x000000000011e423
- (void)updateNowIfNecessary;	// IMP=0x000000000011e34d
- (void)drawingDataDidChange:(id)arg1;	// IMP=0x000000000011d669
- (_Bool)hasChanges;	// IMP=0x000000000011d5e7
- (void)dealloc;	// IMP=0x000000000011d571
- (id)initWithAttachment:(id)arg1;	// IMP=0x000000000011d423

@end

