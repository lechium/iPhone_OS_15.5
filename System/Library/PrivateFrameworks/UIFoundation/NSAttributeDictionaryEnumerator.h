//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class NSAttributeDictionary;

@interface NSAttributeDictionaryEnumerator : NSEnumerator
{
    NSAttributeDictionary *dictionary;	// 8 = 0x8
    unsigned long long nextElement;	// 16 = 0x10
}

- (void)dealloc;	// IMP=0x0000000000059590
- (id)nextObject;	// IMP=0x000000000005954b
- (id)initWithAttributeDictionary:(id)arg1;	// IMP=0x00000000000594e5

@end

