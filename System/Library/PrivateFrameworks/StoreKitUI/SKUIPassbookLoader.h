//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreKitUI/PKAddPassesViewControllerDelegate-Protocol.h>

@class NSOperationQueue, NSString, SKUIClientContext;
@protocol SKUIPassbookLoaderDelegate;

@interface SKUIPassbookLoader : NSObject <PKAddPassesViewControllerDelegate>
{
    SKUIClientContext *_clientContext;	// 8 = 0x8
    id <SKUIPassbookLoaderDelegate> _delegate;	// 16 = 0x10
    long long _loadCount;	// 24 = 0x18
    NSOperationQueue *_operationQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000013960e
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) __weak id <SKUIPassbookLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_sendDidFinishIfFinished;	// IMP=0x0000000000139531
- (void)_loadPassWithURL:(id)arg1;	// IMP=0x00000000001392c8
- (void)_didLoadWithPass:(id)arg1 error:(id)arg2;	// IMP=0x00000000001391b9
- (void)addPassesViewControllerDidFinish:(id)arg1;	// IMP=0x0000000000139027
- (void)loadPassWithURL:(id)arg1;	// IMP=0x0000000000138c98
- (id)initWithClientContext:(id)arg1;	// IMP=0x0000000000138c2d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
