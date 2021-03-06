//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol EMMutableDictionaryProtocol;

@interface EMListUnsubscribeDetector : NSObject
{
    id <EMMutableDictionaryProtocol> _persistentDictionary;	// 8 = 0x8
}

+ (id)receivingAccountFromMessage:(id)arg1;	// IMP=0x000000000002b2bc
- (void).cxx_destruct;	// IMP=0x000000000002b36f
- (_Bool)_shouldIgnoreMessageWithHeaders:(id)arg1;	// IMP=0x000000000002b0ef
- (id)_persistentKeyForHeaders:(id)arg1;	// IMP=0x000000000002afd7
- (id)_senderString:(id)arg1;	// IMP=0x000000000002af57
- (id)_listIDString:(id)arg1;	// IMP=0x000000000002aed7
- (id)_normalizedAddress:(id)arg1;	// IMP=0x000000000002ad47
- (void)removeAllPersistedCommands;	// IMP=0x000000000002ad31
- (void)ignoreCommand:(id)arg1;	// IMP=0x000000000002abe9
- (void)acceptCommand:(id)arg1;	// IMP=0x000000000002aaa1
- (id)commandForMessage:(id)arg1;	// IMP=0x000000000002a3dd
- (id)init;	// IMP=0x000000000002a362
- (id)initWithMutableDictionary:(id)arg1;	// IMP=0x000000000002a251

@end

