//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreFoundation/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface __NSCFCharacterSet <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005cf54
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x000000000005ce5e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005cf8b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005cf57
- (Class)classForCoder;	// IMP=0x000000000005cf31
- (void)makeCharacterSetFast;	// IMP=0x000000000005cf2c
- (void)makeCharacterSetCompact;	// IMP=0x000000000005cf27
- (void)invert;	// IMP=0x000000000005cf22
- (void)formIntersectionWithCharacterSet:(id)arg1;	// IMP=0x000000000005cf1a
- (void)formUnionWithCharacterSet:(id)arg1;	// IMP=0x000000000005cf12
- (void)removeCharactersInString:(id)arg1;	// IMP=0x000000000005cf0a
- (void)addCharactersInString:(id)arg1;	// IMP=0x000000000005cf02
- (void)removeCharactersInRange:(struct _NSRange)arg1;	// IMP=0x000000000005cef7
- (void)addCharactersInRange:(struct _NSRange)arg1;	// IMP=0x000000000005ceec
- (id)invertedSet;	// IMP=0x000000000005ced5
- (id)bitmapRepresentation;	// IMP=0x000000000005cebe
- (_Bool)hasMemberInPlane:(unsigned char)arg1;	// IMP=0x000000000005ceac
- (_Bool)isSupersetOfSet:(id)arg1;	// IMP=0x000000000005ce99
- (_Bool)longCharacterIsMember:(unsigned int)arg1;	// IMP=0x000000000005ce87
- (_Bool)characterIsMember:(unsigned short)arg1;	// IMP=0x000000000005ce75
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005ce6b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005ce61
- (unsigned long long)retainCount;	// IMP=0x000000000005ce59
- (_Bool)_isDeallocating;	// IMP=0x000000000005ce49
- (_Bool)_tryRetain;	// IMP=0x000000000005ce38
- (oneway void)release;	// IMP=0x000000000005ce33
- (id)retain;	// IMP=0x000000000005ce2e
- (unsigned long long)hash;	// IMP=0x000000000005ce29
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005ce06

@end

