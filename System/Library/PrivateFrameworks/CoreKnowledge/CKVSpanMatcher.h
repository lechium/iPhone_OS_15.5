//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKVTokenizer;
@protocol CKVSpanMatchResultInterpreter, CKVSpanMatchSearchIndex;

@interface CKVSpanMatcher : NSObject
{
    NSObject<CKVSpanMatchSearchIndex> *_searchIndex;	// 8 = 0x8
    NSObject<CKVSpanMatchResultInterpreter> *_resultInterpreter;	// 16 = 0x10
    CKVTokenizer *_tokenizer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000a7da4
@property(retain) CKVTokenizer *tokenizer; // @synthesize tokenizer=_tokenizer;
- (id)_getTokenizer;	// IMP=0x00000000000a7bdd
- (id)matchSpansWithString:(id)arg1;	// IMP=0x00000000000a7b28
- (id)matchSpansWithTokenChain:(id)arg1;	// IMP=0x00000000000a7a99
- (void)prewarm;	// IMP=0x00000000000a7a83
- (id)init;	// IMP=0x00000000000a7a3b
- (id)initWithSearchIndex:(id)arg1 resultInterpreter:(id)arg2;	// IMP=0x00000000000a79a2

@end
