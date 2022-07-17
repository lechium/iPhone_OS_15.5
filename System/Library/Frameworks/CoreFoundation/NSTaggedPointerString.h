//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSTaggedPointerString : NSObject
{
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x000000000000d63f
+ (void)_setAsTaggedStringClass;	// IMP=0x000000000000d62e
- (id)uppercaseStringWithLocale:(id)arg1;	// IMP=0x000000000000e7ee
- (id)lowercaseStringWithLocale:(id)arg1;	// IMP=0x000000000000e5c5
- (_Bool)getBytes:(void *)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long *)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(struct _NSRange)arg6 remainingRange:(struct _NSRange *)arg7;	// IMP=0x000000000000e307
- (_Bool)_getCString:(char *)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned int)arg3;	// IMP=0x000000000000e1d0
- (const char *)cStringUsingEncoding:(unsigned long long)arg1;	// IMP=0x000000000000e14b
- (unsigned long long)smallestEncoding;	// IMP=0x000000000000e145
- (unsigned long long)fastestEncoding;	// IMP=0x000000000000e13f
- (_Bool)_isCString;	// IMP=0x000000000000e13c
- (const char *)_fastCStringContents:(_Bool)arg1;	// IMP=0x000000000000e139
- (const unsigned short *)_fastCharacterContents;	// IMP=0x000000000000e136
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;	// IMP=0x000000000000de9e
- (_Bool)isEqualToString:(id)arg1;	// IMP=0x000000000000de81
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000dcfa
- (unsigned long long)hash;	// IMP=0x000000000000dc2e
- (const char *)UTF8String;	// IMP=0x000000000000dade
- (id)substringWithRange:(struct _NSRange)arg1;	// IMP=0x000000000000d8b5
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000000d766
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000d65e
- (unsigned long long)length;	// IMP=0x000000000000d64e
- (id)autorelease;	// IMP=0x000000000000d64a
- (unsigned long long)retainCount;	// IMP=0x000000000000d642
- (oneway void)release;	// IMP=0x000000000000d63e
- (id)retain;	// IMP=0x000000000000d63a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000d636
- (_Bool)isNSString__;	// IMP=0x000000000000d633

@end
