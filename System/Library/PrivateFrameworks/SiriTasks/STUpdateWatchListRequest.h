//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface STUpdateWatchListRequest : AFSiriRequest
{
    NSArray *_contentIdentifiersToAdd;	// 8 = 0x8
    NSArray *_contentIdentifiersToRemove;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000bdab
- (void).cxx_destruct;	// IMP=0x000000000000c091
@property(copy, nonatomic, setter=_setContentIdentifiersToRemove:) NSArray *contentIdentifiersToRemove; // @synthesize contentIdentifiersToRemove=_contentIdentifiersToRemove;
@property(copy, nonatomic, setter=_setContentIdentifiersToAdd:) NSArray *contentIdentifiersToAdd; // @synthesize contentIdentifiersToAdd=_contentIdentifiersToAdd;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000be52
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000bdb3

@end

