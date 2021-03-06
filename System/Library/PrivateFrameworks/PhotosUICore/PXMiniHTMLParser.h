//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PXMiniHTMLParser : NSObject
{
    CDUnknownBlockType _parsedCharactersBlock;	// 8 = 0x8
    CDUnknownBlockType _parsedMarkupElementStartBlock;	// 16 = 0x10
    CDUnknownBlockType _parsedMarkupElementEndBlock;	// 24 = 0x18
    CDUnknownBlockType _parsedErrorBlock;	// 32 = 0x20
    NSString *__string;	// 40 = 0x28
}

+ (id)stringByConvertingToHTML:(id)arg1;	// IMP=0x0000000000a2e9cf
+ (id)charactersForEntityNames;	// IMP=0x0000000000a2e99f
- (void).cxx_destruct;	// IMP=0x0000000000a2e674
@property(readonly, nonatomic) NSString *_string; // @synthesize _string=__string;
@property(copy, nonatomic) CDUnknownBlockType parsedErrorBlock; // @synthesize parsedErrorBlock=_parsedErrorBlock;
@property(copy, nonatomic) CDUnknownBlockType parsedMarkupElementEndBlock; // @synthesize parsedMarkupElementEndBlock=_parsedMarkupElementEndBlock;
@property(copy, nonatomic) CDUnknownBlockType parsedMarkupElementStartBlock; // @synthesize parsedMarkupElementStartBlock=_parsedMarkupElementStartBlock;
@property(copy, nonatomic) CDUnknownBlockType parsedCharactersBlock; // @synthesize parsedCharactersBlock=_parsedCharactersBlock;
- (void)parse;	// IMP=0x0000000000a2e4a2
- (id)initWithString:(id)arg1;	// IMP=0x0000000000a2e437
- (id)init;	// IMP=0x0000000000a2e423

@end

