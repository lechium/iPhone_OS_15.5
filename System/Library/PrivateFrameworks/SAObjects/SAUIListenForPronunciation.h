//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SASPronunciationContext;

@interface SAUIListenForPronunciation
{
}

+ (id)listenForPronunciationWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000002d3dd
+ (id)listenForPronunciation;	// IMP=0x000000000002d3cb
- (_Bool)requiresResponse;	// IMP=0x000000000002d409
@property(retain, nonatomic) SASPronunciationContext *context;
- (id)encodedClassName;	// IMP=0x000000000002d3be
- (id)groupIdentifier;	// IMP=0x000000000002d3aa

@end
