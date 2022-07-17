//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSArray;

@interface PHLivePhotoCreationOperation : NSOperation
{
    long long _contentMode;	// 8 = 0x8
    NSArray *_resourceURLs;	// 16 = 0x10
    CDUnknownBlockType _resultHandler;	// 24 = 0x18
    struct CGSize _targetSize;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000015db47
@property(readonly, copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property(readonly, copy, nonatomic) NSArray *resourceURLs; // @synthesize resourceURLs=_resourceURLs;
@property(readonly, nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(readonly, nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
- (id)_createImageOnlyLivePhotoWithImageURL:(id)arg1;	// IMP=0x000000000015d94a
- (void)main;	// IMP=0x000000000015d55e
- (id)initWithResourceURLs:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 resultHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000015d464

@end
