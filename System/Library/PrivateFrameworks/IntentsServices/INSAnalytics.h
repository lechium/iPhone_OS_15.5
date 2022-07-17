//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol INSAnalyticsDataSource, OS_dispatch_queue;

@interface INSAnalytics : NSObject
{
    NSObject<OS_dispatch_queue> *_observerQueue;	// 8 = 0x8
    id <INSAnalyticsDataSource> _dataSource;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
}

+ (id)sharedAnalytics;	// IMP=0x0000000000006a93
- (void).cxx_destruct;	// IMP=0x0000000000006847
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) __weak id <INSAnalyticsDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)contextDictionaryForError:(id)arg1;	// IMP=0x000000000000677f
- (id)contextDictionaryForCommand:(id)arg1;	// IMP=0x00000000000066f9
- (void)logEventWithType:(long long)arg1 context:(id)arg2 contextNoCopy:(_Bool)arg3;	// IMP=0x000000000000665b
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000065d0
- (void)addObserver:(id)arg1;	// IMP=0x0000000000006545
- (id)_init;	// IMP=0x00000000000064be

@end
