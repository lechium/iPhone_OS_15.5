//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SPCoreSpotlightExtensionsTask : NSObject
{
    CDUnknownBlockType _filterBlock;	// 8 = 0x8
    CDUnknownBlockType _performBlock;	// 16 = 0x10
    CDUnknownBlockType _completionBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000004c22a
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType performBlock; // @synthesize performBlock=_performBlock;
@property(copy, nonatomic) CDUnknownBlockType filterBlock; // @synthesize filterBlock=_filterBlock;
- (void)start;	// IMP=0x000000000004bd90
- (void)_performWithExtensionsEnumerator:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000004bbbc

@end
