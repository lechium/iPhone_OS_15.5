//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _PASLRUCache;

@interface SGContactAggregator : NSObject
{
    _PASLRUCache *_cachedContacts;	// 8 = 0x8
}

+ (id)replaceDetailsInContact:(id)arg1 onDiskContact:(id)arg2;	// IMP=0x0000000000276f03
+ (id)mergeContact:(id)arg1 withContact:(id)arg2;	// IMP=0x00000000002769d1
+ (id)messageIdentifiersGeneratingContact:(id)arg1;	// IMP=0x0000000000276772
- (void).cxx_destruct;	// IMP=0x000000000027661d
- (id)augmentSuggestedContactWithContact:(id)arg1 conversationId:(id)arg2 store:(id)arg3 handle:(id)arg4;	// IMP=0x000000000027633e
- (void)removeContact:(id)arg1;	// IMP=0x00000000002761bd
- (void)clearContactsWithConversationIdentifier:(id)arg1;	// IMP=0x0000000000275f96
- (void)clear;	// IMP=0x0000000000275f45
- (id)init;	// IMP=0x0000000000275eda

@end

