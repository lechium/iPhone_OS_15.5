//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _CDInteraction;

@interface _PSSharingContactRankerScoredContact : NSObject
{
    double _score;	// 8 = 0x8
    _CDInteraction *_interaction;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005d0e2
@property(retain, nonatomic) _CDInteraction *interaction; // @synthesize interaction=_interaction;
@property(nonatomic) double score; // @synthesize score=_score;
- (id)initWithScore:(double)arg1 interaction:(id)arg2;	// IMP=0x000000000005d02a

@end
