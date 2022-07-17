//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/NSCopying-Protocol.h>

@class NSDictionary;

@interface HFStaticItem <NSCopying>
{
    NSDictionary *_staticResults;	// 8 = 0x8
    CDUnknownBlockType _resultsBlock;	// 16 = 0x10
}

+ (id)emptyItem;	// IMP=0x0000000000031dfa
- (void).cxx_destruct;	// IMP=0x00000000000322e8
@property(copy, nonatomic) CDUnknownBlockType resultsBlock; // @synthesize resultsBlock=_resultsBlock;
@property(retain, nonatomic) NSDictionary *staticResults; // @synthesize staticResults=_staticResults;
- (id)_subclass_updateWithOptions:(id)arg1;	// IMP=0x00000000000320ae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000031f1c
- (id)init;	// IMP=0x0000000000031f03
- (id)initWithResultsBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000031e91
- (id)initWithResults:(id)arg1;	// IMP=0x0000000000031e23

@end
