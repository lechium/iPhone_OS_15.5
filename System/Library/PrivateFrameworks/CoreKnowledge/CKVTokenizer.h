//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLocale;

@interface CKVTokenizer : NSObject
{
    struct unique_ptr<skitbridge::Tokenizer, std::default_delete<skitbridge::Tokenizer>> _tokenizer;	// 8 = 0x8
    NSLocale *_locale;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x00000000000ae6ea
- (void).cxx_destruct;	// IMP=0x00000000000ae6c2
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (id)tokenizeString:(id)arg1;	// IMP=0x00000000000ade6a
- (id)init;	// IMP=0x00000000000ade06
- (id)initWithLocale:(id)arg1 assetPath:(id)arg2 normalizeWords:(_Bool)arg3;	// IMP=0x00000000000adb48
- (id)initWithLocale:(id)arg1 assetPath:(id)arg2;	// IMP=0x00000000000adb33
- (id)initWithLocale:(id)arg1;	// IMP=0x00000000000adb1f

@end

