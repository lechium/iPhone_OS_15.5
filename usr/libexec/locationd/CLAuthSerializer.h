//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLAuthSerializer : NSObject
{
}

- (id)changeFromData:(id)arg1 ofType:(long long)arg2;	// IMP=0x00200000008cadfb
- (id)dataFromChange:(id)arg1;	// IMP=0x00100000008cadb8
- (id)decodeChangeData:(id)arg1 fromProtocolVersion:(long long)arg2 ofType:(long long)arg3;	// IMP=0x00100000008cada3
- (id)encodeSYChangeForBackwardCompatibility:(id)arg1 protocolVersion:(long long)arg2;	// IMP=0x00100000008cad5d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
