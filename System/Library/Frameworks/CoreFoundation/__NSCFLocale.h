//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface __NSCFLocale
{
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x000000000005de72
- (void)_setDoesNotRequireSpecialCaseHandling;	// IMP=0x000000000005deb1
- (unsigned char)_doesNotRequireSpecialCaseHandling;	// IMP=0x000000000005deac
- (id)_prefs;	// IMP=0x000000000005dea7
- (id)initWithLocaleIdentifier:(id)arg1;	// IMP=0x000000000005de95
- (id)displayNameForKey:(id)arg1 value:(id)arg2;	// IMP=0x000000000005de7d
- (id)objectForKey:(id)arg1;	// IMP=0x000000000005de75
- (unsigned long long)retainCount;	// IMP=0x000000000005de6d
- (_Bool)_isDeallocating;	// IMP=0x000000000005de5d
- (_Bool)_tryRetain;	// IMP=0x000000000005de4c
- (oneway void)release;	// IMP=0x000000000005de47
- (id)retain;	// IMP=0x000000000005de42
- (unsigned long long)hash;	// IMP=0x000000000005de3d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005de1a

@end
