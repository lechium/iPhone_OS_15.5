//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSProgress, NUComposition, PHAsset, PHContentEditingOutput, PICompositionController, PUPhotoEditIrisModel;

__attribute__((visibility("hidden")))
@interface PUPhotoEditSaveRequest : NSObject
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    double _beginTimestamp;	// 16 = 0x10
    _Bool _useRawIfAvailable;	// 24 = 0x18
    NSProgress *_videoExportProgress;	// 32 = 0x20
    int _identifier;	// 40 = 0x28
    PHAsset *_photo;	// 48 = 0x30
    PICompositionController *_compositionController;	// 56 = 0x38
    NUComposition *_originalComposition;	// 64 = 0x40
    PUPhotoEditIrisModel *_irisModel;	// 72 = 0x48
    PHContentEditingOutput *_contentEditingOutput;	// 80 = 0x50
    long long _workImageVersion;	// 88 = 0x58
    long long _currentState;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000002b7199
@property(readonly, nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(readonly, nonatomic) long long workImageVersion; // @synthesize workImageVersion=_workImageVersion;
@property(readonly, nonatomic) PHContentEditingOutput *contentEditingOutput; // @synthesize contentEditingOutput=_contentEditingOutput;
@property(readonly, copy, nonatomic) PUPhotoEditIrisModel *irisModel; // @synthesize irisModel=_irisModel;
@property(readonly, nonatomic) NUComposition *originalComposition; // @synthesize originalComposition=_originalComposition;
@property(readonly, copy, nonatomic) PICompositionController *compositionController; // @synthesize compositionController=_compositionController;
@property(readonly, nonatomic) PHAsset *photo; // @synthesize photo=_photo;
@property(readonly, nonatomic) int identifier; // @synthesize identifier=_identifier;
- (void)_transitionToState:(long long)arg1;	// IMP=0x00000000002b708a
@property(readonly, nonatomic) double progress;
@property(readonly, nonatomic) _Bool supportsProgress;
- (_Bool)_requiresVideoRender;	// IMP=0x00000000002b6f4d
- (void)_finishWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x00000000002b6e06
- (void)cancelSaveOperation;	// IMP=0x00000000002b6d91
- (void)_performRevertToOriginalOperation;	// IMP=0x00000000002b6bba
- (void)_performSaveContentEditingOutput;	// IMP=0x00000000002b6ab9
- (void)_performSaveEditsOperation;	// IMP=0x00000000002b612b
- (long long)_videoRequestVersion;	// IMP=0x00000000002b6084
- (long long)_imageRequestVersion;	// IMP=0x00000000002b5fb2
- (void)beginSaveOperationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002b5edd
- (id)initWithPhoto:(id)arg1 compositionController:(id)arg2 contentEditingOutput:(id)arg3 workImageVersion:(long long)arg4 irisEditModel:(id)arg5 originalComposition:(id)arg6 useRawIfAvailable:(_Bool)arg7;	// IMP=0x00000000002b5db3
- (id)initWithPhoto:(id)arg1 contentEditingOutput:(id)arg2 workImageVersion:(long long)arg3 irisEditModel:(id)arg4 useRawIfAvailable:(_Bool)arg5;	// IMP=0x00000000002b5ca5
- (id)initWithPhotoToRevertToOriginal:(id)arg1;	// IMP=0x00000000002b5c70
- (id)init;	// IMP=0x00000000002b5be9

@end
