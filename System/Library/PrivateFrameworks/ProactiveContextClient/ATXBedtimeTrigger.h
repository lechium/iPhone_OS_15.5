//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveContextClient/ATXTrigger-Protocol.h>

@class NSString;

@interface ATXBedtimeTrigger : NSObject <ATXTrigger>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000004c27
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000004c4c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004c3a
@property(readonly, nonatomic) long long type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
