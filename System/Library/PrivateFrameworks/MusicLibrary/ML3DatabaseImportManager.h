//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray, NSOperationQueue;

@interface ML3DatabaseImportManager : NSObject
{
    NSOperationQueue *_importOperationQueue;	// 8 = 0x8
    NSMutableArray *_suspendedImportOperations;	// 16 = 0x10
    NSError *_lastImportError;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c834b
@property(retain, nonatomic) NSError *lastImportError; // @synthesize lastImportError=_lastImportError;
- (void)_handleImportOperationCancelled:(id)arg1;	// IMP=0x00000000000c819b
- (void)_handleImportOperationCompleted:(id)arg1;	// IMP=0x00000000000c7f69
- (id)_suspendedImportOperations;	// IMP=0x00000000000c7f4b
- (id)_importOperations;	// IMP=0x00000000000c7eff
- (void)resumeSuspendedImportOperations;	// IMP=0x00000000000c7bc9
- (void)suspendImportOperations;	// IMP=0x00000000000c780b
- (void)cancelImportOperationsForSource:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c766d
- (void)cancelImportOperationsOriginatingFromClient:(id)arg1;	// IMP=0x00000000000c71b7
- (void)cancelAllImportOperations;	// IMP=0x00000000000c7121
- (float)currentOperationProgressWithError:(id *)arg1;	// IMP=0x00000000000c705a
- (void)performImport:(id)arg1 fromSource:(unsigned long long)arg2 progressBlock:(CDUnknownBlockType)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c6eee
@property(readonly, nonatomic, getter=isSuspended) _Bool suspended;
@property(readonly, nonatomic) unsigned long long suspendedOperationsCount;
@property(readonly, nonatomic) unsigned long long operationsCount;
- (id)init;	// IMP=0x00000000000c6df1

@end
