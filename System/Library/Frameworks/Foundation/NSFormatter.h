//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSCoding-Protocol.h>
#import <Foundation/NSCopying-Protocol.h>

@interface NSFormatter : NSObject <NSCopying, NSCoding>
{
}

- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000070b04
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000070afe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000070af3
- (_Bool)isPartialStringValid:(id *)arg1 proposedSelectedRange:(struct _NSRange *)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange)arg4 errorDescription:(id *)arg5;	// IMP=0x0000000000070a63
- (_Bool)isPartialStringValid:(id)arg1 newEditingString:(id *)arg2 errorDescription:(id *)arg3;	// IMP=0x0000000000070a5b
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 range:(inout struct _NSRange *)arg3 error:(out id *)arg4;	// IMP=0x0000000000070963
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;	// IMP=0x0000000000070935
- (id)editingStringForObjectValue:(id)arg1;	// IMP=0x0000000000070923
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;	// IMP=0x000000000007091b
- (id)stringForObjectValue:(id)arg1;	// IMP=0x00000000000708ed
- (void)_invalidateCache;	// IMP=0x00000000000708e7
- (_Bool)_tracksCacheGenerationCount;	// IMP=0x00000000000708df
- (long long)_cacheGenerationCount;	// IMP=0x00000000000708d2
- (_Bool)_mayDecorateAttributedStringForObjectValue:(id)arg1;	// IMP=0x00000000000708ca

@end

