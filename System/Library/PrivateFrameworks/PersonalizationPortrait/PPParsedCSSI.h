//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet;

@interface PPParsedCSSI : NSObject
{
    NSArray *_identifiers;	// 8 = 0x8
    NSMutableSet *_neStrings;	// 16 = 0x10
    NSMutableSet *_topicStrings;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002c3fa
@property(retain, nonatomic) NSMutableSet *topicStrings; // @synthesize topicStrings=_topicStrings;
@property(retain, nonatomic) NSMutableSet *neStrings; // @synthesize neStrings=_neStrings;
@property(retain, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
- (id)init;	// IMP=0x000000000002c31d

@end

