//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CNSocialProfileURLParser : NSObject
{
}

+ (id)servicesDictionary;	// IMP=0x0000000000016bca
+ (id)parseURLStringByInference:(id)arg1;	// IMP=0x00000000000169bc
+ (void)enumerateMatchesWithRegexPattern:(id)arg1 inString:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000168d9
+ (void)enumerateServiceMatchesForURLString:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000166ea
+ (id)parseURLStringWithRegularExpressions:(id)arg1;	// IMP=0x0000000000016498
+ (id)parseSocialProfileURL:(id)arg1;	// IMP=0x00000000000163d2

@end
