//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKCancelable-Protocol.h>

@protocol OS_dispatch_source;

@interface CRKDispatchSourceSubscription : NSObject <CRKCancelable>
{
    NSObject<OS_dispatch_source> *_source;	// 8 = 0x8
    CDUnknownBlockType _handler;	// 16 = 0x10
}

+ (id)subscriptionWithSource:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000007165f
- (void).cxx_destruct;	// IMP=0x00000000000718d3
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *source; // @synthesize source=_source;
- (void)resume;	// IMP=0x000000000007173e
- (void)cancel;	// IMP=0x00000000000716e9
- (id)initWithSource:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000715bc
- (void)dealloc;	// IMP=0x000000000007157e

@end
