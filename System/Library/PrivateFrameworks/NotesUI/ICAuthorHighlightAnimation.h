//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface ICAuthorHighlightAnimation : NSObject
{
    _Bool _aboveExistingHighlights;	// 8 = 0x8
    _Bool _removedOnCompletion;	// 9 = 0x9
    NSNumber *_duration;	// 16 = 0x10
    NSNumber *_fromValue;	// 24 = 0x18
    NSNumber *_toValue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000005e4d9
@property(nonatomic, getter=isRemovedOnCompletion) _Bool removedOnCompletion; // @synthesize removedOnCompletion=_removedOnCompletion;
@property(nonatomic, getter=isAboveExistingHighlights) _Bool aboveExistingHighlights; // @synthesize aboveExistingHighlights=_aboveExistingHighlights;
@property(copy, nonatomic) NSNumber *toValue; // @synthesize toValue=_toValue;
@property(copy, nonatomic) NSNumber *fromValue; // @synthesize fromValue=_fromValue;
@property(copy, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005e279
- (id)description;	// IMP=0x000000000005e105

@end

