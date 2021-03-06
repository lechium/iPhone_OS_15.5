//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol OS_dispatch_queue;

@interface PXExpectation : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSString *_label;	// 16 = 0x10
    NSDate *_creationDate;	// 24 = 0x18
    CDUnknownBlockType _handler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000043c56f
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
- (id)description;	// IMP=0x000000000043c493
- (void)_performHandlerWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x000000000043c41a
- (void)fulfill;	// IMP=0x000000000043c3eb
- (void)performWhenFulfilled:(CDUnknownBlockType)arg1 timeout:(double)arg2;	// IMP=0x000000000043c275
- (id)initWithQueue:(id)arg1 labelFormat:(id)arg2;	// IMP=0x000000000043c0c3
- (id)initWithQueue:(id)arg1;	// IMP=0x000000000043c0ad
- (id)initWithLabelFormat:(id)arg1;	// IMP=0x000000000043c095
- (id)init;	// IMP=0x000000000043c07f

@end

