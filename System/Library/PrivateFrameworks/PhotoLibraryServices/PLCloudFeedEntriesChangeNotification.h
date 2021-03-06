//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface PLCloudFeedEntriesChangeNotification
{
    _Bool _shouldReload;	// 8 = 0x8
    NSSet *_insertedEntries;	// 16 = 0x10
    NSSet *_updatedEntries;	// 24 = 0x18
    NSSet *_deletedEntries;	// 32 = 0x20
}

+ (id)notificationWithInsertedEntries:(id)arg1 updatedEntries:(id)arg2 deletedEntries:(id)arg3;	// IMP=0x00000000005d2952
+ (id)notificationWithFullReload;	// IMP=0x00000000005d2930
- (void).cxx_destruct;	// IMP=0x00000000005d2b53
@property(copy, nonatomic) NSSet *deletedEntries; // @synthesize deletedEntries=_deletedEntries;
@property(copy, nonatomic) NSSet *updatedEntries; // @synthesize updatedEntries=_updatedEntries;
@property(copy, nonatomic) NSSet *insertedEntries; // @synthesize insertedEntries=_insertedEntries;
@property(nonatomic) _Bool shouldReload; // @synthesize shouldReload=_shouldReload;
- (id)userInfo;	// IMP=0x00000000005d2ac5
- (id)object;	// IMP=0x00000000005d2abd
- (id)name;	// IMP=0x00000000005d2a9e
- (id)_initWithInsertedEntries:(id)arg1 updatedEntries:(id)arg2 deletedEntries:(id)arg3;	// IMP=0x00000000005d2a0d
- (id)_initWithFullReload;	// IMP=0x00000000005d29e0

@end

