//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue, NSRecursiveLock;

@interface ASCWorkspace : NSObject
{
    _Bool _extension;	// 8 = 0x8
    NSMutableDictionary *_pendingResults;	// 16 = 0x10
    NSOperationQueue *;	// 24 = 0x18
    NSRecursiveLock *_stateLock;	// 32 = 0x20
}

+ (void)withSharedWorkspace:(id)arg1 perform:(CDUnknownBlockType)arg2;	// IMP=0x002000000000b638
+ (id)sharedWorkspace;	// IMP=0x001000000000b568
+ (id)log;	// IMP=0x001000000000b50c
- (void).cxx_destruct;	// IMP=0x001000000000bce0
@property(readonly, nonatomic) NSRecursiveLock *stateLock; // @synthesize stateLock=_stateLock;
@property(retain, nonatomic) NSOperationQueue *openApplicationOperationQueue; // @synthesize openApplicationOperationQueue=_openApplicationOperationQueue;
@property(readonly) NSMutableDictionary *pendingResults; // @synthesize pendingResults=_pendingResults;
@property(readonly, nonatomic, getter=isExtension) _Bool extension; // @synthesize extension=_extension;
- (id)popPendingResultForOperationName:(id)arg1;	// IMP=0x001000000000bb7f
- (void)enqueueOpenApplicationOperation:(id)arg1 pendingResult:(id)arg2;	// IMP=0x001000000000b974
- (id)openSensitiveURL:(id)arg1;	// IMP=0x001000000000b849
- (id)openURL:(id)arg1 frontBoardOptions:(id)arg2;	// IMP=0x001000000000b70a
- (id)openURL:(id)arg1;	// IMP=0x001000000000b6f6
- (id)_init;	// IMP=0x001000000000b5e2
- (void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x001000000000b414
- (void)openResourceOperationDidComplete:(id)arg1;	// IMP=0x001000000000b31c
- (id)openProductURL:(id)arg1;	// IMP=0x001000000000b308
- (void)openApplicationWithBundleIdentifier:(id)arg1 configuration:(id)arg2 pendingResult:(id)arg3;	// IMP=0x001000000000b137
- (void)openApplicationWithBundleIdentifier:(id)arg1 usingOpenResourceOperationWithPayloadURL:(id)arg2 options:(id)arg3 pendingResult:(id)arg4;	// IMP=0x001000000000afc3
- (id)openApplicationWithBundleIdentifier:(id)arg1 payloadURL:(id)arg2;	// IMP=0x001000000000a8e8

@end

