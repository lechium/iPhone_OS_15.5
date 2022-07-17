//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FileProviderDaemon/NSFileProvider-Protocol.h>

@class NSOperationQueue, NSString, NSURL;
@protocol FPDFileCoordinationProviderDelegate;

__attribute__((visibility("hidden")))
@interface FPDFileCoordinationProvider : NSObject <NSFileProvider>
{
    NSURL *_providedItemsURL;	// 8 = 0x8
    _Bool _registered;	// 16 = 0x10
    id <FPDFileCoordinationProviderDelegate> _delegate;	// 24 = 0x18
    NSString *_extensionIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000184f1
@property(getter=isRegistered) _Bool registered; // @synthesize registered=_registered;
@property(copy) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
@property __weak id <FPDFileCoordinationProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_movingItemAtURL:(id)arg1 requiresProvidingWithDestinationURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000018358
- (void)_providedItemAtURL:(id)arg1 withPresenterWithID:(id)arg2 didMoveToURL:(id)arg3;	// IMP=0x00000000000182b6
- (void)_providedItemAtURL:(id)arg1 didLosePresenterWithID:(id)arg2;	// IMP=0x000000000001822a
- (void)_providedItemAtURL:(id)arg1 didGainPresenterWithID:(id)arg2;	// IMP=0x000000000001819e
- (void)_writerWithID:(id)arg1 didFinishWritingForURL:(id)arg2;	// IMP=0x0000000000018110
- (void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2;	// IMP=0x0000000000018084
- (void)_provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000017fe2
- (void)_provideItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000017f1d
- (id)_physicalURLForURL:(id)arg1;	// IMP=0x0000000000017ea0
@property(readonly, copy) NSString *_fileReactorID;
@property(readonly) NSOperationQueue *_providedItemsOperationQueue;
@property(readonly, copy) NSURL *_providedItemsURL;
- (id)delegateForURL:(id)arg1;	// IMP=0x0000000000017d3b
- (id)initWithRootURL:(id)arg1;	// IMP=0x0000000000017cd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
