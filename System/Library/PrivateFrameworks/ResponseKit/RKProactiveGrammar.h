//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RKProactiveGrammar : NSObject
{
}

+ (id)getEntities:(id)arg1;	// IMP=0x0000000000030e40
+ (id)getOTAPathForRKBundle:(id)arg1;	// IMP=0x00000000000304d2
+ (id)sharedManager;	// IMP=0x0000000000030234
- (id)copyAttributedTokenForText:(id)arg1 forLanguageModel:(void *)arg2 withLanguageCode:(id)arg3;	// IMP=0x0000000000032211
- (id)copyAttributedTokenForText:(id)arg1 forLanguage:(id)arg2;	// IMP=0x0000000000031149
- (id)getEquivalenceClass:(id)arg1;	// IMP=0x0000000000030be1
- (void *)chineseTokenizer;	// IMP=0x0000000000030b46
- (void *)getLanguageModel:(id)arg1;	// IMP=0x0000000000030768
- (void)dealloc;	// IMP=0x0000000000030357
- (id)init;	// IMP=0x00000000000302b9

@end

