//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol FCSectionProviding;

@interface FCChannelSectionHeadlinesOperationGroup : NSObject
{
    id <FCSectionProviding> _section;	// 8 = 0x8
    NSArray *_headlines;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000027ac9c
@property(retain, nonatomic) NSArray *headlines; // @synthesize headlines=_headlines;
@property(retain, nonatomic) id <FCSectionProviding> section; // @synthesize section=_section;
- (id)description;	// IMP=0x000000000027ac24
- (id)initWithSection:(id)arg1 headlines:(id)arg2;	// IMP=0x000000000027ab6b
- (id)init;	// IMP=0x000000000027aa26

@end

