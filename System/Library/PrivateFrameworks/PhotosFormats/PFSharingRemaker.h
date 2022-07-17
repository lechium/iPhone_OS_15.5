//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSMutableDictionary, NSOperationQueue, PFSharingRemakerOptions;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PFSharingRemaker : NSObject
{
    NSObject<OS_dispatch_queue> *_remakerQueue;	// 8 = 0x8
    float _progress;	// 16 = 0x10
    NSMutableDictionary *_inProgressOperationByUUID;	// 24 = 0x18
    _Bool _remakerSuccess;	// 32 = 0x20
    _Bool _abortedRemaker;	// 33 = 0x21
    _Bool _cancelledRemaker;	// 34 = 0x22
    NSError *_remakerError;	// 40 = 0x28
    NSOperationQueue *_remakeOperationQueue;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_progressTimer;	// 56 = 0x38
    PFSharingRemakerOptions *__options;	// 64 = 0x40
    NSArray *__operations;	// 72 = 0x48
    CDUnknownBlockType __progressHandler;	// 80 = 0x50
    CDUnknownBlockType __completionHandler;	// 88 = 0x58
}

+ (id)remakerWithOperations:(id)arg1 options:(id)arg2;	// IMP=0x00000000000465ca
- (void).cxx_destruct;	// IMP=0x0000000000045840
@property(copy, nonatomic, setter=_setCompletionHandler:) CDUnknownBlockType _completionHandler; // @synthesize _completionHandler=__completionHandler;
@property(copy, nonatomic, setter=_setProgressHandler:) CDUnknownBlockType _progressHandler; // @synthesize _progressHandler=__progressHandler;
@property(retain, nonatomic, setter=_setOperations:) NSArray *_operations; // @synthesize _operations=__operations;
@property(retain, nonatomic, setter=_setOptions:) PFSharingRemakerOptions *_options; // @synthesize _options=__options;
- (void)_abortWithUnderlyingOperationError:(id)arg1;	// IMP=0x0000000000045673
- (void)_completeOperationWithUUID:(id)arg1;	// IMP=0x00000000000453ff
- (void)_configurePhotoOperation:(id)arg1 withUUID:(id)arg2 dispatchGroup:(id)arg3;	// IMP=0x000000000004502c
- (void)_configureVideoOperation:(id)arg1 withUUID:(id)arg2 dispatchGroup:(id)arg3;	// IMP=0x0000000000044c90
- (void)_endSessionWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x0000000000044b47
- (void)cancelRemaking;	// IMP=0x0000000000044afc
- (void)_callProgressBlockWithProgress:(double)arg1;	// IMP=0x0000000000044aba
- (double)_computeProgress;	// IMP=0x00000000000449cd
- (void)_updateProgress;	// IMP=0x00000000000448c0
- (void)remakeWithProgressHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000044808
- (id)init;	// IMP=0x0000000000044721

@end
