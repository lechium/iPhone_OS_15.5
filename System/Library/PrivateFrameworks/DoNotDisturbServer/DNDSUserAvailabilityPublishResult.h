//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAvailability, NSString;

@interface DNDSUserAvailabilityPublishResult : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    AKAvailability *_availability;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001ffaa
@property(readonly, copy) AKAvailability *availability; // @synthesize availability=_availability;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001fd5d
- (unsigned long long)hash;	// IMP=0x000000000001fcd0
- (id)initWithIdentifier:(id)arg1 availability:(id)arg2;	// IMP=0x000000000001fc37

@end
