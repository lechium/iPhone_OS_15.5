//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSGlyphGenerator : NSObject
{
}

+ (id)sharedGlyphGenerator;	// IMP=0x0000000000069005
+ (id)defaultGlyphGenerator;	// IMP=0x0000000000068fa6
+ (void)initialize;	// IMP=0x0000000000068f42
- (void)generateGlyphsForGlyphStorage:(id)arg1 desiredNumberOfCharacters:(unsigned long long)arg2 glyphIndex:(unsigned long long *)arg3 characterIndex:(unsigned long long *)arg4;	// IMP=0x000000000006901f

@end
