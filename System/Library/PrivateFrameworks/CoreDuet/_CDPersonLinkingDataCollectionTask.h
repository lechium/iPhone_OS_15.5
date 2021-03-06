//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PersonLinkingLinkedPairEvent;
@protocol OS_xpc_object;

@interface _CDPersonLinkingDataCollectionTask : NSObject
{
    NSObject<OS_xpc_object> *_activity;	// 8 = 0x8
    NSString *_file;	// 16 = 0x10
    PersonLinkingLinkedPairEvent *_event;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000053781
@property(retain, nonatomic) PersonLinkingLinkedPairEvent *event; // @synthesize event=_event;
@property(readonly, nonatomic) NSString *file; // @synthesize file=_file;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *activity; // @synthesize activity=_activity;
- (id)eventFromFile:(id)arg1;	// IMP=0x000000000005358d
- (void)execute;	// IMP=0x00000000000534d7
- (id)eventFromDict:(id)arg1;	// IMP=0x0000000000052ff3
- (id)initWithFile:(id)arg1 activity:(id)arg2;	// IMP=0x0000000000052f31

@end

