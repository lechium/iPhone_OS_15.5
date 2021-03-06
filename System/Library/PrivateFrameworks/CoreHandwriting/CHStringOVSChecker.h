//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CHStringOVSChecker : NSObject
{
    struct _CFBurstTrie *_ovsTrie;	// 8 = 0x8
    unsigned int _flagsFilter;	// 16 = 0x10
    struct _LXLexicon *_staticLexicon;	// 24 = 0x18
    struct _LXLexicon *_customLexicon;	// 32 = 0x20
    CDUnknownFunctionPointerType _stringNormalizationFunction;	// 40 = 0x28
}

+ (id)obfuscateString:(id)arg1;	// IMP=0x0000000000104740
- (void)dealloc;	// IMP=0x0000000000104d30
- (_Bool)_isInappropriateTokenID:(unsigned int)arg1 withLexicon:(struct _LXLexicon *)arg2;	// IMP=0x0000000000104ce0
- (_Bool)isInappropriateTokenID:(unsigned int)arg1;	// IMP=0x0000000000104c80
- (_Bool)isInappropriateString:(id)arg1;	// IMP=0x0000000000104bb0
- (_Bool)_isInappropriateString:(id)arg1 withTrie:(struct _CFBurstTrie *)arg2;	// IMP=0x0000000000104a90
- (_Bool)_isInappropriateString:(id)arg1 withLexicon:(struct _LXLexicon *)arg2;	// IMP=0x0000000000104890
- (_Bool)isInappropriateLexiconEntry:(struct _LXEntry *)arg1;	// IMP=0x0000000000104860
- (id)initWithTrie:(struct _CFBurstTrie *)arg1 staticLexicon:(struct _LXLexicon *)arg2 customLexicon:(struct _LXLexicon *)arg3 flags:(unsigned int)arg4 stringNormalizationFunction:(CDUnknownFunctionPointerType)arg5;	// IMP=0x0000000000104680

@end

