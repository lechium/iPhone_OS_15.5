//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet;

@interface CSHashtagQuery
{
    NSMutableSet *_hashtags;	// 8 = 0x8
    CDUnknownBlockType _hashTagCompletionHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000053357
@property(copy) CDUnknownBlockType hashTagCompletionHandler; // @synthesize hashTagCompletionHandler=_hashTagCompletionHandler;
- (void)handleCompletion:(id)arg1;	// IMP=0x0000000000053235
- (void)handleFoundAttributes:(id)arg1 values:(id)arg2 attributesHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000052f94
- (id)initWithQueryString:(id)arg1 bundleIDs:(id)arg2;	// IMP=0x0000000000052e42
- (id)initWithQueryString:(id)arg1 context:(id)arg2;	// IMP=0x0000000000052c12

@end
