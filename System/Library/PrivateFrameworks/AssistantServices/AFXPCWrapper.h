//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@protocol OS_xpc_object;

@interface AFXPCWrapper : NSObject <NSSecureCoding>
{
    NSObject<OS_xpc_object> *_xpcObject;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003bf39
- (void).cxx_destruct;	// IMP=0x000000000003c038
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003bfa1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003bf41
- (id)xpcObject;	// IMP=0x000000000003bf2b
- (id)initWithXPCObject:(id)arg1;	// IMP=0x000000000003bec0

@end

