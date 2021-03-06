//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLocale, NSMutableDictionary;

@interface PSITokenizer : NSObject
{
    void *_tagger;	// 8 = 0x8
    struct __CFStringTokenizer *_nameTokenizer;	// 16 = 0x10
    _Bool _localeIsGerman;	// 24 = 0x18
    _Bool _useCache;	// 25 = 0x19
    NSMutableDictionary *_cache;	// 32 = 0x20
    NSLocale *_locale;	// 40 = 0x28
}

+ (id)fts5StringFromString:(id)arg1 useWildcard:(_Bool)arg2;	// IMP=0x00000000002b6dc4
+ (id)fts5StringFromString:(id)arg1 forMatchType:(unsigned long long)arg2;	// IMP=0x00000000002b6d15
+ (id)ftsTokenizerName;	// IMP=0x00000000002587c8
- (void).cxx_destruct;	// IMP=0x00000000002b65c7
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (id)newTokensFromString:(id)arg1 withOptions:(long long)arg2 outCopyRanges:(id *)arg3 error:(id *)arg4;	// IMP=0x00000000002b62c7
- (void)tokenizePersonName:(id)arg1 tokenOutput:(struct tokenOutput_t *)arg2;	// IMP=0x00000000002b6050
- (void)_tokenizeString:(id)arg1 withContext:(CDStruct_d5c410e0 *)arg2;	// IMP=0x00000000002b57de
- (void)tokenizeString:(id)arg1 withOptions:(long long)arg2 tokenOutput:(struct tokenOutput_t *)arg3;	// IMP=0x00000000002b567a
- (id)normalizeString:(id)arg1;	// IMP=0x00000000002b5526
- (void)dealloc;	// IMP=0x00000000002b54d1
- (id)initWithLocale:(id)arg1 useCache:(_Bool)arg2;	// IMP=0x00000000002b5323
- (int)registerFTS5TokenizerForDatabase:(struct sqlite3 *)arg1;	// IMP=0x0000000000257fba

@end

