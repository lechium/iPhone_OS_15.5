//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface RKLexicalEntity : NSObject
{
    NSString *_string;	// 8 = 0x8
    NSString *_tokenType;	// 16 = 0x10
    NSString *_partOfSpeech;	// 24 = 0x18
    NSString *_lemma;	// 32 = 0x20
    NSString *_language;	// 40 = 0x28
    NSString *_internalWord;	// 48 = 0x30
    struct _NSRange _tokenRange;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000000d5cf
@property(retain) NSString *internalWord; // @synthesize internalWord=_internalWord;
@property struct _NSRange tokenRange; // @synthesize tokenRange=_tokenRange;
@property(retain) NSString *language; // @synthesize language=_language;
@property(retain) NSString *lemma; // @synthesize lemma=_lemma;
@property(retain) NSString *partOfSpeech; // @synthesize partOfSpeech=_partOfSpeech;
@property(retain) NSString *tokenType; // @synthesize tokenType=_tokenType;
@property(retain) NSString *string; // @synthesize string=_string;
@property(readonly) NSString *word;
- (id)description;	// IMP=0x000000000000d275

@end

