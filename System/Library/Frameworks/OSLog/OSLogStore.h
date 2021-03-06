//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OSLogEventSource;

@interface OSLogStore : NSObject
{
    OSLogEventSource *_source;	// 8 = 0x8
    int _constraint;	// 16 = 0x10
}

+ (id)storeWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000a8ca
+ (id)storeWithScope:(long long)arg1 error:(id *)arg2;	// IMP=0x000000000000a88b
- (void).cxx_destruct;	// IMP=0x000000000000a880
- (id)positionWithTimeIntervalSinceLatestBoot:(double)arg1;	// IMP=0x000000000000a845
- (id)positionWithTimeIntervalSinceEnd:(double)arg1;	// IMP=0x000000000000a804
- (id)positionWithDate:(id)arg1;	// IMP=0x000000000000a7b7
- (id)entriesEnumeratorAndReturnError:(id *)arg1;	// IMP=0x000000000000a7a0
- (id)entriesEnumeratorWithOptions:(unsigned long long)arg1 position:(id)arg2 predicate:(id)arg3 error:(id *)arg4;	// IMP=0x000000000000a549
- (id)_constrainedEntriesEnumeratorWithOptions:(unsigned long long)arg1 position:(id)arg2 predicate:(id)arg3 error:(id *)arg4;	// IMP=0x000000000000a4ca
- (id)initForFactory;	// IMP=0x000000000000a49b
- (id)init;	// IMP=0x000000000000a424

@end

