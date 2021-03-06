//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface CNLoggingContext : NSObject
{
    NSString *_subsystem;	// 8 = 0x8
    NSString *_category;	// 16 = 0x10
    void *_aslClient;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_aslQueue;	// 32 = 0x20
}

+ (id)loggingContextWithSubsystem:(id)arg1 category:(id)arg2;	// IMP=0x00000000000359b3
- (void).cxx_destruct;	// IMP=0x0000000000035f42
@property(readonly, copy, nonatomic) NSString *subsystem; // @synthesize subsystem=_subsystem;
@property(readonly, copy, nonatomic) NSString *category; // @synthesize category=_category;
- (void)setupASL;	// IMP=0x0000000000035ebb
- (id)loggingName;	// IMP=0x0000000000035ce3
- (id)aslQueue;	// IMP=0x0000000000035cd5
- (struct __asl_object_s *)aslClient;	// IMP=0x0000000000035ccb
- (id)initWithSubsystem:(id)arg1 category:(id)arg2;	// IMP=0x0000000000035a1f

@end

