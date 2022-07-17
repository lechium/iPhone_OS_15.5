//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSObject, UIImage;
@protocol OS_dispatch_queue;

@interface SKUIOffscreenRenderOperation : NSOperation
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    CDUnknownBlockType _createLayerBlock;	// 16 = 0x10
    UIImage *_outputImage;	// 24 = 0x18
}

+ (void)preheatOffscreenRenderOperations;	// IMP=0x00000000001a49ba
- (void).cxx_destruct;	// IMP=0x00000000001a49c0
@property(copy, nonatomic) CDUnknownBlockType createLayerBlock;
@property(readonly, nonatomic) UIImage *outputImage;
- (void)main;	// IMP=0x00000000001a46a7
- (id)init;	// IMP=0x00000000001a4643

@end
