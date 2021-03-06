//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNScheduler-Protocol.h>

@class NSString;
@protocol CNScheduler;

@interface _CNOffMainThreadScheduler : NSObject <CNScheduler>
{
    id <CNScheduler> _alreadyOffMainThreadScheduler;	// 8 = 0x8
    id <CNScheduler> _needToGetOffMainThreadScheduler;	// 16 = 0x10
}

+ (id)os_log;	// IMP=0x0000000000016f72
- (void).cxx_destruct;	// IMP=0x00000000000179ca
@property(readonly, nonatomic) id <CNScheduler> needToGetOffMainThreadScheduler; // @synthesize needToGetOffMainThreadScheduler=_needToGetOffMainThreadScheduler;
@property(readonly, nonatomic) id <CNScheduler> alreadyOffMainThreadScheduler; // @synthesize alreadyOffMainThreadScheduler=_alreadyOffMainThreadScheduler;
@property(readonly) double timestamp;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2 qualityOfService:(unsigned long long)arg3;	// IMP=0x0000000000017844
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000176ed
- (id)performCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;	// IMP=0x0000000000017584
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017423
- (void)performBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;	// IMP=0x00000000000172e6
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000171ae
@property(readonly, copy) NSString *description;
- (id)initWithBackgroundScheduler:(id)arg1;	// IMP=0x0000000000017028
- (id)init;	// IMP=0x0000000000016fce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

