//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSObject, SSURLBag;
@protocol OS_dispatch_queue;

@interface SKUIReloadConfigurationOperation : NSOperation
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    CDUnknownBlockType _outputBlock;	// 16 = 0x10
    SSURLBag *_urlBag;	// 24 = 0x18
}

+ (id)cachePath;	// IMP=0x000000000038233f
- (void).cxx_destruct;	// IMP=0x0000000000382ea4
- (void)main;	// IMP=0x00000000003827b2
@property(retain) SSURLBag *URLBag;
@property(copy) CDUnknownBlockType outputBlock;
- (id)init;	// IMP=0x00000000003822e0

@end
