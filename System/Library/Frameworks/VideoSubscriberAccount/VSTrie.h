//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VSTrieNode;

@interface VSTrie : NSObject
{
    VSTrieNode *_root;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001b51d
@property(retain, nonatomic) VSTrieNode *root; // @synthesize root=_root;
- (id)objectsMatchingPrefix:(id)arg1;	// IMP=0x000000000001b179
- (void)insertString:(id)arg1 withAssociatedObject:(id)arg2;	// IMP=0x000000000001ae95
- (id)init;	// IMP=0x000000000001ae3f

@end

