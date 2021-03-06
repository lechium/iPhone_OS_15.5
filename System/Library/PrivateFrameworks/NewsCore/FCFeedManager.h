//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCCloudContext, FCMapTable, NFMutexLock;
@protocol FCFeedPersonalizing, OS_dispatch_group;

@interface FCFeedManager : NSObject
{
    id <FCFeedPersonalizing> _feedPersonalizer;	// 8 = 0x8
    FCCloudContext *_context;	// 16 = 0x10
    FCMapTable *_feedDescriptorsByID;	// 24 = 0x18
    NFMutexLock *_feedDescriptorsLock;	// 32 = 0x20
    NSObject<OS_dispatch_group> *_forYouPrefetchGroup;	// 40 = 0x28
}

+ (id)_identifierForFeedName:(id)arg1;	// IMP=0x000000000017f218
- (void).cxx_destruct;	// IMP=0x000000000017f2c4
@property(retain, nonatomic) NSObject<OS_dispatch_group> *forYouPrefetchGroup; // @synthesize forYouPrefetchGroup=_forYouPrefetchGroup;
@property(retain, nonatomic) NFMutexLock *feedDescriptorsLock; // @synthesize feedDescriptorsLock=_feedDescriptorsLock;
@property(retain, nonatomic) FCMapTable *feedDescriptorsByID; // @synthesize feedDescriptorsByID=_feedDescriptorsByID;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property(retain, nonatomic) id <FCFeedPersonalizing> feedPersonalizer; // @synthesize feedPersonalizer=_feedPersonalizer;
- (id)initWithCloudContext:(id)arg1;	// IMP=0x000000000017f061
- (id)init;	// IMP=0x000000000017ef1c
- (id)_feedDescriptorWithIdentifier:(id)arg1 forceRecreate:(_Bool)arg2 tag:(id)arg3;	// IMP=0x000000000017f783
- (id)feedDescriptorWithIdentifier:(id)arg1;	// IMP=0x000000000017f76c
- (id)feedDescriptorForSection:(id)arg1 parentChannel:(id)arg2;	// IMP=0x000000000017f62b
- (id)feedDescriptorForTag:(id)arg1;	// IMP=0x000000000017f3e9
- (id)feedDescriptorForReadingList;	// IMP=0x000000000017f37b
- (id)feedDescriptorForReadingHistory;	// IMP=0x000000000017f30d

@end

