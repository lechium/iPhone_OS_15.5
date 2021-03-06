//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

@interface PGShareBackSuggesterResult : NSObject
{
    unsigned short _processingValue;	// 8 = 0x8
    NSArray *_suggesterInputs;	// 16 = 0x10
    NSSet *_momentNodes;	// 24 = 0x18
}

+ (id)momentNodesForSuggesterResults:(id)arg1;	// IMP=0x0000000000234ce6
- (void).cxx_destruct;	// IMP=0x0000000000234cbe
@property(readonly, nonatomic) unsigned short processingValue; // @synthesize processingValue=_processingValue;
@property(readonly, nonatomic) NSSet *momentNodes; // @synthesize momentNodes=_momentNodes;
@property(readonly, nonatomic) NSArray *suggesterInputs; // @synthesize suggesterInputs=_suggesterInputs;
- (id)description;	// IMP=0x0000000000234bc4
- (id)initWithInputs:(id)arg1 processingValue:(unsigned short)arg2 momentNodes:(id)arg3;	// IMP=0x0000000000234b04

@end

