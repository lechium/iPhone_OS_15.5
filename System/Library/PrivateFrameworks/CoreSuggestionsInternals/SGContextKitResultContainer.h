//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SGContextKitResultContainer : NSObject
{
    NSArray *_topics;	// 8 = 0x8
    NSArray *_namedEntities;	// 16 = 0x10
    NSArray *_topicsExactMatchesInSourceText;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000080c56
@property(retain, nonatomic) NSArray *topicsExactMatchesInSourceText; // @synthesize topicsExactMatchesInSourceText=_topicsExactMatchesInSourceText;
@property(retain, nonatomic) NSArray *namedEntities; // @synthesize namedEntities=_namedEntities;
@property(retain, nonatomic) NSArray *topics; // @synthesize topics=_topics;
- (id)initWithTopics:(id)arg1 namedEntities:(id)arg2 topicsExactMatchesInSourceText:(id)arg3;	// IMP=0x0000000000080b4e

@end

