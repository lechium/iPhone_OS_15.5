//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/FPOperationProgressDelegate-Protocol.h>

@class FPItemManager, NSArray, NSMutableArray, NSOperationQueue, NSString;

@interface FPFetchThumbnailsOperation <FPOperationProgressDelegate>
{
    NSArray *_items;	// 8 = 0x8
    struct CGSize _desiredSize;	// 16 = 0x10
    double _screenScale;	// 32 = 0x20
    FPItemManager *_itemManager;	// 40 = 0x28
    NSOperationQueue *_subOperationQueue;	// 48 = 0x30
    NSMutableArray *_subOperations;	// 56 = 0x38
    CDUnknownBlockType _perThumbnailCompletionBlock;	// 64 = 0x40
    CDUnknownBlockType _thumbnailsFetchCompletionBlock;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000005df36
@property(copy, nonatomic) CDUnknownBlockType thumbnailsFetchCompletionBlock; // @synthesize thumbnailsFetchCompletionBlock=_thumbnailsFetchCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType perThumbnailCompletionBlock; // @synthesize perThumbnailCompletionBlock=_perThumbnailCompletionBlock;
- (void)_perItemCompletionBlockFor:(id)arg1 thumbnail:(id)arg2 contentType:(id)arg3 error:(id)arg4;	// IMP=0x000000000005dd3e
- (void)operation:(id)arg1 didReceiveProgressInfo:(id)arg2 error:(id)arg3;	// IMP=0x000000000005db09
- (void)finishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x000000000005da4f
- (void)cancel;	// IMP=0x000000000005d9fc
- (void)main;	// IMP=0x000000000005d007
- (id)initWithItems:(id)arg1 desiredSize:(struct CGSize)arg2 screenScale:(double)arg3 itemManager:(id)arg4;	// IMP=0x000000000005cdb8
- (id)init;	// IMP=0x000000000005cd2a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

