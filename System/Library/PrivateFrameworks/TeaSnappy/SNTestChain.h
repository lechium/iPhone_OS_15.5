//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SNTestChain : NSObject
{
    NSMutableArray *_linkBlocks;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000002bfd
@property(readonly, nonatomic) NSMutableArray *linkBlocks; // @synthesize linkBlocks=_linkBlocks;
- (void)popAndRunWithCompletion:(CDUnknownBlockType)arg1 testFailure:(id)arg2;	// IMP=0x000000000000284d
- (void)runWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002839
- (void)addLink:(CDUnknownBlockType)arg1;	// IMP=0x00000000000027b6
- (id)init;	// IMP=0x0000000000002760

@end

