//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HAPSuspendedAccessory : HMFObject
{
    NSString *_name;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    unsigned long long _type;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000f6d76
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x00000000000f6c45
- (void)wakeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f6b8f
- (id)initWithName:(id)arg1 identifier:(id)arg2 type:(unsigned long long)arg3 queue:(id)arg4;	// IMP=0x00000000000f6ab6

@end

