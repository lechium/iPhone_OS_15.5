//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVMLKit/TVImageLoader-Protocol.h>

@class NSOperationQueue, NSString;

@interface _TVSymbolImageLoader : NSObject <TVImageLoader>
{
    NSOperationQueue *_imageLoaderQueue;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000000000863c
- (void).cxx_destruct;	// IMP=0x0000000000008e90
- (void)cancelLoad:(id)arg1;	// IMP=0x0000000000008e44
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000008925
- (id)URLForObject:(id)arg1;	// IMP=0x0000000000008846
- (id)imageKeyForObject:(id)arg1;	// IMP=0x00000000000086ef
- (_Bool)hasImageCache;	// IMP=0x00000000000086e7
- (id)init;	// IMP=0x0000000000008691

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

