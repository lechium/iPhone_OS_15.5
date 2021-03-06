//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveContextClient/ATXTrigger-Protocol.h>

@class NSString;

@interface ATXWiredAudioDisconnectedTrigger : NSObject <ATXTrigger>
{
    NSString *_deviceIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000004622
- (void).cxx_destruct;	// IMP=0x000000000000476d
@property(readonly, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000004740
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000046b3
- (id)initWithDeviceIdentifier:(id)arg1;	// IMP=0x0000000000004635
@property(readonly, nonatomic) long long type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

