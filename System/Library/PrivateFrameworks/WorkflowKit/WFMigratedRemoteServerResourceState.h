//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class NSSet;

@interface WFMigratedRemoteServerResourceState : NSObject <NSSecureCoding>
{
    NSSet *entries;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000031d01b
- (void).cxx_destruct;	// IMP=0x000000000031d00b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000031d005
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000031cebf

@end
