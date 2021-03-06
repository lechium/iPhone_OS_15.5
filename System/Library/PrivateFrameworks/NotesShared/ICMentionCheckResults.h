//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface ICMentionCheckResults : NSObject
{
    _Bool _isPartialMention;	// 8 = 0x8
    _Bool _isExplicitMention;	// 9 = 0x9
    _Bool _isAllMention;	// 10 = 0xa
    NSSet *_matchingParticipants;	// 16 = 0x10
    NSString *_mentionString;	// 24 = 0x18
    struct _NSRange _rangeOfMention;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000074f86
@property(copy, nonatomic) NSString *mentionString; // @synthesize mentionString=_mentionString;
@property(copy, nonatomic) NSSet *matchingParticipants; // @synthesize matchingParticipants=_matchingParticipants;
@property(nonatomic) _Bool isAllMention; // @synthesize isAllMention=_isAllMention;
@property(nonatomic) _Bool isExplicitMention; // @synthesize isExplicitMention=_isExplicitMention;
@property(nonatomic) _Bool isPartialMention; // @synthesize isPartialMention=_isPartialMention;
@property(nonatomic) struct _NSRange rangeOfMention; // @synthesize rangeOfMention=_rangeOfMention;
- (id)debugDescription;	// IMP=0x0000000000074d49
- (id)init;	// IMP=0x0000000000074d0a

@end

