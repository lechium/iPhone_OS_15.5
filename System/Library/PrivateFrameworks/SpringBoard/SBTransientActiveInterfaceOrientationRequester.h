//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SBTransientActiveInterfaceOrientationRequester : NSObject
{
    long long _orientation;	// 8 = 0x8
    NSString *_reason;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000cad52
@property(readonly, nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (id)initWithOrientation:(long long)arg1 andReason:(id)arg2;	// IMP=0x00000000000cac33

@end

