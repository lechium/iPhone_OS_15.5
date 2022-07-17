//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/_NSAttributedStringGrammarInflecting-Protocol.h>

@class NSString, _NSAttributedStringGrammar;

__attribute__((visibility("hidden")))
@interface _NSAttributedStringGrammarInflectionMatchingWord : NSObject <NSCopying, _NSAttributedStringGrammarInflecting>
{
    NSString *_wordToken;	// 8 = 0x8
    _NSAttributedStringGrammar *_matchingGrammar;	// 16 = 0x10
}

@property(readonly) _NSAttributedStringGrammar *matchingGrammar; // @synthesize matchingGrammar=_matchingGrammar;
@property(readonly) NSString *wordToken; // @synthesize wordToken=_wordToken;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a07e8
- (void)dealloc;	// IMP=0x00000000001a077b
- (id)initWithWordToken:(id)arg1 matchingGrammar:(id)arg2;	// IMP=0x00000000001a06de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
