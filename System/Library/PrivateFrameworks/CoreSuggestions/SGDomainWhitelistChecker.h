//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SGDomainWhitelistChecker : NSObject
{
}

+ (_Bool)isStructuredEventCandidateForEmailDomain:(id)arg1;	// IMP=0x000000000000d049
+ (_Bool)isStructuredEventCandidateForURL:(id)arg1 title:(id)arg2;	// IMP=0x000000000000cebc
+ (CDStruct_0802cd3c)payloadWithStartChar:(const char *)arg1 andSize:(unsigned long long)arg2;	// IMP=0x000000000000cdd1
+ (CDStruct_0802cd3c)payloadForDomain:(id)arg1;	// IMP=0x000000000000ccb5
+ (void)setTrieFromPath:(id)arg1;	// IMP=0x000000000000cbf5
+ (void)_setTrieFromPath:(id)arg1 guardedData:(id)arg2;	// IMP=0x000000000000cb78
+ (id)lock;	// IMP=0x000000000000cb15

@end

