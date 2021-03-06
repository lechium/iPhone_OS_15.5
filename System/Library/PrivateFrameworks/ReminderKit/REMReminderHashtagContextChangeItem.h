//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, REMReminderChangeItem;

@interface REMReminderHashtagContextChangeItem : NSObject
{
    REMReminderChangeItem *_reminderChangeItem;	// 8 = 0x8
    NSMutableSet *_mutableHashtags;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000018a36
@property(retain, nonatomic) NSMutableSet *mutableHashtags; // @synthesize mutableHashtags=_mutableHashtags;
@property(retain, nonatomic) REMReminderChangeItem *reminderChangeItem; // @synthesize reminderChangeItem=_reminderChangeItem;
- (void)cancelUndeleteHashtagWithID:(id)arg1;	// IMP=0x0000000000018909
- (void)undeleteHashtagWithID:(id)arg1;	// IMP=0x000000000001882f
- (void)removeAllHashtags;	// IMP=0x000000000001869f
- (void)removeHashtag:(id)arg1;	// IMP=0x00000000000184fe
- (id)addHashtagWithType:(long long)arg1 name:(id)arg2;	// IMP=0x00000000000183bb
- (void)addHashtag:(id)arg1;	// IMP=0x0000000000018203
@property(readonly, nonatomic) NSSet *hashtags;
- (id)initWithReminderChangeItem:(id)arg1;	// IMP=0x0000000000018129

@end

