//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface VCPSceneAssetProcessingTask
{
    CDUnknownBlockType _progressHandler;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    NSArray *_assets;	// 24 = 0x18
}

+ (id)taskWithAssets:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00400000000977cf
- (void).cxx_destruct;	// IMP=0x0020000000097e25
- (int)run;	// IMP=0x0010000000097c8c
- (int)main;	// IMP=0x001000000009790b
- (void)dealloc;	// IMP=0x0010000000097887
- (id)initWithAssets:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000097600

@end

