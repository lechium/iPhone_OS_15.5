//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface MDMEvents : NSObject
{
    NSObject<OS_dispatch_queue> *_writerQueue;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000000004769
- (void).cxx_destruct;	// IMP=0x0000000000004c0a
- (void)recordData:(id)arg1 forEvent:(id)arg2;	// IMP=0x0000000000004a87
- (void)recordDateForEvent:(id)arg1;	// IMP=0x000000000000493b
- (id)init;	// IMP=0x00000000000048e3

@end

